/*
 * XREFs of ?RemoveAll@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@QEAAXXZ @ 0x18003AFB0
 * Callers:
 *     ?OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003AE80 (-OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ??1CAudioSrv@@UEAA@XZ @ 0x1800EEE94 (--1CAudioSrv@@UEAA@XZ.c)
 *     ?FreeNode@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800EFA40 (-FreeNode@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE7C4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeNode@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800EFA40 (-FreeNode@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@.c)
 */

void __fastcall ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::RemoveAll(__int64 a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rdi

  while ( *(_QWORD *)(a1 + 16) )
  {
    if ( !*(_QWORD *)a1 )
      ATL::AtlThrowImpl(-2147467259);
    *(_QWORD *)a1 = **(_QWORD **)a1;
    ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::FreeNode(a1);
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
