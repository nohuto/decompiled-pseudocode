/*
 * XREFs of sub_140A279F4 @ 0x140A279F4
 * Callers:
 *     sub_14076E224 @ 0x14076E224 (sub_14076E224.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406E3C60 @ 0x1406E3C60 (sub_1406E3C60.c)
 *     sub_140A27B38 @ 0x140A27B38 (sub_140A27B38.c)
 */

__int64 __fastcall sub_140A279F4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int v12; // [rsp+20h] [rbp-A8h]
  _QWORD *v13; // [rsp+28h] [rbp-A0h]
  _QWORD v14[12]; // [rsp+40h] [rbp-88h] BYREF

  memset(v14, 0, 0x58uLL);
  v6 = *(_QWORD *)(a1 + 504);
  v14[2] = a2;
  v14[3] = a3;
  if ( v6 )
  {
    v13 = v14;
    v12 = 1;
    v7 = sub_14042A5E0(a1, a2);
    if ( v7 == -1073741822 )
    {
      v6 = 0LL;
    }
    else
    {
      if ( v7 == -1073741536 )
        return LODWORD(v14[0]);
      if ( v7 )
        return (unsigned int)-1073741595;
    }
  }
  v8 = sub_140A27B38(a1, a2, v14[3], &v14[4], v12, v13);
  v9 = v8;
  if ( v6 )
  {
    LODWORD(v14[0]) = v8;
    v10 = sub_14042A5E0(a1, a2);
    if ( v10 != -1073741822 )
    {
      if ( v10 != -1073741536 )
      {
        if ( !v10 )
          goto LABEL_8;
        return (unsigned int)-1073741595;
      }
      return LODWORD(v14[0]);
    }
  }
LABEL_8:
  if ( !LOBYTE(v14[4]) )
    sub_1406E3C60(a1, a2, 6);
  return v9;
}
