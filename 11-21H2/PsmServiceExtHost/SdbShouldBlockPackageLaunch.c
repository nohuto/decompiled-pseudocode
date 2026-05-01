/*
 * XREFs of SdbShouldBlockPackageLaunch @ 0x180030400
 * Callers:
 *     ?HampAppCreate@@YAJPEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@KPEAPEAU_HAM_APPLICATION@@@Z @ 0x18000BD4C (-HampAppCreate@@YAJPEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@KPEAPEAU_HAM_APPLICATION@@@Z.c)
 * Callees:
 *     CompatCacheLookupPackage @ 0x18002FE90 (CompatCacheLookupPackage.c)
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1800305C4 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlStringCchCopyW @ 0x180094FC4 (RtlStringCchCopyW.c)
 *     StringCchCatW @ 0x1800950B4 (StringCchCatW.c)
 *     SdbReleaseDatabase @ 0x180095694 (SdbReleaseDatabase.c)
 *     SdbInitDatabase @ 0x180095D30 (SdbInitDatabase.c)
 *     SdbTagRefToTagID @ 0x180096314 (SdbTagRefToTagID.c)
 *     SdbpApphelpExeInfo @ 0x180096860 (SdbpApphelpExeInfo.c)
 *     SdbpEscapeQuoteInMsg @ 0x180096C80 (SdbpEscapeQuoteInMsg.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbShouldBlockPackageLaunch(const wchar_t *a1, __int64 a2, _DWORD *a3, int a4)
{
  HMODULE v4; // rsi
  unsigned int v6; // r14d
  void *v7; // rdi
  unsigned __int16 *v9; // r12
  void *v10; // r15
  int ValueW; // eax
  unsigned int *v12; // rbx
  const char *v14; // r9
  int v15; // r8d
  HMODULE Library; // rax
  const char *v17; // r9
  int v18; // r8d
  FARPROC ProcAddress; // rax
  __int64 v20; // r8
  wchar_t *v21; // rcx
  wchar_t v22; // ax
  wchar_t *v23; // rax
  __int64 v24; // r8
  wchar_t *v25; // rax
  __int64 v26; // r9
  wchar_t *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rax
  char *v30; // r8
  wchar_t v31; // r9
  wchar_t *v32; // rax
  HRESULT v33; // eax
  LSTATUS v34; // eax
  __int64 v35; // rcx
  LSTATUS v36; // eax
  __int64 inited; // rax
  __int64 v38; // rcx
  int v39; // ebx
  int v40; // ebx
  const unsigned __int16 *v41; // r8
  void *v42; // r11
  LSTATUS v43; // eax
  LSTATUS v44; // eax
  LSTATUS v45; // eax
  LSTATUS v46; // eax
  LSTATUS v47; // eax
  PHKEY phkResult; // [rsp+20h] [rbp-E0h]
  PVOID pvData; // [rsp+28h] [rbp-D8h]
  HKEY hkey; // [rsp+50h] [rbp-B0h] BYREF
  DWORD cbData; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v52; // [rsp+5Ch] [rbp-A4h] BYREF
  DWORD pcbData; // [rsp+60h] [rbp-A0h] BYREF
  DWORD v54; // [rsp+64h] [rbp-9Ch] BYREF
  _DWORD *v55; // [rsp+68h] [rbp-98h]
  PVOID P; // [rsp+70h] [rbp-90h] BYREF
  int v57; // [rsp+78h] [rbp-88h] BYREF
  int v58; // [rsp+80h] [rbp-80h] BYREF
  STRSAFE_LPCWSTR pszSrc; // [rsp+88h] [rbp-78h]
  __int64 v60; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v61[56]; // [rsp+A0h] [rbp-60h] BYREF
  int v62; // [rsp+D8h] [rbp-28h]
  __int64 v63; // [rsp+E0h] [rbp-20h]
  __int64 v64; // [rsp+E8h] [rbp-18h]
  int v65; // [rsp+110h] [rbp+10h]
  int v66; // [rsp+114h] [rbp+14h]
  BYTE v67[100]; // [rsp+130h] [rbp+30h] BYREF
  BYTE v68[100]; // [rsp+194h] [rbp+94h] BYREF
  BYTE Data[4]; // [rsp+1F8h] [rbp+F8h] BYREF
  BYTE v70[4]; // [rsp+1FCh] [rbp+FCh] BYREF
  BYTE v71[4]; // [rsp+200h] [rbp+100h] BYREF
  _BYTE v72[524]; // [rsp+204h] [rbp+104h] BYREF
  wchar_t pszDest[400]; // [rsp+410h] [rbp+310h] BYREF

  v4 = 0LL;
  v55 = a3;
  pszSrc = a1;
  P = 0LL;
  v58 = 0;
  v60 = 0LL;
  v6 = 0;
  v52 = 0;
  v7 = 0LL;
  memset_0(v61, 0, 0x88uLL);
  memset_0(v67, 0, 0x2D4uLL);
  hkey = 0LL;
  memset_0(pszDest, 0, sizeof(pszDest));
  cbData = 4;
  pcbData = 100;
  v54 = 100;
  v57 = 3;
  v9 = 0LL;
  v10 = 0LL;
  *v55 = 0;
  if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(
                       (unsigned int)&Feature_PackagedAppLaunchBlock__private_reporting,
                       25462063,
                       0,
                       0,
                       2)
    && g_wil_details_pfnFeatureLoggingHook )
  {
    HIDWORD(pvData) = 0;
    phkResult = (PHKEY)&v57;
    g_wil_details_pfnFeatureLoggingHook(25462063LL, &Feature_PackagedAppLaunchBlock_logged_traits, 0LL, 1LL);
  }
  ValueW = CompatCacheLookupPackage(&P, &v58, (__int64)pszSrc, a2);
  if ( ValueW < 0 )
  {
    v14 = "CompatCacheLookupPackage failed [%x]";
    v15 = 429;
    goto LABEL_22;
  }
  v12 = (unsigned int *)P;
  if ( !P || !*((_DWORD *)P + 41) )
    goto LABEL_4;
  if ( _InterlockedCompareExchange(&dword_1800DC7A4, 0, 1) )
  {
    Library = LoadLibraryExW(L"ntdll.dll", 0LL, 0x800u);
    v4 = Library;
    if ( !Library )
    {
      v17 = "Load ntdll failed";
      v18 = 446;
LABEL_86:
      AslLogCallPrintf(1, (unsigned int)"SdbShouldBlockPackageLaunch", v18, (_DWORD)v17, (char)phkResult);
      goto LABEL_23;
    }
    ProcAddress = GetProcAddress(Library, "RtlGetPersistedStateLocation");
    if ( !ProcAddress )
    {
      v17 = "Get RtlGetPersistedStateLocation failed";
      v18 = 453;
      goto LABEL_86;
    }
    LODWORD(pvData) = 240;
    if ( ((int (__fastcall *)(const wchar_t *, _QWORD, _QWORD, _QWORD, wchar_t *, PVOID, _QWORD))ProcAddress)(
           L"AppCompatFlags",
           0LL,
           0LL,
           0LL,
           ::pszSrc,
           pvData,
           0LL) < 0 )
    {
      v20 = 120LL;
      v21 = ::pszSrc;
      do
      {
        if ( v20 == -2147483526 )
          break;
        v22 = *(wchar_t *)((char *)v21
                         + (char *)L"Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags"
                         - (char *)::pszSrc);
        if ( !v22 )
          break;
        *v21++ = v22;
        --v20;
      }
      while ( v20 );
      v23 = v21 - 1;
      if ( v20 )
        v23 = v21;
      *v23 = 0;
      if ( !v20 )
      {
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbShouldBlockPackageLaunch",
          468,
          (unsigned int)"StringCchCopyW failed [%x]",
          122);
        goto LABEL_23;
      }
    }
    v24 = 120LL;
    v25 = ::pszSrc;
    do
    {
      if ( !*v25 )
        break;
      ++v25;
      --v24;
    }
    while ( v24 );
    v26 = (120 - v24) & -(__int64)(v24 != 0);
    if ( v24 )
    {
      v27 = &::pszSrc[v26];
      v28 = 120 - v26;
      if ( 120 != v26 )
      {
        v29 = 2147483646LL;
        v30 = (char *)((char *)L"\\PackagedApps\\" - (char *)v27);
        do
        {
          if ( !v29 )
            break;
          v31 = *(_WORD *)&v30[(_QWORD)v27];
          if ( !v31 )
            break;
          *v27 = v31;
          --v29;
          ++v27;
          --v28;
        }
        while ( v28 );
      }
      v32 = v27 - 1;
      if ( v28 )
        v32 = v27;
      *v32 = 0;
    }
  }
  StringCchCatW(pszDest, 0x190uLL, ::pszSrc);
  v33 = StringCchCatW(pszDest, 0x190uLL, pszSrc);
  if ( v33 < 0 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbShouldBlockPackageLaunch",
      479,
      (unsigned int)"StringCchCatW failed [%x]",
      v33);
    goto LABEL_23;
  }
  v34 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, pszDest, 0, 0xF003Fu, &hkey);
  v35 = 0LL;
  if ( !v34 )
  {
    ValueW = RegGetValueW(hkey, 0LL, L"dwBlock", 0x18u, 0LL, Data, &cbData);
    if ( ValueW )
    {
      v14 = "RegGetValue failed %d";
      v15 = 497;
      goto LABEL_22;
    }
    if ( *(_DWORD *)Data )
    {
      if ( *(_DWORD *)Data == 2 )
        *v55 = 1;
      if ( !a4 )
        goto LABEL_105;
      ValueW = RegGetValueW(hkey, 0LL, L"dwFwLinkNumber", 0x18u, 0LL, v70, &cbData);
      if ( ValueW )
      {
        v14 = "RegGetValue failed %d";
        v15 = 519;
        goto LABEL_22;
      }
      ValueW = RegGetValueW(hkey, 0LL, L"dwKbNumber", 0x18u, 0LL, v71, &cbData);
      if ( ValueW )
      {
        v14 = "RegGetValue failed %d";
        v15 = 531;
        goto LABEL_22;
      }
      ValueW = RegGetValueW(hkey, 0LL, L"AppName", 2u, 0LL, v67, &pcbData);
      if ( ValueW )
      {
        v14 = "RegGetValue failed %d";
        v15 = 543;
        goto LABEL_22;
      }
      ValueW = RegGetValueW(hkey, 0LL, L"VendorName", 2u, 0LL, v68, &v54);
      if ( ValueW )
      {
        v14 = "RegGetValue failed %d";
        v15 = 555;
        goto LABEL_22;
      }
      goto LABEL_102;
    }
LABEL_4:
    v6 = 1;
    goto LABEL_5;
  }
  if ( !hkey )
  {
    v36 = RegCreateKeyExW(HKEY_LOCAL_MACHINE, pszDest, 0, 0LL, 0, 0xF003Fu, 0LL, &hkey, 0LL);
    if ( v36 )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbShouldBlockPackageLaunch",
        571,
        (unsigned int)"RegCreateKeyEx failed %d",
        v36);
      goto LABEL_23;
    }
  }
  inited = SdbInitDatabase(v35);
  v7 = (void *)inited;
  if ( !inited )
  {
    v17 = "SdbInitDatabase failed";
    v18 = 582;
    goto LABEL_86;
  }
  if ( !(unsigned int)SdbTagRefToTagID(inited, v12[41], &v60, &v52)
    || !v60
    || !(unsigned int)SdbpApphelpExeInfo(v38, v60, v52, v61) )
  {
    goto LABEL_23;
  }
  v39 = v62;
  *v55 = v62 == 2;
  v9 = (unsigned __int16 *)SdbpEscapeQuoteInMsg(v63);
  v10 = (void *)SdbpEscapeQuoteInMsg(v64);
  v40 = v39 - 1;
  if ( v40 )
  {
    if ( v40 == 1 )
      *(_DWORD *)Data = 2;
  }
  else
  {
    *(_DWORD *)Data = 1;
  }
  v41 = &word_1800B7A9C;
  if ( v9 )
    v41 = v9;
  if ( (int)RtlStringCchCopyW(v67, 50LL, v41) < 0 )
  {
    v17 = "AppName is too long";
    v18 = 624;
    goto LABEL_86;
  }
  if ( v10 )
    v42 = v10;
  if ( (int)RtlStringCchCopyW(v68, 50LL, v42) < 0 )
  {
    v17 = "VendorName is too long";
    v18 = 632;
    goto LABEL_86;
  }
  *(_DWORD *)v70 = v65;
  *(_DWORD *)v71 = v66;
  v43 = RegSetValueExW(hkey, L"dwBlock", 0, 4u, Data, cbData);
  if ( v43 )
    AslLogCallPrintf(1, (unsigned int)"SdbShouldBlockPackageLaunch", 646, (unsigned int)"RegSetValueEx failed %d", v43);
  v44 = RegSetValueExW(hkey, L"dwFwLinkNumber", 0, 4u, v70, cbData);
  if ( v44 )
    AslLogCallPrintf(1, (unsigned int)"SdbShouldBlockPackageLaunch", 656, (unsigned int)"RegSetValueEx failed %d", v44);
  v45 = RegSetValueExW(hkey, L"dwKbNumber", 0, 4u, v71, cbData);
  if ( v45 )
    AslLogCallPrintf(1, (unsigned int)"SdbShouldBlockPackageLaunch", 666, (unsigned int)"RegSetValueEx failed %d", v45);
  v46 = RegSetValueExW(hkey, L"AppName", 0, 1u, v67, pcbData);
  if ( v46 )
    AslLogCallPrintf(1, (unsigned int)"SdbShouldBlockPackageLaunch", 676, (unsigned int)"RegSetValueEx failed %d", v46);
  v47 = RegSetValueExW(hkey, L"VendorName", 0, 1u, v68, v54);
  if ( v47 )
    AslLogCallPrintf(1, (unsigned int)"SdbShouldBlockPackageLaunch", 686, (unsigned int)"RegSetValueEx failed %d", v47);
  if ( a4 )
  {
LABEL_102:
    if ( !*(_DWORD *)Data )
      goto LABEL_105;
    if ( (int)RtlStringCchCopyW(v72, 256LL, pszSrc) < 0 )
    {
      v17 = "PackageFullName is too long";
      v18 = 695;
      goto LABEL_86;
    }
    ValueW = RtlPublishWnfStateData(WNF_CMPT_BLOCKED_APP, 0LL, v67, 724LL, 0LL);
    if ( ValueW >= 0 )
      goto LABEL_105;
    v14 = "RtlPublishWnfStateData failed, 0x%x";
    v15 = 708;
LABEL_22:
    AslLogCallPrintf(1, (unsigned int)"SdbShouldBlockPackageLaunch", v15, (_DWORD)v14, ValueW);
LABEL_23:
    *v55 = 0;
    goto LABEL_24;
  }
LABEL_105:
  v6 = 1;
LABEL_24:
  if ( v7 )
    SdbReleaseDatabase(v7);
LABEL_5:
  if ( hkey )
  {
    RegCloseKey(hkey);
    hkey = 0LL;
  }
  if ( v4 )
    FreeLibrary(v4);
  if ( v9 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
  if ( v10 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
  if ( P )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return v6;
}
