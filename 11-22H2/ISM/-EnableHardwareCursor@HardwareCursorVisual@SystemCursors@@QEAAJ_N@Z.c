/*
 * XREFs of ?EnableHardwareCursor@HardwareCursorVisual@SystemCursors@@QEAAJ_N@Z @ 0x180115E78
 * Callers:
 *     ?CreateCursorVisual@SystemCursor2@@AEAAJXZ @ 0x180113CA0 (-CreateCursorVisual@SystemCursor2@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180033458 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Commit@WindowsCompositionGlobals@SystemCursors@@QEAAJXZ @ 0x1801839E8 (-Commit@WindowsCompositionGlobals@SystemCursors@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemCursors::HardwareCursorVisual::EnableHardwareCursor(SystemCursors::HardwareCursorVisual *this)
{
  int v2; // eax
  __int64 v3; // rdx
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rdx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 56) )
  {
    v10 = 0LL;
    v2 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 2))(
           *((_QWORD *)this + 2),
           &GUID_718546d4_56e7_417c_9ec4_41fd556fbc17,
           &v10);
    if ( v2 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x40,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\cursorvisuals2.cpp",
        (const char *)(unsigned int)v2,
        v8);
    LOBYTE(v3) = 1;
    v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 40LL))(v10, v3);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 65LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\cu"
                 "rsorvisuals2.cpp",
        (const char *)(unsigned int)v4);
      wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v10);
      return v5;
    }
    if ( *((_BYTE *)this + 33) )
    {
      v4 = SystemCursors::WindowsCompositionGlobals::Commit(*((SystemCursors::WindowsCompositionGlobals **)this + 1));
      v5 = v4;
      if ( v4 < 0 )
      {
        v6 = 69LL;
        goto LABEL_9;
      }
    }
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v10);
  }
  return 0LL;
}
