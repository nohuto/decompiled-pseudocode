/*
 * XREFs of sub_140864980 @ 0x140864980
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 *     sub_14025DC0C @ 0x14025DC0C (sub_14025DC0C.c)
 *     sub_1403690D0 @ 0x1403690D0 (sub_1403690D0.c)
 *     sub_140848BE8 @ 0x140848BE8 (sub_140848BE8.c)
 */

__int64 sub_140864980()
{
  int v0; // ebx

  if ( dword_140D05340[0] )
  {
    v0 = sub_1403690D0();
    if ( v0 >= 0 )
    {
      sub_14025DC0C(0);
      return (unsigned int)v0;
    }
  }
  else
  {
    v0 = 0;
  }
  dword_140D050E0 = 0;
  if ( dword_140D0696C )
  {
    sub_140224E90((struct _KTHREAD **)&qword_140C22FE0);
    sub_140848BE8(0);
  }
  return (unsigned int)v0;
}
