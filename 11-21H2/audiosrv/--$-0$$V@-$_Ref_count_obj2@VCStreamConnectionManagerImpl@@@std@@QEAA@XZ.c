/*
 * XREFs of ??$?0$$V@?$_Ref_count_obj2@VCStreamConnectionManagerImpl@@@std@@QEAA@XZ @ 0x180043C68
 * Callers:
 *     ?GetInstance@CStreamConnectionManagerImpl@@SA?AV?$shared_ptr@VCStreamConnectionManager@@@std@@XZ @ 0x180043B14 (-GetInstance@CStreamConnectionManagerImpl@@SA-AV-$shared_ptr@VCStreamConnectionManager@@@std@@XZ.c)
 * Callees:
 *     ??0CMonitorManager@@QEAA@XZ @ 0x180043D04 (--0CMonitorManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Ref_count_obj2<CStreamConnectionManagerImpl>::_Ref_count_obj2<CStreamConnectionManagerImpl>(
        __int64 a1)
{
  CMonitorManager *v2; // rdi
  CMonitorManager *v3; // rax
  CMonitorManager *v4; // rsi

  *(_OWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<CStreamConnectionManagerImpl>::`vftable';
  *(_QWORD *)(a1 + 16) = &CStreamConnectionManagerImpl::`vftable';
  v2 = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  v3 = (CMonitorManager *)operator new(0x178uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  if ( v3 )
  {
    memset_0(v3, 0, 0x178uLL);
    v2 = CMonitorManager::CMonitorManager(v4);
  }
  *(_QWORD *)(a1 + 24) = v2;
  return a1;
}
