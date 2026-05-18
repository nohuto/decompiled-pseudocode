/*
 * XREFs of sub_18002FE64 @ 0x18002FE64
 * Callers:
 *     sub_180036CD4 @ 0x180036CD4 (sub_180036CD4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002FE64(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8

  v2 = a2[2];
  if ( a2[3] >= 8uLL )
    a2 = (_QWORD *)*a2;
  return sub_180031560(a1, a2, v2);
}
