/*
 * XREFs of sub_180011A3C @ 0x180011A3C
 * Callers:
 *     sub_180010974 @ 0x180010974 (sub_180010974.c)
 *     sub_18003477C @ 0x18003477C (sub_18003477C.c)
 *     sub_1800372DC @ 0x1800372DC (sub_1800372DC.c)
 *     sub_18003890C @ 0x18003890C (sub_18003890C.c)
 *     sub_18004347C @ 0x18004347C (sub_18004347C.c)
 *     sub_18004CBF0 @ 0x18004CBF0 (sub_18004CBF0.c)
 *     sub_180056C80 @ 0x180056C80 (sub_180056C80.c)
 *     sub_180092EF0 @ 0x180092EF0 (sub_180092EF0.c)
 *     sub_1800A218C @ 0x1800A218C (sub_1800A218C.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_180011A3C(__int64 a1)
{
  signed __int32 v1; // eax
  signed __int32 v2; // ett

  v1 = *(_DWORD *)(a1 + 8);
  while ( v1 )
  {
    v2 = v1;
    v1 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 8), v1 + 1, v1);
    if ( v2 == v1 )
      return 1;
  }
  return 0;
}
