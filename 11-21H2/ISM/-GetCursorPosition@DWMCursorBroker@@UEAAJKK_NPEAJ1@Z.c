/*
 * XREFs of ?GetCursorPosition@DWMCursorBroker@@UEAAJKK_NPEAJ1@Z @ 0x1801CE630
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMCursorBroker::GetCursorPosition(
        DWMCursorBroker *this,
        unsigned int a2,
        unsigned int a3,
        char a4,
        int *a5,
        int *a6)
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
  *a5 = 0;
  *a6 = 0;
  *(_QWORD *)v17 = 0LL;
  v11 = *(__int64 (__fastcall **)(DWMCursorBroker *, _QWORD, _QWORD, __int64, int *))(*(_QWORD *)this + 56LL);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)v17);
  LOBYTE(v12) = a4;
  v13 = v11(this, a2, a3, v12, v17);
  v14 = v13;
  if ( v13 >= 0 )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD, int *, int *))(**(_QWORD **)v17 + 40LL))(*(_QWORD *)v17, a5, a6);
    v14 = v13;
    if ( v13 >= 0 )
    {
      v14 = 0;
      goto LABEL_9;
    }
    v15 = 826LL;
  }
  else
  {
    v15 = 825LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
    (const char *)(unsigned int)v13);
LABEL_9:
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)v17);
  _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
  return v14;
}
