/*
 * XREFs of sub_180028A40 @ 0x180028A40
 * Callers:
 *     sub_180028710 @ 0x180028710 (sub_180028710.c)
 *     sub_18009CD20 @ 0x18009CD20 (sub_18009CD20.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180028A40(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *(_QWORD *)(a1 + 136);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 128);
    if ( v3 )
      return *(unsigned int *)(v3 + 4);
  }
  return result;
}
