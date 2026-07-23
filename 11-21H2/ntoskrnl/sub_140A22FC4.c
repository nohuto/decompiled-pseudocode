/*
 * XREFs of sub_140A22FC4 @ 0x140A22FC4
 * Callers:
 *     sub_1406BD260 @ 0x1406BD260 (sub_1406BD260.c)
 *     sub_14081C354 @ 0x14081C354 (sub_14081C354.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A23130 @ 0x140A23130 (sub_140A23130.c)
 */

__int64 __fastcall sub_140A22FC4(__int64 a1, __int64 a2, int a3, HANDLE *a4, _BYTE *a5, int a6)
{
  __int64 v10; // rsi
  int v11; // eax
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  HANDLE v16[12]; // [rsp+40h] [rbp-59h] BYREF

  memset(v16, 0, 0x58uLL);
  v10 = *(_QWORD *)(a1 + 504);
  if ( a3 || (LODWORD(v16[2]) = 1, a4) )
    LODWORD(v16[2]) = a3;
  HIDWORD(v16[4]) = a6;
  if ( v10 )
  {
    v11 = sub_14042A5E0(a1, a2);
    if ( v11 == -1073741822 )
    {
      v10 = 0LL;
    }
    else
    {
      if ( v11 == -1073741536 )
        goto LABEL_15;
      if ( v11 )
        goto LABEL_17;
    }
  }
  v12 = sub_140A23130(a1, a2, v16[2], (unsigned int)&v16[3], (__int64)&v16[4], SWORD2(v16[4]));
  v13 = v12;
  if ( v10 )
  {
    LODWORD(v16[0]) = v12;
    v14 = sub_14042A5E0(a1, a2);
    if ( v14 != -1073741822 )
    {
      if ( v14 != -1073741536 )
      {
        if ( !v14 )
          goto LABEL_11;
LABEL_17:
        v13 = -1073741595;
        goto LABEL_18;
      }
LABEL_15:
      v13 = (int)v16[0];
    }
  }
LABEL_11:
  if ( v13 >= 0 && a4 )
  {
    *a4 = v16[3];
LABEL_21:
    if ( a5 )
      *a5 = v16[4];
    return (unsigned int)v13;
  }
LABEL_18:
  if ( v16[3] )
    ZwClose(v16[3]);
  if ( v13 >= 0 )
    goto LABEL_21;
  return (unsigned int)v13;
}
