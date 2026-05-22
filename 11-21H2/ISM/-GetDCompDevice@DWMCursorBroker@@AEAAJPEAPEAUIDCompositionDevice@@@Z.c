/*
 * XREFs of ?GetDCompDevice@DWMCursorBroker@@AEAAJPEAPEAUIDCompositionDevice@@@Z @ 0x1801CE790
 * Callers:
 *     ?SetPosition@DWMCursor@@UEAAJJJ@Z @ 0x18002D930 (-SetPosition@DWMCursor@@UEAAJJJ@Z.c)
 *     ?EnsureDCompTransform@DWMCursor@@AEAAJXZ @ 0x1801CF720 (-EnsureDCompTransform@DWMCursor@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMCursorBroker::GetDCompDevice(DWMCursorBroker *this, struct IDCompositionDevice **a2)
{
  __int64 *v3; // rbx
  struct IDCompositionDevice *v4; // rcx
  int Device3; // eax
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v3 = (__int64 *)((char *)this + 40);
  v4 = (struct IDCompositionDevice *)*((_QWORD *)this + 5);
  if ( !v4 )
  {
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v3);
    Device3 = DCompositionCreateDevice3(0LL, &GUID_c37ea93a_e7aa_450d_b16f_9746cb0407f3, v3);
    v6 = Device3;
    if ( Device3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x94,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
        (const char *)(unsigned int)Device3);
      return v6;
    }
    v4 = (struct IDCompositionDevice *)*v3;
  }
  if ( v4 )
  {
    (*(void (__fastcall **)(struct IDCompositionDevice *))(*(_QWORD *)v4 + 8LL))(v4);
    v4 = (struct IDCompositionDevice *)*v3;
  }
  *a2 = v4;
  return 0LL;
}
