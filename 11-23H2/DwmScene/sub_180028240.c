/*
 * XREFs of sub_180028240 @ 0x180028240
 * Callers:
 *     <none>
 * Callees:
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_180028710 @ 0x180028710 (sub_180028710.c)
 *     sub_180029680 @ 0x180029680 (sub_180029680.c)
 */

__int64 __fastcall sub_180028240(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdi
  unsigned int v4; // eax
  __int64 result; // rax

  v2 = *a2;
  v4 = sub_180026650(*a2);
  result = sub_180029680(a1, v4);
  if ( !(_BYTE)result )
    return sub_180028710(a1, v2);
  return result;
}
