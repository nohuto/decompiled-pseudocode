/*
 * XREFs of sub_180010DC4 @ 0x180010DC4
 * Callers:
 *     sub_18001036C @ 0x18001036C (sub_18001036C.c)
 * Callees:
 *     sub_18000D18C @ 0x18000D18C (sub_18000D18C.c)
 *     sub_18000DD90 @ 0x18000DD90 (sub_18000DD90.c)
 */

char __fastcall sub_180010DC4(__int64 a1, __int64 a2)
{
  __int64 v4; // xmm0_8
  __int64 *v5; // rcx
  void *v6; // rax
  __int128 v7; // xmm0
  char v8; // cl
  char result; // al
  char v10; // cl
  __int128 v11; // [rsp+20h] [rbp-38h]
  void *v12; // [rsp+48h] [rbp-10h] BYREF
  __int64 v13; // [rsp+60h] [rbp+8h]

  v11 = *(_OWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 40);
  v5 = (__int64 *)(a1 + 48);
  v13 = v4;
  v6 = (void *)*v5;
  *v5 = 0LL;
  v7 = *(_OWORD *)(a2 + 24);
  v12 = v6;
  *(_OWORD *)(a1 + 24) = v7;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  sub_18000D18C(v5, (__int64 *)(a2 + 48));
  *(_OWORD *)(a2 + 24) = v11;
  *(_QWORD *)(a2 + 40) = v13;
  sub_18000D18C((__int64 *)(a2 + 48), (__int64 *)&v12);
  if ( v12 )
    sub_18000DD90(v12);
  v8 = *(_BYTE *)(a1 + 56);
  *(_BYTE *)(a1 + 56) = *(_BYTE *)(a2 + 56);
  result = *(_BYTE *)(a2 + 57);
  *(_BYTE *)(a2 + 56) = v8;
  v10 = *(_BYTE *)(a1 + 57);
  *(_BYTE *)(a1 + 57) = result;
  *(_BYTE *)(a2 + 57) = v10;
  return result;
}
