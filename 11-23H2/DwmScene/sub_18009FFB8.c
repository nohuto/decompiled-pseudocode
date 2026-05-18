/*
 * XREFs of sub_18009FFB8 @ 0x18009FFB8
 * Callers:
 *     sub_1800A0204 @ 0x1800A0204 (sub_1800A0204.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180027C54 @ 0x180027C54 (sub_180027C54.c)
 *     sub_1800A00F4 @ 0x1800A00F4 (sub_1800A00F4.c)
 *     sub_1800A0184 @ 0x1800A0184 (sub_1800A0184.c)
 *     sub_1800A050C @ 0x1800A050C (sub_1800A050C.c)
 *     sub_1800A05BC @ 0x1800A05BC (sub_1800A05BC.c)
 */

__int64 __fastcall sub_18009FFB8(__int64 *a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 v10; // rax
  __int64 v12; // r14
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx

  v6 = *a1;
  v10 = 0x6DB6DB6DB6DB6DB7LL * ((a1[1] - *a1) >> 3);
  if ( v10 == 0x492492492492492LL )
    std::_Xlength_error("vector too long");
  v12 = v10 + 1;
  v13 = sub_1800A050C(a1, v10 + 1);
  v14 = sub_180027C54(v13);
  v15 = sub_18001090C(v14);
  v16 = v15 + 56 * ((a2 - v6) / 56);
  sub_1800A0184(a6, v16, a3, a4, a5, a6);
  v17 = a1[1];
  v18 = v15;
  v19 = *a1;
  if ( a2 != v17 )
  {
    sub_1800A00F4(v19, a2, v15);
    v17 = a1[1];
    v18 = v16 + 56;
    v19 = a2;
  }
  sub_1800A00F4(v19, v17, v18);
  sub_1800A05BC(a1, v15, v12, v13);
  return v16;
}
