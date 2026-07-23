/*
 * XREFs of EtwTimeProfileReset @ 0x140864EA8
 * Callers:
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 * Callees:
 *     KeStopProfile @ 0x14057455C (KeStopProfile.c)
 *     EtwpTimeProfileStart @ 0x1409E6DD8 (EtwpTimeProfileStart.c)
 */

__int64 EtwTimeProfileReset()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  result = DWORD1(PerfGlobalGroupMask[0]);
  if ( (BYTE4(PerfGlobalGroupMask[0]) & 2) != 0 )
  {
    KeStopProfile((ULONG_PTR)&EtwpProfileObject);
    return EtwpTimeProfileStart(v2, v1, v3, v4);
  }
  return result;
}
