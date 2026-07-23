/*
 * XREFs of sub_1403B3594 @ 0x1403B3594
 * Callers:
 *     sub_1403B3320 @ 0x1403B3320 (sub_1403B3320.c)
 *     sub_1403BD04C @ 0x1403BD04C (sub_1403BD04C.c)
 *     sub_14051E100 @ 0x14051E100 (sub_14051E100.c)
 * Callees:
 *     sub_1403B36F4 @ 0x1403B36F4 (sub_1403B36F4.c)
 *     sub_1403B38C8 @ 0x1403B38C8 (sub_1403B38C8.c)
 *     sub_1403B3A6C @ 0x1403B3A6C (sub_1403B3A6C.c)
 */

__int64 sub_1403B3594()
{
  bool v0; // bl
  char v1; // al
  __int64 v2; // rdx
  char v3; // r10
  int v4; // ecx
  __int64 v5; // rdx
  __int64 (__fastcall *v6)(int); // r14
  __int64 (__fastcall *v7)(int, int); // r15
  __int64 *v8; // rsi
  void (*v9)(); // r12
  __int64 *v10; // rdi
  __int64 v11; // rdx
  __int64 result; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  _BYTE v17[8]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v18; // [rsp+38h] [rbp-20h] BYREF
  char v19; // [rsp+A0h] [rbp+48h] BYREF
  char v20; // [rsp+A8h] [rbp+50h] BYREF
  char v21; // [rsp+B0h] [rbp+58h] BYREF
  char v22; // [rsp+B8h] [rbp+60h] BYREF

  v0 = 0;
  v17[0] = 0;
  v20 = 0;
  v21 = 0;
  v18 = 0LL;
  v19 = 0;
  v22 = 0;
  v1 = sub_1403B3A6C();
  v4 = 27;
  if ( v1 )
    goto LABEL_16;
  sub_1403B36F4(4LL, v2, &v20);
  sub_1403B36F4(6LL, v5, &v21);
  v4 = 27;
  v3 = v20;
  if ( (__readmsr(0x1Bu) & 0x400) != 0 )
    v3 = 1;
  if ( v21 || v3 )
  {
LABEL_16:
    byte_140C54BD8 = 1;
    v6 = (__int64 (__fastcall *)(int))qword_140372AB0;
    v7 = (__int64 (__fastcall *)(int, int))qword_140372AD0;
    v8 = qword_140459420;
    v9 = _misaligned_access;
    v10 = &qword_14041B390;
    if ( v3 )
    {
      v13 = __readmsr(0x1Bu);
      if ( (v13 & 0x400) == 0 )
      {
        __writemsr(0x1Bu, v13 | 0x400);
        if ( !byte_140D011A2 )
          byte_140D01794 = 1;
      }
      v14 = __readmsr(0x1Bu);
      if ( (v14 & 0x400) != 0 )
      {
        byte_140D011A2 = 1;
      }
      else if ( byte_140D011A2 )
      {
        return 3221225858LL;
      }
      sub_1403B36F4(7LL, (unsigned __int64)HIDWORD(v14) << 32, &v19);
      sub_1403B36F4(9LL, v15, &v22);
      if ( v19 )
      {
        if ( !v22 )
        {
          sub_1403B36F4(5LL, v16, v17);
          if ( !v17[0] )
            byte_140D011A1 = 1;
        }
      }
      goto LABEL_8;
    }
    if ( !byte_140D011A2 )
      goto LABEL_8;
    return 3221225858LL;
  }
  if ( byte_140D011A2 )
    return 3221225858LL;
  byte_140C54BD8 = 0;
  v6 = sub_140372A70;
  v7 = sub_140372A90;
  v8 = (__int64 *)sub_1402264D0;
  v9 = (void (*)())sub_1403B68C0;
  v10 = (__int64 *)sub_14041B370;
LABEL_8:
  sub_1403B38C8(v4, (int)sub_14051E100, 5, 16, &v18);
  if ( (_QWORD)v18 )
    v10 = (__int64 *)v18;
  if ( *((_QWORD *)&v18 + 1) )
    v8 = (__int64 *)*((_QWORD *)&v18 + 1);
  if ( !byte_140D011A2 && !byte_140C54BD8 )
  {
    sub_1403B36F4(7LL, v11, &v19);
    v0 = v19 == 0;
  }
  byte_140C54BE8 = v0;
  result = 0LL;
  qword_140C54BC0 = (__int64)v6;
  qword_140C54BC8 = (__int64)v7;
  qword_140C54BE0 = (__int64)v8;
  qword_140C54BB8 = (__int64)v9;
  qword_140C54BF0 = (__int64)v10;
  return result;
}
