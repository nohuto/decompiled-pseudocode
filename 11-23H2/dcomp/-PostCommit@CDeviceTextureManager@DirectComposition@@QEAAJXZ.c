/*
 * XREFs of ?PostCommit@CDeviceTextureManager@DirectComposition@@QEAAJXZ @ 0x180098CD4
 * Callers:
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDeviceTextureManager::PostCommit(DirectComposition::CDeviceTextureManager *this)
{
  __int64 *v2; // rbp
  __int64 *i; // rbx
  __int64 v4; // rsi
  int v5; // edx

  if ( *((_BYTE *)this + 56) )
  {
    v2 = (__int64 *)*((_QWORD *)this + 11);
    for ( i = (__int64 *)*((_QWORD *)this + 10); i != v2; ++i )
    {
      v4 = *i;
      v5 = *(_DWORD *)(*i + 64);
      if ( (*(_QWORD *)(*i + 72) != -1LL) != (v5 == 0) )
      {
        if ( v5 )
          *(_QWORD *)(v4 + 72) = -1LL;
        else
          *(_QWORD *)(v4 + 72) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v4 + 24) + 32LL) + 32LL))(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 32LL));
      }
    }
    *((_BYTE *)this + 56) = 0;
  }
  return 0LL;
}
