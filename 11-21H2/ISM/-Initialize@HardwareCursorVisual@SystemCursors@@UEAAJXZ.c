/*
 * XREFs of ?Initialize@HardwareCursorVisual@SystemCursors@@UEAAJXZ @ 0x180048F40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002BBF0 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUICompositor@Composition@UI@Windows@@@Z @ 0x1800EE5D0 (--0-$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUI.c)
 *     ?Commit@WindowsCompositionGlobals@SystemCursors@@QEAAJXZ @ 0x1801569B0 (-Commit@WindowsCompositionGlobals@SystemCursors@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall SystemCursors::HardwareCursorVisual::Initialize(SystemCursors::HardwareCursorVisual *this)
{
  __int64 v2; // rcx
  int CursorController; // eax
  unsigned int v4; // ebx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp+20h] BYREF
  __int64 *v15; // [rsp+48h] [rbp+28h] BYREF
  __int64 v16; // [rsp+50h] [rbp+30h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 **); // [rsp+58h] [rbp+38h] BYREF

  if ( *((_BYTE *)this + 56) )
  {
    v15 = 0LL;
    wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>(
      &v17,
      **((_QWORD **)this + 1));
    v6 = (__int64)v15;
    v15 = 0LL;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    v4 = (**v17)(v17, &GUID_9cbd9312_070d_4588_9bf3_bbf528cf3e84, &v15);
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v17);
    if ( (v4 & 0x80000000) == 0 )
    {
      v14 = 0LL;
      v7 = *v15;
      v14 = 0LL;
      v8 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(v7 + 24))(v15, *((_QWORD *)this + 6), &v14);
      v4 = v8;
      if ( v8 >= 0 )
      {
        v16 = 0LL;
        v9 = (**v14)(v14, &GUID_3b3e3dcf_f20f_4a83_9bf2_7684cde07861, &v16);
        v4 = v9;
        if ( v9 >= 0 )
        {
          LOBYTE(v10) = 1;
          v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 88LL))(v16, v10);
          v4 = v9;
          if ( v9 >= 0 )
          {
            v12 = *((_QWORD *)this + 2);
            *((_QWORD *)this + 2) = 0LL;
            if ( v12 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
            v9 = (**v14)(v14, &GUID_117e202d_a859_4c89_873b_c2aa566788e3, (__int64 *)this + 2);
            v4 = v9;
            if ( v9 >= 0 )
            {
              if ( !*((_BYTE *)this + 33)
                || (v9 = SystemCursors::WindowsCompositionGlobals::Commit(*((SystemCursors::WindowsCompositionGlobals **)this
                                                                          + 1)),
                    v4 = v9,
                    v9 >= 0) )
              {
                wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v16);
                wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v14);
                wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v15);
                goto LABEL_2;
              }
              v11 = 38LL;
            }
            else
            {
              v11 = 34LL;
            }
          }
          else
          {
            v11 = 31LL;
          }
        }
        else
        {
          v11 = 30LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\cursorvisuals2.cpp",
          (const char *)(unsigned int)v9);
        wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v16);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1A,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\cursorvisuals2.cpp",
          (const char *)(unsigned int)v8);
      }
      wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v14);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x15,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\cursorvisuals2.cpp",
        (const char *)v4);
    }
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v15);
    return v4;
  }
LABEL_2:
  v2 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = 0LL;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  CursorController = MilCompositionEngine_CreateCursorController(
                       *((_QWORD *)this + 6),
                       (struct IDwmCursorController **)this + 5);
  v4 = CursorController;
  if ( CursorController >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2E,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\cursorvisuals2.cpp",
    (const char *)(unsigned int)CursorController);
  return v4;
}
