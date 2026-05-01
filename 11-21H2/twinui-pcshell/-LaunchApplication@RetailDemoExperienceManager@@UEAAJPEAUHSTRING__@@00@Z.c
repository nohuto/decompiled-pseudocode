/*
 * XREFs of ?LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z @ 0x180383030
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180089570 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18009EBB4 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x1800A46A0 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 *     ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x1800E186C (-Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18010AACC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?_Close@RetailDemoExperienceManager@@AEAAXXZ @ 0x180384038 (-_Close@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     ?_ParseExperienceArguments@RetailDemoExperienceManager@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180384398 (-_ParseExperienceArguments@RetailDemoExperienceManager@@AEAAXAEBV-$basic_string@GU-$char_traits@.c)
 *     ?_Show@RetailDemoExperienceManager@@AEAAXXZ @ 0x180384B5C (-_Show@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180384D8C (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCritic.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
__int64 __fastcall RetailDemoExperienceManager::LaunchApplication(
        RetailDemoExperienceManager *this,
        HSTRING a2,
        HSTRING a3,
        HSTRING a4)
{
  char *v8; // rbx
  PCWSTR StringRawBuffer; // rax
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r8
  WCHAR *v12; // rax
  _WORD *v13; // rbx
  PCWSTR v14; // rax
  _WORD *v15; // rdx
  __int128 v16; // xmm2
  __int128 v17; // xmm3
  const WCHAR *v18; // rdx
  const unsigned __int16 *v19; // rcx
  int v20; // eax
  char *v21; // rsi
  const WCHAR *v22; // r8
  const WCHAR *v23; // rcx
  void *v24; // rbx
  DWORD v25; // eax
  char *v26; // r14
  PCWSTR v27; // rax
  __int128 v28; // xmm2
  __int128 v29; // xmm3
  int v30; // eax
  const WCHAR *v31; // rax
  const WCHAR *v32; // rbx
  const WCHAR *v33; // rcx
  PCWSTR v34; // rax
  const unsigned __int16 *v35; // rcx
  int v36; // eax
  BOOL bIgnoreCase; // [rsp+20h] [rbp-B8h]
  BOOL bIgnoreCasea; // [rsp+20h] [rbp-B8h]
  BOOL bIgnoreCaseb; // [rsp+20h] [rbp-B8h]
  char *v41; // [rsp+30h] [rbp-A8h] BYREF
  LPCWCH lpString1[2]; // [rsp+38h] [rbp-A0h] BYREF
  __int128 v43; // [rsp+48h] [rbp-90h]
  _QWORD v44[4]; // [rsp+58h] [rbp-80h] BYREF
  _QWORD v45[4]; // [rsp+78h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  v8 = (char *)this + 336;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 336));
  v41 = v8;
  StringRawBuffer = WindowsGetStringRawBuffer(a4, 0LL);
  v10 = -1LL;
  v11 = -1LL;
  do
    ++v11;
  while ( StringRawBuffer[v11] );
  std::wstring::assign((char *)this + 184, StringRawBuffer, v11);
  RetailDemoExperienceManager::_ParseExperienceArguments((char *)this - 128, (char *)this + 184);
  v12 = (WCHAR *)WindowsGetStringRawBuffer(a2, 0LL);
  std::wstring::wstring(lpString1, v12);
  if ( *((_QWORD *)this + 9) )
  {
    if ( !*((_QWORD *)this + 17) )
      goto LABEL_31;
    v21 = (char *)this + 120;
    v22 = (const WCHAR *)((char *)this + 120);
    if ( *((_QWORD *)this + 18) >= 8uLL )
      v22 = *(const WCHAR **)v21;
    v23 = (const WCHAR *)lpString1;
    if ( *((_QWORD *)&v43 + 1) >= 8uLL )
      v23 = lpString1[0];
    if ( CompareStringOrdinal(v23, -1, v22, -1, 1) == 2 )
    {
LABEL_31:
      v31 = WindowsGetStringRawBuffer(a3, 0LL);
      v32 = (const WCHAR *)((char *)this + 152);
      v33 = (const WCHAR *)((char *)this + 152);
      if ( *((_QWORD *)this + 22) >= 8uLL )
        v33 = *(const WCHAR **)v32;
      if ( CompareStringOrdinal(v33, -1, v31, -1, 1) == 2 )
      {
        RetailDemoExperienceManager::_Show((RetailDemoExperienceManager *)((char *)this - 128));
      }
      else
      {
        v34 = WindowsGetStringRawBuffer(a3, 0LL);
        do
          ++v10;
        while ( v34[v10] );
        std::wstring::assign((char *)this + 152, v34, v10);
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::reset(
          &v41,
          0LL);
        if ( *((_QWORD *)this + 22) >= 8uLL )
          v32 = *(const WCHAR **)v32;
        v35 = (const unsigned __int16 *)((char *)this + 120);
        if ( *((_QWORD *)this + 18) >= 8uLL )
          v35 = *(const unsigned __int16 **)v35;
        v36 = ActivateApplicationForExperienceWithPropertySet(
                v35,
                v32,
                (__int64)L"Windows.Internal.ShellExperience.RetailDemo",
                0LL,
                1u,
                0LL);
        if ( v36 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x1C7,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
            (const char *)(unsigned int)v36,
            bIgnoreCaseb);
        RetailDemoExperienceManager::_Show((RetailDemoExperienceManager *)((char *)this - 128));
      }
    }
    else
    {
      RetailDemoExperienceManager::_Close((RetailDemoExperienceManager *)((char *)this - 128));
      v24 = (void *)*((_QWORD *)this + 41);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::reset(
        &v41,
        0LL);
      v25 = WaitForSingleObject(v24, 0x1388u);
      wil::details::in1diag3::Log_HrIfMsg(
        retaddr,
        (void *)0x1BA,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)0x8000FFFFLL,
        v25 == 258,
        (__int64)"RDX Experience Manager timeout waiting for close",
        v41);
      v26 = (char *)this + 152;
      v27 = WindowsGetStringRawBuffer(a3, 0LL);
      do
        ++v10;
      while ( v27[v10] );
      std::wstring::assign(v26, v27, v10);
      v28 = *(_OWORD *)v21;
      v29 = *((_OWORD *)v21 + 1);
      *(_OWORD *)v21 = *(_OWORD *)lpString1;
      *((_OWORD *)v21 + 1) = v43;
      *(_OWORD *)lpString1 = v28;
      v43 = v29;
      if ( *((_QWORD *)v26 + 3) >= 8uLL )
        v26 = *(char **)v26;
      if ( *((_QWORD *)v21 + 3) >= 8uLL )
        v21 = *(char **)v21;
      v30 = ActivateApplicationForExperienceWithPropertySet(
              (const unsigned __int16 *)v21,
              (const WCHAR *)v26,
              (__int64)L"Windows.Internal.ShellExperience.RetailDemo",
              0LL,
              1u,
              0LL);
      if ( v30 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x1BE,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v30,
          bIgnoreCasea);
    }
  }
  else
  {
    v13 = (_WORD *)((char *)this + 152);
    v14 = WindowsGetStringRawBuffer(a3, 0LL);
    do
      ++v10;
    while ( v14[v10] );
    std::wstring::assign((char *)this + 152, v14, v10);
    v15 = (_WORD *)((char *)this + 120);
    v16 = *(_OWORD *)((char *)this + 120);
    v17 = *(_OWORD *)((char *)this + 136);
    *(_OWORD *)((char *)this + 120) = *(_OWORD *)lpString1;
    *(_OWORD *)((char *)this + 136) = v43;
    *(_OWORD *)lpString1 = v16;
    v43 = v17;
    if ( *((_QWORD *)this + 18) >= 8uLL )
      v15 = *(_WORD **)v15;
    std::wstring::wstring(v45, v15);
    if ( *((_QWORD *)this + 22) >= 8uLL )
      v13 = *(_WORD **)v13;
    std::wstring::wstring(v44, v13);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::reset(
      &v41,
      0LL);
    v18 = (const WCHAR *)v44;
    if ( v44[3] >= 8uLL )
      v18 = (const WCHAR *)v44[0];
    v19 = (const unsigned __int16 *)v45;
    if ( v45[3] >= 8uLL )
      v19 = (const unsigned __int16 *)v45[0];
    v20 = ActivateApplicationForExperienceWithPropertySet(
            v19,
            v18,
            (__int64)L"Windows.Internal.ShellExperience.RetailDemo",
            0LL,
            1u,
            0LL);
    if ( v20 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1AA,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v20,
        bIgnoreCase);
    std::wstring::_Tidy_deallocate((__int64)v44);
    std::wstring::_Tidy_deallocate((__int64)v45);
  }
  std::wstring::_Tidy_deallocate((__int64)lpString1);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>((struct _RTL_CRITICAL_SECTION **)&v41);
  return 0LL;
}
