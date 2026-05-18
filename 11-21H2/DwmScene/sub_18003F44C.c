/*
 * XREFs of sub_18003F44C @ 0x18003F44C
 * Callers:
 *     sub_18003E350 @ 0x18003E350 (sub_18003E350.c)
 *     sub_18007C5DC @ 0x18007C5DC (sub_18007C5DC.c)
 *     sub_18007C690 @ 0x18007C690 (sub_18007C690.c)
 *     sub_1800B6A04 @ 0x1800B6A04 (sub_1800B6A04.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003F44C(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  __int64 v4; // r8

  v2 = *a1;
  *a1 = *a2;
  result = a2[1];
  *a2 = v2;
  v4 = a1[1];
  a1[1] = result;
  a2[1] = v4;
  return result;
}
