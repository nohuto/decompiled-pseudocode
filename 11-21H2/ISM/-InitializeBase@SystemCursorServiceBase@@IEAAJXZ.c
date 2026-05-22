/*
 * XREFs of ?InitializeBase@SystemCursorServiceBase@@IEAAJXZ @ 0x1800417D8
 * Callers:
 *     ?InitializeDesktopCursorService@SystemCursorController2@@QEAAJXZ @ 0x180041694 (-InitializeDesktopCursorService@SystemCursorController2@@QEAAJXZ.c)
 *     ?Initialize@SystemCursorService2@@QEAAJK@Z @ 0x1800ECBF4 (-Initialize@SystemCursorService2@@QEAAJK@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002BBF0 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateInteropCompositor@WindowsCompositionGlobals@SystemCursors@@SAJPEAPEAUICompositor@Composition@UI@Windows@@@Z @ 0x180041868 (-CreateInteropCompositor@WindowsCompositionGlobals@SystemCursors@@SAJPEAPEAUICompositor@Composit.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemCursorServiceBase::InitializeBase(SystemCursorServiceBase *this)
{
  struct Windows::UI::Composition::ICompositor **v2; // rsi
  __int64 *v3; // rbx
  int InteropCompositor; // eax
  unsigned int v5; // edi
  __int64 **v6; // rax
  __int64 *v7; // rdi
  int v9; // [rsp+20h] [rbp-18h]
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Windows::UI::Composition::ICompositor **v12; // [rsp+48h] [rbp+10h] BYREF

  v2 = (struct Windows::UI::Composition::ICompositor **)operator new(8uLL);
  v3 = (__int64 *)v2;
  v12 = v2;
  *v2 = 0LL;
  InteropCompositor = SystemCursors::WindowsCompositionGlobals::CreateInteropCompositor(v2);
  v5 = InteropCompositor;
  if ( InteropCompositor < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\systemcursorservice\\lib\\cursorwc.cpp",
      (const char *)(unsigned int)InteropCompositor,
      v9);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                    "systemcursorservice2.cpp",
      (const char *)v5,
      v10);
  }
  else
  {
    v6 = (__int64 **)((char *)this + 16);
    if ( (struct Windows::UI::Composition::ICompositor ***)((char *)this + 16) != &v12 )
    {
      v3 = 0LL;
      v7 = *v6;
      *v6 = (__int64 *)v2;
      if ( v7 )
      {
        wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(v7);
        operator delete(v7, 8uLL);
      }
    }
    v5 = 0;
  }
  if ( v3 )
  {
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(v3);
    operator delete(v3, 8uLL);
  }
  return v5;
}
