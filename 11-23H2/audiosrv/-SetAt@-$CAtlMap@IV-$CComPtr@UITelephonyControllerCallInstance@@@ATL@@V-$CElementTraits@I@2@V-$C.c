/*
 * XREFs of ?SetAt@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@QEAAPEAU__POSITION@@IAEBV?$CComPtr@UITelephonyControllerCallInstance@@@2@@Z @ 0x180165860
 * Callers:
 *     ?DoSetCellularEnable@PhoneTopology@@AEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x180163FC8 (-DoSetCellularEnable@PhoneTopology@@AEAAJPEAU_TelephonyInstanceData@@H@Z.c)
 *     ?Initialize@TelephonyController@@IEAAJXZ @ 0x180166C98 (-Initialize@TelephonyController@@IEAAJXZ.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180028BA8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?CreateNode@?$CAtlMap@IV?$CComPtr@UIKsControl@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UIKsControl@@@ATL@@@2@@ATL@@AEAAPEAVCNode@12@III@Z @ 0x180163E6C (-CreateNode@-$CAtlMap@IV-$CComPtr@UIKsControl@@@ATL@@V-$CElementTraits@I@2@V-$CElementTraits@V-$.c)
 *     ?GetNode@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@AEBAPEAVCNode@12@IAEAI0AEAPEAV312@@Z @ 0x180165020 (-GetNode@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CElementTraits@I@2@V-.c)
 */

__int64 __fastcall ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::SetAt(
        __int64 a1,
        unsigned int a2,
        struct IUnknown **a3)
{
  __int64 Node; // rax
  __int64 v7; // rbx
  unsigned int v9; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v10[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  Node = ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::GetNode(
           a1,
           a2,
           (int *)&v9,
           (unsigned int *)&v11,
           v10);
  v7 = Node;
  if ( Node )
  {
    if ( *(struct IUnknown **)(Node + 8) != *a3 )
      ATL::AtlComPtrAssign((struct IUnknown **)(Node + 8), *a3);
  }
  else
  {
    v7 = ATL::CAtlMap<unsigned int,ATL::CComPtr<IKsControl>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<IKsControl>>>::CreateNode(
           a1,
           a2,
           v9,
           v11);
    v11 = v7;
    if ( *(struct IUnknown **)(v7 + 8) != *a3 )
      ATL::AtlComPtrAssign((struct IUnknown **)(v7 + 8), *a3);
  }
  return v7;
}
