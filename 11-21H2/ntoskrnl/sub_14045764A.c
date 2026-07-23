/*
 * XREFs of sub_14045764A @ 0x14045764A
 * Callers:
 *     sub_140457684 @ 0x140457684 (sub_140457684.c)
 *     sub_140503808 @ 0x140503808 (sub_140503808.c)
 *     sub_1405038DC @ 0x1405038DC (sub_1405038DC.c)
 *     sub_1405188FC @ 0x1405188FC (sub_1405188FC.c)
 *     sub_1405189C4 @ 0x1405189C4 (sub_1405189C4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14045764A(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 *v3; // r9
  unsigned int v4; // eax

  v3 = *(__int64 **)(a1 + 40);
  while ( 1 )
  {
    if ( !v3 )
      return 0LL;
    v4 = *((_DWORD *)v3 + 2);
    if ( a2 < v4 )
      break;
    v3 = (__int64 *)*v3;
    a2 -= v4;
  }
  if ( a3 )
    *a3 = v3;
  return v3[2] + 72LL * a2;
}
