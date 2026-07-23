/*
 * XREFs of RtlVerifyVersionInfo @ 0x180089A50
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetVersion @ 0x18004ED20 (RtlGetVersion.c)
 *     RtlpVerGetConditionMask @ 0x1800521F0 (RtlpVerGetConditionMask.c)
 *     RtlpVerCompare @ 0x180052210 (RtlpVerCompare.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     memset @ 0x1800AAE00 (memset.c)
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
  bool v11; // zf
  unsigned int v12; // r10d
  int wSuiteMask; // r11d
  int v14; // eax
  unsigned __int16 v15; // r9
  int v16; // eax
  int v17; // eax
  bool v18[16]; // [rsp+30h] [rbp-D0h] BYREF
  _OSVERSIONINFOEXW VersionInformationa; // [rsp+40h] [rbp-C0h] BYREF

  v4 = TypeMask;
  v6 = 0;
  if ( !TypeMask )
    return -1073741811;
  memset(&VersionInformationa.dwMajorVersion, 0, 0x118uLL);
  VersionInformationa.dwOSVersionInfoSize = 284;
  result = RtlGetVersion(&VersionInformationa);
  if ( !result )
  {
    if ( (v4 & 0x40) != 0 && VersionInformation->wSuiteMask )
    {
      v12 = 0;
      wSuiteMask = VersionInformation->wSuiteMask;
      do
      {
        if ( (wSuiteMask & (1 << v12)) != 0 )
        {
          if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
            return -1073741811;
          v14 = RtlpVerGetConditionMask(ConditionMask, 0x40u) - 6;
          if ( v14 )
          {
            if ( v14 != 1 )
              return -1073741811;
            if ( (VersionInformationa.wSuiteMask & v15) != 0 )
              v6 = 1;
          }
          else if ( (VersionInformationa.wSuiteMask & v15) == 0 )
          {
            return -1073741735;
          }
        }
        ++v12;
      }
      while ( v12 < 0x10 );
      if ( (unsigned int)RtlpVerGetConditionMask(ConditionMask, 0x40u) == 7 && !v6 )
        return -1073741735;
    }
    v8 = 1;
    v18[0] = 1;
    v9 = 1;
    if ( (v4 & 2) != 0 )
    {
      if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
        v9 = (unsigned __int8)(ConditionMask >> 4);
      else
        v9 = RtlpVerGetConditionMask(ConditionMask, 2u);
      v11 = !RtlpVerCompare(v9, VersionInformation->dwMajorVersion, VersionInformationa.dwMajorVersion, v18, 0);
      v8 = v18[0];
      if ( v11 )
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
    v11 = !RtlpVerCompare(v9, VersionInformation->dwMinorVersion, VersionInformationa.dwMinorVersion, v18, 1);
    v8 = v18[0];
    if ( v11 )
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
    if ( (v4 & 0x20) != 0 )
    {
      if ( v9 == 1 )
      {
        if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
          v9 = RtlpVerGetConditionMask(ConditionMask, 0x20u);
        else
          v9 = 0;
      }
      if ( !RtlpVerCompare(v9, VersionInformation->wServicePackMajor, VersionInformationa.wServicePackMajor, v18, 0) )
      {
        if ( !v18[0] )
          return -1073741735;
        goto LABEL_9;
      }
      v8 = v18[0];
    }
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
    if ( v4 < 0 )
    {
      v10 = (ConditionMask & 0x8000000000000000uLL) == 0LL ? 0 : RtlpVerGetConditionMask(ConditionMask, 0x80u);
      if ( !RtlpVerCompare(v10, VersionInformation->wProductType, VersionInformationa.wProductType, v18, 0) )
        return -1073741735;
    }
    return 0;
  }
  return result;
}
