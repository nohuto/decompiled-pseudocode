/*
 * XREFs of AslEnvGetSysNativeDirPathForGuestBuf @ 0x1800A04F4
 * Callers:
 *     SdbpGetPathAppraiser @ 0x180092BC0 (SdbpGetPathAppraiser.c)
 * Callees:
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180074ADC (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 *     AslPathCombine @ 0x18009DD0C (AslPathCombine.c)
 *     AslPathToSystemPathBuf @ 0x18009DEE8 (AslPathToSystemPathBuf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x1800A062C (AslEnvGetSystem32DirPathBuf.c)
 */

__int64 __fastcall AslEnvGetSysNativeDirPathForGuestBuf(
        unsigned __int16 *a1,
        unsigned __int64 a2,
        unsigned __int16 *a3,
        __int16 a4,
        _WORD *a5)
{
  int v9; // eax
  unsigned int v10; // ebx
  const char *v11; // r9
  int v12; // r8d
  int v14; // [rsp+20h] [rbp-C8h]
  unsigned __int16 v15[64]; // [rsp+30h] [rbp-B8h] BYREF

  memset_0(v15, 0, sizeof(v15));
  *a1 = 0;
  if ( a5 && *a5 != a4 )
  {
    v9 = AslPathToSystemPathBuf(v15, 64LL, (__int64)L"\\SysNative");
    v10 = v9;
    if ( v9 < 0 )
    {
      v11 = "AslPathToSystemPathBuf failed [%x]";
      v12 = 1733;
LABEL_11:
      v14 = v9;
      AslLogCallPrintf(1LL, (unsigned int)"AslEnvGetSysNativeDirPathForGuestBuf", v12, (_DWORD)v11, v14);
      return v10;
    }
    if ( a3 && *a3 )
    {
      v9 = AslPathCombine(v15, a3, a1, a2);
      v10 = v9;
      if ( v9 < 0 )
      {
        v11 = "AslPathCombine failed [%x]";
        v12 = 1743;
        goto LABEL_11;
      }
    }
    else
    {
      v9 = RtlStringCchCopyW(a1, a2, v15);
      v10 = v9;
      if ( v9 < 0 )
      {
        v11 = "RtlStringCchCopyW failed [%x]";
        v12 = 1751;
        goto LABEL_11;
      }
    }
    return v10;
  }
  return AslEnvGetSystem32DirPathBuf(a1, a2, a3, (__int64)a5);
}
