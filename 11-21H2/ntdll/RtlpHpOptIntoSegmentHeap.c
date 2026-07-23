/*
 * XREFs of RtlpHpOptIntoSegmentHeap @ 0x1800FF8E8
 * Callers:
 *     RtlInitializeHeapManager @ 0x1800B0C34 (RtlInitializeHeapManager.c)
 * Callees:
 *     RtlGetSuiteMask @ 0x1800504F0 (RtlGetSuiteMask.c)
 *     RtlQueryPackageIdentity @ 0x180073AA0 (RtlQueryPackageIdentity.c)
 *     RtlQueryPackageClaims @ 0x180073B70 (RtlQueryPackageClaims.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x1800818E0 (RtlQueryActivationContextApplicationSettings.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x180095820 (_wcsnicmp.c)
 */

__int64 __fastcall RtlpHpOptIntoSegmentHeap(unsigned __int16 *a1, _DWORD *a2)
{
  struct _PEB *v2; // rsi
  unsigned int v5; // edi
  unsigned int v6; // eax
  unsigned __int64 v7; // rdx
  _WORD *i; // rcx
  const wchar_t *v9; // r15
  unsigned int v10; // esi
  const wchar_t **v11; // r14
  size_t v12; // r12
  const wchar_t *v13; // r13
  __int64 v14; // rax
  _PS_PKG_CLAIM PkgClaim; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v17[24]; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR String1[16]; // [rsp+110h] [rbp+10h] BYREF
  WCHAR PackageFullName[128]; // [rsp+130h] [rbp+30h] BYREF

  v2 = NtCurrentPeb();
  v17[0] = L"svchost.exe";
  *a2 = 0;
  v17[1] = L"runtimebroker.exe";
  v17[2] = L"csrss.exe";
  v5 = 0;
  v17[3] = L"smss.exe";
  v17[4] = L"services.exe";
  v17[5] = L"lsass.exe";
  v17[6] = L"wininit.exe";
  v17[7] = L"msmpeng.exe";
  v17[8] = L"nissrv.exe";
  v17[9] = L"dwm.exe";
  v17[10] = L"rdpinit.exe";
  v17[11] = L"searchindexer.exe";
  v17[12] = L"smartscreen.exe";
  v17[13] = L"sihost.exe";
  v17[14] = L"systemsettingsbroker.exe";
  v17[15] = L"settingsynchost.exe";
  v17[16] = L"securityhealthservice.exe";
  v17[17] = L"audiodg.exe";
  v17[18] = L"telemetryhost.exe";
  v17[19] = L"rdpshell.exe";
  v17[20] = L"winlogon.exe";
  v17[21] = L"containersettingsworker.exe";
  v17[22] = L"vmcomputeagent.exe";
  v17[23] = L"rdpclip.exe";
  if ( (RtlGetSuiteMask() & 0x10000) != 0 )
    return 1;
  if ( RtlQueryActivationContextApplicationSettings(
         0,
         0LL,
         (PWSTR)L"http://schemas.microsoft.com/SMI/2020/WindowsSettings",
         (PWSTR)L"heapType",
         String1,
         0xFuLL,
         0LL) >= 0
    && !wcsnicmp(String1, L"SegmentHeap", 0xFuLL) )
  {
    v5 = 1;
    *a2 = 1;
    return v5;
  }
  if ( (v2->BitField & 0x10) != 0 )
  {
    v5 = 1;
    if ( RtlQueryPackageClaims((HANDLE)0xFFFFFFFFFFFFFFFCLL, 0LL, 0LL, 0LL, 0LL, 0LL, &PkgClaim, 0LL) >= 0 )
      return (PkgClaim.Flags & 0x8000) == 0;
  }
  else
  {
    if ( v2->ProcessParameters->HeapPartitionName.Buffer )
      return 1;
    if ( a1 )
    {
      v6 = 0;
      v7 = *((_QWORD *)a1 + 1);
      for ( i = (_WORD *)(v7 + 2 * (((unsigned __int64)*a1 >> 1) - 1)); ; --i )
      {
        if ( (unsigned __int64)i <= v7 )
          goto LABEL_24;
        if ( *i == 92 )
          break;
        ++v6;
      }
      if ( !v6 || (v9 = i + 1, i == (_WORD *)-2LL) )
      {
LABEL_24:
        PkgClaim = (_PS_PKG_CLAIM)256LL;
        if ( RtlQueryPackageIdentity((HANDLE)0xFFFFFFFFFFFFFFFCLL, PackageFullName, (PSIZE_T)&PkgClaim, 0LL, 0LL, 0LL) >= 0
          && !wcsnicmp(PackageFullName, L"DefaultBrowser_NOPUBLISHERID", 0x1DuLL) )
        {
          return 1;
        }
        return v5;
      }
      v10 = 0;
      v11 = (const wchar_t **)v17;
      v12 = v6;
      while ( 1 )
      {
        v13 = *v11;
        if ( !wcsnicmp(v9, *v11, v12) )
        {
          v14 = -1LL;
          do
            ++v14;
          while ( v13[v14] );
          if ( v12 == v14 )
            return 1;
        }
        ++v10;
        ++v11;
        if ( v10 >= 0x18 )
          goto LABEL_24;
      }
    }
  }
  return v5;
}
