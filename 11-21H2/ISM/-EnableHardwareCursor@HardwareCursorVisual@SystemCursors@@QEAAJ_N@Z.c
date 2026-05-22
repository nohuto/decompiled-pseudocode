/*
 * XREFs of ?EnableHardwareCursor@HardwareCursorVisual@SystemCursors@@QEAAJ_N@Z @ 0x1800EE60C
 * Callers:
 *     ?CreateCursorVisual@SystemCursor2@@AEAAJXZ @ 0x1800EC4F0 (-CreateCursorVisual@SystemCursor2@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002BBF0 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Commit@WindowsCompositionGlobals@SystemCursors@@QEAAJXZ @ 0x1801569B0 (-Commit@WindowsCompositionGlobals@SystemCursors@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemCursors::HardwareCursorVisual::EnableHardwareCursor(SystemCursors::HardwareCursorVisual *this)
{
  int v3; // eax
  __int64 v4; // rdx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 56) )
    return 0LL;
  v10 = 0LL;
  v3 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 2))(
         *((_QWORD *)this + 2),
         &GUID_718546d4_56e7_417c_9ec4_41fd556fbc17,
         &v10);
  if ( v3 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x40,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\cursorvisuals2.cpp",
      (const char *)(unsigned int)v3,
      v8);
  LOBYTE(v4) = 1;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 40LL))(v10, v4);
  v6 = v5;
  if ( v5 >= 0 )
  {
    if ( !*((_BYTE *)this + 33)
      || (v5 = SystemCursors::WindowsCompositionGlobals::Commit(*((SystemCursors::WindowsCompositionGlobals **)this + 1)),
          v6 = v5,
          v5 >= 0) )
    {
      v6 = 0;
      goto LABEL_12;
    }
    v7 = 69LL;
  }
  else
  {
    v7 = 65LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\cursorvisuals2.cpp",
    (const char *)(unsigned int)v5);
LABEL_12:
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v10);
  return v6;
}
