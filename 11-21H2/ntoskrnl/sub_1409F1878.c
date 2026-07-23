/*
 * XREFs of sub_1409F1878 @ 0x1409F1878
 * Callers:
 *     NotifyRoutine @ 0x1409F1600 (NotifyRoutine.c)
 *     sub_1409F1CB0 @ 0x1409F1CB0 (sub_1409F1CB0.c)
 *     sub_1409F1FF4 @ 0x1409F1FF4 (sub_1409F1FF4.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall sub_1409F1878(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 result; // rax

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 64), 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  result = v2 - 1;
  if ( v3 )
  {
    if ( result )
      __fastfail(0xEu);
  }
  else if ( result == 1 && !*(_DWORD *)(a2 + 132) && a1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 1124));
  }
  return result;
}
