/*
 * XREFs of sub_14065246C @ 0x14065246C
 * Callers:
 *     sub_140650E68 @ 0x140650E68 (sub_140650E68.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406516CC @ 0x1406516CC (sub_1406516CC.c)
 */

__int64 __fastcall sub_14065246C(__int64 *a1)
{
  __int64 v2; // rbx
  int v3; // edx

  v2 = *(_QWORD *)(*a1 + 264);
  memset((void *)(v2 + 446), 0, 0x40uLL);
  *(_DWORD *)(v2 + 440) = 0;
  *(_WORD *)(v2 + 510) = 0;
  v3 = sub_1406516CC(*a1, 1LL, 0LL);
  if ( v3 >= 0 && *(_DWORD *)(*a1 + 256) == 1 )
  {
    memset(*(void **)(*a1 + 264), 0, 1 << *(_DWORD *)(*a1 + 240));
    v3 = sub_1406516CC(*a1, 1LL, 1LL);
    if ( v3 >= 0 && (*(_DWORD *)(*a1 + 200) & 1) == 0 )
      return (unsigned int)sub_1406516CC(*a1, 1LL, *(_QWORD *)(*a1 + 248) - 1LL);
  }
  return (unsigned int)v3;
}
