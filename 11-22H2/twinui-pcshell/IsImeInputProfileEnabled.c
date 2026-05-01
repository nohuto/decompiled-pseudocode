/*
 * XREFs of IsImeInputProfileEnabled @ 0x18017D294
 * Callers:
 *     ?IsPreloadEnabledByIme@InputAppPreloader@KeyboardHosting@@AEAA_NXZ @ 0x1800AD544 (-IsPreloadEnabledByIme@InputAppPreloader@KeyboardHosting@@AEAA_NXZ.c)
 *     ?OnEnabledInputProfilesChanged@InputAppPreloader@KeyboardHosting@@AEAAJPEAUICoreKeyboardInputProfileManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs@45678@@Z @ 0x1800AD5D0 (-OnEnabledInputProfilesChanged@InputAppPreloader@KeyboardHosting@@AEAAJPEAUICoreKeyboardInputPro.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C388C (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18017D428 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall IsImeInputProfileEnabled(__int64 *a1, __int64 a2, __int64 a3, const char *a4)
{
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  const char *v11; // rax
  __int64 v12; // rcx
  _DWORD *v13; // rcx
  _DWORD *v15; // rcx
  int v16; // [rsp+20h] [rbp-60h]
  unsigned int v17; // [rsp+40h] [rbp-40h] BYREF
  __int64 v18; // [rsp+44h] [rbp-3Ch] BYREF
  __int64 v19; // [rsp+50h] [rbp-30h] BYREF
  __int64 v20; // [rsp+58h] [rbp-28h] BYREF
  _QWORD v21[2]; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  if ( !a1 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x15,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\inputapppreloader.cpp",
      a4);
  v5 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*a1 + 56))(a1, &v17);
  v6 = retaddr;
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x18,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\inputapppreloader.cpp",
      (const char *)(unsigned int)v5,
      v16);
  v7 = 0;
  if ( v17 )
  {
    while ( 1 )
    {
      v8 = *a1;
      v19 = 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v8 + 48))(a1, v7, &v19);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x40,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\inputapppreloader.cpp",
          (const char *)(unsigned int)v9,
          v16);
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v19 + 80LL))(v19, v21);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x43,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\inputapppreloader.cpp",
          (const char *)(unsigned int)v10,
          v16);
      v11 = (const char *)&unk_18081ADC0;
      do
      {
        v12 = *(_QWORD *)v11 - v21[0];
        if ( *(_QWORD *)v11 == v21[0] )
          v12 = *((_QWORD *)v11 + 1) - v21[1];
        if ( !v12 )
          break;
        v11 += 16;
      }
      while ( v11 != "InputAppPreloader::IsImeInputProfile" );
      if ( v11 != "InputAppPreloader::IsImeInputProfile" )
        break;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v19);
      if ( ++v7 >= v17 )
        goto LABEL_13;
    }
    v15 = (_DWORD *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                      v12,
                      _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
    if ( *v15 > 5u )
    {
      v18 = __PAIR64__(v17, v21[0]);
      v20 = (__int64)"InputAppPreloader::IsImeInputProfile";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)v15,
        (__int64)&v20,
        (__int64)&v18 + 4,
        (__int64)&v18);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v19);
    return 1;
  }
  else
  {
LABEL_13:
    v13 = (_DWORD *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                      (__int64)v6,
                      _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
    if ( *v13 > 5u )
    {
      v18 = v17;
      v20 = (__int64)"InputAppPreloader::IsImeInputProfile";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)v13,
        (__int64)&v20,
        (__int64)&v18,
        (__int64)&v18 + 4);
    }
    return 0;
  }
}
