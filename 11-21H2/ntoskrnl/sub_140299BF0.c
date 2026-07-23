/*
 * XREFs of sub_140299BF0 @ 0x140299BF0
 * Callers:
 *     sub_140299A64 @ 0x140299A64 (sub_140299A64.c)
 *     sub_140299CBC @ 0x140299CBC (sub_140299CBC.c)
 *     sub_140299D74 @ 0x140299D74 (sub_140299D74.c)
 *     sub_1403B6C24 @ 0x1403B6C24 (sub_1403B6C24.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140299BF0(__int64 a1, _BYTE *a2)
{
  _BYTE *v2; // rax

  v2 = *(_BYTE **)(a1 + 16);
  if ( v2 == *(_BYTE **)(a1 + 8) )
    return 3221225473LL;
  *a2 = *v2;
  ++*(_QWORD *)(a1 + 16);
  return 0LL;
}
