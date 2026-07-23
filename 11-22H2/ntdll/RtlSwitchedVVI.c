/*
 * XREFs of RtlSwitchedVVI @ 0x180049F20
 * Callers:
 *     <none>
 * Callees:
 *     RtlpVerCompare @ 0x18004A260 (RtlpVerCompare.c)
 *     RtlpVerGetConditionMask @ 0x18004A358 (RtlpVerGetConditionMask.c)
 *     SwitchedRtlGetVersion @ 0x18004A378 (SwitchedRtlGetVersion.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

DWORD __cdecl RtlSwitchedVVI(PRTL_OSVERSIONINFOEXW VersionInfo, DWORD TypeMask, ULONGLONG ConditionMask)
{
  char v4; // si
  char v6; // di
  DWORD result; // eax
  char v8; // al
  int v9; // edi
  int v10; // eax
  bool v11; // zf
  unsigned int v12; // r10d
  int wSuiteMask; // r11d
  int v14; // eax
  unsigned __int16 v15; // r9
  int v16; // eax
  int v17; // eax
  _BYTE v18[16]; // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v20[68]; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int16 v21; // [rsp+154h] [rbp+54h]
  unsigned __int16 v22; // [rsp+156h] [rbp+56h]
  unsigned __int16 v23; // [rsp+158h] [rbp+58h]
  unsigned __int8 v24; // [rsp+15Ah] [rbp+5Ah]

  v4 = TypeMask;
  v6 = 0;
  if ( !TypeMask )
    return -1073741811;
  memset_thunk_772440563353939046(v20, 0, 0x118uLL);
  v19 = 284;
  result = SwitchedRtlGetVersion(&v19);
  if ( !result )
  {
    if ( (v4 & 0x40) != 0 && VersionInfo->wSuiteMask )
    {
      v12 = 0;
      wSuiteMask = VersionInfo->wSuiteMask;
      do
      {
        if ( (wSuiteMask & (1 << v12)) != 0 )
        {
          if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
            return -1073741811;
          v14 = RtlpVerGetConditionMask(ConditionMask, 64LL) - 6;
          if ( v14 )
          {
            if ( v14 != 1 )
              return -1073741811;
            if ( (v23 & v15) != 0 )
              v6 = 1;
          }
          else if ( (v23 & v15) == 0 )
          {
            return -1073741735;
          }
        }
        ++v12;
      }
      while ( v12 < 0x10 );
      if ( (unsigned int)RtlpVerGetConditionMask(ConditionMask, 64LL) == 7 && !v6 )
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
        v9 = RtlpVerGetConditionMask(ConditionMask, 2LL);
      v11 = (unsigned __int8)RtlpVerCompare(v9, VersionInfo->dwMajorVersion, v20[0], (unsigned int)v18, 0) == 0;
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
      if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
        v9 = (unsigned __int8)(ConditionMask >> 2);
      else
        v9 = RtlpVerGetConditionMask(ConditionMask, 1LL);
    }
    v11 = (unsigned __int8)RtlpVerCompare(v9, VersionInfo->dwMinorVersion, v20[1], (unsigned int)v18, 1) == 0;
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
    if ( (v4 & 0x20) == 0 )
      goto LABEL_8;
    if ( v9 == 1 )
    {
      if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
        v9 = RtlpVerGetConditionMask(ConditionMask, 32LL);
      else
        v9 = 0;
    }
    if ( (unsigned __int8)RtlpVerCompare(v9, VersionInfo->wServicePackMajor, v21, (unsigned int)v18, 0) )
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
              v9 = RtlpVerGetConditionMask(ConditionMask, 16LL);
            else
              v9 = 0;
          }
          if ( !(unsigned __int8)RtlpVerCompare(v9, VersionInfo->wServicePackMinor, v22, (unsigned int)v18, 1) )
            return -1073741735;
        }
      }
LABEL_10:
      if ( (v4 & 4) != 0 )
      {
        v16 = (ConditionMask & 0x8000000000000000uLL) == 0LL
            ? BYTE2(ConditionMask)
            : RtlpVerGetConditionMask(ConditionMask, 4LL);
        if ( !(unsigned __int8)RtlpVerCompare(v16, VersionInfo->dwBuildNumber, v20[2], (unsigned int)v18, 0) )
          return -1073741735;
      }
      if ( (v4 & 8) != 0 )
      {
        v17 = (ConditionMask & 0x8000000000000000uLL) == 0LL ? 0 : RtlpVerGetConditionMask(ConditionMask, 8LL);
        if ( !(unsigned __int8)RtlpVerCompare(v17, VersionInfo->dwPlatformId, v20[3], (unsigned int)v18, 0) )
          return -1073741735;
      }
      if ( v4 >= 0 )
        return 0;
      if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
        v10 = 0;
      else
        v10 = RtlpVerGetConditionMask(ConditionMask, 128LL);
      return (unsigned __int8)RtlpVerCompare(v10, VersionInfo->wProductType, v24, (unsigned int)v18, 0) == 0
           ? 0xC0000059
           : 0;
    }
    if ( v18[0] )
      goto LABEL_9;
    return -1073741735;
  }
  return result;
}
