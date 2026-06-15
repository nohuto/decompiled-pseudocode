/*
 * XREFs of ?CreateStreamInstance@CBridgeSinkProcessNode@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDeviceGraphObjectCache@@_JIPEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14005DA00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateStreamInstance@CStreamProcessNode@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDeviceGraphObjectCache@@_JIPEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14001AC90 (-CreateStreamInstance@CStreamProcessNode@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDeviceGr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@VCEndpointInstance@@U?$default_delete@VCEndpointInstance@@@std@@@std@@QEAA@XZ @ 0x14005D138 (--1-$unique_ptr@VCEndpointInstance@@U-$default_delete@VCEndpointInstance@@@std@@@std@@QEAA@XZ.c)
 *     ?GetBridgeSourceEndpoint@@YAJ_JPEAPEAUIBridgeSourceEndpointControl@@@Z @ 0x140079868 (-GetBridgeSourceEndpoint@@YAJ_JPEAPEAUIBridgeSourceEndpointControl@@@Z.c)
 *     ??$MakeAndInitialize@VCBridgeToRenderGraph@@UIBridgeSourceEndpointConsumer@@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUICrossProcessMemory@@AEAPEAUSYSTEM_AUDIO_STREAM@@AEAIAEAI@Details@WRL@Microsoft@@YAJPEAPEAUIBridgeSourceEndpointConsumer@@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUICrossProcessMemory@@AEAPEAUSYSTEM_AUDIO_STREAM@@AEAI4@Z @ 0x140079FF8 (--$MakeAndInitialize@VCBridgeToRenderGraph@@UIBridgeSourceEndpointConsumer@@AEAPEAUIDeviceGraphO.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CBridgeSinkProcessNode::CreateStreamInstance(
        CBridgeSinkProcessNode *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct IDeviceGraphObjectCache *a3,
        __int64 a4,
        unsigned int a5,
        struct ICrossProcessMemory **a6,
        struct ICrossProcessEvent **a7,
        struct SYSTEM_AUDIO_STREAM *a8)
{
  int StreamInstance; // eax
  unsigned int v11; // ebx
  int BridgeSourceEndpoint; // eax
  struct IBridgeSourceEndpointControl *v13; // rbx
  int v14; // edi
  struct ICrossProcessMemory *v15; // rsi
  int v16; // eax
  unsigned int v17; // edi
  int v18; // eax
  unsigned int v20; // [rsp+40h] [rbp-40h] BYREF
  int v21; // [rsp+48h] [rbp-38h] BYREF
  __int64 v22; // [rsp+50h] [rbp-30h] BYREF
  struct IBridgeSourceEndpointControl *v23; // [rsp+58h] [rbp-28h] BYREF
  struct SYSTEM_AUDIO_STREAM *v24; // [rsp+60h] [rbp-20h] BYREF
  struct ICrossProcessMemory *v25; // [rsp+68h] [rbp-18h] BYREF
  struct IDeviceGraphObjectCache *v26; // [rsp+70h] [rbp-10h] BYREF
  CEndpointInstance *v27; // [rsp+78h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v27 = 0LL;
  StreamInstance = CStreamProcessNode::CreateStreamInstance(this, a2, a3, a4, a5, a6, a7, a8);
  v11 = StreamInstance;
  if ( StreamInstance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3CC,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
      (const char *)(unsigned int)StreamInstance);
LABEL_10:
    std::unique_ptr<CEndpointInstance>::~unique_ptr<CEndpointInstance>(&v27);
    return v11;
  }
  v23 = 0LL;
  BridgeSourceEndpoint = GetBridgeSourceEndpoint(*((_QWORD *)a2 + 39), &v23);
  v11 = BridgeSourceEndpoint;
  if ( BridgeSourceEndpoint < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3D0,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
      (const char *)(unsigned int)BridgeSourceEndpoint);
LABEL_9:
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v23);
    goto LABEL_10;
  }
  v22 = 0LL;
  v13 = v23;
  v14 = (*(__int64 (__fastcall **)(struct IBridgeSourceEndpointControl *))(*(_QWORD *)v23 + 32LL))(v23);
  v15 = *a6;
  v20 = a5;
  v21 = v14;
  v24 = a8;
  v25 = v15;
  v26 = a3;
  v22 = 0LL;
  v16 = Microsoft::WRL::Details::MakeAndInitialize<CBridgeToRenderGraph,IBridgeSourceEndpointConsumer,IDeviceGraphObjectCache * &,ICrossProcessMemory * &,SYSTEM_AUDIO_STREAM * &,unsigned int &,unsigned int &>(
          (unsigned int)&v22,
          (unsigned int)&v26,
          (unsigned int)&v25,
          (unsigned int)&v24,
          (__int64)&v21,
          (__int64)&v20);
  v17 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE6,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\bridgetorendergraph.cpp",
      (const char *)(unsigned int)v16);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3D5,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
      (const char *)v17);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v22);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v23);
    v11 = v17;
    goto LABEL_10;
  }
  v18 = (*(__int64 (__fastcall **)(struct IBridgeSourceEndpointControl *, __int64))(*(_QWORD *)v13 + 24LL))(v13, v22);
  v11 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3D8,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
      (const char *)(unsigned int)v18);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v22);
    goto LABEL_9;
  }
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v22);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v23);
  return 0LL;
}
