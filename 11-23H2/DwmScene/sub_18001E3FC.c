/*
 * XREFs of sub_18001E3FC @ 0x18001E3FC
 * Callers:
 *     <none>
 * Callees:
 *     sub_180017890 @ 0x180017890 (sub_180017890.c)
 */

_QWORD *__fastcall sub_18001E3FC(_QWORD *a1, __int64 a2)
{
  sub_180017890((__int64)a1, a2);
  *a1 = &Spectre::Utils::SpectreInvalidArgException::`vftable';
  return a1;
}
