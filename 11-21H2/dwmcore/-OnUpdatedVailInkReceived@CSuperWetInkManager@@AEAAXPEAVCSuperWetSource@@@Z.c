/*
 * XREFs of ?OnUpdatedVailInkReceived@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x1801A7DB4
 * Callers:
 *     ?OnUpdatedInkReceived@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x1801A7CA8 (-OnUpdatedInkReceived@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 * Callees:
 *     ??$emplace_back@$$V@?$vector@UVailSuperWetStroke@CSuperWetInkManager@@V?$allocator@UVailSuperWetStroke@CSuperWetInkManager@@@std@@@std@@QEAAAEAUVailSuperWetStroke@CSuperWetInkManager@@XZ @ 0x1801A6EFC (--$emplace_back@$$V@-$vector@UVailSuperWetStroke@CSuperWetInkManager@@V-$allocator@UVailSuperWet.c)
 *     ?SetActiveSource@CSuperWetInkManager@@AEAAXAEBUVailSuperWetStroke@1@@Z @ 0x1801A839C (-SetActiveSource@CSuperWetInkManager@@AEAAXAEBUVailSuperWetStroke@1@@Z.c)
 *     ?TryLookupVailDataForSource@CSuperWetInkManager@@AEAAPEAUVailSuperWetStroke@1@PEAVCSuperWetSource@@@Z @ 0x1801A8814 (-TryLookupVailDataForSource@CSuperWetInkManager@@AEAAPEAUVailSuperWetStroke@1@PEAVCSuperWetSourc.c)
 */

void __fastcall CSuperWetInkManager::OnUpdatedVailInkReceived(CSuperWetInkManager *this, struct CSuperWetSource *a2)
{
  struct CSuperWetInkManager::VailSuperWetStroke *v4; // rdx
  __int64 *v5; // rcx
  __int64 v6; // rax
  bool v7; // si

  v4 = CSuperWetInkManager::TryLookupVailDataForSource(this, a2);
  if ( v4 )
  {
    v6 = *v5;
    v7 = *(_QWORD *)(*v5 + 496) - *((_QWORD *)v4 + 13) >= 0xAuLL;
  }
  else
  {
    v7 = 1;
    v4 = (struct CSuperWetInkManager::VailSuperWetStroke *)std::vector<CSuperWetInkManager::VailSuperWetStroke>::emplace_back<>(v5 + 8);
    *(_QWORD *)v4 = a2;
    v6 = *(_QWORD *)this;
  }
  *((_QWORD *)v4 + 13) = *(_QWORD *)(v6 + 496);
  if ( !*((_QWORD *)this + 1) || a2 == *((struct CSuperWetSource **)this + 1) || v7 )
    CSuperWetInkManager::SetActiveSource(this, v4);
}
