/*
 * XREFs of sub_1407EED48 @ 0x1407EED48
 * Callers:
 *     sub_1405CFB5C @ 0x1405CFB5C (sub_1405CFB5C.c)
 *     sub_1407EECA0 @ 0x1407EECA0 (sub_1407EECA0.c)
 *     sub_14080D028 @ 0x14080D028 (sub_14080D028.c)
 *     sub_1408634D0 @ 0x1408634D0 (sub_1408634D0.c)
 *     sub_1408638B0 @ 0x1408638B0 (sub_1408638B0.c)
 *     sub_140996CE0 @ 0x140996CE0 (sub_140996CE0.c)
 *     sub_1409971BC @ 0x1409971BC (sub_1409971BC.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     sub_140224C00 @ 0x140224C00 (sub_140224C00.c)
 *     sub_140224C34 @ 0x140224C34 (sub_140224C34.c)
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 *     sub_1402D5F7C @ 0x1402D5F7C (sub_1402D5F7C.c)
 *     sub_1402D6004 @ 0x1402D6004 (sub_1402D6004.c)
 *     sub_140369AB0 @ 0x140369AB0 (sub_140369AB0.c)
 *     sub_1405C75AC @ 0x1405C75AC (sub_1405C75AC.c)
 *     sub_1405CFC70 @ 0x1405CFC70 (sub_1405CFC70.c)
 */

void sub_1407EED48()
{
  char v0; // si
  char v1; // bl
  char v2; // di
  bool v3; // al
  char v4; // cl

  v0 = dword_140D06A80 != 0;
  if ( !byte_140D068F9 && !byte_140D068FA )
  {
    v1 = 1;
    if ( byte_140C23414 )
    {
      v2 = byte_140C22451;
      if ( sub_140369AB0() )
      {
        if ( v2 )
          dword_140C0C5EC = sub_1405C75AC();
        else
          dword_140C0C5EC = -1;
      }
    }
    else
    {
      v2 = 0;
    }
    v3 = sub_140369AB0();
    if ( !v4 || !dword_140D06C04 )
      v1 = 0;
    if ( v2 && v3 )
    {
      sub_1402D6004(0);
    }
    else
    {
      sub_1402D5F7C(0);
      if ( byte_140C23414 && !sub_140369AB0() )
      {
        sub_140224E90(&qword_140C23EE0);
        if ( byte_140C1FB90 != v2 )
        {
          byte_140C1FB90 = v2;
          sub_140224C34();
        }
        sub_140224C00((__int64 *)&qword_140C23EE0);
      }
    }
    if ( v1 != v0 )
    {
      byte_140C23908 = (2 * v1) | byte_140C23908 & 0xFD;
      sub_1405CFC70();
    }
  }
}
