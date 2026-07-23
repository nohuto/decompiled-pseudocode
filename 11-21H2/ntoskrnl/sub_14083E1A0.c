/*
 * XREFs of sub_14083E1A0 @ 0x14083E1A0
 * Callers:
 *     sub_1406BD260 @ 0x1406BD260 (sub_1406BD260.c)
 *     sub_140787620 @ 0x140787620 (sub_140787620.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14083E2B8 @ 0x14083E2B8 (sub_14083E2B8.c)
 */

__int64 __fastcall sub_14083E1A0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, int a6, __int64 a7, int a8)
{
  __int64 v12; // r15
  int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // ebx
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // eax
  _QWORD v20[11]; // [rsp+40h] [rbp-71h] BYREF

  memset(v20, 0, sizeof(v20));
  v12 = *(_QWORD *)(a1 + 504);
  LODWORD(v20[5]) = a6;
  v20[2] = a3;
  v20[3] = a4;
  v20[6] = a7;
  LODWORD(v20[7]) = a8;
  v20[4] = a5;
  if ( v12 )
  {
    v13 = sub_14042A5E0(a1, 0LL);
    if ( v13 == -1073741822 )
    {
      v12 = 0LL;
    }
    else
    {
      if ( v13 == -1073741536 )
        return LODWORD(v20[0]);
      if ( v13 )
        return (unsigned int)-1073741595;
    }
  }
  v14 = sub_14083E2B8(a1, a2, v20[2], v20[3], v20[4], v20[5], v20[6]);
  v15 = v14;
  if ( !v12 )
    return v15;
  LODWORD(v20[0]) = v14;
  v17 = sub_14042A5E0(a1, 0LL);
  v18 = v17;
  if ( v17 == -1073741822 )
    return v15;
  if ( v17 == -1073741536 )
    return LODWORD(v20[0]);
  v19 = v15;
  if ( v18 )
    return (unsigned int)-1073741595;
  return v19;
}
