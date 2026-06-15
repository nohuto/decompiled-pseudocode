/*
 * XREFs of ?AddWorkItemToQueue@PhoneTopology@@AEAAJPEAVPhoneTopologyWorkItem@@@Z @ 0x18015DE74
 * Callers:
 *     ?SetActiveEndpoint@PhoneTopology@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIEndpointDevice@@@Z @ 0x18015F680 (-SetActiveEndpoint@PhoneTopology@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIEndp.c)
 *     ?SetCellularEnable@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x18015F900 (-SetCellularEnable@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@H@Z.c)
 *     ?SetCellularProviderChange@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyTypeChangeOp@@@Z @ 0x18015FAB0 (-SetCellularProviderChange@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyTypeChange.c)
 *     ?SetCellularRxMute@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x18015FBA0 (-SetCellularRxMute@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@H@Z.c)
 *     ?SetCellularTxMute@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x18015FD40 (-SetCellularTxMute@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@H@Z.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005A820 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?NewNode@?$CAtlList@V?$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V?$CAutoPtrElementTraits@VReacquireResourceWorkItem@@@2@@ATL@@AEAAPEAVCNode@12@AEAV?$CAutoPtr@VReacquireResourceWorkItem@@@2@PEAV312@1@Z @ 0x18010C6E4 (-NewNode@-$CAtlList@V-$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V-$CAutoPtrElementTraits@VReac.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PhoneTopology::AddWorkItemToQueue(PhoneTopology *this, struct PhoneTopologyWorkItem *a2)
{
  __int64 *v4; // rax
  __int64 **v5; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]
  struct PhoneTopologyWorkItem *v9; // [rsp+40h] [rbp+8h] BYREF

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 48));
  v9 = a2;
  v4 = ATL::CAtlList<ATL::CAutoPtr<ReacquireResourceWorkItem>,ATL::CAutoPtrElementTraits<ReacquireResourceWorkItem>>::NewNode(
         (__int64)this + 88,
         (__int64 *)&v9,
         *((_QWORD *)this + 12));
  v5 = (__int64 **)*((_QWORD *)this + 12);
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
