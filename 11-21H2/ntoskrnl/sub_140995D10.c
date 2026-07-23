/*
 * XREFs of sub_140995D10 @ 0x140995D10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_14080877C @ 0x14080877C (sub_14080877C.c)
 *     sub_140808BE8 @ 0x140808BE8 (sub_140808BE8.c)
 *     sub_140995888 @ 0x140995888 (sub_140995888.c)
 */

__int64 __fastcall sub_140995D10(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  if ( *(_BYTE *)(a1 + 72) )
  {
    sub_140995888(a1);
  }
  else
  {
    sub_1402935D0((ULONG_PTR)&qword_140C21D20);
    sub_14080877C();
    sub_140808BE8(v2, v1);
    sub_1402D66A8((ULONG_PTR)&qword_140C21D20);
  }
  return 0LL;
}
