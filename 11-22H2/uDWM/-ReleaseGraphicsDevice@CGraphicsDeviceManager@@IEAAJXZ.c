/*
 * XREFs of ?ReleaseGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x1800C1B98
 * Callers:
 *     ?CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z @ 0x18003E734 (-CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z.c)
 *     ??1CGraphicsDeviceManager@@MEAA@XZ @ 0x1800C1AA8 (--1CGraphicsDeviceManager@@MEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180041C18 (--1-$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x18004B6A8 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CGraphicsDeviceManager::ReleaseGraphicsDevice(CGraphicsDeviceManager *this)
{
  __int64 **v2; // rdi
  __int64 *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // esi
  void *v8; // rdx
  __int64 *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 **)((char *)this + 32);
  if ( *((_DWORD *)this + 16) )
  {
    v13 = 0LL;
    v3 = *v2;
    v4 = **v2;
    v13 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 *))(v4 + 48))(
           v3,
           &GUID_a4966eed_76db_44da_84c1_ee9a7afb20a8,
           &v13);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x61,
        (__int64)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
        (const char *)(unsigned int)v5);
      wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>(&v13);
      return v6;
    }
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 248LL))(v13, *((unsigned int *)this + 16));
    *((_DWORD *)this + 16) = 0;
    wil::details::ResetEvent(*((wil::details **)this + 7), v8);
    wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>(&v13);
  }
  v9 = *v2;
  *v2 = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64 *))(*v9 + 16))(v9);
  v10 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = 0LL;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return 0LL;
}
