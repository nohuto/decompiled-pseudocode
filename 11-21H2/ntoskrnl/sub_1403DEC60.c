/*
 * XREFs of sub_1403DEC60 @ 0x1403DEC60
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022475C @ 0x14022475C (sub_14022475C.c)
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 *     sub_14081A3AC @ 0x14081A3AC (sub_14081A3AC.c)
 */

__int64 __fastcall sub_1403DEC60(__int64 a1, int *a2, int a3)
{
  int v3; // eax

  if ( a3 != 4 )
    return 3221225485LL;
  if ( *a2 == 4 )
  {
    v3 = 1;
  }
  else
  {
    dword_140C5AE34 = *a2;
    v3 = 0;
  }
  dword_140C5AE38 = v3;
  sub_140224E90((struct _KTHREAD **)&qword_140C22FE0);
  sub_14081A3AC();
  sub_14022475C(4u);
  return 0LL;
}
