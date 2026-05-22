/*
 * XREFs of ?GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@XZ @ 0x180031F50
 * Callers:
 *     ?Broadcast@InputConfigContextProvider@@AEAAXXZ @ 0x180031E1C (-Broadcast@InputConfigContextProvider@@AEAAXXZ.c)
 *     ?OnConnected@InputProcessProxy@@MEAAJXZ @ 0x1801B3390 (-OnConnected@InputProcessProxy@@MEAAJXZ.c)
 *     ?OnDisconnected@InputProcessProxy@@MEAAJXZ @ 0x1801B3470 (-OnDisconnected@InputProcessProxy@@MEAAJXZ.c)
 *     ?StartProcess@InputProcessManager@@QEAAJXZ @ 0x1801B48D0 (-StartProcess@InputProcessManager@@QEAAJXZ.c)
 *     ?UnregisterHandle@InputProcessManager@@SAXPEAX@Z @ 0x1801B4C00 (-UnregisterHandle@InputProcessManager@@SAXPEAX@Z.c)
 *     ?OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z @ 0x1801BC0D4 (-OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z.c)
 *     ?OnTouchpadRemoved@VirtualTouchpadContextProvider@@QEAAJ_K@Z @ 0x1801BC278 (-OnTouchpadRemoved@VirtualTouchpadContextProvider@@QEAAJ_K@Z.c)
 *     ?OnTouchpadUpdated@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z @ 0x1801BC404 (-OnTouchpadUpdated@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z.c)
 *     ?OnOcclusionRectAdded@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUDisplayOcclusionRect@@@Z @ 0x1801BCDF4 (-OnOcclusionRectAdded@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUDisplayOc.c)
 *     ?OnOcclusionRectRemoved@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@@Z @ 0x1801BD04C (-OnOcclusionRectRemoved@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@@Z.c)
 *     ?OnOcclusionRectUpdated@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUtagRECT@@@Z @ 0x1801BD190 (-OnOcclusionRectUpdated@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUtagRECT.c)
 *     ??1HeatProcessor@@MEAA@XZ @ 0x1801D9FA4 (--1HeatProcessor@@MEAA@XZ.c)
 *     ?Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x1801DA284 (-Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@InputSystemInternalServerConnection@@SA?AV?$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x180031FD8 (-Create@InputSystemInternalServerConnection@@SA-AV-$ComPtr@VInputSystemInternalServerConnection@.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180032574 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
struct InputSystemInternalServerConnection *ISMStatics::GetInputSystemInternalServerConnection(void)
{
  struct InputSystemInternalServerConnection *result; // rax
  int v1; // eax
  struct InputSystemInternalServerConnection **v2; // rax
  struct InputSystemInternalServerConnection *v3; // rcx
  Microsoft::Bamo::BaseBamoConnection *v4; // rcx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  Microsoft::Bamo::BaseBamoConnection *v8; // [rsp+38h] [rbp+10h] BYREF

  result = ISMStatics::s_inputSystemInternalServerConnection;
  if ( !ISMStatics::s_inputSystemInternalServerConnection )
  {
    v7 = 0LL;
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v7);
    v1 = CoreUICreate(&v7);
    if ( v1 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x66,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismstatics.cpp",
        (const char *)(unsigned int)v1,
        v5);
    v2 = (struct InputSystemInternalServerConnection **)InputSystemInternalServerConnection::Create((int)&v8);
    v3 = *v2;
    *v2 = 0LL;
    ISMStatics::s_inputSystemInternalServerConnection = v3;
    v4 = v8;
    if ( v8 )
    {
      v8 = 0LL;
      Microsoft::Bamo::BaseBamoConnection::Release(v4);
    }
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v7);
    return ISMStatics::s_inputSystemInternalServerConnection;
  }
  return result;
}
