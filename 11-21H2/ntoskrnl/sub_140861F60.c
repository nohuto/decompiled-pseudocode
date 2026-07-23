/*
 * XREFs of sub_140861F60 @ 0x140861F60
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1409101DC @ 0x1409101DC (sub_1409101DC.c)
 */

__int64 __fastcall sub_140861F60(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a2 + 96) = KeGetCurrentThread();
  result = sub_14042A5E0(*(_QWORD *)(a2 + 88), a2);
  *(_QWORD *)(a2 + 96) = 0LL;
  return result;
}
