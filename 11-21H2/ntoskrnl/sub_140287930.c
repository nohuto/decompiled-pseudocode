/*
 * XREFs of sub_140287930 @ 0x140287930
 * Callers:
 *     sub_1402874E8 @ 0x1402874E8 (sub_1402874E8.c)
 *     sub_1406A43A4 @ 0x1406A43A4 (sub_1406A43A4.c)
 *     sub_1406FC2F0 @ 0x1406FC2F0 (sub_1406FC2F0.c)
 *     sub_1406FC590 @ 0x1406FC590 (sub_1406FC590.c)
 *     sub_140983978 @ 0x140983978 (sub_140983978.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_140287930(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 56);
  return (v1 & 0x20) != 0
      || (v1 & 0x400) == 0 && a1 != qword_140C4F3E0 && !*(_QWORD *)(a1 + 64) && a1 != qword_140C4F378;
}
