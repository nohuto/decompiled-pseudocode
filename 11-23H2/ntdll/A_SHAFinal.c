/*
 * XREFs of A_SHAFinal @ 0x18000EB60
 * Callers:
 *     RtlCreateServiceSid @ 0x1800100C0 (RtlCreateServiceSid.c)
 *     RtlCreateVirtualAccountSid @ 0x180086370 (RtlCreateVirtualAccountSid.c)
 * Callees:
 *     DWORDToBigEndian @ 0x18000EC6C (DWORDToBigEndian.c)
 *     A_SHAUpdate @ 0x18000ECD0 (A_SHAUpdate.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

void *__fastcall A_SHAFinal(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned int v5; // edx
  unsigned int v6; // eax
  __int64 v7; // rbx
  int v8; // ecx
  void *result; // rax
  _DWORD v10[4]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v11[80]; // [rsp+30h] [rbp-78h] BYREF

  v2 = a1[22];
  v5 = 64 - (v2 & 0x3F);
  v6 = v5 + 64;
  if ( v5 > 8 )
    v6 = 64 - (a1[22] & 0x3F);
  v7 = v6;
  memset_thunk_772440563353939046(v11, 0, v6 - 8);
  v8 = (v2 >> 29) | (8 * a1[21]);
  v11[0] = 0x80;
  v10[0] = v8;
  v10[1] = 8 * v2;
  DWORDToBigEndian((char *)&v10[2] + v7, v10, 2LL);
  A_SHAUpdate(a1, v11, (unsigned int)v7);
  DWORDToBigEndian(a2, a1 + 16, 5LL);
  result = memset_thunk_772440563353939046(a1, 0, 0x40uLL);
  a1[21] = 0;
  a1[22] = 0;
  a1[16] = 1732584193;
  a1[17] = -271733879;
  a1[18] = -1732584194;
  a1[19] = 271733878;
  a1[20] = -1009589776;
  return result;
}
