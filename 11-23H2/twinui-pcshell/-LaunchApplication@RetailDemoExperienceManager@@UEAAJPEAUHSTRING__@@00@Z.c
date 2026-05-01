/*
 * XREFs of ?LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z @ 0x1804579F0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180098510 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x1800AD0F0 (-Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x1800EA908 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_Close@RetailDemoExperienceManager@@AEAAXXZ @ 0x180458A04 (-_Close@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     ?_ParseExperienceArguments@RetailDemoExperienceManager@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180458D88 (-_ParseExperienceArguments@RetailDemoExperienceManager@@AEAAXAEBV-$basic_string@GU-$char_traits@.c)
 *     ?_Show@RetailDemoExperienceManager@@AEAAXXZ @ 0x18045954C (-_Show@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_CRITICAL_SECTION@@@Z @ 0x1804596EC (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCritic.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
__int64 __fastcall RetailDemoExperienceManager::LaunchApplication(
        RetailDemoExperienceManager *this,
        HSTRING a2,
        HSTRING a3,
        HSTRING a4)
{
  WCHAR *StringRawBuffer; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r8
  WCHAR *v11; // rax
  _WORD *v12; // rbx
  WCHAR *v13; // rax
  _WORD *v14; // rdx
  __int128 v15; // xmm2
  __int128 v16; // xmm3
  const WCHAR *v17; // rdx
  const unsigned __int16 *v18; // rcx
  int v19; // eax
  char *v20; // rsi
  const WCHAR *v21; // r8
  const WCHAR *v22; // rcx
  void *v23; // rbx
  DWORD v24; // eax
  char *v25; // r14
  WCHAR *v26; // rax
  __int128 v27; // xmm2
  __int128 v28; // xmm3
  int v29; // eax
  const WCHAR *v30; // rax
  const WCHAR *v31; // rbx
  const WCHAR *v32; // rcx
  WCHAR *v33; // rax
  const unsigned __int16 *v34; // rcx
  int v35; // eax
  BOOL bIgnoreCase; // [rsp+20h] [rbp-B8h]
  BOOL bIgnoreCasea; // [rsp+20h] [rbp-B8h]
  BOOL bIgnoreCaseb; // [rsp+20h] [rbp-B8h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-A8h] BYREF
  LPCWCH lpString1[2]; // [rsp+38h] [rbp-A0h] BYREF
  __int128 v42; // [rsp+48h] [rbp-90h]
  _QWORD v43[4]; // [rsp+58h] [rbp-80h] BYREF
  _QWORD v44[4]; // [rsp+78h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)((char *)this + 336));
  StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(a4, 0LL);
  v9 = -1LL;
  v10 = -1LL;
  do
    ++v10;
  while ( StringRawBuffer[v10] );
  std::wstring::assign((char *)this + 184, StringRawBuffer, v10);
  RetailDemoExperienceManager::_ParseExperienceArguments((char *)this - 128, (char *)this + 184);
  v11 = (WCHAR *)WindowsGetStringRawBuffer(a2, 0LL);
  std::wstring::wstring(lpString1, v11);
  if ( *((_QWORD *)this + 9) )
  {
    if ( !*((_QWORD *)this + 17) )
      goto LABEL_31;
    v20 = (char *)this + 120;
    v21 = (const WCHAR *)((char *)this + 120);
    if ( *((_QWORD *)this + 18) >= 8uLL )
      v21 = *(const WCHAR **)v20;
    v22 = (const WCHAR *)lpString1;
    if ( *((_QWORD *)&v42 + 1) >= 8uLL )
      v22 = lpString1[0];
    if ( CompareStringOrdinal(v22, -1, v21, -1, 1) == 2 )
    {
LABEL_31:
      v30 = WindowsGetStringRawBuffer(a3, 0LL);
      v31 = (const WCHAR *)((char *)this + 152);
      v32 = (const WCHAR *)((char *)this + 152);
      if ( *((_QWORD *)this + 22) >= 8uLL )
        v32 = *(const WCHAR **)v31;
      if ( CompareStringOrdinal(v32, -1, v30, -1, 1) != 2 )
      {
        v33 = (WCHAR *)WindowsGetStringRawBuffer(a3, 0LL);
        do
          ++v9;
        while ( v33[v9] );
        std::wstring::assign((char *)this + 152, v33, v9);
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::reset(
          &lpCriticalSection,
          0LL);
        if ( *((_QWORD *)this + 22) >= 8uLL )
          v31 = *(const WCHAR **)v31;
        v34 = (const unsigned __int16 *)((char *)this + 120);
        if ( *((_QWORD *)this + 18) >= 8uLL )
          v34 = *(const unsigned __int16 **)v34;
        v35 = ActivateApplicationForExperienceWithPropertySet(
                v34,
                v31,
                (__int64)L"Windows.Internal.ShellExperience.RetailDemo",
                0LL,
                1u,
                0LL);
        if ( v35 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x1C7,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
            (const char *)(unsigned int)v35,
            bIgnoreCaseb);
      }
      RetailDemoExperienceManager::_Show((RetailDemoExperienceManager *)((char *)this - 128));
    }
    else
    {
      RetailDemoExperienceManager::_Close((RetailDemoExperienceManager *)((char *)this - 128));
      v23 = (void *)*((_QWORD *)this + 41);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::reset(
        &lpCriticalSection,
        0LL);
      v24 = WaitForSingleObject(v23, 0x1388u);
      wil::details::in1diag3::Log_HrIfMsg(
        retaddr,
        (void *)0x1BA,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)0x8000FFFFLL,
        v24 == 258,
        (__int64)"RDX Experience Manager timeout waiting for close",
        (const char *)lpCriticalSection);
      v25 = (char *)this + 152;
      v26 = (WCHAR *)WindowsGetStringRawBuffer(a3, 0LL);
      do
        ++v9;
      while ( v26[v9] );
      std::wstring::assign(v25, v26, v9);
      v27 = *(_OWORD *)v20;
      v28 = *((_OWORD *)v20 + 1);
      *(_OWORD *)v20 = *(_OWORD *)lpString1;
      *((_OWORD *)v20 + 1) = v42;
      *(_OWORD *)lpString1 = v27;
      v42 = v28;
      if ( *((_QWORD *)v25 + 3) >= 8uLL )
        v25 = *(char **)v25;
      if ( *((_QWORD *)v20 + 3) >= 8uLL )
        v20 = *(char **)v20;
      v29 = ActivateApplicationForExperienceWithPropertySet(
              (const unsigned __int16 *)v20,
              (const WCHAR *)v25,
              (__int64)L"Windows.Internal.ShellExperience.RetailDemo",
              0LL,
              1u,
              0LL);
      if ( v29 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x1BE,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v29,
          bIgnoreCasea);
    }
  }
  else
  {
    v12 = (_WORD *)((char *)this + 152);
    v13 = (WCHAR *)WindowsGetStringRawBuffer(a3, 0LL);
    do
      ++v9;
    while ( v13[v9] );
    std::wstring::assign((char *)this + 152, v13, v9);
    v14 = (_WORD *)((char *)this + 120);
    v15 = *(_OWORD *)((char *)this + 120);
    v16 = *(_OWORD *)((char *)this + 136);
    *(_OWORD *)((char *)this + 120) = *(_OWORD *)lpString1;
    *(_OWORD *)((char *)this + 136) = v42;
    *(_OWORD *)lpString1 = v15;
    v42 = v16;
    if ( *((_QWORD *)this + 18) >= 8uLL )
      v14 = *(_WORD **)v14;
    std::wstring::wstring(v44, v14);
    if ( *((_QWORD *)this + 22) >= 8uLL )
      v12 = *(_WORD **)v12;
    std::wstring::wstring(v43, v12);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::reset(
      &lpCriticalSection,
      0LL);
    v17 = (const WCHAR *)v43;
    if ( v43[3] >= 8uLL )
      v17 = (const WCHAR *)v43[0];
    v18 = (const unsigned __int16 *)v44;
    if ( v44[3] >= 8uLL )
      v18 = (const unsigned __int16 *)v44[0];
    v19 = ActivateApplicationForExperienceWithPropertySet(
            v18,
            v17,
            (__int64)L"Windows.Internal.ShellExperience.RetailDemo",
            0LL,
            1u,
            0LL);
    if ( v19 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1AA,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v19,
        bIgnoreCase);
    std::wstring::_Tidy_deallocate((__int64)v43);
    std::wstring::_Tidy_deallocate((__int64)v44);
  }
  std::wstring::_Tidy_deallocate((__int64)lpString1);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
