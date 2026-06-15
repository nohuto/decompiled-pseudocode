/*
 * XREFs of ?CreateBridgeToApo@CBridgeToAPOProcessNode@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@I@Z @ 0x14005D764
 * Callers:
 *     ?CreateBridgeToApo@CPipeInstance@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14005C5D4 (-CreateBridgeToApo@CPipeInstance@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??_GCEndpointInstance@@QEAAPEAXI@Z @ 0x140022F00 (--_GCEndpointInstance@@QEAAPEAXI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCBridgeToApoAuxInput@@UIBridgeSourceEndpointConsumer@@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIAudioProcessingObject@@AEAPEAUIAudioMediaType@@AEAI@Details@WRL@Microsoft@@YAJPEAPEAUIBridgeSourceEndpointConsumer@@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIAudioProcessingObject@@AEAPEAUIAudioMediaType@@AEAI@Z @ 0x14004EEA4 (--$MakeAndInitialize@VCBridgeToApoAuxInput@@UIBridgeSourceEndpointConsumer@@AEAPEAUIDeviceGraphO.c)
 *     ??1?$unique_ptr@VCEndpointInstance@@U?$default_delete@VCEndpointInstance@@@std@@@std@@QEAA@XZ @ 0x14005D138 (--1-$unique_ptr@VCEndpointInstance@@U-$default_delete@VCEndpointInstance@@@std@@@std@@QEAA@XZ.c)
 *     ?CreateBridgeSourceEndpointInstance@CEndpointInstance@@SAJPEAUIDeviceGraphObjectCache@@_JPEAUIAudioMediaType@@IPEAPEAV1@@Z @ 0x140060948 (-CreateBridgeSourceEndpointInstance@CEndpointInstance@@SAJPEAUIDeviceGraphObjectCache@@_JPEAUIAu.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CBridgeToAPOProcessNode::CreateBridgeToApo(
        struct IAudioMediaType **this,
        struct IDeviceGraphObjectCache *a2,
        struct BRIDGE_STREAM_DESCRIPTOR *a3,
        struct IAudioProcessingObject *a4,
        unsigned int a5)
{
  unsigned int v8; // r14d
  struct IAudioEndpointRTVtbl *lpVtbl; // rdx
  unsigned int v10; // ebx
  CEndpointInstance *v11; // rcx
  struct IAudioMediaType *v12; // rax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdx
  CEndpointInstance *v18; // rax
  __int64 (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-50h] BYREF
  CEndpointInstance *v20; // [rsp+38h] [rbp-48h] BYREF
  __int64 v21; // [rsp+40h] [rbp-40h] BYREF
  int v22[2]; // [rsp+48h] [rbp-38h] BYREF
  struct IAudioProcessingObject *v23; // [rsp+50h] [rbp-30h] BYREF
  struct BRIDGE_STREAM_DESCRIPTOR *v24; // [rsp+58h] [rbp-28h] BYREF
  CEndpointInstance **v25; // [rsp+60h] [rbp-20h]
  IAudioEndpointRT v26; // [rsp+68h] [rbp-18h] BYREF
  char v27; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  unsigned int v29; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v30; // [rsp+C0h] [rbp+40h] BYREF

  v20 = 0LL;
  v25 = &v20;
  v26.lpVtbl = 0LL;
  v27 = 1;
  v8 = a5;
  v10 = CEndpointInstance::CreateBridgeSourceEndpointInstance(a2, *((_QWORD *)a3 + 2), this[6], a5, &v26);
  if ( v27 )
  {
    v11 = *v25;
    lpVtbl = v26.lpVtbl;
    *v25 = (CEndpointInstance *)v26.lpVtbl;
    if ( v11 )
      CEndpointInstance::`scalar deleting destructor'(v11);
  }
  if ( (v10 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x34C,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
      (const char *)v10);
LABEL_17:
    std::unique_ptr<CEndpointInstance>::~unique_ptr<CEndpointInstance>(&v20);
    return v10;
  }
  v12 = this[6];
  v23 = a4;
  v29 = v8;
  *(_QWORD *)v22 = v12;
  v24 = a3;
  v30 = 0LL;
  v13 = Microsoft::WRL::Details::MakeAndInitialize<CBridgeToApoAuxInput,IBridgeSourceEndpointConsumer,IDeviceGraphObjectCache * &,BRIDGE_STREAM_DESCRIPTOR * &,IAudioProcessingObject * &,IAudioMediaType * &,unsigned int &>(
          &v30,
          lpVtbl,
          &v24,
          &v23,
          (struct IAudioMediaType **)v22,
          &v29);
  v10 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA8,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpoint.cpp",
      (const char *)(unsigned int)v13);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x350,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
      (const char *)v10);
LABEL_16:
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v30);
    goto LABEL_17;
  }
  v19 = 0LL;
  v14 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD))v20)(
          *(_QWORD *)v20,
          &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
          &v19);
  v10 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x353,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
      (const char *)(unsigned int)v14);
LABEL_15:
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v19);
    goto LABEL_16;
  }
  v21 = 0LL;
  v15 = (**v19)(v19, &GUID_ed9309d0_76d3_430a_a5b4_6ee21020fca5, &v21);
  v10 = v15;
  if ( v15 < 0 )
  {
    v16 = 854LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
      (const char *)(unsigned int)v15);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v21);
    goto LABEL_15;
  }
  v15 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 24LL))(v21, v30);
  v10 = v15;
  if ( v15 < 0 )
  {
    v16 = 857LL;
    goto LABEL_14;
  }
  v18 = v20;
  v20 = 0LL;
  this[4] = (struct IAudioMediaType *)v18;
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v21);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v19);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v30);
  if ( v20 )
    CEndpointInstance::`scalar deleting destructor'(v20);
  return 0LL;
}
