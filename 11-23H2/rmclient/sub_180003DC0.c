/*
 * XREFs of sub_180003DC0 @ 0x180003DC0
 * Callers:
 *     sub_180003CE8 @ 0x180003CE8 (sub_180003CE8.c)
 * Callees:
 *     sub_180003EA0 @ 0x180003EA0 (sub_180003EA0.c)
 *     sub_180003EF0 @ 0x180003EF0 (sub_180003EF0.c)
 *     sub_1800089B0 @ 0x1800089B0 (sub_1800089B0.c)
 *     sub_180008B00 @ 0x180008B00 (sub_180008B00.c)
 *     sub_1800091EC @ 0x1800091EC (sub_1800091EC.c)
 */

__int64 __fastcall sub_180003DC0(__int64 a1, __int64 **a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rsi
  int AgileReference; // ebx
  __int64 **v7; // rax
  __int64 *v8; // rbx
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 *v11; // [rsp+58h] [rbp+10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v11 = &v10;
  *a2 = 0LL;
  v10 = 0LL;
  v4 = (_QWORD *)sub_180003EA0(&v11);
  v5 = v4;
  if ( a1 )
  {
    sub_1800089B0(v4);
    AgileReference = RoGetAgileReference(0LL, &unk_180026180, a1, v5);
    if ( AgileReference < 0 )
    {
      sub_1800089B0(&v10);
      return (unsigned int)AgileReference;
    }
  }
  else
  {
    v11 = (__int64 *)*v4;
    v12 = 0LL;
    *v4 = 0LL;
    sub_1800089B0(&v11);
    sub_1800089B0(&v12);
  }
  v13 = v10;
  v10 = 0LL;
  v7 = (__int64 **)sub_180003EF0(&v12, &v13);
  v8 = *v7;
  *v7 = 0LL;
  v11 = v8;
  if ( v12 )
  {
    v12 = 0LL;
    sub_180008B00();
  }
  sub_1800089B0(&v13);
  if ( v8 )
  {
    v11 = 0LL;
    *a2 = v8;
    sub_1800091EC(&v11);
    sub_1800089B0(&v10);
    return 0LL;
  }
  else
  {
    sub_1800091EC(&v11);
    sub_1800089B0(&v10);
    return 2147942414LL;
  }
}
