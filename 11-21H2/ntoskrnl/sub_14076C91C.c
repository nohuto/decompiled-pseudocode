/*
 * XREFs of sub_14076C91C @ 0x14076C91C
 * Callers:
 *     sub_14076C764 @ 0x14076C764 (sub_14076C764.c)
 *     sub_140A26770 @ 0x140A26770 (sub_140A26770.c)
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406E3C60 @ 0x1406E3C60 (sub_1406E3C60.c)
 *     sub_14076CA78 @ 0x14076CA78 (sub_14076CA78.c)
 */

__int64 __fastcall sub_14076C91C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  __int64 v9; // rsi
  int v10; // eax
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  _QWORD v15[11]; // [rsp+40h] [rbp-51h] BYREF

  memset(v15, 0, sizeof(v15));
  v9 = *(_QWORD *)(a1 + 504);
  v15[3] = a4;
  v15[2] = a3;
  if ( v9 )
  {
    v10 = sub_14042A5E0(a1, a2);
    if ( v10 == -1073741822 )
    {
      v9 = 0LL;
    }
    else
    {
      if ( v10 == -1073741536 )
        goto LABEL_15;
      if ( v10 )
        return (unsigned int)-1073741595;
    }
  }
  v11 = sub_14076CA78(a1, a2, v15[2], v15[3], (ULONG)&v15[4]);
  v12 = v11;
  if ( !v9 || (LODWORD(v15[0]) = v11, v13 = sub_14042A5E0(a1, a2), v13 == -1073741822) )
  {
LABEL_9:
    if ( !LOBYTE(v15[4]) )
      sub_1406E3C60(a1, a2, 5);
    goto LABEL_11;
  }
  if ( v13 != -1073741536 )
  {
    if ( !v13 )
      goto LABEL_9;
    return (unsigned int)-1073741595;
  }
LABEL_15:
  v12 = v15[0];
LABEL_11:
  if ( v12 >= 0 && a5 )
    *a5 = v15[4];
  return (unsigned int)v12;
}
