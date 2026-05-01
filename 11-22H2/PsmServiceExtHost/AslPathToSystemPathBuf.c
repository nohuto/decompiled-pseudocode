/*
 * XREFs of AslPathToSystemPathBuf @ 0x18009DEE8
 * Callers:
 *     AslPathToSystemPath @ 0x18005346C (AslPathToSystemPath.c)
 *     SdbpGetPathAppPatch @ 0x180092930 (SdbpGetPathAppPatch.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x1800A04F4 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x1800A062C (AslEnvGetSystem32DirPathBuf.c)
 * Callees:
 *     memset_0 @ 0x1800536FA (memset_0.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180074ADC (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     RtlStringCchCatW @ 0x18008FE7C (RtlStringCchCatW.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 *     RtlDownlevelGetNtSystemRoot @ 0x1800A14E4 (RtlDownlevelGetNtSystemRoot.c)
 */

__int64 __fastcall AslPathToSystemPathBuf(unsigned __int16 *a1, __int64 a2, __int64 a3)
{
  const unsigned __int16 *NtSystemRoot; // rax
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  int v11; // [rsp+20h] [rbp-18h]
  int v12; // [rsp+20h] [rbp-18h]

  memset_0(a1, 0, 2 * a2);
  NtSystemRoot = (const unsigned __int16 *)RtlDownlevelGetNtSystemRoot();
  v7 = RtlStringCchCopyW(a1, a2, NtSystemRoot);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = RtlStringCchCatW(a1, a2, a3);
    v8 = v9;
    if ( v9 < 0 )
    {
      v12 = v9;
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslPathToSystemPathBuf",
        1492,
        (unsigned int)"Failed to cat string [%x]",
        v12);
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    v11 = v7;
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslPathToSystemPathBuf",
      1481,
      (unsigned int)"Failed to get system root directory [%x]",
      v11);
  }
  return v8;
}
