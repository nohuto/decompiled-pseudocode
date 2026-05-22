/*
 * XREFs of ?Initialize@EdgyProcessorTarget@@IEAAJAEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAX@Z @ 0x1801ACF1C
 * Callers:
 *     ?Create@EdgyProcessorTarget@@SAJPEAVEdgyLegacyProcessor@@AEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAXPEAPEAV1@@Z @ 0x1801ACDF0 (-Create@EdgyProcessorTarget@@SAJPEAVEdgyLegacyProcessor@@AEBUEdgyPointerInfo@@UtagMsgRoutingInfo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003B3D0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     ??4?$ComPtr@VSessionBasedPointerDeviceArbitration@@@WRL@Microsoft@@QEAAAEAV012@PEAVSessionBasedPointerDeviceArbitration@@@Z @ 0x1801AC960 (--4-$ComPtr@VSessionBasedPointerDeviceArbitration@@@WRL@Microsoft@@QEAAAEAV012@PEAVSessionBasedP.c)
 *     ??4?$ComPtr@VTouchInfoAdapter@@@WRL@Microsoft@@QEAAAEAV012@PEAVTouchInfoAdapter@@@Z @ 0x1801AC9D0 (--4-$ComPtr@VTouchInfoAdapter@@@WRL@Microsoft@@QEAAAEAV012@PEAVTouchInfoAdapter@@@Z.c)
 *     ?UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z @ 0x1801ADCB4 (-UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z.c)
 *     ??0GestureSession@@AEAA@XZ @ 0x1801B4E54 (--0GestureSession@@AEAA@XZ.c)
 *     ??0TouchInfoAdapter@@QEAA@PEAUITouchInfoAdapterClient@@_N@Z @ 0x1801CCBA0 (--0TouchInfoAdapter@@QEAA@PEAUITouchInfoAdapterClient@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall EdgyProcessorTarget::Initialize(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v8; // rbx
  int updated; // ebx
  __int64 v10; // rdx
  TouchInfoAdapter *v11; // rax
  _DWORD *v12; // rdi
  __int64 v13; // rax
  GestureSession *v14; // rax
  GestureSession *v15; // rbx
  GestureSession *v16; // rax
  _OWORD v18[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v19; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v8 = a1 + 20;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(a1 + 20);
  updated = CoreUICreate(v8);
  if ( updated < 0 )
  {
    v10 = 28LL;
    goto LABEL_23;
  }
  v11 = (TouchInfoAdapter *)RefCountedObject::operator new(0x2C0uLL);
  if ( v11 )
    v11 = TouchInfoAdapter::TouchInfoAdapter(
            v11,
            (struct ITouchInfoAdapterClient *)((unsigned __int64)(a1 + 1) & -(__int64)(a1 != 0LL)),
            (unsigned __int8)a1 + 8);
  Microsoft::WRL::ComPtr<TouchInfoAdapter>::operator=(a1 + 18, (__int64)v11);
  if ( !a1[18] )
  {
    v10 = 34LL;
LABEL_22:
    updated = -2147024882;
    goto LABEL_23;
  }
  v12 = RefCountedObject::operator new(0x70uLL);
  if ( v12 )
  {
    v13 = a1[18];
    *(_QWORD *)v12 = &RefCountedObject::`vftable';
    v12[2] = 1;
    *(_QWORD *)v12 = &SessionBasedPointerDeviceArbitration::`vftable';
    *((_QWORD *)v12 + 2) = v13;
    v12[26] = 0;
    *((_WORD *)v12 + 54) = 0;
    memset_0(v12 + 6, 0, 0x50uLL);
  }
  else
  {
    v12 = 0LL;
  }
  Microsoft::WRL::ComPtr<SessionBasedPointerDeviceArbitration>::operator=(a1 + 17, (__int64)v12);
  if ( !a1[17] )
  {
    v10 = 41LL;
    goto LABEL_22;
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(a1 + 19);
  a1[19] = 0LL;
  v14 = (GestureSession *)malloc(0x4B0uLL);
  v15 = v14;
  if ( v14 )
    memset_0(v14, 0, 0x4B0uLL);
  if ( v15 )
    v16 = GestureSession::GestureSession(v15);
  else
    v16 = 0LL;
  if ( !v16 )
  {
    v10 = 44LL;
    goto LABEL_22;
  }
  a1[19] = (__int64)v16;
  v18[0] = *(_OWORD *)a3;
  v18[1] = *(_OWORD *)(a3 + 16);
  v19 = *(_QWORD *)(a3 + 32);
  updated = EdgyProcessorTarget::UpdateInputTarget(a1, v18, a4, a2);
  if ( updated >= 0 )
    return 0LL;
  v10 = 46LL;
LABEL_23:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
    (const char *)(unsigned int)updated);
  return (unsigned int)updated;
}
