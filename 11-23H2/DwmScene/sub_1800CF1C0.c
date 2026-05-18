/*
 * XREFs of sub_1800CF1C0 @ 0x1800CF1C0
 * Callers:
 *     sub_1800CF0F4 @ 0x1800CF0F4 (sub_1800CF0F4.c)
 * Callees:
 *     sub_180020470 @ 0x180020470 (sub_180020470.c)
 *     sub_180020670 @ 0x180020670 (sub_180020670.c)
 *     sub_1800207C8 @ 0x1800207C8 (sub_1800207C8.c)
 *     sub_180020FA4 @ 0x180020FA4 (sub_180020FA4.c)
 *     sub_1800CCB34 @ 0x1800CCB34 (sub_1800CCB34.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800CF1C0(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  _BYTE v11[16]; // [rsp+30h] [rbp-108h] BYREF
  _BYTE v12[240]; // [rsp+40h] [rbp-F8h] BYREF

  v4 = 0LL;
  sub_180020670((__int64)v11);
  if ( *a2 != a2[1] )
  {
    sub_180020470((__int64)v12, (__int64)"{");
    if ( (__int64)(a2[1] - *a2) >> 4 )
    {
      v5 = 0LL;
      do
      {
        v6 = sub_180020470((__int64)v12, (__int64)"[");
        v7 = std::ostream::operator<<(v6, v4);
        v8 = sub_180020470(v7, (__int64)"] = ");
        v9 = sub_1800CCB34(v8, v5 + *a2);
        sub_180020470(v9, (__int64)",");
        ++v4;
        v5 += 16LL;
      }
      while ( v4 < (__int64)(a2[1] - *a2) >> 4 );
    }
    sub_180020470((__int64)v12, (__int64)"}");
  }
  sub_180020FA4((__int64)v11, a1);
  sub_1800207C8((__int64)v11);
  return a1;
}
