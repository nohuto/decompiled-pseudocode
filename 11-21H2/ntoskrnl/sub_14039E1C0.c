/*
 * XREFs of sub_14039E1C0 @ 0x14039E1C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14039E1C0(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // edx

  v3 = 0;
  if ( a3 != -1 && *(_QWORD *)(qword_140D068A8 + 16) )
    return (unsigned int)sub_14042A5E0(a1, 0LL);
  return v3;
}
