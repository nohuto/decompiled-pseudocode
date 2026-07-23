/*
 * XREFs of LdrpCleanupEnclaveLoadState @ 0x1800D83F8
 * Callers:
 *     LdrLoadEnclaveModule @ 0x1800D8270 (LdrLoadEnclaveModule.c)
 *     LdrpDeleteEnclave @ 0x1800D869C (LdrpDeleteEnclave.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x18002251C (LdrpDereferenceModule.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     LdrpFreeLoadContext @ 0x180067BF0 (LdrpFreeLoadContext.c)
 */

int __fastcall LdrpCleanupEnclaveLoadState(__int64 a1, int a2)
{
  _UNKNOWN **v2; // rax
  char *v3; // r14
  char *v5; // rbx
  _QWORD *v6; // rsi
  char *v7; // rdi
  void *v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rdx
  char **v11; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v2 = &retaddr;
  v3 = (char *)(a1 + 96);
  v5 = *(char **)(a1 + 96);
  while ( v5 != v3 )
  {
    v6 = (_QWORD *)*((_QWORD *)v5 + 22);
    v7 = v5;
    v5 = *(char **)v5;
    if ( v6 )
    {
      v8 = (void *)v6[11];
      if ( v8 )
      {
        RtlFreeHeap(LdrpHeap, 0, v8);
        v6[11] = 0LL;
      }
      LODWORD(v2) = LdrpFreeLoadContext(v6);
    }
    if ( a2 < 0 )
    {
      v9 = *(_QWORD *)v7;
      v10 = *((_QWORD *)v7 + 19);
      if ( *(char **)(*(_QWORD *)v7 + 8LL) != v7 || (v11 = (char **)*((_QWORD *)v7 + 1), *v11 != v7) )
        __fastfail(3u);
      *v11 = (char *)v9;
      *(_QWORD *)(v9 + 8) = v11;
      *(_DWORD *)(v10 + 24) = 0;
      *((_DWORD *)v7 + 69) = 1;
      *(_DWORD *)(v10 + 56) = -2;
      LODWORD(v2) = LdrpDereferenceModule(v7);
    }
  }
  return (int)v2;
}
