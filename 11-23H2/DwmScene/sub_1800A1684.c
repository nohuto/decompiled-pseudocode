/*
 * XREFs of sub_1800A1684 @ 0x1800A1684
 * Callers:
 *     sub_1800A175C @ 0x1800A175C (sub_1800A175C.c)
 * Callees:
 *     sub_18001D3F8 @ 0x18001D3F8 (sub_18001D3F8.c)
 *     sub_18002A570 @ 0x18002A570 (sub_18002A570.c)
 *     sub_18002A62C @ 0x18002A62C (sub_18002A62C.c)
 *     sub_18002AE4C @ 0x18002AE4C (sub_18002AE4C.c)
 *     sub_18002B7C0 @ 0x18002B7C0 (sub_18002B7C0.c)
 *     sub_1800A07A8 @ 0x1800A07A8 (sub_1800A07A8.c)
 *     sub_1800A1A68 @ 0x1800A1A68 (sub_1800A1A68.c)
 *     sub_1800A305C @ 0x1800A305C (sub_1800A305C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800A1684(__int64 a1)
{
  __int64 v2; // rbx
  _BYTE v4[136]; // [rsp+20h] [rbp-B8h] BYREF
  void *v5[6]; // [rsp+A8h] [rbp-30h] BYREF
  __int64 v6; // [rsp+E0h] [rbp+8h] BYREF
  __int64 v7; // [rsp+E8h] [rbp+10h]
  char v8; // [rsp+F0h] [rbp+18h] BYREF

  v7 = a1;
  sub_18002A570(a1);
  sub_18002B7C0((__int64)v4);
  v2 = **(_QWORD **)(a1 + 48);
LABEL_2:
  v6 = v2;
  while ( v2 != *(_QWORD *)(a1 + 48) )
  {
    if ( (unsigned int)sub_1800A305C(*(_QWORD *)(a1 + 16 * (*(_QWORD *)(v2 + 32) + 4LL)), v4, 0LL) == 3 )
    {
      sub_1800A07A8(a1 + 8, (__int64 *)(v2 + 32));
      v2 = *(_QWORD *)sub_1800A1A68(a1 + 48, &v8, v2);
      goto LABEL_2;
    }
    sub_18001D3F8(&v6);
    v2 = v6;
  }
  sub_18002AE4C(v5, (__int64)v5);
  return sub_18002A62C(a1);
}
