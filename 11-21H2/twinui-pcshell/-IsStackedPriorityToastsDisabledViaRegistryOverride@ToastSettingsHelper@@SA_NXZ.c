/*
 * XREFs of ?IsStackedPriorityToastsDisabledViaRegistryOverride@ToastSettingsHelper@@SA_NXZ @ 0x180196D38
 * Callers:
 *     ?IsStackedPriorityToastsEnabled@ToastSettingsHelper@@SA_NXZ @ 0x180196E90 (-IsStackedPriorityToastsEnabled@ToastSettingsHelper@@SA_NXZ.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180020174 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180089570 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800E6350 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$ReadData@K$0BI@@RegistryDataHelper@@AEBAJPEBGKPEAK@Z @ 0x18019629C (--$ReadData@K$0BI@@RegistryDataHelper@@AEBAJPEBGKPEAK@Z.c)
 */

// Hidden C++ exception states: #wind=2
bool ToastSettingsHelper::IsStackedPriorityToastsDisabledViaRegistryOverride(void)
{
  _QWORD *v0; // rax
  __int64 v1; // rdx
  int v2; // eax
  int v3; // ebx
  char v4; // al
  bool v5; // bl
  int v7; // [rsp+20h] [rbp-19h] BYREF
  RTL_SRWLOCK *v8; // [rsp+28h] [rbp-11h] BYREF
  _QWORD v9[4]; // [rsp+30h] [rbp-9h] BYREF
  __int64 v10; // [rsp+50h] [rbp+17h] BYREF
  __int128 v11; // [rsp+58h] [rbp+1Fh] BYREF
  __int128 v12; // [rsp+68h] [rbp+2Fh]
  __int64 v13; // [rsp+78h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]

  wil::srwlock::lock_exclusive((__int64)&ToastSettingsHelper::m_regCheckLock, (__int64)&v8);
  if ( !ToastSettingsHelper::m_regCached )
  {
    v0 = std::wstring::wstring(v9, L"Software\\Microsoft\\Windows\\CurrentVersion\\Notifications");
    v10 = -2147483646LL;
    v12 = 0LL;
    v11 = *(_OWORD *)v0;
    v12 = *((_OWORD *)v0 + 1);
    v0[2] = 0LL;
    v0[3] = 7LL;
    *(_WORD *)v0 = 0;
    v13 = 0LL;
    std::wstring::~wstring((void **)v0);
    v7 = 0;
    v2 = RegistryDataHelper::ReadData<unsigned long,24>((__int64)&v10, v1, 0, &v7);
    v3 = v2;
    if ( v2 >= 0 )
      v3 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5F,
        (__int64)"internal\\shellcommonshell\\inc\\RegistryDataHelper.h",
        (const char *)(unsigned int)v2);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2D,
        (int)"internal\\shellcommonshell\\inc\\ToastSettingsHelper.h",
        (const char *)(unsigned int)v3,
        v7);
    v4 = ToastSettingsHelper::m_disabledViaRegistry;
    if ( v7 )
      v4 = 1;
    ToastSettingsHelper::m_disabledViaRegistry = v4;
    ToastSettingsHelper::m_regCached = 1;
    std::wstring::~wstring((void **)&v11);
  }
  v5 = ToastSettingsHelper::m_disabledViaRegistry;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v8);
  return v5;
}
