/*
 * XREFs of ?GetTickCount@DefaultTimeProvider@Utils@Spectre@@UEBA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@XZ @ 0x180020820
 * Callers:
 *     <none>
 * Callees:
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x180011CA0 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 */

_QWORD *__fastcall Spectre::Utils::DefaultTimeProvider::GetTickCount(__int64 a1, _QWORD *a2)
{
  std::chrono::steady_clock::now(a2);
  return a2;
}
