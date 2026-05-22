/*
 * XREFs of ?OnConnected@CursorManager@@UEAAJPEAUIMessageProxy@@@Z @ 0x1801563B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CursorManager::OnConnected(
        CursorManager *this,
        __int64 (__fastcall ***a2)(struct IMessageProxy *, GUID *, __int64 **))
{
  __int64 **v2; // rsi
  __int64 (__fastcall *v5)(struct IMessageProxy *, GUID *, __int64 **); // rbx
  int v6; // eax
  int v7; // eax
  __int64 v8; // r9
  __int64 *v9; // rcx
  bool v10; // sf
  bool v11; // of
  __int64 v12; // rax
  int v13; // eax
  int v15; // [rsp+20h] [rbp-88h]
  _OWORD v16[2]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v17; // [rsp+50h] [rbp-58h]
  _OWORD v18[2]; // [rsp+60h] [rbp-48h] BYREF
  __int64 v19; // [rsp+80h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v2 = (__int64 **)((char *)this + 32);
  if ( !*((_QWORD *)this + 4) )
  {
    v5 = **a2;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 4);
    v6 = v5((struct IMessageProxy *)a2, &GUID_5f9adcb2_65c8_40db_988f_dffbe437aa7a, v2);
    if ( v6 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x102,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\manager\\cursormanager.cpp",
        (const char *)(unsigned int)v6,
        v15);
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _OWORD *))(**((_QWORD **)this + 3) + 136LL))(
           *((_QWORD *)this + 3),
           *((_QWORD *)this + 7),
           v18);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x104,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\manager\\cursormanager.cpp",
        (const char *)(unsigned int)v7,
        v15);
    v9 = *v2;
    v11 = __OFSUB__(*((_DWORD *)this + 20), 2);
    v10 = *((_DWORD *)this + 20) - 2 < 0;
    v16[0] = v18[0];
    LOBYTE(v8) = v10 ^ v11;
    v12 = *v9;
    v17 = v19;
    v16[1] = v18[1];
    v13 = (*(__int64 (__fastcall **)(__int64 *, _OWORD *, _QWORD, __int64))(v12 + 24))(
            v9,
            v16,
            *((unsigned int *)this + 18),
            v8);
    if ( v13 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x107,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\manager\\cursormanager.cpp",
        (const char *)(unsigned int)v13,
        v15);
  }
  return 0LL;
}
