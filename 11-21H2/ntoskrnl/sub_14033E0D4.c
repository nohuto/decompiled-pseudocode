/*
 * XREFs of sub_14033E0D4 @ 0x14033E0D4
 * Callers:
 *     sub_14026F180 @ 0x14026F180 (sub_14026F180.c)
 *     sub_14027F9DC @ 0x14027F9DC (sub_14027F9DC.c)
 *     sub_1402E4474 @ 0x1402E4474 (sub_1402E4474.c)
 *     sub_140329730 @ 0x140329730 (sub_140329730.c)
 *     sub_14033DFC0 @ 0x14033DFC0 (sub_14033DFC0.c)
 *     sub_14096F8CC @ 0x14096F8CC (sub_14096F8CC.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_14033E0D4(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdx

  v1 = *(unsigned int *)(a1 + 36);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0x20) != 0 )
    v2 = (v1 + *(unsigned int *)(a1 + 40)) << 9;
  else
    v2 = (*(unsigned int *)(a1 + 40) + (v1 | ((unsigned __int64)(*(_WORD *)(a1 + 32) & 0xFFC0) << 26))) << 12;
  return v2 + ((unsigned __int64)*(unsigned __int16 *)(a1 + 34) >> 4);
}
