/*
 * XREFs of PspBindProcessSessionToJob @ 0x14069FBC4
 * Callers:
 *     PspEstablishJobHierarchy @ 0x14069F8F4 (PspEstablishJobHierarchy.c)
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 * Callees:
 *     MmGetSessionId @ 0x1402A3ED0 (MmGetSessionId.c)
 *     PspConvertJobToMixed @ 0x1409B2364 (PspConvertJobToMixed.c)
 */

__int64 __fastcall PspBindProcessSessionToJob(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  signed __int32 SessionId; // r9d
  int v4; // r10d
  signed __int32 v5; // eax

  SessionId = MmGetSessionId(a2);
  if ( v4 == SessionId )
    return 0LL;
  if ( v4 == -1
    && ((v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 576), SessionId, -1), v5 == -1)
     || v5 == SessionId) )
  {
    return 0LL;
  }
  else
  {
    return PspConvertJobToMixed(v2, 0LL);
  }
}
