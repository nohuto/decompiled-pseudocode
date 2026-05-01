/*
 * XREFs of ?IsQuickSwipe@TouchGestureProcessor@@AEAA_NXZ @ 0x180650CAC
 * Callers:
 *     ?ContinueSwipe@TouchGestureProcessor@@QEAAXAEBUPoint@Foundation@Windows@winrt@@0@Z @ 0x18064FE44 (-ContinueSwipe@TouchGestureProcessor@@QEAAXAEBUPoint@Foundation@Windows@winrt@@0@Z.c)
 * Callees:
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x1801BA8A4 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 */

bool __fastcall TouchGestureProcessor::IsQuickSwipe(TouchGestureProcessor *this)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  std::chrono::steady_clock::now(&v3);
  return v3 - *((_QWORD *)this + 12) < 250000000;
}
