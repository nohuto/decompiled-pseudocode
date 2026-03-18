/*
 * XREFs of imp_WdfChildListRetrieveNextDevice @ 0x1C0021450
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C0017C28 (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ?GetNextDevice@FxChildList@@QEAAJPEAPEAUWDFDEVICE__@@PEAU_WDF_CHILD_LIST_ITERATOR@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z @ 0x1C0024944 (-GetNextDevice@FxChildList@@QEAAJPEAPEAUWDFDEVICE__@@PEAU_WDF_CHILD_LIST_ITERATOR@@PEAU_WDF_CHIL.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfChildListRetrieveNextDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCHILDLIST__ *DeviceList,
        _WDF_CHILD_LIST_ITERATOR *Iterator,
        WDFDEVICE__ **Device,
        _WDF_CHILD_RETRIEVE_INFO *Info)
{
  FxChildList *v7; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  unsigned int _a2; // ecx
  unsigned __int16 v10; // r9
  int v11; // ebx
  unsigned int Flags; // ecx
  _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription; // rcx
  _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription; // rdx
  int IdentificationDescriptionSize; // r8d
  unsigned __int16 v17; // r9
  unsigned int m_AddressDescriptionSize; // ecx
  int _a3; // [rsp+30h] [rbp-18h]
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxChildList *pList; // [rsp+50h] [rbp+8h] BYREF

  pList = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)DeviceList, 0x1029u, (void **)&pList);
  v7 = pList;
  m_Globals = pList->m_Globals;
  if ( !Iterator )
    FxVerifierNullBugCheck(pList->m_Globals, retaddr);
  if ( !Device )
    FxVerifierNullBugCheck(pList->m_Globals, retaddr);
  *Device = 0LL;
  _a2 = Iterator->Size;
  if ( Iterator->Size != 40 )
  {
    v10 = 24;
LABEL_7:
    v11 = -1073741820;
    WPP_IFR_SF_DDd(m_Globals, 0x28u, 0xCu, v10, WPP_FxChildListAPI_cpp_Traceguids, _a2, 40, -1073741820);
    return v11;
  }
  Flags = Iterator->Flags;
  if ( (Flags & 0xFFFFFFF8) != 0 )
  {
    v11 = -1073741811;
    WPP_IFR_SF_DDd(m_Globals, 0x28u, 0xCu, 0x19u, WPP_FxChildListAPI_cpp_Traceguids, Flags, 7, -1073741811);
    return v11;
  }
  if ( Info )
  {
    _a2 = Info->Size;
    if ( Info->Size != 40 )
    {
      v10 = 26;
      goto LABEL_7;
    }
    IdentificationDescription = Info->IdentificationDescription;
    if ( IdentificationDescription )
    {
      LODWORD(AddressDescription) = v7->m_IdentificationDescriptionSize;
      IdentificationDescriptionSize = IdentificationDescription->IdentificationDescriptionSize;
      if ( (_DWORD)AddressDescription != IdentificationDescription->IdentificationDescriptionSize )
      {
        v11 = -1073741811;
        v17 = 27;
        _a3 = v7->m_IdentificationDescriptionSize;
LABEL_17:
        WPP_IFR_SF_DDd(
          m_Globals,
          (unsigned __int8)AddressDescription,
          0xCu,
          v17,
          WPP_FxChildListAPI_cpp_Traceguids,
          IdentificationDescriptionSize,
          _a3,
          -1073741811);
        return v11;
      }
    }
    AddressDescription = Info->AddressDescription;
    if ( AddressDescription )
    {
      m_AddressDescriptionSize = v7->m_AddressDescriptionSize;
      if ( !m_AddressDescriptionSize )
      {
        v11 = -1073741808;
        WPP_IFR_SF_D(m_Globals, 2u, 0xCu, 0x1Cu, WPP_FxChildListAPI_cpp_Traceguids, 0xC0000010);
        return v11;
      }
      IdentificationDescriptionSize = AddressDescription->AddressDescriptionSize;
      if ( m_AddressDescriptionSize != AddressDescription->AddressDescriptionSize )
      {
        v11 = -1073741811;
        v17 = 29;
        _a3 = v7->m_AddressDescriptionSize;
        goto LABEL_17;
      }
    }
  }
  return FxChildList::GetNextDevice(v7, Device, Iterator, Info);
}
