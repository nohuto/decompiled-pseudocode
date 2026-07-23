/*
 * XREFs of sub_140A519DC @ 0x140A519DC
 * Callers:
 *     sub_140A51888 @ 0x140A51888 (sub_140A51888.c)
 * Callees:
 *     sub_140396640 @ 0x140396640 (sub_140396640.c)
 *     sub_1407ED930 @ 0x1407ED930 (sub_1407ED930.c)
 *     sub_1408052DC @ 0x1408052DC (sub_1408052DC.c)
 */

unsigned __int8 __fastcall sub_140A519DC(_BYTE *a1)
{
  unsigned __int64 v1; // rbp
  int v2; // r14d
  unsigned __int8 v3; // r15
  unsigned __int8 v4; // r12
  int v5; // eax
  int v7; // ebx
  int v8; // ecx
  unsigned __int64 v9; // rsi
  __int64 v10; // rbp
  __int128 v12; // [rsp+40h] [rbp-38h] BYREF

  v1 = 0LL;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = dword_140C23798 & 0x18;
  v7 = 1;
  *a1 = 1;
  if ( v5 == 16 )
  {
    v8 = 1;
    dword_140C22820 = 1;
    *a1 = 0;
    goto LABEL_6;
  }
  if ( v5 == 8 )
  {
    v8 = 0;
    v3 = 1;
    dword_140C22820 = 0;
    *a1 = 0;
    goto LABEL_6;
  }
  if ( v5 )
  {
    sub_1407ED930(&v12, 0LL);
    dword_140C22820 = dword_140C232CC;
  }
  v8 = dword_140C22820;
  if ( dword_140C22820 >= 0 )
  {
LABEL_6:
    if ( (unsigned __int64)v8 < 3 )
      goto LABEL_10;
  }
  if ( qword_140C22848 && qword_140C22830[0] > (unsigned __int64)qword_140C22848 )
  {
    v8 = 1;
    dword_140C22820 = 1;
  }
  else
  {
    v8 = 0;
    v3 = 1;
    dword_140C22820 = 0;
  }
LABEL_10:
  v9 = qword_140C22830[3 * v8];
  if ( v9 )
  {
    v10 = qword_140C22808;
    v1 = v10 - 10000 * (unsigned int)sub_1408052DC();
    if ( v9 < v1 + 100000000 )
    {
      if ( v1 <= v9 || v1 - v9 < (-(__int64)(dword_140C223B4 != 0) & 0xFFFFFFFFBE6F5500uLL) + 1200000000 )
      {
        v4 = 1;
        v7 = 0;
        goto LABEL_15;
      }
      v2 = 3;
    }
    else
    {
      v2 = 2;
    }
    v7 = 0;
  }
  else
  {
    v2 = 1;
  }
  dword_140C22820 = 3;
  *a1 = 0;
LABEL_15:
  sub_140396640(v3, v4, v2, (unsigned __int8)*a1, v7, v3, v1);
  return v4;
}
