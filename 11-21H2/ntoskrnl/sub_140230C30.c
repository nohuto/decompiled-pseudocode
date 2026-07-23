/*
 * XREFs of sub_140230C30 @ 0x140230C30
 * Callers:
 *     sub_140230BA0 @ 0x140230BA0 (sub_140230BA0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_140230C30(unsigned __int64 a1)
{
  return dword_140D069BC && a1 >= qword_140D070E8 && a1 < qword_140D070F0 && KeGetCurrentIrql() == 15;
}
