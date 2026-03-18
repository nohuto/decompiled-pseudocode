/*
 * XREFs of sub_1408513FC @ 0x1408513FC
 * Callers:
 *     sub_1408513B0 @ 0x1408513B0 (sub_1408513B0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     sub_1407AC320 @ 0x1407AC320 (sub_1407AC320.c)
 *     sub_1407AC520 @ 0x1407AC520 (sub_1407AC520.c)
 *     sub_1407ADA20 @ 0x1407ADA20 (sub_1407ADA20.c)
 *     sub_1407AED40 @ 0x1407AED40 (sub_1407AED40.c)
 *     sub_1407AF280 @ 0x1407AF280 (sub_1407AF280.c)
 *     sub_1407AF3D0 @ 0x1407AF3D0 (sub_1407AF3D0.c)
 *     sub_1407AF440 @ 0x1407AF440 (sub_1407AF440.c)
 *     sub_1407AF4C0 @ 0x1407AF4C0 (sub_1407AF4C0.c)
 *     sub_1407AF9F0 @ 0x1407AF9F0 (sub_1407AF9F0.c)
 *     sub_1407AFA70 @ 0x1407AFA70 (sub_1407AFA70.c)
 *     sub_1407B53B0 @ 0x1407B53B0 (sub_1407B53B0.c)
 *     sub_1407B6040 @ 0x1407B6040 (sub_1407B6040.c)
 *     sub_1407B6070 @ 0x1407B6070 (sub_1407B6070.c)
 *     sub_1407B6110 @ 0x1407B6110 (sub_1407B6110.c)
 *     sub_1407B6140 @ 0x1407B6140 (sub_1407B6140.c)
 *     sub_1407B6650 @ 0x1407B6650 (sub_1407B6650.c)
 *     sub_1407B6A60 @ 0x1407B6A60 (sub_1407B6A60.c)
 *     sub_1407B74D0 @ 0x1407B74D0 (sub_1407B74D0.c)
 *     sub_1407B9820 @ 0x1407B9820 (sub_1407B9820.c)
 *     sub_1407B9D70 @ 0x1407B9D70 (sub_1407B9D70.c)
 *     sub_1407BAC70 @ 0x1407BAC70 (sub_1407BAC70.c)
 *     sub_1407BCC30 @ 0x1407BCC30 (sub_1407BCC30.c)
 *     sub_1407BDE70 @ 0x1407BDE70 (sub_1407BDE70.c)
 *     sub_1407BE200 @ 0x1407BE200 (sub_1407BE200.c)
 *     sub_1407BE880 @ 0x1407BE880 (sub_1407BE880.c)
 *     sub_1407BE920 @ 0x1407BE920 (sub_1407BE920.c)
 *     sub_1407C1C20 @ 0x1407C1C20 (sub_1407C1C20.c)
 *     sub_1407C3560 @ 0x1407C3560 (sub_1407C3560.c)
 *     sub_1407C5520 @ 0x1407C5520 (sub_1407C5520.c)
 *     sub_1407C6D90 @ 0x1407C6D90 (sub_1407C6D90.c)
 */

__int64 __fastcall sub_1408513FC(__int64 *a1)
{
  unsigned __int8 *v1; // r14
  unsigned __int8 *v2; // rsi
  int v3; // edi
  __int64 v4; // r15
  int v5; // ebx
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // edi
  int v10; // ebx
  int v11; // edi
  int v12; // ebx
  __int64 result; // rax
  __int64 v15; // [rsp+48h] [rbp-18h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h]

  v1 = (unsigned __int8 *)&unk_140D53D90;
  v2 = (unsigned __int8 *)&unk_140D53D12;
  v16 = *a1;
  v15 = qword_140D532E0;
  v3 = BYTE3(v16) | ((BYTE2(v16) | ((BYTE1(v16) | ((unsigned __int8)v16 << 8)) << 8)) << 8);
  v4 = 0LL;
  v5 = ~(HIBYTE(v16) | ((BYTE6(v16) | ((BYTE5(v16) | (BYTE4(v16) << 8)) << 8)) << 8));
  v6 = 16LL;
  do
  {
    v7 = *v1;
    if ( (unsigned __int8)v7 < 0x1Fu )
      v3 ^= funcs_1406EFB8D[v7](v4, *(v2 - 2), *(v2 - 1), *v2, v2[1], (__int64)&v15, v5);
    v8 = v1[1];
    if ( (unsigned __int8)v8 < 0x1Fu )
      v5 ^= funcs_1406EFB8D[v8](v4 + 1, v2[2], v2[3], v2[4], v2[5], (__int64)&v15, v3);
    v4 += 2LL;
    v1 += 2;
    v2 += 8;
    --v6;
  }
  while ( v6 );
  BYTE3(v16) = v3;
  v9 = __ROR4__(v3, 8);
  HIBYTE(v16) = v5;
  BYTE2(v16) = v9;
  v10 = __ROR4__(v5, 8);
  v11 = __ROR4__(v9, 8);
  BYTE6(v16) = v10;
  BYTE1(v16) = v11;
  v12 = __ROR4__(v10, 8);
  BYTE5(v16) = v12;
  BYTE4(v16) = __ROR4__(v12, 8);
  LOBYTE(v16) = __ROR4__(v11, 8);
  result = v16;
  *a1 = v16;
  return result;
}
