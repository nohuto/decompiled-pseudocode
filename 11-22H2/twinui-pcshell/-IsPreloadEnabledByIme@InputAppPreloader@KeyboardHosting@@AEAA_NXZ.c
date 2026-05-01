/*
 * XREFs of ?IsPreloadEnabledByIme@InputAppPreloader@KeyboardHosting@@AEAA_NXZ @ 0x1800AD544
 * Callers:
 *     ?IsPreloadEnabled@InputAppPreloader@KeyboardHosting@@AEAA_NXZ @ 0x1800AD380 (-IsPreloadEnabled@InputAppPreloader@KeyboardHosting@@AEAA_NXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     IsImeInputProfileEnabled @ 0x18017D294 (IsImeInputProfileEnabled.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall KeyboardHosting::InputAppPreloader::IsPreloadEnabledByIme(KeyboardHosting::InputAppPreloader *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_DWORD *)this + 8) )
  {
    v8 = 0LL;
    v2 = (__int64 *)*((_QWORD *)this + 1);
    v3 = *v2;
    v8 = 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v3 + 160))(v2, &v8);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC4,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\inputapppreloader.cpp",
        (const char *)(unsigned int)v4,
        v6);
    else
      _InterlockedExchange((volatile __int32 *)this + 8, ((unsigned __int8)IsImeInputProfileEnabled(v8) != 0) + 1);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v8);
  }
  return *((_DWORD *)this + 8) == 2;
}
