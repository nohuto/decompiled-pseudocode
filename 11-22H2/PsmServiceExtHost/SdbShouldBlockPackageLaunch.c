/*
 * XREFs of SdbShouldBlockPackageLaunch @ 0x1800336CC
 * Callers:
 *     ?HampAppCreate@@YAJPEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@KPEAPEAU_HAM_APPLICATION@@@Z @ 0x180032E18 (-HampAppCreate@@YAJPEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@KPEAPEAU_HAM_APPLICATION@@@Z.c)
 * Callees:
 *     CompatCacheLookupPackage @ 0x180034070 (CompatCacheLookupPackage.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     Feature_PackagedAppLaunchBlock__private_ReportDeviceUsage @ 0x180051728 (Feature_PackagedAppLaunchBlock__private_ReportDeviceUsage.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180074ADC (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     StringCchCatW @ 0x18008FF84 (StringCchCatW.c)
 *     SdbReleaseDatabase @ 0x180090694 (SdbReleaseDatabase.c)
 *     SdbInitDatabase @ 0x180090D28 (SdbInitDatabase.c)
 *     SdbTagRefToTagID @ 0x180091478 (SdbTagRefToTagID.c)
 *     SdbpApphelpExeInfo @ 0x18009198C (SdbpApphelpExeInfo.c)
 *     SdbpEscapeQuoteInMsg @ 0x180091DAC (SdbpEscapeQuoteInMsg.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbShouldBlockPackageLaunch(const wchar_t *a1, int a2, _DWORD *a3, int a4)
{
  HMODULE v4; // r15
  int v6; // edi
  unsigned int v7; // r14d
  void *v8; // rsi
  unsigned __int16 *v9; // r13
  unsigned __int16 *v10; // r12
  int ValueW; // eax
  const char *v12; // r9
  int v13; // r8d
  unsigned int *v14; // rdi
  HMODULE Library; // rax
  const char *v16; // r9
  int v17; // r8d
  FARPROC ProcAddress; // rax
  __int64 v19; // r8
  wchar_t *v20; // rcx
  wchar_t v21; // ax
  wchar_t *v22; // rax
  __int64 v23; // r8
  wchar_t *v24; // rax
  __int64 v25; // r9
  wchar_t *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rax
  char *v29; // r8
  wchar_t v30; // r9
  wchar_t *v31; // rax
  HRESULT v32; // eax
  LSTATUS v33; // eax
  __int64 v34; // rcx
  LSTATUS v35; // eax
  __int64 inited; // rax
  __int64 v37; // rcx
  int v38; // edi
  int v39; // edi
  const unsigned __int16 *v40; // r8
  const unsigned __int16 *v41; // r11
  LSTATUS v42; // eax
  LSTATUS v43; // eax
  LSTATUS v44; // eax
  LSTATUS v45; // eax
  LSTATUS v46; // eax
  char phkResult; // [rsp+20h] [rbp-E0h]
  HKEY hkey; // [rsp+50h] [rbp-B0h] BYREF
  DWORD cbData; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v51; // [rsp+5Ch] [rbp-A4h] BYREF
  DWORD pcbData; // [rsp+60h] [rbp-A0h] BYREF
  DWORD v53; // [rsp+64h] [rbp-9Ch] BYREF
  int v54; // [rsp+68h] [rbp-98h]
  _DWORD *v55; // [rsp+70h] [rbp-90h]
  PVOID P; // [rsp+78h] [rbp-88h] BYREF
  int v57; // [rsp+80h] [rbp-80h] BYREF
  __int64 v58; // [rsp+88h] [rbp-78h] BYREF
  STRSAFE_LPCWSTR pszSrc; // [rsp+90h] [rbp-70h]
  _BYTE v60[56]; // [rsp+A0h] [rbp-60h] BYREF
  int v61; // [rsp+D8h] [rbp-28h]
  __int64 v62; // [rsp+E0h] [rbp-20h]
  __int64 v63; // [rsp+E8h] [rbp-18h]
  int v64; // [rsp+110h] [rbp+10h]
  int v65; // [rsp+114h] [rbp+14h]
  unsigned __int16 v66[50]; // [rsp+130h] [rbp+30h] BYREF
  unsigned __int16 v67[50]; // [rsp+194h] [rbp+94h] BYREF
  BYTE Data[4]; // [rsp+1F8h] [rbp+F8h] BYREF
  BYTE pvData[4]; // [rsp+1FCh] [rbp+FCh] BYREF
  BYTE v70[4]; // [rsp+200h] [rbp+100h] BYREF
  unsigned __int16 v71[262]; // [rsp+204h] [rbp+104h] BYREF
  wchar_t pszDest[400]; // [rsp+410h] [rbp+310h] BYREF

  v4 = 0LL;
  v55 = a3;
  pszSrc = a1;
  v6 = (int)a1;
  P = 0LL;
  v57 = 0;
  v58 = 0LL;
  v51 = 0;
  v7 = 0;
  v54 = a4;
  v8 = 0LL;
  memset_0(v60, 0, 0x88uLL);
  memset_0(v66, 0, 0x2D4uLL);
  hkey = 0LL;
  memset_0(pszDest, 0, sizeof(pszDest));
  cbData = 4;
  pcbData = 100;
  v53 = 100;
  v9 = 0LL;
  v10 = 0LL;
  *v55 = 0;
  Feature_PackagedAppLaunchBlock__private_ReportDeviceUsage();
  ValueW = CompatCacheLookupPackage((unsigned int)&P, (unsigned int)&v57, v6, a2);
  if ( ValueW < 0 )
  {
    v12 = "CompatCacheLookupPackage failed [%x]";
    v13 = 453;
LABEL_3:
    AslLogCallPrintf(1, (unsigned int)"SdbShouldBlockPackageLaunch", v13, (_DWORD)v12, ValueW);
LABEL_4:
    *v55 = 0;
    goto LABEL_5;
  }
  v14 = (unsigned int *)P;
  if ( !P || !*((_DWORD *)P + 41) )
  {
    v7 = 1;
    goto LABEL_93;
  }
  if ( _InterlockedCompareExchange(&dword_1800DB7D4, 0, 1) )
  {
    Library = LoadLibraryExW(L"ntdll.dll", 0LL, 0x800u);
    v4 = Library;
    if ( !Library )
    {
      v16 = "Load ntdll failed";
      v17 = 470;
LABEL_12:
      AslLogCallPrintf(1, (unsigned int)"SdbShouldBlockPackageLaunch", v17, (_DWORD)v16, phkResult);
      goto LABEL_4;
    }
    ProcAddress = GetProcAddress(Library, "RtlGetPersistedStateLocation");
    if ( !ProcAddress )
    {
      v16 = "Get RtlGetPersistedStateLocation failed";
      v17 = 477;
      goto LABEL_12;
    }
    if ( ((int (__fastcall *)(const wchar_t *, _QWORD, _QWORD, _QWORD, wchar_t *, int, _QWORD))ProcAddress)(
           L"AppCompatFlags",
           0LL,
           0LL,
           0LL,
           ::pszSrc,
           240,
           0LL) < 0 )
    {
      v19 = 120LL;
      v20 = ::pszSrc;
      do
      {
        if ( v19 == -2147483526 )
          break;
        v21 = *(wchar_t *)((char *)v20
                         + (char *)L"Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags"
                         - (char *)::pszSrc);
        if ( !v21 )
          break;
        *v20++ = v21;
        --v19;
      }
      while ( v19 );
      v22 = v20 - 1;
      if ( v19 )
        v22 = v20;
      *v22 = 0;
      if ( !v19 )
      {
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbShouldBlockPackageLaunch",
          492,
          (unsigned int)"StringCchCopyW failed [%x]",
          122);
        goto LABEL_4;
      }
    }
    v23 = 120LL;
    v24 = ::pszSrc;
    do
    {
      if ( !*v24 )
        break;
      ++v24;
      --v23;
    }
    while ( v23 );
    v25 = (120 - v23) & -(__int64)(v23 != 0);
    if ( v23 )
    {
      v26 = &::pszSrc[v25];
      v27 = 120 - v25;
      if ( 120 != v25 )
      {
        v28 = 2147483646LL;
        v29 = (char *)((char *)L"\\PackagedApps\\" - (char *)v26);
        do
        {
          if ( !v28 )
            break;
          v30 = *(wchar_t *)((char *)v26 + (_QWORD)v29);
          if ( !v30 )
            break;
          *v26 = v30;
          --v28;
          ++v26;
          --v27;
        }
        while ( v27 );
      }
      v31 = v26 - 1;
      if ( v27 )
        v31 = v26;
      *v31 = 0;
    }
  }
  StringCchCatW(pszDest, 0x190uLL, ::pszSrc);
  v32 = StringCchCatW(pszDest, 0x190uLL, pszSrc);
  if ( v32 < 0 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbShouldBlockPackageLaunch",
      503,
      (unsigned int)"StringCchCatW failed [%x]",
      v32);
    goto LABEL_4;
  }
  v33 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, pszDest, 0, 0xF003Fu, &hkey);
  v34 = 0LL;
  if ( v33 )
  {
    if ( !hkey )
    {
      v35 = RegCreateKeyExW(HKEY_LOCAL_MACHINE, pszDest, 0, 0LL, 0, 0xF003Fu, 0LL, &hkey, 0LL);
      if ( v35 )
      {
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbShouldBlockPackageLaunch",
          595,
          (unsigned int)"RegCreateKeyEx failed %d",
          v35);
        goto LABEL_4;
      }
    }
    inited = SdbInitDatabase(v34);
    v8 = (void *)inited;
    if ( !inited )
    {
      v16 = "SdbInitDatabase failed";
      v17 = 606;
      goto LABEL_12;
    }
    if ( !(unsigned int)SdbTagRefToTagID(inited, v14[41], &v58, &v51)
      || !v58
      || !(unsigned int)SdbpApphelpExeInfo(v37, v58, v51, v60) )
    {
      goto LABEL_4;
    }
    v38 = v61;
    *v55 = v61 == 2;
    v9 = (unsigned __int16 *)SdbpEscapeQuoteInMsg(v62);
    v10 = (unsigned __int16 *)SdbpEscapeQuoteInMsg(v63);
    v39 = v38 - 1;
    if ( v39 )
    {
      if ( v39 == 1 )
        *(_DWORD *)Data = 2;
    }
    else
    {
      *(_DWORD *)Data = 1;
    }
    v40 = &word_1800B66C4;
    if ( v9 )
      v40 = v9;
    if ( (int)RtlStringCchCopyW(v66, 0x32uLL, v40) < 0 )
    {
      v16 = "AppName is too long";
      v17 = 648;
      goto LABEL_12;
    }
    if ( v10 )
      v41 = v10;
    if ( (int)RtlStringCchCopyW(v67, 0x32uLL, v41) < 0 )
    {
      v16 = "VendorName is too long";
      v17 = 656;
      goto LABEL_12;
    }
    *(_DWORD *)pvData = v64;
    *(_DWORD *)v70 = v65;
    v42 = RegSetValueExW(hkey, L"dwBlock", 0, 4u, Data, cbData);
    if ( v42 )
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbShouldBlockPackageLaunch",
        670,
        (unsigned int)"RegSetValueEx failed %d",
        v42);
    v43 = RegSetValueExW(hkey, L"dwFwLinkNumber", 0, 4u, pvData, cbData);
    if ( v43 )
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbShouldBlockPackageLaunch",
        680,
        (unsigned int)"RegSetValueEx failed %d",
        v43);
    v44 = RegSetValueExW(hkey, L"dwKbNumber", 0, 4u, v70, cbData);
    if ( v44 )
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbShouldBlockPackageLaunch",
        690,
        (unsigned int)"RegSetValueEx failed %d",
        v44);
    v45 = RegSetValueExW(hkey, L"AppName", 0, 1u, (const BYTE *)v66, pcbData);
    if ( v45 )
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbShouldBlockPackageLaunch",
        700,
        (unsigned int)"RegSetValueEx failed %d",
        v45);
    v46 = RegSetValueExW(hkey, L"VendorName", 0, 1u, (const BYTE *)v67, v53);
    if ( v46 )
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbShouldBlockPackageLaunch",
        710,
        (unsigned int)"RegSetValueEx failed %d",
        v46);
    if ( v54 )
    {
LABEL_86:
      if ( *(_DWORD *)Data )
      {
        if ( (int)RtlStringCchCopyW(v71, 0x100uLL, pszSrc) < 0 )
        {
          v16 = "PackageFullName is too long";
          v17 = 719;
          goto LABEL_12;
        }
        ValueW = RtlPublishWnfStateData(WNF_CMPT_BLOCKED_APP, 0LL, v66, 724LL, 0LL);
        if ( ValueW < 0 )
        {
          v12 = "RtlPublishWnfStateData failed, 0x%x";
          v13 = 732;
          goto LABEL_3;
        }
      }
    }
  }
  else
  {
    ValueW = RegGetValueW(hkey, 0LL, L"dwBlock", 0x18u, 0LL, Data, &cbData);
    if ( ValueW )
    {
      v13 = 521;
LABEL_41:
      v12 = "RegGetValue failed %d";
      goto LABEL_3;
    }
    if ( !*(_DWORD *)Data )
    {
      v7 = 1;
      goto LABEL_93;
    }
    if ( *(_DWORD *)Data == 2 )
      *v55 = 1;
    if ( v54 )
    {
      ValueW = RegGetValueW(hkey, 0LL, L"dwFwLinkNumber", 0x18u, 0LL, pvData, &cbData);
      if ( ValueW )
      {
        v13 = 543;
        goto LABEL_41;
      }
      ValueW = RegGetValueW(hkey, 0LL, L"dwKbNumber", 0x18u, 0LL, v70, &cbData);
      if ( ValueW )
      {
        v13 = 555;
        goto LABEL_41;
      }
      ValueW = RegGetValueW(hkey, 0LL, L"AppName", 2u, 0LL, v66, &pcbData);
      if ( ValueW )
      {
        v13 = 567;
        goto LABEL_41;
      }
      ValueW = RegGetValueW(hkey, 0LL, L"VendorName", 2u, 0LL, v67, &v53);
      if ( ValueW )
      {
        v13 = 579;
        goto LABEL_41;
      }
      goto LABEL_86;
    }
  }
  v7 = 1;
LABEL_5:
  if ( v8 )
    SdbReleaseDatabase(v8);
LABEL_93:
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
  return v7;
}
