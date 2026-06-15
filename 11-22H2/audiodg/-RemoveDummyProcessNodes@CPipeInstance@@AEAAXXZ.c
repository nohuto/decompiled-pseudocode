/*
 * XREFs of ?RemoveDummyProcessNodes@CPipeInstance@@AEAAXXZ @ 0x14001468C
 * Callers:
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140006F40 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     ?RemoveAt@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14000AC60 (-RemoveAt@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     ?GetPrev@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x1400148CC (-GetPrev@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CPipeInstance::RemoveDummyProcessNodes(CPipeInstance *this)
{
  _QWORD *v1; // rbx
  __int64 Prev; // rax
  void (__fastcall ***v4)(_QWORD, __int64); // rsi
  _QWORD *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_QWORD *)*((_QWORD *)this + 3);
  v5 = v1;
  while ( v1 )
  {
    Prev = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetPrev(this, &v5);
    v4 = *(void (__fastcall ****)(_QWORD, __int64))Prev;
    if ( *(_DWORD *)(*(_QWORD *)Prev + 40LL) == 4 )
    {
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((_QWORD *)this + 2, v1);
      (**v4)(v4, 1LL);
    }
    v1 = v5;
  }
}
