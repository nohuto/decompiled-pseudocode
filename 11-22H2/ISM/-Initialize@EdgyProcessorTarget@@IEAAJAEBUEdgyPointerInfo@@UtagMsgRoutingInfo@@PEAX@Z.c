/*
 * XREFs of ?Initialize@EdgyProcessorTarget@@IEAAJAEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAX@Z @ 0x1801D8B74
 * Callers:
 *     ?Create@EdgyProcessorTarget@@SAJPEAVEdgyLegacyProcessor@@AEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAXPEAPEAV1@@Z @ 0x1801D8A50 (-Create@EdgyProcessorTarget@@SAJPEAVEdgyLegacyProcessor@@AEBUEdgyPointerInfo@@UtagMsgRoutingInfo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180037D1C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     ??4?$ComPtr@VSessionBasedPointerDeviceArbitration@@@WRL@Microsoft@@QEAAAEAV012@PEAVSessionBasedPointerDeviceArbitration@@@Z @ 0x1801D85C0 (--4-$ComPtr@VSessionBasedPointerDeviceArbitration@@@WRL@Microsoft@@QEAAAEAV012@PEAVSessionBasedP.c)
 *     ??4?$ComPtr@VTouchInfoAdapter@@@WRL@Microsoft@@QEAAAEAV012@PEAVTouchInfoAdapter@@@Z @ 0x1801D8630 (--4-$ComPtr@VTouchInfoAdapter@@@WRL@Microsoft@@QEAAAEAV012@PEAVTouchInfoAdapter@@@Z.c)
 *     ?UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z @ 0x1801D9944 (-UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z.c)
 *     ??0GestureSession@@AEAA@XZ @ 0x1801E0B64 (--0GestureSession@@AEAA@XZ.c)
 *     ??0TouchInfoAdapter@@QEAA@PEAUITouchInfoAdapterClient@@_N@Z @ 0x1801F89B0 (--0TouchInfoAdapter@@QEAA@PEAUITouchInfoAdapterClient@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall EdgyProcessorTarget::Initialize(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v8; // rbx
  int updated; // ebx
  __int64 v10; // rdx
  TouchInfoAdapter *v12; // rax
  _DWORD *v13; // rdi
  __int64 v14; // rax
  GestureSession *v15; // rax
  GestureSession *v16; // rbx
  GestureSession *v17; // rax
  _OWORD v18[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v19; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v8 = a1 + 20;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(a1 + 20);
  updated = CoreUICreate(v8);
  if ( updated < 0 )
  {
    v10 = 28LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
      (const char *)(unsigned int)updated);
    return (unsigned int)updated;
  }
  v12 = (TouchInfoAdapter *)RefCountedObject::operator new(0x2C0uLL);
  if ( v12 )
    v12 = TouchInfoAdapter::TouchInfoAdapter(
            v12,
            (struct ITouchInfoAdapterClient *)((unsigned __int64)(a1 + 1) & -(__int64)(a1 != 0LL)),
            (unsigned __int8)a1 + 8);
  Microsoft::WRL::ComPtr<TouchInfoAdapter>::operator=(a1 + 18, (__int64)v12);
  if ( !a1[18] )
  {
    updated = -2147024882;
    v10 = 34LL;
    goto LABEL_3;
  }
  v13 = RefCountedObject::operator new(0x70uLL);
  if ( v13 )
  {
    v14 = a1[18];
    *(_QWORD *)v13 = &RefCountedObject::`vftable';
    v13[2] = 1;
    *(_QWORD *)v13 = &SessionBasedPointerDeviceArbitration::`vftable';
    *((_QWORD *)v13 + 2) = v14;
    v13[26] = 0;
    *((_WORD *)v13 + 54) = 0;
    memset_0(v13 + 6, 0, 0x50uLL);
  }
  else
  {
    v13 = 0LL;
  }
  Microsoft::WRL::ComPtr<SessionBasedPointerDeviceArbitration>::operator=(a1 + 17, (__int64)v13);
  if ( !a1[17] )
  {
    updated = -2147024882;
    v10 = 41LL;
    goto LABEL_3;
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(a1 + 19);
  a1[19] = 0LL;
  v15 = (GestureSession *)malloc(0x4B0uLL);
  v16 = v15;
  if ( v15 )
    memset_0(v15, 0, 0x4B0uLL);
  if ( v16 )
    v17 = GestureSession::GestureSession(v16);
  else
    v17 = 0LL;
  if ( !v17 )
  {
    updated = -2147024882;
    v10 = 44LL;
    goto LABEL_3;
  }
  a1[19] = (__int64)v17;
  v18[0] = *(_OWORD *)a3;
  v18[1] = *(_OWORD *)(a3 + 16);
  v19 = *(_QWORD *)(a3 + 32);
  updated = EdgyProcessorTarget::UpdateInputTarget(a1, v18, a4, a2);
  if ( updated < 0 )
  {
    v10 = 46LL;
    goto LABEL_3;
  }
  return 0LL;
}
