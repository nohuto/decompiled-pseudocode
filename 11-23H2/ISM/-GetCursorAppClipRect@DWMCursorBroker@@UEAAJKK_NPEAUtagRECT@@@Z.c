/*
 * XREFs of ?GetCursorAppClipRect@DWMCursorBroker@@UEAAJKK_NPEAUtagRECT@@@Z @ 0x1801ED4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMCursorBroker::GetCursorAppClipRect(
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
  __int64 v14; // rdx
  int v16[2]; // [rsp+30h] [rbp-28h] BYREF
  void *v17; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v17 = &DWMCursorBroker::s_lock;
  v9 = _Mtx_lock((_Mtx_t)&DWMCursorBroker::s_lock);
  if ( v9 )
    std::_Throw_C_error(v9);
  *a5 = 0LL;
  *(_QWORD *)v16 = 0LL;
  v10 = *(__int64 (__fastcall **)(DWMCursorBroker *, _QWORD, _QWORD, __int64, int *))(*(_QWORD *)this + 56LL);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)v16);
  LOBYTE(v11) = a4;
  v12 = v10(this, a2, a3, v11, v16);
  v13 = v12;
  if ( v12 < 0 )
  {
    v14 = 876LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)v12);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)v16);
    _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
    return v13;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, struct tagRECT *))(**(_QWORD **)v16 + 104LL))(*(_QWORD *)v16, a5);
  v13 = v12;
  if ( v12 < 0 )
  {
    v14 = 877LL;
    goto LABEL_7;
  }
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)v16);
  _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
  return 0LL;
}
