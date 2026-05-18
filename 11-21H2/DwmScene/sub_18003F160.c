/*
 * XREFs of sub_18003F160 @ 0x18003F160
 * Callers:
 *     sub_18003E248 @ 0x18003E248 (sub_18003E248.c)
 * Callees:
 *     sub_18003F210 @ 0x18003F210 (sub_18003F210.c)
 *     sub_18003F2E0 @ 0x18003F2E0 (sub_18003F2E0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003F160(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 i; // rsi
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rbx

  for ( i = a5; i > 32; a1 = v12 )
  {
    v9 = i - 32;
    v10 = a1 + 512;
    v11 = 32LL;
    if ( v9 < 32 )
      v11 = v9;
    i = v9 - v11;
    v12 = v10 + 16 * v11;
    a3 = sub_18003F210(a1, v10, v12, a3, a6);
  }
  sub_18003F2E0(a1, a2, a3);
  return sub_18003E6C4(a3, a3);
}
