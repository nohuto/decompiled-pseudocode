/*
 * XREFs of sub_1403A7580 @ 0x1403A7580
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_14099089C @ 0x14099089C (sub_14099089C.c)
 */

__int64 __fastcall sub_1403A7580(_QWORD *a1, int *a2, int a3)
{
  __int64 v6; // r9
  int v7; // eax

  sub_1402D66A8((ULONG_PTR)&qword_140C22460);
  v6 = 0x4AC5A89994D3A615LL - *a1;
  if ( *a1 == 0x4AC5A89994D3A615LL )
    v6 = 0x7F3634F6D8E42BAELL - a1[1];
  if ( !v6 && a3 == 4 )
    dword_140C23308 = *a2;
  if ( !byte_140C5AC3C || (v7 = 1, dword_140C548DC) )
    v7 = dword_140C23308;
  if ( v7 != dword_140C5AE10 )
  {
    dword_140C5AE10 = v7;
    sub_14099089C();
  }
  sub_1402935D0((ULONG_PTR)&qword_140C22460);
  return 0LL;
}
