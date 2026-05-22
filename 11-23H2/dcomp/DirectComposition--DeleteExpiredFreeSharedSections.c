/*
 * XREFs of DirectComposition::DeleteExpiredFreeSharedSections @ 0x1800F1624
 * Callers:
 *     ?ManageSharedMemory@CDevice@DirectComposition@@AEAAXXZ @ 0x1800F25D0 (-ManageSharedMemory@CDevice@DirectComposition@@AEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::DeleteExpiredFreeSharedSections(_QWORD **a1, __int64 a2)
{
  _QWORD *v2; // r8
  _QWORD *v5; // rdi
  __int64 v6; // r9
  __int64 *v7; // rdx
  __int64 *v8; // rcx
  __int64 **v9; // rax

  v2 = *a1;
  if ( *a1 != a1 )
  {
    do
    {
      v5 = (_QWORD *)*v2;
      v6 = (unsigned __int64)(v2 - 1) & -(__int64)(v2 != 0LL);
      if ( (unsigned __int64)(a2 - *(_QWORD *)(v6 + 0x30)) < 0xFA0 )
        break;
      v7 = (__int64 *)((v6 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)v6 >> 64));
      v8 = (__int64 *)*v7;
      if ( *(__int64 **)(*v7 + 8) == v7 )
      {
        v9 = *(__int64 ***)(((v6 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)v6 >> 64)) + 8);
        if ( *v9 == v7 )
          continue;
      }
      __fastfail(3u);
      *v9 = v8;
      v8[1] = (__int64)v9;
      if ( v6 )
        (**(void (__fastcall ***)(__int64, __int64))v6)(v6, 1LL);
      v2 = v5;
    }
    while ( v5 != a1 );
  }
}
