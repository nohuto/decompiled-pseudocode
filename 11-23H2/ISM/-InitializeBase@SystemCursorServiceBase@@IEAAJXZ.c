/*
 * XREFs of ?InitializeBase@SystemCursorServiceBase@@IEAAJXZ @ 0x18004508C
 * Callers:
 *     ?InitializeDesktopCursorService@SystemCursorController2@@QEAAJXZ @ 0x180044FC0 (-InitializeDesktopCursorService@SystemCursorController2@@QEAAJXZ.c)
 *     ?Initialize@SystemCursorService2@@QEAAJK@Z @ 0x180105864 (-Initialize@SystemCursorService2@@QEAAJK@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001ACF0 (--1-$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateInteropCompositor@WindowsCompositionGlobals@SystemCursors@@SAJPEAPEAUICompositor@Composition@UI@Windows@@@Z @ 0x1800458AC (-CreateInteropCompositor@WindowsCompositionGlobals@SystemCursors@@SAJPEAPEAUICompositor@Composit.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@VWindowsCompositionGlobals@SystemCursors@@U?$default_delete@VWindowsCompositionGlobals@SystemCursors@@@std@@@std@@QEAA@XZ @ 0x180104330 (--1-$unique_ptr@VWindowsCompositionGlobals@SystemCursors@@U-$default_delete@VWindowsCompositionG.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemCursorServiceBase::InitializeBase(SystemCursorServiceBase *this)
{
  struct Windows::UI::Composition::ICompositor **v2; // rdi
  __int64 *v3; // rbx
  struct Windows::UI::Composition::ICompositor *v4; // rcx
  int InteropCompositor; // eax
  unsigned int v6; // esi
  __int64 **v7; // rax
  __int64 *v8; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Windows::UI::Composition::ICompositor **v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = (struct Windows::UI::Composition::ICompositor **)operator new(8uLL);
  *v2 = 0LL;
  v3 = (__int64 *)v2;
  v11 = v2;
  v4 = *v2;
  *v2 = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(struct Windows::UI::Composition::ICompositor *))(*(_QWORD *)v4 + 16LL))(v4);
  InteropCompositor = SystemCursors::WindowsCompositionGlobals::CreateInteropCompositor(v2);
  v6 = InteropCompositor;
  if ( InteropCompositor < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\systemcursorservice\\lib\\cursorwc.cpp",
      (const char *)(unsigned int)InteropCompositor);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice2.cpp",
      (const char *)v6);
    std::unique_ptr<SystemCursors::WindowsCompositionGlobals>::~unique_ptr<SystemCursors::WindowsCompositionGlobals>(&v11);
    return v6;
  }
  else
  {
    v7 = (__int64 **)((char *)this + 16);
    if ( (struct Windows::UI::Composition::ICompositor ***)((char *)this + 16) != &v11 )
    {
      v3 = 0LL;
      v8 = *v7;
      *v7 = (__int64 *)v2;
      if ( v8 )
      {
        wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>(v8);
        operator delete(v8, 8uLL);
      }
    }
    if ( v3 )
    {
      wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>(v3);
      operator delete(v3, 8uLL);
    }
    return 0LL;
  }
}
