/*
 * XREFs of AslPathToSystemPathBuf @ 0x18009DB78
 * Callers:
 *     AslPathToSystemPath @ 0x18005326C (AslPathToSystemPath.c)
 *     SdbpGetPathAppPatch @ 0x1800925D0 (SdbpGetPathAppPatch.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x1800A0184 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x1800A02BC (AslEnvGetSystem32DirPathBuf.c)
 * Callees:
 *     memset_0 @ 0x1800534BA (memset_0.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800748BC (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     RtlStringCchCatW @ 0x18008FB1C (RtlStringCchCatW.c)
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 *     RtlDownlevelGetNtSystemRoot @ 0x1800A1174 (RtlDownlevelGetNtSystemRoot.c)
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
        1488,
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
      1477,
      (unsigned int)"Failed to get system root directory [%x]",
      v11);
  }
  return v8;
}
