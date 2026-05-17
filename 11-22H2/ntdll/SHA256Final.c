/*
 * XREFs of SHA256Final @ 0x18000EC3C
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x18002AEB0 (RtlDeriveCapabilitySidsFromName.c)
 * Callees:
 *     SHA256Update @ 0x18000C970 (SHA256Update.c)
 *     DWORDToBigEndian @ 0x18000EE7C (DWORDToBigEndian.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall SHA256Final(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // edx
  unsigned int v6; // eax
  __int64 v7; // rdi
  int v8; // edx
  __int64 result; // rax
  _DWORD v10[4]; // [rsp+20h] [rbp-88h] BYREF
  _OWORD v11[5]; // [rsp+30h] [rbp-78h] BYREF

  v2 = a1[9];
  v5 = 64 - (v2 & 0x3F);
  v6 = v5 + 64;
  if ( v5 > 8 )
    v6 = 64 - (a1[9] & 0x3F);
  v7 = v6;
  memset_thunk_772440563353939046(v11, 0, v6 - 8);
  v8 = (v2 >> 29) | (8 * a1[8]);
  LOBYTE(v11[0]) = 0x80;
  v10[0] = v8;
  v10[1] = 8 * v2;
  DWORDToBigEndian((char *)&v10[2] + v7, v10, 2LL);
  SHA256Update((__int64)a1, v11, v7);
  DWORDToBigEndian(a2, a1, 8LL);
  a1[8] = 0;
  a1[9] = 0;
  result = 0LL;
  *a1 = 1779033703;
  a1[1] = -1150833019;
  a1[2] = 1013904242;
  a1[3] = -1521486534;
  a1[4] = 1359893119;
  a1[5] = -1694144372;
  a1[6] = 528734635;
  a1[7] = 1541459225;
  memset(a1 + 10, 0, 0x40uLL);
  return result;
}
