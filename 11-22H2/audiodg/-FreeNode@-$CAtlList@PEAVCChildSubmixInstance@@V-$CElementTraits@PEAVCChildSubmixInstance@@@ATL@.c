/*
 * XREFs of ?FreeNode@?$CAtlList@PEAVCChildSubmixInstance@@V?$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x14002378C
 * Callers:
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x140002404 (--1CSubmixImpl@@QEAA@XZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCChildSubmixInstance@@V?$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x140002864 (-RemoveAll@-$CAtlList@PEAVCChildSubmixInstance@@V-$CElementTraits@PEAVCChildSubmixInstance@@@ATL.c)
 *     ?OnLeftSubmixDisconnected@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140023670 (-OnLeftSubmixDisconnected@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAtlList<CChildSubmixInstance *,ATL::CElementTraits<CChildSubmixInstance *>>::FreeNode(
        __int64 a1,
        _QWORD *a2)
{
  bool v2; // zf

  *a2 = *(_QWORD *)(a1 + 32);
  v2 = (*(_QWORD *)(a1 + 16))-- == 1LL;
  *(_QWORD *)(a1 + 32) = a2;
  if ( v2 )
    ATL::CAtlList<CChildSubmixInstance *,ATL::CElementTraits<CChildSubmixInstance *>>::RemoveAll(a1);
}
