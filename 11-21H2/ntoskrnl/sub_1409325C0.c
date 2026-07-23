/*
 * XREFs of sub_1409325C0 @ 0x1409325C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall sub_1409325C0(
        __int128 *SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        PVOID CallbackContext)
{
  __int64 v7; // rdi
  __int64 v9; // rsi
  __int128 v11; // xmm0
  _QWORD v12[14]; // [rsp+20h] [rbp-88h] BYREF

  v7 = ControlCode;
  v9 = Level;
  memset(v12, 0, 0x68uLL);
  v11 = *SourceId;
  v12[6] = MatchAllKeyword;
  v12[7] = CallbackContext;
  *(_OWORD *)&v12[1] = v11;
  v12[3] = v7;
  v12[4] = v9;
  v12[5] = MatchAnyKeyword;
  sub_140358A20(2u, 213, 0, (__int64)v12);
}
