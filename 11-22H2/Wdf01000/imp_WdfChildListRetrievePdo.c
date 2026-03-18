/*
 * XREFs of imp_WdfChildListRetrievePdo @ 0x1C0021610
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_dd @ 0x1C0017D64 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qid @ 0x1C00195EC (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_Ddd @ 0x1C002091C (WPP_IFR_SF_Ddd.c)
 *     ?GetDeviceFromId@FxChildList@@QEAAPEAVFxDevice@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z @ 0x1C0024874 (-GetDeviceFromId@FxChildList@@QEAAPEAVFxDevice@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

WDFDEVICE__ *__fastcall imp_WdfChildListRetrievePdo(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCHILDLIST__ *DeviceList,
        _WDF_CHILD_RETRIEVE_INFO *RetrieveInfo)
{
  unsigned __int8 v5; // dl
  unsigned int v6; // r8d
  unsigned __int16 v7; // r9
  FxChildList *v8; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription; // rax
  int _a2; // edx
  _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription; // rdx
  int m_AddressDescriptionSize; // eax
  FxDevice *DeviceFromId; // rax
  unsigned __int64 ObjectHandleUnchecked; // rsi
  const _GUID *traceGuid; // [rsp+20h] [rbp-38h]
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxChildList *pList; // [rsp+60h] [rbp+8h] BYREF

  pList = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)DeviceList, 0x1029u, (void **)&pList);
  v8 = pList;
  m_Globals = pList->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x2Cu, WPP_FxChildListAPI_cpp_Traceguids, DeviceList);
    v8 = pList;
  }
  if ( !RetrieveInfo )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( RetrieveInfo->Size != 40 )
  {
    WPP_IFR_SF_Ddd(m_Globals, v5, v6, v7, traceGuid, RetrieveInfo->Size);
    return 0LL;
  }
  IdentificationDescription = RetrieveInfo->IdentificationDescription;
  if ( !IdentificationDescription )
  {
    WPP_IFR_SF_D(m_Globals, 2u, 0xCu, 0x2Eu, WPP_FxChildListAPI_cpp_Traceguids, 0xC000000D);
    return 0LL;
  }
  _a2 = v8->m_IdentificationDescriptionSize;
  if ( _a2 != IdentificationDescription->IdentificationDescriptionSize )
  {
    WPP_IFR_SF_dd(
      m_Globals,
      2u,
      0xCu,
      0x2Fu,
      WPP_FxChildListAPI_cpp_Traceguids,
      IdentificationDescription->IdentificationDescriptionSize,
      _a2);
    return 0LL;
  }
  AddressDescription = RetrieveInfo->AddressDescription;
  if ( AddressDescription )
  {
    m_AddressDescriptionSize = v8->m_AddressDescriptionSize;
    if ( !m_AddressDescriptionSize )
    {
      WPP_IFR_SF_D(m_Globals, 2u, 0xCu, 0x30u, WPP_FxChildListAPI_cpp_Traceguids, 0xC0000010);
      return 0LL;
    }
    if ( m_AddressDescriptionSize != AddressDescription->AddressDescriptionSize )
    {
      WPP_IFR_SF_dd(
        m_Globals,
        2u,
        0xCu,
        0x31u,
        WPP_FxChildListAPI_cpp_Traceguids,
        AddressDescription->AddressDescriptionSize,
        m_AddressDescriptionSize);
      return 0LL;
    }
  }
  RetrieveInfo->Status = WdfChildListRetrieveDeviceUndefined;
  DeviceFromId = FxChildList::GetDeviceFromId(v8, RetrieveInfo);
  if ( DeviceFromId )
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(DeviceFromId);
  else
    ObjectHandleUnchecked = 0LL;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qid(
      m_Globals,
      5u,
      0xCu,
      0x32u,
      WPP_FxChildListAPI_cpp_Traceguids,
      DeviceList,
      ObjectHandleUnchecked,
      RetrieveInfo->Status);
  return (WDFDEVICE__ *)ObjectHandleUnchecked;
}
