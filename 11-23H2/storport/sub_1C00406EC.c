/*
 * XREFs of sub_1C00406EC @ 0x1C00406EC
 * Callers:
 *     sub_1C003562C @ 0x1C003562C (sub_1C003562C.c)
 * Callees:
 *     sub_1C001A2F4 @ 0x1C001A2F4 (sub_1C001A2F4.c)
 */

void __fastcall sub_1C00406EC(__int64 a1, unsigned int a2)
{
  int v2; // ebp
  KIRQL v4; // bl

  v2 = a2;
  if ( a2 >= 0x7FFFFFFF )
    v2 = 0x7FFFFFFF;
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  sub_1C001A2F4((struct _EX_RUNDOWN_REF *)a1);
  if ( v2 > (((__int64)*(unsigned int *)(a1 + 88) >> 1) & 0x7FFFFFFF) )
    v2 = ((__int64)*(unsigned int *)(a1 + 88) >> 1) & 0x7FFFFFFF;
  *(_DWORD *)(a1 + 28) = v2;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v4);
}
