/*
 * XREFs of sub_1409239EC @ 0x1409239EC
 * Callers:
 *     sub_14065D5C8 @ 0x14065D5C8 (sub_14065D5C8.c)
 * Callees:
 *     sub_14065E380 @ 0x14065E380 (sub_14065E380.c)
 *     sub_14065E3D4 @ 0x14065E3D4 (sub_14065E3D4.c)
 *     sub_14067EB68 @ 0x14067EB68 (sub_14067EB68.c)
 *     sub_14067EDC0 @ 0x14067EDC0 (sub_14067EDC0.c)
 *     sub_14067EE40 @ 0x14067EE40 (sub_14067EE40.c)
 *     sub_14069E3E0 @ 0x14069E3E0 (sub_14069E3E0.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1406FEA54 @ 0x1406FEA54 (sub_1406FEA54.c)
 *     sub_14079BD98 @ 0x14079BD98 (sub_14079BD98.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_140915544 @ 0x140915544 (sub_140915544.c)
 *     sub_14092183C @ 0x14092183C (sub_14092183C.c)
 */

void __fastcall sub_1409239EC(__int64 *a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rax
  ULONG_PTR v7; // rbx
  ULONG_PTR v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rsi
  ULONG_PTR v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r8
  unsigned __int16 v14; // cx
  int v15; // eax
  unsigned int *v16; // rsi
  ULONG_PTR v17; // rcx
  _QWORD v18[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v19; // [rsp+70h] [rbp+30h] BYREF
  __int64 v20; // [rsp+78h] [rbp+38h] BYREF

  v19 = 0xFFFFFFFFLL;
  v6 = a1[6];
  v20 = 0xFFFFFFFFLL;
  v7 = *(_QWORD *)(v6 + 32);
  sub_14092183C(v7, *(unsigned int *)(v6 + 40));
  ++*(_QWORD *)(a1[6] + 304);
  v8 = *(unsigned int *)(a1[6] + 40);
  if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
    v9 = sub_1406BF400(v7, v8, &v19);
  else
    v9 = sub_1407C9820(v7, v8, (unsigned int *)&v19);
  v10 = v9;
  *(_DWORD *)(v9 + 16) = *(_DWORD *)(*(_QWORD *)(a1[6] + 72) + 40LL);
  v11 = *(unsigned int *)(*(_QWORD *)(a1[6] + 72) + 40LL);
  if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
    v12 = sub_1406BF400(v7, v11, &v20);
  else
    v12 = sub_1407C9820(v7, v11, (unsigned int *)&v20);
  v13 = v12;
  *(_QWORD *)(v12 + 4) = *a2;
  *(_QWORD *)(*(_QWORD *)(a1[6] + 72) + 168LL) = *a2;
  ++*(_QWORD *)(*(_QWORD *)(a1[6] + 72) + 304LL);
  v14 = 2 * *(_WORD *)(v10 + 72);
  v15 = *(_DWORD *)(v12 + 52);
  if ( (*(_BYTE *)(v10 + 2) & 0x20) == 0 )
    v14 = *(_WORD *)(v10 + 72);
  if ( (unsigned __int16)v15 < (unsigned int)v14 )
  {
    *(_WORD *)(v13 + 52) = v14;
    *(_WORD *)(*(_QWORD *)(a1[6] + 72) + 176LL) = v14;
  }
  if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
    sub_1406BF450(v7, &v19);
  else
    sub_1407C97C0(v7, (unsigned int *)&v19);
  if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
    sub_1406BF450(v7, &v20);
  else
    sub_1407C97C0(v7, (unsigned int *)&v20);
  v18[1] = a1[6];
  v18[0] = a1[11];
  sub_140915544((__int64)sub_140924550, v7, a3, (__int64)v18, 0);
  sub_14069E3E0(a1[6], 1, 0LL);
  sub_14079BD98(v7, *(unsigned int *)(a1[11] + 40));
  sub_14067EE40(a1[11], 8LL, a3, 1);
  sub_14067EDC0(a1[11], a3);
  sub_14067EB68(a1[11]);
  v16 = (unsigned int *)a1[13];
  if ( *v16 == 1 )
    sub_14065E3D4(v7, *(unsigned int *)(*(_QWORD *)(a1[6] + 72) + 40LL), a1[13]);
  sub_14065E380(v7, v16);
  v17 = a1[6];
  a1[13] = 0LL;
  sub_1406FEA54(v17, a3, 0);
  sub_1406FEA54(a1[11], a3, 0);
}
