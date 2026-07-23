/*
 * XREFs of sub_1407E0768 @ 0x1407E0768
 * Callers:
 *     sub_1406AE644 @ 0x1406AE644 (sub_1406AE644.c)
 *     sub_1406AEA14 @ 0x1406AEA14 (sub_1406AEA14.c)
 *     sub_1407E0408 @ 0x1407E0408 (sub_1407E0408.c)
 *     sub_140987430 @ 0x140987430 (sub_140987430.c)
 * Callees:
 *     sub_140360AC0 @ 0x140360AC0 (sub_140360AC0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407E0884 @ 0x1407E0884 (sub_1407E0884.c)
 */

_OWORD *__fastcall sub_1407E0768(_OWORD *a1, unsigned __int64 a2)
{
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // r10
  unsigned __int64 v7; // rax
  _OWORD *result; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  _OWORD *v16; // rdi
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // [rsp+30h] [rbp-D8h] BYREF
  _OWORD v20[11]; // [rsp+40h] [rbp-C8h] BYREF

  memset(v20, 0, sizeof(v20));
  LODWORD(v19) = 0;
  sub_140360AC0((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, v20, 0xB0u, v4, &v19);
  sub_1407E0884((char *)a1 + 104, 0LL);
  v5 = sub_1407E0884((char *)&v20[6] + 8, 0LL);
  v7 = v5 - v6;
  if ( v7 > a2 )
    v7 = a2;
  if ( v7 )
    _InterlockedExchangeAdd64(&qword_140C54670, v7);
  result = v20;
  v9 = v20[1];
  *a1 = v20[0];
  v10 = v20[2];
  a1[1] = v9;
  v11 = v20[3];
  a1[2] = v10;
  v12 = v20[4];
  a1[3] = v11;
  v13 = v20[5];
  a1[4] = v12;
  v14 = v20[6];
  a1[5] = v13;
  v15 = v20[8];
  a1[6] = v14;
  v16 = a1 + 8;
  *(v16 - 1) = v20[7];
  v17 = v20[9];
  *v16 = v15;
  v18 = v20[10];
  v16[1] = v17;
  v16[2] = v18;
  return result;
}
