/*
 * XREFs of ?ReleaseGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x1800BD858
 * Callers:
 *     ?CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z @ 0x18003C864 (-CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z.c)
 *     ??1CGraphicsDeviceManager@@MEAA@XZ @ 0x1800BD774 (--1CGraphicsDeviceManager@@MEAA@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDisplayState@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003D81C (--1-$com_ptr_t@UIDisplayState@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QE.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180056510 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CGraphicsDeviceManager::ReleaseGraphicsDevice(CGraphicsDeviceManager *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // edi
  void *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 16) )
  {
    v12 = 0LL;
    v2 = (__int64 *)*((_QWORD *)this + 4);
    v3 = *v2;
    v12 = 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 *))(v3 + 48))(
           v2,
           &GUID_a4966eed_76db_44da_84c1_ee9a7afb20a8,
           &v12);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x61,
        (int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
        (const char *)(unsigned int)v4);
      wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>(&v12);
      return v5;
    }
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 248LL))(v12, *((unsigned int *)this + 16));
    *((_DWORD *)this + 16) = 0;
    wil::details::ResetEvent(*((wil::details **)this + 7), v7);
    wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>(&v12);
  }
  v8 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return 0LL;
}
