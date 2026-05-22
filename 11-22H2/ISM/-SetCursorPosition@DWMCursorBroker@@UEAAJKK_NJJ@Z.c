/*
 * XREFs of ?SetCursorPosition@DWMCursorBroker@@UEAAJKK_NJJ@Z @ 0x1801FAB10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMCursorBroker::SetCursorPosition(
        DWMCursorBroker *this,
        unsigned int a2,
        unsigned int a3,
        char a4,
        unsigned int a5,
        unsigned int a6)
{
  int v10; // eax
  __int64 (__fastcall *v11)(DWMCursorBroker *, _QWORD, _QWORD, __int64, int *); // rbx
  __int64 v12; // r9
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rdx
  int v17[2]; // [rsp+30h] [rbp-28h] BYREF
  void *v18; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v18 = &DWMCursorBroker::s_lock;
  v10 = _Mtx_lock((_Mtx_t)&DWMCursorBroker::s_lock);
  if ( v10 )
    std::_Throw_C_error(v10);
  *(_QWORD *)v17 = 0LL;
  v11 = *(__int64 (__fastcall **)(DWMCursorBroker *, _QWORD, _QWORD, __int64, int *))(*(_QWORD *)this + 56LL);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)v17);
  LOBYTE(v12) = a4;
  v13 = v11(this, a2, a3, v12, v17);
  v14 = v13;
  if ( v13 < 0 )
  {
    if ( a3 != 1 )
    {
      v15 = 807LL;
      goto LABEL_11;
    }
    v13 = (*(__int64 (__fastcall **)(DWMCursorBroker *, _QWORD, _QWORD))(*(_QWORD *)this + 48LL))(this, a5, a6);
    v14 = v13;
    if ( v13 < 0 )
    {
      v15 = 802LL;
      goto LABEL_11;
    }
LABEL_9:
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)v17);
    _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
    return 0LL;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)v17 + 24LL))(*(_QWORD *)v17, a5, a6);
  v14 = v13;
  if ( v13 >= 0 )
    goto LABEL_9;
  v15 = 796LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
    (const char *)(unsigned int)v13);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)v17);
  _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
  return v14;
}
