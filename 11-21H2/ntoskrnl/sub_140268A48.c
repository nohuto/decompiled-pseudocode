/*
 * XREFs of sub_140268A48 @ 0x140268A48
 * Callers:
 *     sub_140267CA8 @ 0x140267CA8 (sub_140267CA8.c)
 *     sub_140267E78 @ 0x140267E78 (sub_140267E78.c)
 *     sub_140268998 @ 0x140268998 (sub_140268998.c)
 *     sub_140582D7C @ 0x140582D7C (sub_140582D7C.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_140268A48(__int64 a1)
{
  bool v1; // zf

  if ( a1 )
    v1 = *(_DWORD *)(a1 + 16264) == 0;
  else
    v1 = dword_140C51DC4 == 0;
  return !v1;
}
