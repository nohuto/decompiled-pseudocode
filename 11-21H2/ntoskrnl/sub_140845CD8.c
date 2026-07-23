/*
 * XREFs of sub_140845CD8 @ 0x140845CD8
 * Callers:
 *     sub_1403CCF90 @ 0x1403CCF90 (sub_1403CCF90.c)
 *     HalGetAdapter @ 0x1409084A0 (HalGetAdapter.c)
 * Callees:
 *     sub_1403CCFD4 @ 0x1403CCFD4 (sub_1403CCFD4.c)
 *     sub_140845A60 @ 0x140845A60 (sub_140845A60.c)
 *     sub_140845F30 @ 0x140845F30 (sub_140845F30.c)
 */

__int64 __fastcall sub_140845CD8(__int64 a1, struct _DEVICE_OBJECT *a2, _DWORD *a3)
{
  __int64 v3; // rbx
  unsigned int v7; // edi

  v3 = 0LL;
  *a3 = 0;
  v7 = 0;
  if ( a2 && sub_1403CCFD4(a2) )
    v7 = 3;
  if ( *(_DWORD *)a1 <= 2u )
  {
    if ( !v7 )
      return sub_140845A60(a1, (__int64)a2, a3);
    if ( !*(_BYTE *)(a1 + 4) )
      return v3;
    return sub_140845F30(a1, a2, v7, a3);
  }
  if ( *(_DWORD *)a1 == 3 )
    return sub_140845F30(a1, a2, v7, a3);
  return v3;
}
