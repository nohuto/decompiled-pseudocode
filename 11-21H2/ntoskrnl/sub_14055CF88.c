/*
 * XREFs of sub_14055CF88 @ 0x14055CF88
 * Callers:
 *     sub_14055CC5C @ 0x14055CC5C (sub_14055CC5C.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     sub_140552B40 @ 0x140552B40 (sub_140552B40.c)
 *     sub_140554390 @ 0x140554390 (sub_140554390.c)
 *     sub_14055CF10 @ 0x14055CF10 (sub_14055CF10.c)
 *     sub_14055D808 @ 0x14055D808 (sub_14055D808.c)
 *     sub_14055DD48 @ 0x14055DD48 (sub_14055DD48.c)
 *     sub_1405930C8 @ 0x1405930C8 (sub_1405930C8.c)
 *     sub_140593218 @ 0x140593218 (sub_140593218.c)
 *     sub_14063A4B0 @ 0x14063A4B0 (sub_14063A4B0.c)
 */

__int64 __fastcall sub_14055CF88(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rbx
  __int64 *i; // rbx
  _QWORD **v13; // rsi
  _QWORD *v14; // rdi
  _QWORD v15[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v16; // [rsp+30h] [rbp-50h] BYREF
  __int64 v17; // [rsp+40h] [rbp-40h]
  _QWORD v18[5]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v19; // [rsp+70h] [rbp-10h]
  unsigned int v20; // [rsp+C8h] [rbp+48h] BYREF
  int v21; // [rsp+CCh] [rbp+4Ch]

  v21 = HIDWORD(a4);
  v19 = 0LL;
  v20 = 0;
  v17 = 0LL;
  v16 = 0LL;
  v8 = *(_QWORD *)(qword_140D00A80 + 8);
  v9 = *(_QWORD *)(v8 + 48);
  v18[1] = 0LL;
  v19 = 3LL;
  v15[0] = v9;
  v15[1] = v8 + 56;
  v18[2] = v15;
  v18[4] = &qword_140D018E8;
  v18[0] = sub_140552F60;
  v18[3] = v8;
  result = sub_140593218(v18, &unk_140C02190, 896LL);
  if ( (int)result < 0 )
    return result;
  result = sub_140593218(v18, qword_140D088C0, 8LL * (unsigned int)dword_140D06884);
  if ( (int)result < 0 )
    return result;
  v11 = 0LL;
  if ( !(_DWORD)dword_140D06884 )
  {
LABEL_6:
    *((_QWORD *)&v16 + 1) = qword_140D06E48[0];
    *(_QWORD *)&v16 = dword_140D06E40;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v20, (unsigned __int16 **)&v16) )
    {
      result = sub_14055DD48(v18, v20);
      if ( (int)result < 0 )
        return result;
    }
    result = sub_1405930C8(v18, 2LL);
    if ( (int)result < 0 )
      return result;
    result = sub_140593218(v18, 0xFFFFF78000000000uLL, 1840LL);
    if ( (int)result < 0 )
      return result;
    result = sub_1405930C8(v18, 4LL);
    if ( (int)result < 0 )
      return result;
    result = sub_1405930C8(v18, 8LL);
    if ( (int)result < 0 )
      return result;
    if ( qword_140D06950 )
    {
      result = sub_140593218(v18, qword_140D06950, 16 * ((unsigned int)(*(_DWORD *)qword_140D06950 - 1) + 2LL));
      if ( (int)result < 0 )
        return result;
    }
    result = sub_1405930C8(v18, 32LL);
    if ( (int)result < 0 )
      return result;
    if ( a1 == 351 && a2 == 2 )
    {
      result = sub_140593218(v18, a3, 56LL);
      if ( (int)result < 0 )
        return result;
      if ( (unsigned int)sub_14055D808(v18, *(_QWORD *)(a3 + 48)) == -1073741789 )
        return 3221225507LL;
      if ( a5 )
      {
        result = sub_14055D808(v18, a5);
        if ( (int)result < 0 )
          return result;
      }
    }
    if ( qword_140C4E8D0 )
    {
      if ( qword_140C4E8D0 != *(void **)(qword_140D00A80 + 1328) )
      {
        result = sub_140593218(v18, (char *)qword_140C4E8D0 - 0x2000, *((unsigned int *)qword_140C4E8D0 + 1));
        if ( (int)result < 0 )
          return result;
      }
    }
    result = sub_14063A4B0(v18);
    if ( (int)result < 0 )
      return result;
    for ( i = (__int64 *)qword_140C1BF80; i != &qword_140C1BF80; i = (__int64 *)*i )
    {
      v13 = (_QWORD **)(i + 51);
      v14 = *v13;
      result = sub_140593218(v18, i - 137, 2944LL);
      if ( (int)result < 0 )
        return result;
      while ( v14 != v13 )
      {
        result = sub_140593218(v18, v14 - 167, 2288LL);
        if ( (int)result < 0 )
          return result;
        result = sub_140593218(v18, *(v14 - 161), *(v14 - 160) - *(v14 - 161));
        if ( (int)result < 0 )
          return result;
        v14 = (_QWORD *)*v14;
      }
    }
    result = sub_1405930C8(v18, 16LL);
    if ( (int)result < 0 )
      return result;
    sub_140554390(a1);
    sub_140552B40(33);
    sub_14055CF10();
    if ( qword_140D018E8 )
      return sub_1405930C8(v18, 1LL);
    return 3221225507LL;
  }
  while ( 1 )
  {
    result = sub_140593218(v18, qword_140D088C0[v11], 48896LL);
    if ( (int)result < 0 )
      return result;
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= (unsigned int)dword_140D06884 )
      goto LABEL_6;
  }
}
