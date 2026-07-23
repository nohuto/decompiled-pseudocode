/*
 * XREFs of sub_140A5367C @ 0x140A5367C
 * Callers:
 *     sub_140A5029C @ 0x140A5029C (sub_140A5029C.c)
 *     sub_140A5AA64 @ 0x140A5AA64 (sub_140A5AA64.c)
 *     sub_140A5B19C @ 0x140A5B19C (sub_140A5B19C.c)
 *     sub_140A5B7B4 @ 0x140A5B7B4 (sub_140A5B7B4.c)
 * Callees:
 *     sub_1403AAE50 @ 0x1403AAE50 (sub_1403AAE50.c)
 *     sub_1403DEB00 @ 0x1403DEB00 (sub_1403DEB00.c)
 *     sub_14050910C @ 0x14050910C (sub_14050910C.c)
 */

char sub_140A5367C()
{
  char v1; // al
  bool v2; // bl
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( !byte_140C54AD4 )
  {
    v1 = sub_1403AAE50();
    if ( v1 == 2 )
    {
      v2 = sub_1403DEB00();
    }
    else if ( v1 == 1 )
    {
      v2 = sub_1403DEB00();
      if ( v2 )
        byte_140D016E9 = sub_14050910C();
    }
    else
    {
      v2 = 0;
    }
    byte_140C54AD5 = v2;
    _InterlockedOr(v3, 0);
    byte_140C54AD4 = 1;
  }
  return byte_140C54AD5;
}
