/*
 * XREFs of sub_1408310F0 @ 0x1408310F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140224C00 @ 0x140224C00 (sub_140224C00.c)
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 *     sub_14083113C @ 0x14083113C (sub_14083113C.c)
 *     sub_14099D66C @ 0x14099D66C (sub_14099D66C.c)
 */

void __fastcall sub_1408310F0(__int64 a1, char a2)
{
  if ( (dword_140C1D024 & 2) == 0 )
  {
    if ( a2 )
    {
      sub_140224E90((struct _KTHREAD **)&qword_140C22FE0);
      sub_14083113C(a1);
      sub_140224C00(&qword_140C22FE0);
    }
    else
    {
      sub_14099D66C();
    }
  }
}
