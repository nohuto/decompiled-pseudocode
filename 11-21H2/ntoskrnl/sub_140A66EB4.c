/*
 * XREFs of sub_140A66EB4 @ 0x140A66EB4
 * Callers:
 *     sub_140A66300 @ 0x140A66300 (sub_140A66300.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14055A628 @ 0x14055A628 (sub_14055A628.c)
 *     sub_14055B814 @ 0x14055B814 (sub_14055B814.c)
 *     sub_1405930C8 @ 0x1405930C8 (sub_1405930C8.c)
 *     sub_140593218 @ 0x140593218 (sub_140593218.c)
 *     sub_14063A4B0 @ 0x14063A4B0 (sub_14063A4B0.c)
 *     sub_140A656A0 @ 0x140A656A0 (sub_140A656A0.c)
 */

__int64 __fastcall sub_140A66EB4(const GUID *a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int v5; // ebx
  int v6; // eax
  __int64 *i; // rdi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v13; // rax
  __int128 v14; // [rsp+20h] [rbp-60h] BYREF
  __int128 v15; // [rsp+30h] [rbp-50h] BYREF
  __int64 v16; // [rsp+40h] [rbp-40h]
  _QWORD v17[5]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v18; // [rsp+70h] [rbp-10h]
  unsigned int v19; // [rsp+B0h] [rbp+30h] BYREF

  v17[3] = 0LL;
  v2 = 0LL;
  v18 = 0LL;
  if ( (a1[5].Data1 & 0x80u) != 0 )
    v2 = sub_14055A628(0);
  v17[1] = 0LL;
  LODWORD(v18) = v18 | 1;
  v19 = 0;
  v16 = 0LL;
  v17[2] = a1 + 34;
  v17[4] = a2;
  v5 = 0;
  v17[0] = sub_140552F60;
  v15 = 0LL;
  v14 = 0LL;
  v6 = sub_14063A4B0((__int64)v17);
  if ( v6 < 0 )
  {
    if ( v6 == -1073741789 )
      return 0LL;
    v5 = v6;
  }
  for ( i = (__int64 *)qword_140C1BF80; i != &qword_140C1BF80; i = (__int64 *)*i )
  {
    v8 = sub_140593218((__int64)v17, (__int64)(i - 137), 2944LL);
    if ( v8 < 0 )
    {
      if ( v8 == -1073741789 )
        return 0LL;
      v5 = v8;
    }
  }
  v9 = sub_1405930C8((__int64)v17, 16);
  if ( v9 < 0 )
  {
    if ( v9 == -1073741789 )
      return 0LL;
    v5 = v9;
  }
  sub_140A656A0();
  v10 = sub_1405930C8((__int64)v17, 1);
  if ( v10 < 0 )
  {
    if ( v10 != -1073741789 )
    {
      v5 = v10;
      goto LABEL_18;
    }
    return 0LL;
  }
LABEL_18:
  if ( qword_140D018C8 )
  {
    *((_QWORD *)&v15 + 1) = qword_140D06E48[0];
    *(_QWORD *)&v15 = dword_140D06E40;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v19, (unsigned __int16 **)&v15) )
    {
      if ( (int)sub_14042A5E0(v19, &v14) >= 0 )
      {
        v11 = sub_140593218((__int64)v17, v14, *((__int64 *)&v14 + 1));
        if ( v11 < 0 )
        {
          if ( v11 == -1073741789 )
            return 0LL;
          v5 = v11;
        }
      }
    }
  }
  if ( (a1[5].Data1 & 0x80u) != 0 )
  {
    v13 = sub_14055A628(0);
    sub_14055B814(a1, v13 - v2);
  }
  return v5;
}
