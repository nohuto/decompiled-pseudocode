/*
 * XREFs of PsGetThreadTeb @ 0x14029A290
 * Callers:
 *     sub_1407049DC @ 0x1407049DC (sub_1407049DC.c)
 *     sub_140705578 @ 0x140705578 (sub_140705578.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetThreadTeb(__int64 a1)
{
  return *(_QWORD *)(a1 + 240);
}
