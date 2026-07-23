/*
 * XREFs of sub_14052F0E8 @ 0x14052F0E8
 * Callers:
 *     sub_14052E468 @ 0x14052E468 (sub_14052E468.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14052E2BC @ 0x14052E2BC (sub_14052E2BC.c)
 *     sub_14052F800 @ 0x14052F800 (sub_14052F800.c)
 */

LONGLONG __fastcall sub_14052F0E8(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int128 *v10; // rax
  __int128 v11; // xmm2
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  unsigned int v14; // edi
  LONGLONG result; // rax
  LONGLONG v16[2]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-68h] BYREF
  __int128 v18; // [rsp+50h] [rbp-58h]
  __int128 v19; // [rsp+60h] [rbp-48h]
  __int128 v20; // [rsp+70h] [rbp-38h]

  v16[0] = 0LL;
  memset(*(void **)(a2 + 8LL * a3 + 56), 0, 0x1000uLL);
  v9 = *(_QWORD *)(a1 + 104);
  if ( v9 && !a3 )
  {
    v10 = *(__int128 **)(v9 + 56);
    v11 = *v10;
    v12 = v10[2];
    v18 = v10[1];
    v13 = v10[3];
    v17[1] = *((_QWORD *)&v11 + 1);
    v19 = v12;
    v17[0] = v11 & 0xFFFFFFFFFFFFFFFDuLL;
    v20 = v13;
    sub_14052F800(v6, a2, v7, v17);
  }
  v14 = a3 << 6;
  sub_14052E2BC(v6, a2, v14, v8, v16);
  result = v16[0];
  *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8LL * ((v14 >> 6) & 0x3FFF)) = v16[0];
  return result;
}
