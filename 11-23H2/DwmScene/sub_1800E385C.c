/*
 * XREFs of sub_1800E385C @ 0x1800E385C
 * Callers:
 *     sub_1800C432C @ 0x1800C432C (sub_1800C432C.c)
 *     sub_1800E3880 @ 0x1800E3880 (sub_1800E3880.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800E385C(__int64 a1)
{
  *(_QWORD *)a1 = &Spectre::Engine::GpuQuery::`vftable';
  return sub_1800280AC(a1);
}
