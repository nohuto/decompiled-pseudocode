/*
 * XREFs of sub_140A544B0 @ 0x140A544B0
 * Callers:
 *     sub_1407D7634 @ 0x1407D7634 (sub_1407D7634.c)
 *     sub_140A49250 @ 0x140A49250 (sub_140A49250.c)
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     sub_14025CF20 @ 0x14025CF20 (sub_14025CF20.c)
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 *     sub_14086448C @ 0x14086448C (sub_14086448C.c)
 *     sub_14086538C @ 0x14086538C (sub_14086538C.c)
 *     sub_140A54598 @ 0x140A54598 (sub_140A54598.c)
 */

__int64 __fastcall sub_140A544B0(unsigned int a1)
{
  unsigned int v1; // ebx
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  int v4; // ecx
  unsigned int v6; // ecx
  unsigned __int64 v7; // rdi
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  if ( a1 >= 5 )
    return (unsigned int)-1073741811;
  v1 = 0;
  if ( !a1 )
  {
    EtwRegister(&stru_140010650, 0LL, 0LL, &qword_140C54788);
    sub_14086538C();
    sub_14025CF20(3, 1);
    v8 = -3000000000LL;
    sub_14086448C(&v8);
    return v1;
  }
  v2 = a1 - 1;
  if ( !v2 )
    goto LABEL_15;
  v3 = v2 - 1;
  if ( !v3 )
  {
    sub_14025CF20(4, 1);
    v4 = 17;
LABEL_6:
    sub_14025CF20(v4, 0);
    return v1;
  }
  v6 = v3 - 1;
  if ( !v6 )
  {
    if ( (sub_14025CF20(8, 1) & 4) == 0 )
      return v1;
LABEL_15:
    v4 = 1;
    goto LABEL_6;
  }
  if ( v6 == 1 )
  {
    v7 = sub_140A54598(16LL);
    if ( v7 )
    {
      sub_14025CF20(16, 1);
      sub_1402E2D20(v7, -600000000LL, 0, 0, v7 + 64);
    }
  }
  return v1;
}
