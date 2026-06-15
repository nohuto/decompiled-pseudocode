/*
 * XREFs of ?RemoveAll@?$CAtlList@V?$CAutoPtr@VWorkItemBase@@@ATL@@V?$CAutoPtrElementTraits@VWorkItemBase@@@2@@ATL@@QEAAXXZ @ 0x180002E78
 * Callers:
 *     ?WorkItemThreadProc@AudioDeviceMgr@@AEAAXXZ @ 0x18005C560 (-WorkItemThreadProc@AudioDeviceMgr@@AEAAXXZ.c)
 *     ?FreeNode@?$CAtlList@V?$CAutoPtr@VWorkItemBase@@@ATL@@V?$CAutoPtrElementTraits@VWorkItemBase@@@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180084C0C (-FreeNode@-$CAtlList@V-$CAutoPtr@VWorkItemBase@@@ATL@@V-$CAutoPtrElementTraits@VWorkItemBase@@@2.c)
 *     ??1?$CAutoPtrList@VWorkItemBase@@@ATL@@QEAA@XZ @ 0x1801634D4 (--1-$CAutoPtrList@VWorkItemBase@@@ATL@@QEAA@XZ.c)
 *     ??1AudioDeviceMgr@@MEAA@XZ @ 0x1801634E0 (--1AudioDeviceMgr@@MEAA@XZ.c)
 *     ?Shutdown@AudioDeviceMgr@@UEAAXXZ @ 0x1801636D0 (-Shutdown@AudioDeviceMgr@@UEAAXXZ.c)
 * Callees:
 *     ?FreeNode@?$CAtlList@V?$CAutoPtr@VWorkItemBase@@@ATL@@V?$CAutoPtrElementTraits@VWorkItemBase@@@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180084C0C (-FreeNode@-$CAtlList@V-$CAutoPtr@VWorkItemBase@@@ATL@@V-$CAutoPtrElementTraits@VWorkItemBase@@@2.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE7C4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlList<ATL::CAutoPtr<WorkItemBase>,ATL::CAutoPtrElementTraits<WorkItemBase>>::RemoveAll(
        __int64 a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx

  while ( *(_QWORD *)(a1 + 16) )
  {
    if ( !*(_QWORD *)a1 )
      ATL::AtlThrowImpl(-2147467259);
    *(_QWORD *)a1 = **(_QWORD **)a1;
    ATL::CAtlList<ATL::CAutoPtr<WorkItemBase>,ATL::CAutoPtrElementTraits<WorkItemBase>>::FreeNode(a1);
  }
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v2 = *(_QWORD **)(a1 + 24);
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      free(v2);
      v2 = v3;
    }
    while ( v3 );
    *(_QWORD *)(a1 + 24) = 0LL;
  }
}
