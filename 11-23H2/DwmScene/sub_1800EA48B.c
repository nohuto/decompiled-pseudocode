/*
 * XREFs of sub_1800EA48B @ 0x1800EA48B
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180017890 @ 0x180017890 (sub_180017890.c)
 *     sub_180082B30 @ 0x180082B30 (sub_180082B30.c)
 */

void __fastcall __noreturn sub_1800EA48B(__int64 a1, __int64 a2)
{
  sub_180082B30(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 16LL));
  sub_180017890(a2 + 48, *(_QWORD *)(a2 + 40));
  throw (Spectre::Utils::SpectreException *)(a2 + 48);
}
