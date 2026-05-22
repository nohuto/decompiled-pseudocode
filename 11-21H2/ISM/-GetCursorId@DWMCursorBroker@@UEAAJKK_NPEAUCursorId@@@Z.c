/*
 * XREFs of ?GetCursorId@DWMCursorBroker@@UEAAJKK_NPEAUCursorId@@@Z @ 0x180047AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMCursorBroker::GetCursorId(
        DWMCursorBroker *this,
        unsigned int a2,
        unsigned int a3,
        char a4,
        struct CursorId *a5)
{
  unsigned int v5; // ebx
  int v10; // eax
  __int64 (__fastcall *v11)(DWMCursorBroker *, _QWORD, _QWORD, __int64, __int64 *); // rbx
  __int64 v12; // r9
  int v13; // eax
  __int64 v15[2]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v16[16]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v15[1] = (__int64)&DWMCursorBroker::s_lock;
  v10 = _Mtx_lock((_Mtx_t)&DWMCursorBroker::s_lock);
  if ( v10 )
  {
    std::_Throw_C_error(v10);
    goto LABEL_6;
  }
  *(_QWORD *)a5 = 0LL;
  v15[0] = 0LL;
  v11 = *(__int64 (__fastcall **)(DWMCursorBroker *, _QWORD, _QWORD, __int64, __int64 *))(*(_QWORD *)this + 56LL);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(v15);
  LOBYTE(v12) = a4;
  v13 = v11(this, a2, a3, v12, v15);
  v5 = v13;
  if ( v13 < 0 )
  {
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x308,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_4;
  }
  *(_QWORD *)a5 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v15[0] + 48LL))(v15[0], v16);
  v5 = 0;
LABEL_4:
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(v15);
  _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
  return v5;
}
