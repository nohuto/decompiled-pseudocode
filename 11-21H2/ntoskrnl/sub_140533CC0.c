/*
 * XREFs of sub_140533CC0 @ 0x140533CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall sub_140533CC0(unsigned __int64 *a1, int a2, __int64 a3)
{
  if ( *a1 || !a2 )
    return 0;
  *a1 = a3 & 0xFFFFFFFFFF000LL | ((unsigned __int64)(a2 & 7) << 9) | 0x6000000000000001LL;
  return 1;
}
