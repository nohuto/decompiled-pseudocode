/*
 * XREFs of sub_1403A4A60 @ 0x1403A4A60
 * Callers:
 *     sub_14039F05C @ 0x14039F05C (sub_14039F05C.c)
 *     sub_1403D94C0 @ 0x1403D94C0 (sub_1403D94C0.c)
 * Callees:
 *     sub_1403A4A9C @ 0x1403A4A9C (sub_1403A4A9C.c)
 */

unsigned __int64 __fastcall sub_1403A4A60(unsigned int a1, char *a2)
{
  unsigned __int64 result; // rax
  char v4; // cl
  char v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  result = sub_1403A4A9C(10000000LL, a1, &v5);
  v4 = v5;
  if ( v5 < 0 )
  {
    if ( result + (unsigned int)(1 << ~v5) >= result )
      result += (unsigned int)(1 << ~v5);
    result >>= -v5;
    v4 = 0;
  }
  *a2 = v4;
  return result;
}
