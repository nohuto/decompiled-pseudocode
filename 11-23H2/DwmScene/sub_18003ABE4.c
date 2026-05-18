/*
 * XREFs of sub_18003ABE4 @ 0x18003ABE4
 * Callers:
 *     sub_180039FF4 @ 0x180039FF4 (sub_180039FF4.c)
 * Callees:
 *     sub_18003AC7C @ 0x18003AC7C (sub_18003AC7C.c)
 *     sub_18003AD70 @ 0x18003AD70 (sub_18003AD70.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003ABE4(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 i; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rbx

  for ( i = a4; i > 32; a1 = v11 )
  {
    v8 = i - 32;
    v9 = a1 + 512;
    v10 = 32LL;
    if ( v8 < 32 )
      v10 = v8;
    i = v8 - v10;
    v11 = v9 + 16 * v10;
    a3 = sub_18003AC7C(a1, v9, v11, a3, a5);
  }
  return sub_18003AD70(a1, a2, a3);
}
