/*
 * XREFs of ?MoveProxyWindowsToDesktop@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXPEAUIApplicationViewCollection@@PEAUIVirtualDesktopManagerInternal@@PEAUIApplicationView@@@Z @ 0x180639F8C
 * Callers:
 *     ?ViewVirtualDesktopChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@@Z @ 0x1801537D0 (-ViewVirtualDesktopChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUI.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowData::MoveProxyWindowsToDesktop(
        RTL_SRWLOCK *this,
        struct IApplicationViewCollection *a2,
        struct IVirtualDesktopManagerInternal *a3,
        struct IApplicationView *a4)
{
  _QWORD *Ptr; // rdi
  _QWORD *i; // rbx
  __int64 v10; // rax
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  AcquireSRWLockShared(this);
  Ptr = this[4].Ptr;
  for ( i = (_QWORD *)*Ptr; i != Ptr; i = (_QWORD *)*i )
  {
    v10 = *(_QWORD *)a2;
    v13 = 0LL;
    if ( (*(int (__fastcall **)(struct IApplicationViewCollection *, _QWORD, __int64 *))(v10 + 48))(
           a2,
           *(_QWORD *)(i[4] + 32LL),
           &v13) >= 0
      && v13 )
    {
      v11 = (*(__int64 (__fastcall **)(struct IVirtualDesktopManagerInternal *, __int64, struct IApplicationView *))(*(_QWORD *)a3 + 144LL))(
              a3,
              v13,
              a4);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xC9,
          (int)"pcshell\\twinui\\windowtabhost\\lib\\windowdata.cpp",
          (const char *)(unsigned int)v11);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
  }
  if ( this )
    ReleaseSRWLockShared(this);
}
