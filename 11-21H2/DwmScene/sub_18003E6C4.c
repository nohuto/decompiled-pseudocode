/*
 * XREFs of sub_18003E6C4 @ 0x18003E6C4
 * Callers:
 *     sub_18003E248 @ 0x18003E248 (sub_18003E248.c)
 *     sub_18003E350 @ 0x18003E350 (sub_18003E350.c)
 *     sub_18003E764 @ 0x18003E764 (sub_18003E764.c)
 *     sub_18003E900 @ 0x18003E900 (sub_18003E900.c)
 *     sub_18003F160 @ 0x18003F160 (sub_18003F160.c)
 *     sub_18003F210 @ 0x18003F210 (sub_18003F210.c)
 *     sub_18003F2E0 @ 0x18003F2E0 (sub_18003F2E0.c)
 *     sub_18003F8E0 @ 0x18003F8E0 (sub_18003F8E0.c)
 * Callees:
 *     sub_18003E6B8 @ 0x18003E6B8 (sub_18003E6B8.c)
 */

__int64 __fastcall sub_18003E6C4(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_18003E6B8(v3);
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
