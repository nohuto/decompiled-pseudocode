/*
 * XREFs of ??$?0$$V@?$_Ref_count_obj2@VCStreamConnectionManagerImpl@@@std@@QEAA@XZ @ 0x18005A3A0
 * Callers:
 *     ?GetInstance@CStreamConnectionManagerImpl@@SA?AV?$shared_ptr@VCStreamConnectionManager@@@std@@XZ @ 0x18005A168 (-GetInstance@CStreamConnectionManagerImpl@@SA-AV-$shared_ptr@VCStreamConnectionManager@@@std@@XZ.c)
 * Callees:
 *     ??0CMonitorManager@@QEAA@XZ @ 0x18005A43C (--0CMonitorManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
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
