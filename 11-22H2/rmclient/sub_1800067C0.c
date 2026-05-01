/*
 * XREFs of sub_1800067C0 @ 0x1800067C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800067C0(__int64 a1, __int64 a2)
{
  void **v3; // rsi
  void **v4; // rbx
  int v5; // eax
  int v7; // eax
  void **v8; // rax

  RtlAcquireSRWLockExclusive(a2 + 32);
  v3 = (void **)(a2 + 16);
  while ( 1 )
  {
    v4 = (void **)*v3;
    if ( *v3 == v3 )
    {
      v5 = *(_DWORD *)(a2 + 64);
      if ( (v5 & 2) == 0 )
        break;
    }
    v7 = *(_DWORD *)(a2 + 64);
    if ( (v7 & 2) != 0 )
    {
      *(_DWORD *)(a2 + 64) = v7 & 0xFFFFFFFD;
      RtlReleaseSRWLockExclusive(a2 + 32);
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(a2 + 40))(*(_QWORD *)(a2 + 8), 0LL, 0LL);
    }
    else
    {
      if ( v4 == v3 || v4[1] != v3 || (v8 = (void **)*v4, *((void ***)*v4 + 1) != v4) )
        __fastfail(3u);
      *v3 = v8;
      v8[1] = v3;
      *(_OWORD *)v4 = 0LL;
      RtlReleaseSRWLockExclusive(a2 + 32);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(a2 + 40))(
        *(_QWORD *)(a2 + 8),
        (__int64)v4 + 20,
        *((unsigned int *)v4 + 4));
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
    }
    RtlAcquireSRWLockExclusive(a2 + 32);
  }
  *(_DWORD *)(a2 + 64) = v5 & 0xFFFFFFFE;
  return RtlReleaseSRWLockExclusive(a2 + 32);
}
