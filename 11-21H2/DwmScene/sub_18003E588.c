/*
 * XREFs of sub_18003E588 @ 0x18003E588
 * Callers:
 *     sub_18003F210 @ 0x18003F210 (sub_18003F210.c)
 *     sub_18003F2E0 @ 0x18003F2E0 (sub_18003F2E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003E588(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  *a1 = *a2;
  result = a2[1];
  a1[1] = result;
  *a2 = 0LL;
  a2[1] = 0LL;
  return result;
}
