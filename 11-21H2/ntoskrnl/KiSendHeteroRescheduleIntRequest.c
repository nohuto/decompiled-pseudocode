/*
 * XREFs of KiSendHeteroRescheduleIntRequest @ 0x140574A7C
 * Callers:
 *     KiSwapThread @ 0x1402B3140 (KiSwapThread.c)
 *     KiIdleSchedule @ 0x140343C60 (KiIdleSchedule.c)
 *     KeTransitionProcessorParkState @ 0x14057C888 (KeTransitionProcessorParkState.c)
 * Callees:
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140574B54 (KiSendHeteroRescheduleIntRequestHelper.c)
 */

__int64 __fastcall KiSendHeteroRescheduleIntRequest(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = a1[24];
  result = *(_QWORD *)(v2 + 16);
  if ( (result & a1[4364]) != 0 )
  {
    v4 = *(unsigned __int8 *)(v2 + 185);
    v8 = 0LL;
    v7 = -1;
    v5 = a1[25];
    v6 = *(_QWORD *)(*(_QWORD *)(v2 + 192) + 24 * v4 + 8);
    result = *(_QWORD *)(v2 + 8);
    if ( (v5 & result) != 0 && (v5 & v6) != 0 )
    {
      result = KiSendHeteroRescheduleIntRequestHelper(
                 ~*(_QWORD *)(v2 + 40) & (*(_QWORD *)(v2 + 80) | *(_QWORD *)(v2 + 88)) & (v6 ^ *(_QWORD *)(v2 + 128)),
                 &v8,
                 &v7,
                 a1);
      if ( (_BYTE)result )
      {
        result = KiSendHeteroRescheduleIntRequestHelper(1LL << v7, 0LL, 0LL, a1);
        if ( !(_BYTE)result )
          return KiSendHeteroRescheduleIntRequestHelper(v8 ^ (1LL << v7), 0LL, 0LL, a1);
      }
    }
  }
  return result;
}
