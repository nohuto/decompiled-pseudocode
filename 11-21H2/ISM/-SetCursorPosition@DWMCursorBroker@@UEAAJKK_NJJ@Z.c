/*
 * XREFs of ?SetCursorPosition@DWMCursorBroker@@UEAAJKK_NJJ@Z @ 0x1801CED90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
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
  unsigned int v11; // edi
  __int64 (__fastcall *v12)(DWMCursorBroker *, _QWORD, _QWORD, __int64, int *); // rbx
  __int64 v13; // r9
  int v14; // eax
  int v15; // ebx
  __int64 v16; // rdx
  int v18[2]; // [rsp+30h] [rbp-28h] BYREF
  void *v19; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v19 = &DWMCursorBroker::s_lock;
  v10 = _Mtx_lock((_Mtx_t)&DWMCursorBroker::s_lock);
  v11 = 0;
  if ( v10 )
    std::_Throw_C_error(v10);
  *(_QWORD *)v18 = 0LL;
  v12 = *(__int64 (__fastcall **)(DWMCursorBroker *, _QWORD, _QWORD, __int64, int *))(*(_QWORD *)this + 56LL);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)v18);
  LOBYTE(v13) = a4;
  v14 = v12(this, a2, a3, v13, v18);
  v15 = v14;
  if ( v14 < 0 )
  {
    if ( a3 != 1 )
    {
      v16 = 807LL;
      goto LABEL_10;
    }
    v14 = (*(__int64 (__fastcall **)(DWMCursorBroker *, _QWORD, _QWORD))(*(_QWORD *)this + 48LL))(this, a5, a6);
    v15 = v14;
    if ( v14 < 0 )
    {
      v16 = 802LL;
      goto LABEL_10;
    }
  }
  else
  {
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)v18 + 24LL))(*(_QWORD *)v18, a5, a6);
    v15 = v14;
    if ( v14 < 0 )
    {
      v16 = 796LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
        (const char *)(unsigned int)v14);
      v11 = v15;
    }
  }
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)v18);
  _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
  return v11;
}
