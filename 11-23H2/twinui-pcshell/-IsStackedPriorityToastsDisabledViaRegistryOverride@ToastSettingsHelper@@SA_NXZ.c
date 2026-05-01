/*
 * XREFs of ?IsStackedPriorityToastsDisabledViaRegistryOverride@ToastSettingsHelper@@SA_NXZ @ 0x180436880
 * Callers:
 *     ?IsStackedPriorityToastsEnabled@ToastSettingsHelper@@SA_NXZ @ 0x1804369D0 (-IsStackedPriorityToastsEnabled@ToastSettingsHelper@@SA_NXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReadUInt32@RegistryDataHelper@@QEBAJPEBGIPEAI@Z @ 0x1801B12EC (-ReadUInt32@RegistryDataHelper@@QEBAJPEBGIPEAI@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
bool ToastSettingsHelper::IsStackedPriorityToastsDisabledViaRegistryOverride(void)
{
  _QWORD *v0; // rax
  int v1; // eax
  char v2; // al
  bool v3; // bl
  unsigned int v5; // [rsp+20h] [rbp-19h] BYREF
  RTL_SRWLOCK *v6; // [rsp+28h] [rbp-11h]
  _QWORD v7[4]; // [rsp+30h] [rbp-9h] BYREF
  _BYTE v8[24]; // [rsp+50h] [rbp+17h] BYREF
  __int128 v9; // [rsp+68h] [rbp+2Fh]
  __int64 v10; // [rsp+78h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]

  AcquireSRWLockExclusive(&ToastSettingsHelper::m_regCheckLock);
  v6 = &ToastSettingsHelper::m_regCheckLock;
  if ( !ToastSettingsHelper::m_regCached )
  {
    v0 = std::wstring::wstring(v7, L"Software\\Microsoft\\Windows\\CurrentVersion\\Notifications");
    *(__m128i *)v8 = _mm_load_si128((const __m128i *)&_xmm);
    v9 = 0LL;
    *(_OWORD *)&v8[8] = *(_OWORD *)v0;
    v9 = *((_OWORD *)v0 + 1);
    v0[2] = 0LL;
    v0[3] = 7LL;
    *(_WORD *)v0 = 0;
    v10 = 0LL;
    std::wstring::_Tidy_deallocate((__int64)v0);
    v5 = 0;
    v1 = RegistryDataHelper::ReadUInt32((RegistryDataHelper *)v8, L"DisableStackedPriorityToasts", 0, &v5);
    if ( v1 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2D,
        (int)"shellcommon\\internal\\shell\\inc\\ToastSettingsHelper.h",
        (const char *)(unsigned int)v1,
        v5);
    v2 = ToastSettingsHelper::m_disabledViaRegistry;
    if ( v5 )
      v2 = 1;
    ToastSettingsHelper::m_disabledViaRegistry = v2;
    ToastSettingsHelper::m_regCached = 1;
    std::wstring::_Tidy_deallocate((__int64)&v8[8]);
  }
  v3 = ToastSettingsHelper::m_disabledViaRegistry;
  ReleaseSRWLockExclusive(&ToastSettingsHelper::m_regCheckLock);
  return v3;
}
