/*
 * XREFs of ?OnDisconnected@CursorManager@@UEAAJPEAUIMessageProxy@@@Z @ 0x180183860
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CursorManager::OnDisconnected(
        CursorManager *this,
        int (__fastcall ***a2)(struct IMessageProxy *, GUID *, __int64 *))
{
  int (__fastcall **v2)(struct IMessageProxy *, GUID *, __int64 *); // rax
  int (__fastcall *v5)(struct IMessageProxy *, GUID *, __int64 *); // rbx
  int v6; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  v10 = 0LL;
  v5 = *v2;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v10);
  if ( v5((struct IMessageProxy *)a2, &GUID_5f9adcb2_65c8_40db_988f_dffbe437aa7a, &v10) >= 0 )
  {
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 4);
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 64LL))(*((_QWORD *)this + 6));
    if ( v6 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x11A,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\manager\\cursormanager.cpp",
        (const char *)(unsigned int)v6,
        v8);
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v10);
  return 0LL;
}
