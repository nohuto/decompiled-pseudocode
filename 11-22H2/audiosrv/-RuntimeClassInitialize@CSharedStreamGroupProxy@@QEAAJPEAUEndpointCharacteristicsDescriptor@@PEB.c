/*
 * XREFs of ?RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@KPEAUICompositeSystemEffect@@@Z @ 0x18000D1C0
 * Callers:
 *     ??$MakeAndInitialize@VCSharedStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAKPEAUICompositeSystemEffect@@@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK$$QEAPEAUICompositeSystemEffect@@@Z @ 0x1800103EC (--$MakeAndInitialize@VCSharedStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUEndpointCharacteristic.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?RefreshAposEffectStates@CSharedStreamGroupProxy@@AEAAXXZ @ 0x18000B960 (-RefreshAposEffectStates@CSharedStreamGroupProxy@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18000C61C (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ??4?$ComPtr@UIStreamGroup@@@WRL@Microsoft@@QEAAAEAV012@PEAUIStreamGroup@@@Z @ 0x18000D3E8 (--4-$ComPtr@UIStreamGroup@@@WRL@Microsoft@@QEAAAEAV012@PEAUIStreamGroup@@@Z.c)
 *     ?QueueRecurringWaitItem@CSerialWorkQueue@@QEAAJPEAXV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@3@@Z @ 0x18000D444 (-QueueRecurringWaitItem@CSerialWorkQueue@@QEAAJPEAXV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_.c)
 *     ?ConfigureAuxiliaryInputStream@CSharedStreamGroupProxy@@IEAAJXZ @ 0x18000D4B8 (-ConfigureAuxiliaryInputStream@CSharedStreamGroupProxy@@IEAAJXZ.c)
 *     ?RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUStreamGroupParams@@K@Z @ 0x1800116D8 (-RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUS.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800CCC1C (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSharedStreamGroupProxy::RuntimeClassInitialize(
        wil::details **this,
        struct EndpointCharacteristicsDescriptor *a2,
        const struct StreamGroupParams *a3,
        struct STREAM_GROUP_DESCRIPTOR *a4,
        unsigned int a5,
        struct ICompositeSystemEffect *a6)
{
  HRESULT Instance; // eax
  unsigned int v11; // ebx
  wil::details *v12; // rbx
  wil::details *v13; // rcx
  wil::details *Event; // rbx
  __int64 v15; // rax
  __int64 v17; // rdx
  int ppv; // [rsp+28h] [rbp-39h]
  IUnknown *pProxy[2]; // [rsp+48h] [rbp-19h] BYREF
  _QWORD v20[8]; // [rsp+58h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+4Fh]

  pProxy[0] = 0LL;
  Instance = CoCreateInstance(
               &GUID_06b2132b_5b99_42a6_b8b6_a1709e191c70,
               0LL,
               0x17u,
               &GUID_6ceb3ada_8b98_46a8_8352_cac9c0fac849,
               (LPVOID *)pProxy);
  v11 = Instance;
  if ( Instance < 0 )
  {
    v17 = 908LL;
    goto LABEL_20;
  }
  Instance = CoSetProxyBlanket(pProxy[0], 0xFFFFFFFF, 0xFFFFFFFF, 0LL, 6u, 3u, 0LL, 0x40u);
  v11 = Instance;
  if ( Instance < 0 )
  {
    v17 = 914LL;
    goto LABEL_20;
  }
  Instance = ((__int64 (__fastcall *)(IUnknown *, struct STREAM_GROUP_DESCRIPTOR *, unsigned __int64))pProxy[0]->lpVtbl[4].Release)(
               pProxy[0],
               a4,
               (unsigned __int64)(this + 2) & -(__int64)(this != 0LL));
  v11 = Instance;
  if ( Instance < 0 )
  {
    v17 = 916LL;
    goto LABEL_20;
  }
  Microsoft::WRL::ComPtr<IStreamGroup>::operator=(this + 11, pProxy[0]);
  Instance = CBaseStreamGroupProxy::RuntimeClassInitialize((CBaseStreamGroupProxy *)(this + 1), a2, a3, a5);
  v11 = Instance;
  if ( Instance < 0 )
  {
    v17 = 919LL;
    goto LABEL_20;
  }
  Instance = CSharedStreamGroupProxy::ConfigureAuxiliaryInputStream((CSharedStreamGroupProxy *)this);
  v11 = Instance;
  if ( Instance < 0 )
  {
    v17 = 922LL;
    goto LABEL_20;
  }
  v12 = this[226];
  this[226] = a6;
  if ( a6 )
    (*(void (__fastcall **)(struct ICompositeSystemEffect *))(*(_QWORD *)a6 + 8LL))(a6);
  if ( v12 )
    (*(void (__fastcall **)(wil::details *))(*(_QWORD *)v12 + 16LL))(v12);
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      this + 228,
      Event);
    goto LABEL_12;
  }
  Instance = wil::details::GetLastErrorFailHr(v13);
  v11 = Instance;
  if ( Instance < 0 )
  {
    v17 = 927LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)Instance,
      ppv);
    goto LABEL_14;
  }
LABEL_12:
  v15 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 128LL))(g_AudioService);
  v20[0] = off_18017ACF8;
  v20[1] = this;
  v20[7] = v20;
  Instance = CSerialWorkQueue::QueueRecurringWaitItem(v15, this[228], v20, this + 229);
  v11 = Instance;
  if ( Instance < 0 )
  {
    v17 = 937LL;
    goto LABEL_20;
  }
  CSharedStreamGroupProxy::RefreshAposEffectStates((CSharedStreamGroupProxy *)this);
  v11 = 0;
LABEL_14:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)pProxy);
  return v11;
}
