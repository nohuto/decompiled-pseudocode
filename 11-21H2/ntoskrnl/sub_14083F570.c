/*
 * XREFs of sub_14083F570 @ 0x14083F570
 * Callers:
 *     sub_14083F51C @ 0x14083F51C (sub_14083F51C.c)
 *     sub_1409DA758 @ 0x1409DA758 (sub_1409DA758.c)
 * Callees:
 *     sub_1406E6CB0 @ 0x1406E6CB0 (sub_1406E6CB0.c)
 *     sub_14083F5DC @ 0x14083F5DC (sub_14083F5DC.c)
 *     sub_14083F5FC @ 0x14083F5FC (sub_14083F5FC.c)
 *     sub_14083F704 @ 0x14083F704 (sub_14083F704.c)
 *     sub_14083F75C @ 0x14083F75C (sub_14083F75C.c)
 *     sub_14083F84C @ 0x14083F84C (sub_14083F84C.c)
 *     sub_14083FE80 @ 0x14083FE80 (sub_14083FE80.c)
 *     sub_1409DA868 @ 0x1409DA868 (sub_1409DA868.c)
 */

__int64 sub_14083F570()
{
  int v0; // ebx

  v0 = sub_1406E6CB0();
  if ( v0 >= 0 )
  {
    v0 = sub_14083F84C();
    if ( v0 >= 0 )
    {
      v0 = sub_14083F75C();
      if ( v0 >= 0 )
      {
        v0 = sub_14083F704();
        if ( v0 >= 0 )
        {
          v0 = sub_14083FE80();
          if ( v0 >= 0 )
            v0 = sub_14083F5FC();
        }
      }
    }
  }
  sub_14083F5DC();
  if ( v0 < 0 )
    sub_1409DA868();
  else
    byte_140C16E48 = 1;
  return (unsigned int)v0;
}
