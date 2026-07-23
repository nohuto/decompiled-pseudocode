/*
 * XREFs of sub_14083D790 @ 0x14083D790
 * Callers:
 *     sub_1407855F0 @ 0x1407855F0 (sub_1407855F0.c)
 *     sub_140A245FC @ 0x140A245FC (sub_140A245FC.c)
 *     sub_140B0EC60 @ 0x140B0EC60 (sub_140B0EC60.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14083DA50 @ 0x14083DA50 (sub_14083DA50.c)
 */

__int64 __fastcall sub_14083D790(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, int a7)
{
  __int64 v11; // r15
  int v12; // eax
  unsigned int v13; // ebx
  int v15; // eax
  unsigned int v16; // ecx
  _QWORD v17[11]; // [rsp+40h] [rbp-61h] BYREF

  memset(v17, 0, sizeof(v17));
  v11 = *(_QWORD *)(a1 + 504);
  v17[3] = a3;
  LODWORD(v17[5]) = a5;
  v17[2] = a2;
  v17[4] = a4;
  v17[6] = a6;
  LODWORD(v17[7]) = a7;
  if ( v11 )
  {
    v12 = sub_14042A5E0(a1, 0LL);
    if ( v12 == -1073741822 )
    {
      v11 = 0LL;
    }
    else
    {
      if ( v12 == -1073741536 )
        return LODWORD(v17[0]);
      if ( v12 )
        return (unsigned int)-1073741595;
    }
  }
  if ( LOWORD(v17[7]) )
    v13 = -1073741811;
  else
    v13 = sub_14083DA50(a1, 0LL, 0LL, v17[2], v17[3], v17[4], v17[5], v17[6]);
  if ( !v11 )
    return v13;
  LODWORD(v17[0]) = v13;
  v15 = sub_14042A5E0(a1, 0LL);
  if ( v15 == -1073741822 )
    return v13;
  if ( v15 == -1073741536 )
    return LODWORD(v17[0]);
  v16 = v13;
  if ( v15 )
    return (unsigned int)-1073741595;
  return v16;
}
