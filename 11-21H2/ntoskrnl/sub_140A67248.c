/*
 * XREFs of sub_140A67248 @ 0x140A67248
 * Callers:
 *     sub_140A66300 @ 0x140A66300 (sub_140A66300.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     sub_14055A628 @ 0x14055A628 (sub_14055A628.c)
 *     sub_14055B970 @ 0x14055B970 (sub_14055B970.c)
 *     sub_1405930C8 @ 0x1405930C8 (sub_1405930C8.c)
 *     sub_140593218 @ 0x140593218 (sub_140593218.c)
 *     sub_140A66E54 @ 0x140A66E54 (sub_140A66E54.c)
 *     sub_140A67078 @ 0x140A67078 (sub_140A67078.c)
 *     sub_140A67134 @ 0x140A67134 (sub_140A67134.c)
 */

__int64 __fastcall sub_140A67248(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v5; // rsi
  __int64 result; // rax
  unsigned int v7; // ebx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int16 *v11[2]; // [rsp+20h] [rbp-50h] BYREF
  __int16 v12; // [rsp+30h] [rbp-40h]
  int v13; // [rsp+32h] [rbp-3Eh]
  __int16 v14; // [rsp+36h] [rbp-3Ah]
  _QWORD v15[5]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v16; // [rsp+60h] [rbp-10h]
  int v17; // [rsp+90h] [rbp+20h] BYREF

  v2 = *(_DWORD *)(a1 + 80);
  v15[3] = 0LL;
  v16 = 0LL;
  v13 = 0;
  v5 = 0LL;
  v14 = 0;
  v17 = 0;
  if ( (v2 & 0x80u) != 0 )
    v5 = sub_14055A628(0);
  LODWORD(v16) = v16 | 1;
  v15[2] = a1 + 544;
  v15[4] = a2;
  v15[0] = sub_140552F60;
  v15[1] = 0LL;
  result = sub_140593218((__int64)v15, (__int64)&xmmword_140C02190, 896LL);
  if ( (int)result >= 0 )
  {
    result = sub_140593218((__int64)v15, (__int64)qword_140D088C0, 8LL * (unsigned int)dword_140D06884);
    if ( (int)result >= 0 )
    {
      result = sub_140A67078((__int64)v15);
      if ( (int)result >= 0 )
      {
        v11[1] = (unsigned __int16 *)qword_140D06E48[0];
        v11[0] = (unsigned __int16 *)dword_140D06E40;
        v12 = 0;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v17, v11) )
        {
          result = sub_140A67134((__int64)v15, v17);
          if ( (int)result < 0 )
            return result;
        }
        result = sub_1405930C8((__int64)v15, 2);
        if ( (int)result >= 0 )
        {
          result = sub_140593218((__int64)v15, 0xFFFFF78000000000uLL, 1840LL);
          if ( (int)result >= 0 )
          {
            result = sub_1405930C8((__int64)v15, 4);
            if ( (int)result >= 0 )
            {
              result = sub_1405930C8((__int64)v15, 8);
              v7 = result;
              if ( (int)result >= 0 )
              {
                if ( *(_DWORD *)a1 != 351
                  || *(_QWORD *)(a1 + 8) != 2LL
                  || (v8 = *(_QWORD *)(a1 + 16), result = sub_140593218((__int64)v15, v8, 56LL), (int)result >= 0)
                  && (result = sub_140A66E54((__int64)v15, *(_QWORD *)(v8 + 48)), v7 = result, (int)result >= 0)
                  && ((v9 = *(_QWORD *)(a1 + 32)) == 0
                   || (result = sub_140A66E54((__int64)v15, v9), v7 = result, (int)result >= 0)) )
                {
                  if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 )
                  {
                    v10 = sub_14055A628(0);
                    sub_14055B970((const GUID *)a1, v10 - v5);
                  }
                  return v7;
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
