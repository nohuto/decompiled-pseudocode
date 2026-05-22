/*
 * XREFs of ?Initialize@DragNDropProcessor@@AEAAJXZ @ 0x18015EB08
 * Callers:
 *     ?Create@DragNDropProcessor@@SAJAEBV?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@AEAV?$ComPtr@VActivationProcessor@@@34@PEAPEAV1@@Z @ 0x18015D148 (-Create@DragNDropProcessor@@SAJAEBV-$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@AEAV-$Co.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180002D48 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180024ACC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DragNDropProcessor::Initialize(DragNDropProcessor *this)
{
  _QWORD *v2; // rbx
  int v3; // eax
  const char *v4; // r9
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v6; // rbx
  __int64 v7; // rdi
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_QWORD *)((char *)this + 32);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 4);
  v3 = CoreUICreate(v2);
  if ( v3 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x24,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragndropprocessor.cpp",
      (const char *)(unsigned int)v3,
      v9);
  if ( !*v2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x25,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragndropprocessor.cpp",
      v4);
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 88LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
  if ( *(DragNDropProcessor **)(v6 + 64) != this )
  {
    (*(void (__fastcall **)(DragNDropProcessor *))(*(_QWORD *)this + 8LL))(this);
    v11 = *(_QWORD *)(v6 + 64);
    *(_QWORD *)(v6 + 64) = this;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v11);
  }
  v7 = *((_QWORD *)this + 3);
  if ( *(_QWORD *)(v6 + 88) != v7 )
  {
    v11 = v7;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(&v11);
    v11 = *(_QWORD *)(v6 + 88);
    *(_QWORD *)(v6 + 88) = v7;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v11);
  }
  return 0LL;
}
