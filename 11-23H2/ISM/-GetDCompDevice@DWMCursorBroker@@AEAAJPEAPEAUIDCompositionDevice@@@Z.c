/*
 * XREFs of ?GetDCompDevice@DWMCursorBroker@@AEAAJPEAPEAUIDCompositionDevice@@@Z @ 0x1801ED7B4
 * Callers:
 *     ?SetPosition@DWMCursor@@UEAAJJJ@Z @ 0x180048FD0 (-SetPosition@DWMCursor@@UEAAJJJ@Z.c)
 *     ?EnsureDCompTransform@DWMCursor@@AEAAJXZ @ 0x1801EE674 (-EnsureDCompTransform@DWMCursor@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMCursorBroker::GetDCompDevice(DWMCursorBroker *this, struct IDCompositionDevice **a2)
{
  _QWORD *v3; // rbx
  int Device3; // eax
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v3 = (_QWORD *)((char *)this + 40);
  if ( *((_QWORD *)this + 5)
    || (Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 5),
        Device3 = DCompositionCreateDevice3(0LL, &GUID_c37ea93a_e7aa_450d_b16f_9746cb0407f3, v3),
        v5 = Device3,
        Device3 >= 0) )
  {
    if ( *v3 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 8LL))(*v3);
    *a2 = (struct IDCompositionDevice *)*v3;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x94,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)Device3);
    return v5;
  }
}
