/*
 * XREFs of ?RemoveDummyProcessNodes@CPipeInstance@@AEAAXXZ @ 0x140009E58
 * Callers:
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140009D48 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     ?RemoveAt@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140009EC8 (-RemoveAt@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPipeInstance::RemoveDummyProcessNodes(CPipeInstance *this)
{
  __int64 v2; // rbx
  __int64 v3; // rsi

  v2 = *((_QWORD *)this + 3);
  while ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 16);
    v2 = *(_QWORD *)(v2 + 8);
    if ( *(_DWORD *)(v3 + 40) == 4 )
    {
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((char *)this + 16);
      (**(void (__fastcall ***)(__int64, __int64))v3)(v3, 1LL);
    }
  }
}
