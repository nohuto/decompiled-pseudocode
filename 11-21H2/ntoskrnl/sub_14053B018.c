/*
 * XREFs of sub_14053B018 @ 0x14053B018
 * Callers:
 *     sub_14053B55C @ 0x14053B55C (sub_14053B55C.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_14053B018(__int64 a1, __int64 a2)
{
  char v2; // r8

  v2 = 0;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 8) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL && !*(_WORD *)(a1 + 16) && *(_QWORD *)a1 )
    return !a2 || ((a2 ^ *(_QWORD *)a1) & 0xFFFFFFE00000LL) == 0;
  return v2;
}
