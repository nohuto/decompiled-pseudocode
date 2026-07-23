/*
 * XREFs of sub_1407FE7DC @ 0x1407FE7DC
 * Callers:
 *     sub_14038B628 @ 0x14038B628 (sub_14038B628.c)
 *     sub_1407EF098 @ 0x1407EF098 (sub_1407EF098.c)
 *     sub_1407FE700 @ 0x1407FE700 (sub_1407FE700.c)
 *     sub_1407FF888 @ 0x1407FF888 (sub_1407FF888.c)
 *     sub_14098C0DC @ 0x14098C0DC (sub_14098C0DC.c)
 *     sub_140A68674 @ 0x140A68674 (sub_140A68674.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     RtlGetActiveConsoleId @ 0x1402DEB60 (RtlGetActiveConsoleId.c)
 *     sub_1407FE82C @ 0x1407FE82C (sub_1407FE82C.c)
 */

ULONG __fastcall sub_1407FE7DC(__int64 a1)
{
  ULONG ActiveConsoleId; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  Interval.QuadPart = -100000LL;
  while ( 1 )
  {
    ActiveConsoleId = RtlGetActiveConsoleId();
    if ( ActiveConsoleId != -1 )
    {
      *(_DWORD *)(a1 + 16) = 0;
      if ( (int)sub_1407FE82C(a1, &ActiveConsoleId) >= 0 )
        break;
    }
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return RtlGetActiveConsoleId();
}
