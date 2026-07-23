/*
 * XREFs of sub_140787F7C @ 0x140787F7C
 * Callers:
 *     sub_140697BE0 @ 0x140697BE0 (sub_140697BE0.c)
 *     sub_140772190 @ 0x140772190 (sub_140772190.c)
 *     sub_1407879A8 @ 0x1407879A8 (sub_1407879A8.c)
 *     sub_140810788 @ 0x140810788 (sub_140810788.c)
 *     sub_140861A78 @ 0x140861A78 (sub_140861A78.c)
 *     sub_140944640 @ 0x140944640 (sub_140944640.c)
 *     sub_140A245FC @ 0x140A245FC (sub_140A245FC.c)
 *     sub_140A25124 @ 0x140A25124 (sub_140A25124.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14083DEC8 @ 0x14083DEC8 (sub_14083DEC8.c)
 */

__int64 __fastcall sub_140787F7C(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        int a10)
{
  __int64 v13; // r10
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v17; // rdi
  unsigned int v18; // eax
  int v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  __int64 v23; // [rsp+58h] [rbp-79h]
  _QWORD v24[11]; // [rsp+60h] [rbp-71h] BYREF

  memset(v24, 0, sizeof(v24));
  v24[2] = a2;
  v24[3] = a3;
  LODWORD(v24[4]) = a4;
  v13 = *(_QWORD *)(a1 + 504);
  LODWORD(v24[8]) = a8;
  v24[5] = a5;
  v24[9] = a9;
  LODWORD(v24[10]) = a10;
  v23 = v13;
  v24[6] = a6;
  v24[7] = a7;
  if ( v13 )
  {
    v14 = sub_14042A5E0(a1, 0LL);
    if ( v14 == -1073741822 )
    {
      v17 = 0LL;
    }
    else
    {
      if ( v14 == -1073741536 )
        return LODWORD(v24[0]);
      if ( v14 )
        return (unsigned int)-1073741595;
      v17 = v23;
    }
  }
  else
  {
    v17 = 0LL;
  }
  v18 = sub_14083DEC8(a1, v24[2], v24[3], LODWORD(v24[4]), v24[5], v24[6], v24[7], v24[8], v24[9], v24[10]);
  v15 = v18;
  if ( v17 )
  {
    LODWORD(v24[0]) = v18;
    v19 = sub_14042A5E0(a1, 0LL);
    v20 = v19;
    if ( v19 != -1073741822 )
    {
      if ( v19 == -1073741536 )
        return LODWORD(v24[0]);
      v21 = v15;
      if ( v20 )
        return (unsigned int)-1073741595;
      return v21;
    }
  }
  return v15;
}
