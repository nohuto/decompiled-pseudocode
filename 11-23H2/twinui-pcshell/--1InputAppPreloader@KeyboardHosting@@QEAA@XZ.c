/*
 * XREFs of ??1InputAppPreloader@KeyboardHosting@@QEAA@XZ @ 0x1801B32E0
 * Callers:
 *     ?ShutdownServices@TouchKeyboardExperienceManager@@UEAAJPEAUIProfferService@@@Z @ 0x1800A3B50 (-ShutdownServices@TouchKeyboardExperienceManager@@UEAAJPEAUIProfferService@@@Z.c)
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800AAE90 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ??1?$unique_ptr@VInputAppPreloader@KeyboardHosting@@U?$default_delete@VInputAppPreloader@KeyboardHosting@@@std@@@std@@QEAA@XZ @ 0x18050C214 (--1-$unique_ptr@VInputAppPreloader@KeyboardHosting@@U-$default_delete@VInputAppPreloader@Keyboar.c)
 *     ??1TouchKeyboardExperienceManager@@EEAA@XZ @ 0x18050C644 (--1TouchKeyboardExperienceManager@@EEAA@XZ.c)
 *     ?reset@?$unique_ptr@VInputAppPreloader@KeyboardHosting@@U?$default_delete@VInputAppPreloader@KeyboardHosting@@@std@@@std@@QEAAXPEAVInputAppPreloader@KeyboardHosting@@@Z @ 0x18051D58C (-reset@-$unique_ptr@VInputAppPreloader@KeyboardHosting@@U-$default_delete@VInputAppPreloader@Key.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall KeyboardHosting::InputAppPreloader::~InputAppPreloader(KeyboardHosting::InputAppPreloader *this)
{
  __int64 v2; // rcx
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 1);
  if ( v2 && *((_QWORD *)this + 2) )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 72LL))(v2);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x7E,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\inputapppreloader.cpp",
        (const char *)(unsigned int)v3);
    *((_QWORD *)this + 2) = 0LL;
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 1);
}
