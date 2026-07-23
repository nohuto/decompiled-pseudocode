/*
 * XREFs of sub_14040A2A0 @ 0x14040A2A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140400EB4 @ 0x140400EB4 (sub_140400EB4.c)
 *     sub_140400F4C @ 0x140400F4C (sub_140400F4C.c)
 *     sub_140400F98 @ 0x140400F98 (sub_140400F98.c)
 *     sub_1404011D4 @ 0x1404011D4 (sub_1404011D4.c)
 *     sub_1404012B0 @ 0x1404012B0 (sub_1404012B0.c)
 */

__int64 __fastcall sub_14040A2A0(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // r12
  __int64 *v4; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v12; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+38h] [rbp-30h]

  v3 = *(_DWORD **)(a1 + 616);
  v4 = &v12;
  v13 = 0LL;
  v7 = 2LL;
  do
  {
    v8 = sub_140400F4C();
    a3 += *(unsigned int *)(a1 + 36);
    *v4++ = v8;
    --v7;
  }
  while ( v7 );
  v9 = v12;
  sub_1404012B0(v3);
  v10 = v13;
  sub_1404012B0(v3);
  sub_1404011D4(v3, v9);
  sub_1404011D4(v3, v9);
  sub_1404011D4(v3, v10);
  sub_1404011D4(v3, v10);
  sub_140400EB4(v3, v9);
  sub_1404012B0(v3);
  sub_1404011D4(v3, v9);
  sub_140400EB4(v3, v9);
  sub_1404012B0(v3);
  return sub_140400F98();
}
