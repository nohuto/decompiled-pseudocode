/*
 * XREFs of ?DisplaySettingsChange@CDesktopPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18006BD40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDesktopPositioner::DisplaySettingsChange(__int64 a1, __int64 a2, char a3)
{
  __int64 *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  int v16; // [rsp+20h] [rbp-50h]
  __int64 *v17; // [rsp+30h] [rbp-40h] BYREF
  int v18; // [rsp+38h] [rbp-38h] BYREF
  __int128 v19; // [rsp+40h] [rbp-30h] BYREF
  __int128 v20; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  if ( !*(_DWORD *)(a1 + 260) || (a3 & 0x38) == 0 )
    return 0LL;
  v17 = 0LL;
  v5 = *(__int64 **)(a1 + 184);
  v6 = *v5;
  v17 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 **))(v6 + 32))(v5, 1LL, &v17);
  v8 = v7;
  if ( v7 < 0 )
  {
    v14 = 874LL;
  }
  else
  {
    v18 = 0;
    v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 48LL))(a2, &v18);
    v8 = v7;
    if ( v7 >= 0 )
    {
      if ( v18 )
      {
        v20 = 0LL;
        v9 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a2 + 88LL))(a2, &v20);
        if ( v9 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x373,
            (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v9,
            v16);
        v10 = *v17;
        v19 = v20;
        v11 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int128 *, __int64))(v10 + 56))(v17, a2, &v19, 1LL);
        v12 = retaddr;
        if ( v11 >= 0 )
          goto LABEL_9;
        v15 = 884LL;
      }
      else
      {
        if ( (a3 & 0x20) == 0 )
          goto LABEL_9;
        v11 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v17 + 64))(v17, a2);
        v12 = retaddr;
        if ( v11 >= 0 )
          goto LABEL_9;
        v15 = 889LL;
      }
      wil::details::in1diag3::_Log_Hr(
        v12,
        (void *)v15,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v11,
        v16);
LABEL_9:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v17);
      return 0LL;
    }
    v14 = 877LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v7,
    v16);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v17);
  return v8;
}
