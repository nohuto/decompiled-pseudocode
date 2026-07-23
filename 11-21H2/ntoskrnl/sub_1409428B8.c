/*
 * XREFs of sub_1409428B8 @ 0x1409428B8
 * Callers:
 *     sub_14076ACA8 @ 0x14076ACA8 (sub_14076ACA8.c)
 *     sub_14085C97C @ 0x14085C97C (sub_14085C97C.c)
 * Callees:
 *     sub_1402DCF44 @ 0x1402DCF44 (sub_1402DCF44.c)
 *     sub_140764FE4 @ 0x140764FE4 (sub_140764FE4.c)
 *     sub_1407750C0 @ 0x1407750C0 (sub_1407750C0.c)
 */

__int64 __fastcall sub_1409428B8(_QWORD *Object)
{
  __int64 v2; // rax
  __int64 v3; // rbx

  if ( !Object )
    return 3221225473LL;
  v2 = Object[39];
  v3 = *(_QWORD *)(v2 + 40);
  if ( !v3
    || (*(_DWORD *)(v3 + 396) & 0x2000) == 0
    || *(_DWORD *)(v3 + 404) != 51
    || sub_1407750C0(*(_QWORD *)(v2 + 40), 3u) )
  {
    return 3221225473LL;
  }
  sub_140764FE4(v3);
  return sub_1402DCF44(Object, 16, 1, 0LL, 0LL, 0LL, 0LL);
}
