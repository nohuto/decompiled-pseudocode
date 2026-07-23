/*
 * XREFs of sub_140861A78 @ 0x140861A78
 * Callers:
 *     sub_140785470 @ 0x140785470 (sub_140785470.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140787F7C @ 0x140787F7C (sub_140787F7C.c)
 */

__int64 __fastcall sub_140861A78(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, int a7)
{
  __int64 v11; // r15
  int v12; // ecx
  int v13; // eax
  unsigned int v14; // ebx
  int v16; // eax
  unsigned int v17; // ecx
  __int64 v18[11]; // [rsp+50h] [rbp-61h] BYREF

  memset(v18, 0, sizeof(v18));
  v11 = *(_QWORD *)(a1 + 504);
  v12 = a7;
  v18[3] = a3;
  v18[2] = a2;
  v18[4] = a4;
  LODWORD(v18[5]) = a5;
  v18[6] = a6;
  LODWORD(v18[7]) = a7;
  if ( v11 )
  {
    v13 = sub_14042A5E0(a1, 0LL);
    if ( v13 == -1073741822 )
    {
      v11 = 0LL;
    }
    else
    {
      if ( v13 == -1073741536 )
        return LODWORD(v18[0]);
      if ( v13 )
        return (unsigned int)-1073741595;
    }
    v12 = v18[7];
  }
  if ( (_WORD)v12 )
    v14 = -1073741811;
  else
    v14 = sub_140787F7C(a1, 0LL, 0LL, 0, v18[2], v18[3], v18[4], v18[5], v18[6], v12);
  if ( !v11 )
    return v14;
  LODWORD(v18[0]) = v14;
  v16 = sub_14042A5E0(a1, 0LL);
  if ( v16 == -1073741822 )
    return v14;
  if ( v16 == -1073741536 )
    return LODWORD(v18[0]);
  v17 = v14;
  if ( v16 )
    return (unsigned int)-1073741595;
  return v17;
}
