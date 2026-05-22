/*
 * XREFs of ?GetClosestInteractiveBounds@DWMCursorBroker@@UEAAJKK_NPEAUtagRECT@@@Z @ 0x1801CE320
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DWMCursorBroker::GetClosestInteractiveBounds(
        DWMCursorBroker *this,
        unsigned int a2,
        unsigned int a3,
        char a4,
        struct tagRECT *a5)
{
  int v9; // eax
  __int64 (__fastcall *v10)(DWMCursorBroker *, _QWORD, _QWORD, __int64, int *); // rbx
  __int64 v11; // r9
  int v12; // eax
  unsigned int v13; // ebx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v15)(_QWORD, GUID *, __int64 *); // rdi
  int v16; // eax
  __int64 v18; // [rsp+30h] [rbp-38h] BYREF
  int v19[2]; // [rsp+38h] [rbp-30h] BYREF
  void *v20; // [rsp+40h] [rbp-28h]
  _BYTE v21[16]; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+40h]

  v20 = &DWMCursorBroker::s_lock;
  v9 = _Mtx_lock((_Mtx_t)&DWMCursorBroker::s_lock);
  if ( v9 )
    std::_Throw_C_error(v9);
  *a5 = 0LL;
  *(_QWORD *)v19 = 0LL;
  v10 = *(__int64 (__fastcall **)(DWMCursorBroker *, _QWORD, _QWORD, __int64, int *))(*(_QWORD *)this + 56LL);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)v19);
  LOBYTE(v11) = a4;
  v12 = v10(this, a2, a3, v11, v19);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v18 = 0LL;
    v14 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v19;
    v15 = ***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v19;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v18);
    v16 = v15(v14, &GUID_925481d1_82a9_4761_95ea_d779b9de7e6b, &v18);
    v13 = v16;
    if ( v16 >= 0 )
    {
      *a5 = *(struct tagRECT *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v18 + 24LL))(v18, v21);
      v13 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x34C,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
        (const char *)(unsigned int)v16);
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v18);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x349,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)v12);
  }
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)v19);
  _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
  return v13;
}
