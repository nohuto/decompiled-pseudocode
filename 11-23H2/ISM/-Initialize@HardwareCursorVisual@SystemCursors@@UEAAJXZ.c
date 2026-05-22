/*
 * XREFs of ?Initialize@HardwareCursorVisual@SystemCursors@@UEAAJXZ @ 0x180107430
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001ACF0 (--1-$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800318B4 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUICompositor@Composition@UI@Windows@@@Z @ 0x1801072FC (--0-$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUI.c)
 *     ?Commit@WindowsCompositionGlobals@SystemCursors@@QEAAJXZ @ 0x180175BD8 (-Commit@WindowsCompositionGlobals@SystemCursors@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall SystemCursors::HardwareCursorVisual::Initialize(SystemCursors::HardwareCursorVisual *this)
{
  __int64 v2; // rcx
  int v3; // edi
  __int64 v4; // rax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // rcx
  int CursorController; // eax
  unsigned int v13; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp+20h] BYREF
  __int64 v16; // [rsp+48h] [rbp+28h] BYREF
  __int64 *v17; // [rsp+50h] [rbp+30h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64 **); // [rsp+58h] [rbp+38h] BYREF

  if ( *((_BYTE *)this + 56) )
  {
    v17 = 0LL;
    wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>(
      &v18,
      **((_QWORD **)this + 1));
    v2 = (__int64)v17;
    v17 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    v3 = (**v18)(v18, &GUID_9cbd9312_070d_4588_9bf3_bbf528cf3e84, &v17);
    wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>((__int64 *)&v18);
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x15,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\cu"
                 "rsorvisuals2.cpp",
        (const char *)(unsigned int)v3);
LABEL_21:
      wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v17);
      return (unsigned int)v3;
    }
    v15 = 0LL;
    v4 = *v17;
    v15 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(v4 + 24))(v17, *((_QWORD *)this + 6), &v15);
    v3 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\cu"
                 "rsorvisuals2.cpp",
        (const char *)(unsigned int)v5);
LABEL_20:
      wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v15);
      goto LABEL_21;
    }
    v16 = 0LL;
    v6 = (**v15)(v15, &GUID_3b3e3dcf_f20f_4a83_9bf2_7684cde07861, &v16);
    v3 = v6;
    if ( v6 < 0 )
    {
      v8 = 30LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\cu"
                 "rsorvisuals2.cpp",
        (const char *)(unsigned int)v6);
      wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v16);
      goto LABEL_20;
    }
    LOBYTE(v7) = 1;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 88LL))(v16, v7);
    v3 = v6;
    if ( v6 < 0 )
    {
      v8 = 31LL;
      goto LABEL_19;
    }
    v9 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = 0LL;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v6 = (**v15)(v15, &GUID_117e202d_a859_4c89_873b_c2aa566788e3, (__int64 *)this + 2);
    v3 = v6;
    if ( v6 < 0 )
    {
      v8 = 34LL;
      goto LABEL_19;
    }
    if ( *((_BYTE *)this + 33) )
    {
      v6 = SystemCursors::WindowsCompositionGlobals::Commit(*((SystemCursors::WindowsCompositionGlobals **)this + 1));
      v3 = v6;
      if ( v6 < 0 )
      {
        v8 = 38LL;
        goto LABEL_19;
      }
    }
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v16);
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v15);
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v17);
  }
  v11 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = 0LL;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  CursorController = MilCompositionEngine_CreateCursorController(
                       *((_QWORD *)this + 6),
                       (struct IDwmCursorController **)this + 5);
  v13 = CursorController;
  if ( CursorController >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2E,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\cursorvisuals2.cpp",
    (const char *)(unsigned int)CursorController);
  return v13;
}
