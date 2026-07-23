/*
 * XREFs of sub_140A5B19C @ 0x140A5B19C
 * Callers:
 *     sub_140A5A6CC @ 0x140A5A6CC (sub_140A5A6CC.c)
 * Callees:
 *     sub_14025DFF0 @ 0x14025DFF0 (sub_14025DFF0.c)
 *     sub_1403AAE50 @ 0x1403AAE50 (sub_1403AAE50.c)
 *     sub_140A5367C @ 0x140A5367C (sub_140A5367C.c)
 */

char sub_140A5B19C()
{
  unsigned __int64 v0; // rax
  signed __int32 v2[8]; // [rsp+0h] [rbp-30h] BYREF
  int v3; // [rsp+40h] [rbp+10h] BYREF
  unsigned int v4; // [rsp+48h] [rbp+18h] BYREF
  int v5; // [rsp+50h] [rbp+20h] BYREF

  v3 = 0;
  v4 = 0;
  v5 = 0;
  LOBYTE(v0) = sub_1403AAE50();
  if ( (_BYTE)v0 == 2 )
  {
    byte_140C549A0 = 1;
    if ( !sub_140A5367C() )
      byte_140D014B9 = 1;
    v0 = __readmsr(0x179u);
    if ( (v0 & 0x1000000) != 0 )
      byte_140D016C4 = 1;
    if ( (v0 & 0x4000000) != 0 )
      byte_140D014BA = 1;
  }
  else
  {
    if ( (_BYTE)v0 != 1 )
      goto LABEL_18;
    sub_14025DFF0(0x80000000, &v4, &v3, &v3, &v3);
    if ( v4 >= 0x80000007 )
    {
      sub_14025DFF0(0x80000007, &v3, &v5, &v3, &v3);
      if ( (v5 & 2) != 0 )
        byte_140D016C4 = 1;
      if ( (v5 & 1) != 0 )
        byte_140D0159C = 1;
      if ( (v5 & 8) != 0 )
        byte_140D016E8 = 1;
    }
    LOBYTE(v0) = sub_140A5367C();
    if ( !(_BYTE)v0 )
LABEL_18:
      byte_140D014B9 = 1;
  }
  byte_140C54968 = 1;
  byte_140C5496A = 1;
  _InterlockedOr(v2, 0);
  return v0;
}
