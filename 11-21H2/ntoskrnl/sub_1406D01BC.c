/*
 * XREFs of sub_1406D01BC @ 0x1406D01BC
 * Callers:
 *     sub_1406CF708 @ 0x1406CF708 (sub_1406CF708.c)
 *     sub_1406CFE50 @ 0x1406CFE50 (sub_1406CFE50.c)
 *     sub_14094C428 @ 0x14094C428 (sub_14094C428.c)
 *     sub_140A24D6C @ 0x140A24D6C (sub_140A24D6C.c)
 *     sub_140B105C4 @ 0x140B105C4 (sub_140B105C4.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A27198 @ 0x140A27198 (sub_140A27198.c)
 */

__int64 __fastcall sub_1406D01BC(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v12; // r13
  int v13; // eax
  unsigned int v14; // ebx
  unsigned int v16; // eax
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // eax
  _QWORD v21[11]; // [rsp+60h] [rbp-71h] BYREF

  memset(v21, 0, sizeof(v21));
  v12 = *(_QWORD *)(a1 + 504);
  LODWORD(v21[9]) = 0;
  v21[2] = a2;
  LODWORD(v21[3]) = a3;
  v21[4] = a4;
  v21[6] = a6;
  v21[8] = a8;
  v21[5] = a5;
  LODWORD(v21[7]) = a7;
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
        return LODWORD(v21[0]);
      if ( v13 )
        return (unsigned int)-1073741595;
    }
  }
  v16 = sub_140A27198(a1, v21[2], v21[3], v21[4], v21[5], v21[6], v21[7], v21[8], v21[9]);
  v14 = v16;
  if ( v12 )
  {
    LODWORD(v21[0]) = v16;
    v17 = sub_14042A5E0(a1, 0LL);
    v18 = v17;
    if ( v17 != -1073741822 )
    {
      if ( v17 == -1073741536 )
        return LODWORD(v21[0]);
      v19 = v14;
      if ( v18 )
        return (unsigned int)-1073741595;
      return v19;
    }
  }
  return v14;
}
