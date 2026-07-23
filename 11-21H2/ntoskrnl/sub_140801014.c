/*
 * XREFs of sub_140801014 @ 0x140801014
 * Callers:
 *     sub_140A4E3A0 @ 0x140A4E3A0 (sub_140A4E3A0.c)
 * Callees:
 *     sub_140801624 @ 0x140801624 (sub_140801624.c)
 *     sub_140801C0C @ 0x140801C0C (sub_140801C0C.c)
 */

__int64 __fastcall sub_140801014(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v2 = a1;
  v4 = 0LL;
  v3 = 0LL;
  LOBYTE(v2) = 0;
  sub_140801C0C(&v3, &v2);
  result = sub_140801624(v3, &v4, 0LL);
  if ( (int)result >= 0 )
    byte_140C23416 = v2;
  return result;
}
