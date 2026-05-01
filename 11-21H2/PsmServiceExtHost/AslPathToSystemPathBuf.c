/*
 * XREFs of AslPathToSystemPathBuf @ 0x1800A41F0
 * Callers:
 *     SdbpGetPathAppPatch @ 0x1800978F0 (SdbpGetPathAppPatch.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x1800A3334 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x1800A346C (AslEnvGetSystem32DirPathBuf.c)
 * Callees:
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     RtlStringCchCopyW @ 0x180094FC4 (RtlStringCchCopyW.c)
 *     RtlStringCchCatW @ 0x1800971BC (RtlStringCchCatW.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     RtlDownlevelGetNtSystemRoot @ 0x1800A69FC (RtlDownlevelGetNtSystemRoot.c)
 */

__int64 __fastcall AslPathToSystemPathBuf(_WORD *a1, __int64 a2, __int64 a3)
{
  __int64 NtSystemRoot; // rax
  int v7; // ebx

  memset_0(a1, 0, 2 * a2);
  NtSystemRoot = RtlDownlevelGetNtSystemRoot();
  v7 = RtlStringCchCopyW(a1, a2, NtSystemRoot);
  if ( v7 >= 0 )
  {
    v7 = RtlStringCchCatW(a1, a2, a3);
    if ( v7 < 0 )
    {
      AslLogCallPrintf(1LL);
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  return (unsigned int)v7;
}
