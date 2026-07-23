/*
 * XREFs of sub_14054C8F0 @ 0x14054C8F0
 * Callers:
 *     sub_140547570 @ 0x140547570 (sub_140547570.c)
 *     sub_140547F80 @ 0x140547F80 (sub_140547F80.c)
 *     sub_140549468 @ 0x140549468 (sub_140549468.c)
 *     sub_1405496F8 @ 0x1405496F8 (sub_1405496F8.c)
 *     sub_14054CB14 @ 0x14054CB14 (sub_14054CB14.c)
 *     sub_14054CBD0 @ 0x14054CBD0 (sub_14054CBD0.c)
 *     sub_14054CEAC @ 0x14054CEAC (sub_14054CEAC.c)
 *     sub_14054CFC4 @ 0x14054CFC4 (sub_14054CFC4.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14054C8F0(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned __int64 v3; // r14
  unsigned int v6; // edi
  __int64 v7; // rsi
  char v8; // r15
  __int64 v9; // rax
  unsigned __int16 *v10[2]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v11; // [rsp+30h] [rbp-38h]
  int v12; // [rsp+32h] [rbp-36h]
  __int16 v13; // [rsp+36h] [rbp-32h]
  int v14; // [rsp+70h] [rbp+8h] BYREF

  v3 = a3;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  a2[1] = 0LL;
  if ( a1 )
  {
    *a2 = 0LL;
    v6 = 0;
    v10[1] = *(unsigned __int16 **)(a1 + 8);
    v11 = 0;
    v10[0] = (unsigned __int16 *)a1;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v14, v10) )
    {
      v7 = (unsigned __int8)byte_140D0CBD0[2 * v14];
      v8 = byte_140D0CBD0[2 * v14 + 1];
      if ( (unsigned int)v7 >= v6 )
      {
        if ( 8 * (unsigned __int64)(unsigned int)(v7 + 1) > v3 )
          return 0xFFFFFFFFLL;
        memset(&a2[v6 + 2], 0, 8LL * ((unsigned int)v7 - v6 + 1));
        v6 = v7 + 1;
      }
      a2[v7 + 2] |= 1LL << v8;
    }
    if ( v6 == 64 )
      v9 = -1LL;
    else
      v9 = (1LL << v6) - 1;
    a2[1] = v9;
    return 8 * v6;
  }
  else
  {
    *a2 = 1LL;
    return 0LL;
  }
}
