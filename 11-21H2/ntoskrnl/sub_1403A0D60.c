/*
 * XREFs of sub_1403A0D60 @ 0x1403A0D60
 * Callers:
 *     <none>
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     sub_1403A0EB4 @ 0x1403A0EB4 (sub_1403A0EB4.c)
 *     sub_1403A0F08 @ 0x1403A0F08 (sub_1403A0F08.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1403A0D60(__int64 a1, int a2, unsigned __int64 a3, int a4, __int64 a5, int a6)
{
  int i; // edi
  int v11; // r13d
  unsigned __int64 v12; // rbx
  int v13; // r13d
  _QWORD v16[10]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v17[14]; // [rsp+90h] [rbp-70h] BYREF

  memset(v17, 0, 0x68uLL);
  memset(v16, 0, 0x48uLL);
  for ( i = 0; a3; a3 -= v12 )
  {
    v11 = 0;
    v12 = a3;
    if ( (-(__int64)((a4 & 0xFFF) != 0) & 0xFFFFFFFFFFFFF000uLL) + 2072576 <= a3 )
      v12 = (-(__int64)((a4 & 0xFFF) != 0) & 0xFFFFFFFFFFFFF000uLL) + 2072576;
    LOBYTE(v11) = (v12 & 0xFFF) != 0;
    v13 = (v12 >> 12) + v11;
    i = sub_1403A0F08((unsigned int)v16, a4, v13 << 12, 0, 0);
    if ( i < 0 )
      break;
    v17[1] = a1;
    v17[3] = v16[0];
    v17[4] = v16[7];
    LODWORD(v17[6]) = a6;
    LODWORD(v17[2]) = a2;
    v17[5] = a5;
    i = sub_140358A20(2u, 193, 0, (__int64)v17);
    sub_1403A0EB4(v16);
    if ( i < 0 )
      break;
    a4 += v12;
    a5 += v12;
    a2 += v13;
  }
  return (unsigned int)i;
}
