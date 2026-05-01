/*
 * XREFs of ?DismissVirtualDesktopSwitcher@CVirtualDesktopSwitcherService@@UEAAJXZ @ 0x18054A4D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     MakeMultitaskingViewTaskCallback__lambda_e4bce3ba4ff679026706ec329dbd106a___ @ 0x18054A2B4 (MakeMultitaskingViewTaskCallback__lambda_e4bce3ba4ff679026706ec329dbd106a___.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualDesktopSwitcherService::DismissVirtualDesktopSwitcher(CVirtualDesktopSwitcherService *this)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rdx
  const char *v5; // r9
  int MultitaskingViewTaskCallback__lambda_e4bce3ba4ff679026706ec329dbd106a; // eax
  unsigned int v7; // ebx
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v11; // [rsp+30h] [rbp+8h]
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  v2 = *((_QWORD *)this + 4);
  if ( !v2 )
    return 2147500036LL;
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
    if ( (v11 & 0x10) != 0 )
    {
      v12 = 0LL;
      MultitaskingViewTaskCallback__lambda_e4bce3ba4ff679026706ec329dbd106a = MakeMultitaskingViewTaskCallback__lambda_e4bce3ba4ff679026706ec329dbd106a_(
                                                                                &v12,
                                                                                v4);
      v7 = MultitaskingViewTaskCallback__lambda_e4bce3ba4ff679026706ec329dbd106a;
      if ( MultitaskingViewTaskCallback__lambda_e4bce3ba4ff679026706ec329dbd106a >= 0 )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 2) + 24LL))(
               *((_QWORD *)this + 2),
               v12,
               1LL);
        v9 = v8;
        if ( v8 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x64,
            (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopswitcherservice.cpp",
            (const char *)(unsigned int)v8);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
        result = v9;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x61,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopswitcherservice.cpp",
          (const char *)(unsigned int)MultitaskingViewTaskCallback__lambda_e4bce3ba4ff679026706ec329dbd106a);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
        result = v7;
      }
    }
    else
    {
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x68,
                           (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopswitcherservice.cpp",
                           v5);
  }
  return result;
}
