/*
 * XREFs of sub_140A26854 @ 0x140A26854
 * Callers:
 *     sub_14076C764 @ 0x14076C764 (sub_14076C764.c)
 *     sub_1409496C0 @ 0x1409496C0 (sub_1409496C0.c)
 *     sub_140A245FC @ 0x140A245FC (sub_140A245FC.c)
 *     sub_140A26770 @ 0x140A26770 (sub_140A26770.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406E3C60 @ 0x1406E3C60 (sub_1406E3C60.c)
 *     sub_140A26994 @ 0x140A26994 (sub_140A26994.c)
 */

__int64 __fastcall sub_140A26854(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rsi
  int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  _QWORD *v14; // [rsp+28h] [rbp-69h]
  _QWORD v15[12]; // [rsp+40h] [rbp-51h] BYREF

  memset(v15, 0, 0x58uLL);
  v8 = *(_QWORD *)(a1 + 504);
  v15[3] = a4;
  v15[2] = a3;
  if ( v8 )
  {
    v14 = v15;
    v9 = sub_14042A5E0(a1, a2);
    if ( v9 == -1073741822 )
    {
      v8 = 0LL;
    }
    else
    {
      if ( v9 == -1073741536 )
        return LODWORD(v15[0]);
      if ( v9 )
        return (unsigned int)-1073741595;
    }
  }
  v10 = sub_140A26994(a1, a2, v15[2], v15[3], &v15[4], v14);
  v11 = v10;
  if ( v8 )
  {
    LODWORD(v15[0]) = v10;
    v12 = sub_14042A5E0(a1, a2);
    if ( v12 != -1073741822 )
    {
      if ( v12 != -1073741536 )
      {
        if ( !v12 )
          goto LABEL_8;
        return (unsigned int)-1073741595;
      }
      return LODWORD(v15[0]);
    }
  }
LABEL_8:
  if ( !LOBYTE(v15[4]) )
    sub_1406E3C60(a1, a2, 5);
  return v11;
}
