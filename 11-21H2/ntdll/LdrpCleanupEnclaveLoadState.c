/*
 * XREFs of LdrpCleanupEnclaveLoadState @ 0x1800D8738
 * Callers:
 *     LdrLoadEnclaveModule @ 0x1800D85B0 (LdrLoadEnclaveModule.c)
 *     LdrpDeleteEnclave @ 0x1800D89DC (LdrpDeleteEnclave.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     LdrpDereferenceModule @ 0x180038484 (LdrpDereferenceModule.c)
 *     LdrpFreeLoadContext @ 0x18006B304 (LdrpFreeLoadContext.c)
 */

_UNKNOWN **__fastcall LdrpCleanupEnclaveLoadState(__int64 a1, int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  _UNKNOWN **result; // rax
  _QWORD *v5; // r14
  _QWORD *v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  _QWORD *v13; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = (_QWORD *)(a1 + 96);
  v7 = *(_QWORD **)(a1 + 96);
  while ( v7 != v5 )
  {
    v8 = v7[22];
    v9 = (__int64)v7;
    v7 = (_QWORD *)*v7;
    if ( v8 )
    {
      v10 = *(_QWORD *)(v8 + 88);
      if ( v10 )
      {
        RtlFreeHeap(LdrpHeap, 0, v10);
        *(_QWORD *)(v8 + 88) = 0LL;
      }
      result = (_UNKNOWN **)LdrpFreeLoadContext(v8);
    }
    if ( a2 < 0 )
    {
      v11 = *(_QWORD *)v9;
      v12 = *(_QWORD *)(v9 + 152);
      if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 || (v13 = *(_QWORD **)(v9 + 8), *v13 != v9) )
        __fastfail(3u);
      *v13 = v11;
      *(_QWORD *)(v11 + 8) = v13;
      *(_DWORD *)(v12 + 24) = 0;
      *(_DWORD *)(v9 + 276) = 1;
      *(_DWORD *)(v12 + 56) = -2;
      result = (_UNKNOWN **)LdrpDereferenceModule(v9, v12, a3, a4);
    }
  }
  return result;
}
