/*
 * XREFs of sub_180004230 @ 0x180004230
 * Callers:
 *     sub_18000418C @ 0x18000418C (sub_18000418C.c)
 * Callees:
 *     sub_180004310 @ 0x180004310 (sub_180004310.c)
 *     sub_1800089B0 @ 0x1800089B0 (sub_1800089B0.c)
 *     sub_180008B00 @ 0x180008B00 (sub_180008B00.c)
 *     sub_1800091EC @ 0x1800091EC (sub_1800091EC.c)
 */

__int64 __fastcall sub_180004230(__int64 a1, _QWORD *a2)
{
  int AgileReference; // ebx
  __int64 *v5; // rax
  __int64 v6; // rbx
  __int64 v8; // [rsp+50h] [rbp+28h] BYREF
  __int64 v9; // [rsp+58h] [rbp+30h] BYREF
  __int64 v10; // [rsp+60h] [rbp+38h] BYREF
  __int64 v11; // [rsp+68h] [rbp+40h] BYREF

  *a2 = 0LL;
  v10 = 0LL;
  v9 = 0LL;
  v8 = 0LL;
  sub_1800089B0(&v9);
  sub_1800089B0(&v10);
  if ( a1 )
  {
    sub_1800089B0(&v8);
    AgileReference = RoGetAgileReference(0LL, &unk_180026190, a1, &v8);
    if ( AgileReference < 0 )
    {
      sub_1800089B0(&v8);
      return (unsigned int)AgileReference;
    }
  }
  else
  {
    v9 = v8;
    v10 = 0LL;
    sub_1800089B0(&v9);
    sub_1800089B0(&v10);
  }
  v11 = v8;
  v8 = 0LL;
  v5 = (__int64 *)sub_180004310(&v10, &v11);
  v6 = *v5;
  *v5 = 0LL;
  v9 = v6;
  if ( v10 )
  {
    v10 = 0LL;
    sub_180008B00();
  }
  sub_1800089B0(&v11);
  if ( v6 )
  {
    v9 = 0LL;
    *a2 = v6;
    sub_1800091EC(&v9);
    sub_1800089B0(&v8);
    return 0LL;
  }
  else
  {
    sub_1800091EC(&v9);
    sub_1800089B0(&v8);
    return 2147942414LL;
  }
}
