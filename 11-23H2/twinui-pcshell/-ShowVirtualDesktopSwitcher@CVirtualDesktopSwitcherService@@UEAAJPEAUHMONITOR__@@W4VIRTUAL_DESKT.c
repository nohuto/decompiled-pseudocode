/*
 * XREFs of ?ShowVirtualDesktopSwitcher@CVirtualDesktopSwitcherService@@UEAAJPEAUHMONITOR__@@W4VIRTUAL_DESKTOP_SWITCHER_INVOKE_DETAILS@@@Z @ 0x18054A6D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIImmersiveMonitor@@@Z @ 0x1801B9F9C (--0-$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIImmersiveMonitor@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     MakeMultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b___ @ 0x18054A200 (MakeMultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b___.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CVirtualDesktopSwitcherService::ShowVirtualDesktopSwitcher(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rcx
  bool v7; // al
  __int64 result; // rax
  const char *v9; // r9
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // ebx
  int MultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b; // ebx
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // [rsp+30h] [rbp-28h] BYREF
  __int64 v18; // [rsp+38h] [rbp-20h] BYREF
  int v19; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  char v21; // [rsp+60h] [rbp+8h]
  __int64 v22; // [rsp+78h] [rbp+20h] BYREF

  v6 = *(_QWORD *)(a1 + 32);
  v7 = *(_QWORD *)(a1 + 24) == 0LL;
  if ( v7 || v6 == 0 )
    return 2147500036LL;
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6);
    if ( (v21 & 0x10) != 0 )
    {
      result = 0LL;
    }
    else
    {
      v22 = 0LL;
      v10 = *(__int64 **)(a1 + 24);
      v11 = *v10;
      v22 = 0LL;
      v12 = (*(__int64 (__fastcall **)(__int64 *, __int64, GUID *, GUID *, __int64 *))(v11 + 72))(
              v10,
              a2,
              &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
              &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
              &v22);
      v13 = v12;
      if ( v12 >= 0 )
      {
        wil::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>(
          &v18,
          v22);
        v19 = a3;
        v17 = 0LL;
        MultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b = MakeMultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b_(
                                                                                  &v17,
                                                                                  (__int64)&v18);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v18);
        if ( MultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b >= 0 )
        {
          v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 16) + 24LL))(
                  *(_QWORD *)(a1 + 16),
                  v17,
                  1LL);
          v16 = v15;
          if ( v15 < 0 )
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x49,
              (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopswitcherservice.cpp",
              (const char *)(unsigned int)v15);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v22);
          result = v16;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x46,
            (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopswitcherservice.cpp",
            (const char *)(unsigned int)MultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v22);
          result = (unsigned int)MultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x38,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopswitcherservice.cpp",
          (const char *)(unsigned int)v12);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v22);
        result = v13;
      }
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4D,
                           (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopswitcherservice.cpp",
                           v9);
  }
  return result;
}
