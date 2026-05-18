/*
 * XREFs of sub_180055120 @ 0x180055120
 * Callers:
 *     sub_18005561C @ 0x18005561C (sub_18005561C.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_180055120(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  unsigned __int64 v4; // rdx

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    result = sub_180010910(v1 + 64);
    v4 = *(_QWORD *)(v1 + 56);
    if ( v4 >= 0x10 )
      result = sub_180010884(*(char **)(v1 + 32), v4 + 1);
    *(_QWORD *)(v1 + 48) = 0LL;
    *(_QWORD *)(v1 + 56) = 15LL;
    *(_BYTE *)(v1 + 32) = 0;
    if ( *(_QWORD *)(a1 + 8) )
      return sub_180010884(*(char **)(a1 + 8), 0x50uLL);
  }
  return result;
}
