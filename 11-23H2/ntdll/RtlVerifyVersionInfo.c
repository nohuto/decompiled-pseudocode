/*
 * XREFs of RtlVerifyVersionInfo @ 0x1800852D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetVersion @ 0x18002F620 (RtlGetVersion.c)
 *     RtlpVerCompare @ 0x18004A100 (RtlpVerCompare.c)
 *     RtlpVerGetConditionMask @ 0x18004A1F8 (RtlpVerGetConditionMask.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlVerifyVersionInfo(
        PRTL_OSVERSIONINFOEXW VersionInformation,
        ULONG TypeMask,
        ULONGLONG ConditionMask)
{
  char v4; // si
  char v6; // di
  NTSTATUS result; // eax
  bool v8; // al
  int v9; // edi
  int v10; // eax
  unsigned int v11; // r10d
  int wSuiteMask; // r11d
  int v13; // eax
  unsigned __int16 v14; // r9
  bool v15; // zf
  int v16; // eax
  int v17; // eax
  bool v18[16]; // [rsp+30h] [rbp-D0h] BYREF
  _OSVERSIONINFOEXW VersionInformationa; // [rsp+40h] [rbp-C0h] BYREF

  v4 = TypeMask;
  v6 = 0;
  if ( !TypeMask )
    return -1073741811;
  memset_thunk_772440563353939046(&VersionInformationa.dwMajorVersion, 0, 0x118uLL);
  VersionInformationa.dwOSVersionInfoSize = 284;
  result = RtlGetVersion(&VersionInformationa);
  if ( !result )
  {
    if ( (v4 & 0x40) != 0 && VersionInformation->wSuiteMask )
    {
      v11 = 0;
      wSuiteMask = VersionInformation->wSuiteMask;
      do
      {
        if ( (wSuiteMask & (1 << v11)) != 0 )
        {
          if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
            return -1073741811;
          v13 = RtlpVerGetConditionMask(ConditionMask, 0x40u) - 6;
          if ( v13 )
          {
            if ( v13 != 1 )
              return -1073741811;
            if ( (VersionInformationa.wSuiteMask & v14) != 0 )
              v6 = 1;
          }
          else if ( (VersionInformationa.wSuiteMask & v14) == 0 )
          {
            return -1073741735;
          }
        }
        ++v11;
      }
      while ( v11 < 0x10 );
      if ( (unsigned int)RtlpVerGetConditionMask(ConditionMask, 0x40u) == 7 && !v6 )
        return -1073741735;
    }
    v8 = 1;
    v18[0] = 1;
    v9 = 1;
    if ( (v4 & 2) != 0 )
    {
      if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
        v9 = RtlpVerGetConditionMask(ConditionMask, 2u);
      else
        v9 = (unsigned __int8)(ConditionMask >> 4);
      v15 = !RtlpVerCompare(v9, VersionInformation->dwMajorVersion, VersionInformationa.dwMajorVersion, v18, 0);
      v8 = v18[0];
      if ( v15 )
      {
        if ( !v18[0] )
          return -1073741735;
      }
      else if ( !v18[0] )
      {
        goto LABEL_10;
      }
    }
    if ( (v4 & 1) == 0 )
      goto LABEL_6;
    if ( v9 == 1 )
    {
      if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
        v9 = RtlpVerGetConditionMask(ConditionMask, 1u);
      else
        v9 = (unsigned __int8)(ConditionMask >> 2);
    }
    v15 = !RtlpVerCompare(v9, VersionInformation->dwMinorVersion, VersionInformationa.dwMinorVersion, v18, 1);
    v8 = v18[0];
    if ( v15 )
    {
      if ( !v18[0] )
        return -1073741735;
    }
    else
    {
LABEL_6:
      if ( !v8 )
        goto LABEL_10;
    }
    if ( (v4 & 0x20) == 0 )
      goto LABEL_8;
    if ( v9 == 1 )
    {
      if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
        v9 = RtlpVerGetConditionMask(ConditionMask, 0x20u);
      else
        v9 = 0;
    }
    if ( RtlpVerCompare(v9, VersionInformation->wServicePackMajor, VersionInformationa.wServicePackMajor, v18, 0) )
    {
      v8 = v18[0];
LABEL_8:
      if ( v8 )
      {
LABEL_9:
        if ( (v4 & 0x10) != 0 )
        {
          if ( v9 == 1 )
          {
            if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
              v9 = RtlpVerGetConditionMask(ConditionMask, 0x10u);
            else
              v9 = 0;
          }
          if ( !RtlpVerCompare(v9, VersionInformation->wServicePackMinor, VersionInformationa.wServicePackMinor, v18, 1) )
            return -1073741735;
        }
      }
LABEL_10:
      if ( (v4 & 4) != 0 )
      {
        v16 = (ConditionMask & 0x8000000000000000uLL) != 0LL
            ? RtlpVerGetConditionMask(ConditionMask, 4u)
            : BYTE2(ConditionMask);
        if ( !RtlpVerCompare(v16, VersionInformation->dwBuildNumber, VersionInformationa.dwBuildNumber, v18, 0) )
          return -1073741735;
      }
      if ( (v4 & 8) != 0 )
      {
        v17 = (ConditionMask & 0x8000000000000000uLL) != 0LL ? RtlpVerGetConditionMask(ConditionMask, 8u) : 0;
        if ( !RtlpVerCompare(v17, VersionInformation->dwPlatformId, VersionInformationa.dwPlatformId, v18, 0) )
          return -1073741735;
      }
      if ( v4 >= 0 )
        return 0;
      if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
        v10 = 0;
      else
        v10 = RtlpVerGetConditionMask(ConditionMask, 0x80u);
      return !RtlpVerCompare(v10, VersionInformation->wProductType, VersionInformationa.wProductType, v18, 0)
           ? 0xC0000059
           : 0;
    }
    if ( v18[0] )
      goto LABEL_9;
    return -1073741735;
  }
  return result;
}
