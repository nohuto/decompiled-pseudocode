/*
 * XREFs of ?CreateStreamInstance@CBridgeSourceProcessNode@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDeviceGraphObjectCache@@_JIPEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14005DC50
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCEndpointInstance@@QEAAPEAXI@Z @ 0x140022F00 (--_GCEndpointInstance@@QEAAPEAXI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@VCEndpointInstance@@U?$default_delete@VCEndpointInstance@@@std@@@std@@QEAA@XZ @ 0x14005D138 (--1-$unique_ptr@VCEndpointInstance@@U-$default_delete@VCEndpointInstance@@@std@@@std@@QEAA@XZ.c)
 *     ?CreateBridgeSourceEndpointInstance@CEndpointInstance@@SAJPEAUIDeviceGraphObjectCache@@_JPEAUIAudioMediaType@@IPEAPEAV1@@Z @ 0x140060948 (-CreateBridgeSourceEndpointInstance@CEndpointInstance@@SAJPEAUIDeviceGraphObjectCache@@_JPEAUIAu.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CBridgeSourceProcessNode::CreateStreamInstance(
        struct IAudioMediaType **this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct IDeviceGraphObjectCache *a3,
        __int64 a4,
        unsigned int a5)
{
  int BridgeSourceEndpointInstance; // ebx
  CEndpointInstance *v7; // rcx
  unsigned int v9[2]; // [rsp+38h] [rbp-20h] BYREF
  char v10; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  CEndpointInstance *v12; // [rsp+60h] [rbp+8h] BYREF

  v12 = 0LL;
  *(_QWORD *)v9 = 0LL;
  v10 = 1;
  BridgeSourceEndpointInstance = CEndpointInstance::CreateBridgeSourceEndpointInstance(
                                   a3,
                                   *((_QWORD *)a2 + 14),
                                   this[6],
                                   a5,
                                   (struct IAudioEndpointRT *)v9);
  if ( v10 )
  {
    v7 = v12;
    v12 = *(CEndpointInstance **)v9;
    if ( v7 )
      CEndpointInstance::`scalar deleting destructor'(v7);
  }
  if ( BridgeSourceEndpointInstance >= 0 )
  {
    this[4] = (struct IAudioMediaType *)v12;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38F,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp",
      (const char *)(unsigned int)BridgeSourceEndpointInstance);
    std::unique_ptr<CEndpointInstance>::~unique_ptr<CEndpointInstance>(&v12);
    return (unsigned int)BridgeSourceEndpointInstance;
  }
}
