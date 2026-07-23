/*
 * XREFs of sub_140407B90 @ 0x140407B90
 * Callers:
 *     <none>
 * Callees:
 *     sub_140400F4C @ 0x140400F4C (sub_140400F4C.c)
 *     sub_140400F98 @ 0x140400F98 (sub_140400F98.c)
 *     sub_1404011D4 @ 0x1404011D4 (sub_1404011D4.c)
 *     sub_140401210 @ 0x140401210 (sub_140401210.c)
 *     sub_140401368 @ 0x140401368 (sub_140401368.c)
 */

unsigned __int64 __fastcall sub_140407B90(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  _DWORD *v6; // r12
  __int64 *v9; // rdi
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rsi
  int v14; // r12d
  int v15; // edi
  char v16; // bl
  _QWORD v18[11]; // [rsp+30h] [rbp-58h] BYREF
  _DWORD *v19; // [rsp+90h] [rbp+8h]

  v6 = *(_DWORD **)(a1 + 616);
  v18[1] = 0LL;
  v19 = v6;
  v9 = v18;
  v11 = 2LL;
  v12 = (unsigned int)sub_140401368((__int64)v6);
  do
  {
    a5 += v12;
    *v9 = sub_140400F4C();
    a6 -= v12;
    ++v9;
    --v11;
  }
  while ( v11 );
  v13 = *(unsigned int *)(a1 + 36);
  sub_1404011D4(v6, a2 + 32);
  sub_1404011D4(v6, a3 + 32);
  v14 = sub_140400F98();
  sub_140401210(v19);
  v15 = sub_140400F98();
  sub_1404011D4(v19, v13 + a2 + 32);
  sub_1404011D4(v19, v13 + a3 + 32);
  v16 = a4 | ((-(__int64)a4 & 0x100000000LL) == 0);
  return (v14 & ((unsigned __int64)-(__int64)(v16 & 1) >> 32) | v15 & (unsigned int)((unsigned __int64)-(__int64)(v16 & 2) >> 32)) & (unsigned int)sub_140400F98();
}
