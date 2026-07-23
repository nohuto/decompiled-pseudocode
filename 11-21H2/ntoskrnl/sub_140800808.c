/*
 * XREFs of sub_140800808 @ 0x140800808
 * Callers:
 *     sub_140802068 @ 0x140802068 (sub_140802068.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140800A38 @ 0x140800A38 (sub_140800A38.c)
 *     sub_140800F20 @ 0x140800F20 (sub_140800F20.c)
 *     sub_140803250 @ 0x140803250 (sub_140803250.c)
 *     sub_140812B74 @ 0x140812B74 (sub_140812B74.c)
 *     sub_140812D00 @ 0x140812D00 (sub_140812D00.c)
 */

__int64 __fastcall sub_140800808(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // ebx
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r8
  __int16 v14; // [rsp+30h] [rbp-30h] BYREF
  __int64 v15; // [rsp+38h] [rbp-28h] BYREF
  __int128 v16; // [rsp+40h] [rbp-20h] BYREF

  v16 = 0LL;
  v15 = 0LL;
  v6 = sub_140800F20(a4);
  if ( v6 >= 0 )
  {
    v14 = (_BYTE)KdDebuggerEnabled != 0;
    sub_140803250(a4, 637534214LL, v7, &v14, 2);
    v6 = sub_140800A38(a4, 0LL, 0LL, &v16);
    if ( v6 >= 0 )
    {
      v8 = sub_140812B74(a1, qword_14000F1A8, &v15);
      v10 = v15;
      v6 = v8;
      if ( v8 >= 0 )
      {
        v6 = sub_140803250(v15, 587202566LL, v9, &v16, 16);
        if ( v6 >= 0 )
        {
          v14 = 1;
          v6 = sub_140803250(v10, 637534213LL, v11, &v14, 2);
          if ( v6 >= 0 )
          {
            v14 = (unsigned __int8)byte_140C22C00;
            v6 = sub_140803250(v10, 637534245LL, v12, &v14, 2);
            if ( v6 >= 0 )
              v6 = 0;
          }
        }
      }
      if ( v10 )
        sub_140812D00(v10);
    }
  }
  return (unsigned int)v6;
}
