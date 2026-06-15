/*
 * XREFs of ?AddWorkItemToQueue@PhoneTopology@@AEAAJPEAVPhoneTopologyWorkItem@@@Z @ 0x180163DF4
 * Callers:
 *     ?SetActiveEndpoint@PhoneTopology@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIEndpointDevice@@@Z @ 0x1801656D0 (-SetActiveEndpoint@PhoneTopology@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIEndp.c)
 *     ?SetCellularEnable@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x180165970 (-SetCellularEnable@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@H@Z.c)
 *     ?SetCellularProviderChange@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyTypeChangeOp@@@Z @ 0x180165B20 (-SetCellularProviderChange@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyTypeChange.c)
 *     ?SetCellularRxMute@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x180165C10 (-SetCellularRxMute@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@H@Z.c)
 *     ?SetCellularTxMute@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x180165DB0 (-SetCellularTxMute@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@H@Z.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180014E70 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?NewNode@?$CAtlList@V?$CAutoPtr@VPhoneTopologyWorkItem@@@ATL@@V?$CAutoPtrElementTraits@VPhoneTopologyWorkItem@@@2@@ATL@@AEAAPEAVCNode@12@AEAV?$CAutoPtr@VPhoneTopologyWorkItem@@@2@PEAV312@1@Z @ 0x180165298 (-NewNode@-$CAtlList@V-$CAutoPtr@VPhoneTopologyWorkItem@@@ATL@@V-$CAutoPtrElementTraits@VPhoneTop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PhoneTopology::AddWorkItemToQueue(PhoneTopology *this, struct PhoneTopologyWorkItem *a2)
{
  __int64 v4; // rax
  __int64 *v5; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]
  struct PhoneTopologyWorkItem *v9; // [rsp+40h] [rbp+8h] BYREF

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 48));
  v9 = a2;
  v4 = ATL::CAtlList<ATL::CAutoPtr<PhoneTopologyWorkItem>,ATL::CAutoPtrElementTraits<PhoneTopologyWorkItem>>::NewNode(
         (char *)this + 88,
         &v9,
         *((_QWORD *)this + 12));
  v5 = (__int64 *)*((_QWORD *)this + 12);
  if ( v5 )
    *v5 = v4;
  else
    *((_QWORD *)this + 11) = v4;
  *((_QWORD *)this + 12) = v4;
  SetEvent(*((HANDLE *)this + 5));
  if ( v9 )
    (*(void (__fastcall **)(struct PhoneTopologyWorkItem *, __int64))(*(_QWORD *)v9 + 8LL))(v9, 1LL);
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
