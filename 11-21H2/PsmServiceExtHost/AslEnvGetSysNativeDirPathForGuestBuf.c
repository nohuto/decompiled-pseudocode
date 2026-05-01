/*
 * XREFs of AslEnvGetSysNativeDirPathForGuestBuf @ 0x1800A3334
 * Callers:
 *     SdbpGetPathAppraiser @ 0x180097B80 (SdbpGetPathAppraiser.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     RtlStringCchCopyW @ 0x180094FC4 (RtlStringCchCopyW.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x1800A346C (AslEnvGetSystem32DirPathBuf.c)
 *     AslPathCombine @ 0x1800A4074 (AslPathCombine.c)
 *     AslPathToSystemPathBuf @ 0x1800A41F0 (AslPathToSystemPathBuf.c)
 */

__int64 __fastcall AslEnvGetSysNativeDirPathForGuestBuf(
        _WORD *a1,
        __int64 a2,
        _WORD *a3,
        unsigned __int16 a4,
        _WORD *a5)
{
  int v9; // ebx
  _BYTE v11[128]; // [rsp+30h] [rbp-B8h] BYREF

  memset_0(v11, 0, sizeof(v11));
  *a1 = 0;
  if ( a5 && *a5 != a4 )
  {
    v9 = AslPathToSystemPathBuf(v11, 64LL, L"\\SysNative");
    if ( v9 >= 0 )
    {
      if ( a3 && *a3 )
      {
        v9 = AslPathCombine(v11, a3, a1, a2);
        if ( v9 < 0 )
          goto LABEL_9;
        return (unsigned int)v9;
      }
      v9 = RtlStringCchCopyW(a1, a2, (__int64)v11);
      if ( v9 >= 0 )
        return (unsigned int)v9;
    }
LABEL_9:
    AslLogCallPrintf(1LL);
    return (unsigned int)v9;
  }
  return AslEnvGetSystem32DirPathBuf((_DWORD)a1, a2, (_DWORD)a3, a4, (__int64)a5);
}
