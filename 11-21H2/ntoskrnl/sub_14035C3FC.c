/*
 * XREFs of sub_14035C3FC @ 0x14035C3FC
 * Callers:
 *     sub_14020E464 @ 0x14020E464 (sub_14020E464.c)
 *     sub_14020EE7C @ 0x14020EE7C (sub_14020EE7C.c)
 *     sub_14028FFD0 @ 0x14028FFD0 (sub_14028FFD0.c)
 *     sub_140290B9C @ 0x140290B9C (sub_140290B9C.c)
 *     sub_1402947A0 @ 0x1402947A0 (sub_1402947A0.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402B4130 @ 0x1402B4130 (sub_1402B4130.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     sub_14035C1C0 @ 0x14035C1C0 (sub_14035C1C0.c)
 *     sub_140574FA4 @ 0x140574FA4 (sub_140574FA4.c)
 * Callees:
 *     sub_1402103E0 @ 0x1402103E0 (sub_1402103E0.c)
 *     sub_140290B74 @ 0x140290B74 (sub_140290B74.c)
 *     sub_1402B7AE0 @ 0x1402B7AE0 (sub_1402B7AE0.c)
 *     sub_1402F6970 @ 0x1402F6970 (sub_1402F6970.c)
 *     sub_14035C560 @ 0x14035C560 (sub_14035C560.c)
 *     sub_14045B7FC @ 0x14045B7FC (sub_14045B7FC.c)
 *     sub_1405737B4 @ 0x1405737B4 (sub_1405737B4.c)
 */

char __fastcall sub_14035C3FC(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r8
  _BYTE *v7; // rsi
  char v8; // cl
  char v9; // al
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  int v15; // r9d
  __int64 v16; // rdx
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rdx
  unsigned int v20; // edx
  char v21; // al
  char v22; // al

  while ( 1 )
  {
    v4 = sub_1402B7AE0(a1, 0LL, 0LL);
    v5 = v4;
    if ( !v4 )
      break;
    if ( sub_140290B74(v4) )
      goto LABEL_3;
    if ( !a2 )
    {
      LOBYTE(v15) = 1;
      sub_1405737B4(a1, 0, v5, v15, 1);
      break;
    }
    sub_1402F6970(a2, v5);
  }
  v5 = *(_QWORD *)(a1 + 24);
  sub_14035C560(a1, 1LL, 1LL);
LABEL_3:
  v7 = *(_BYTE **)(a1 + 56);
  if ( (*(_BYTE *)(v5 + 2) & 4) == 0
    || *(char *)(v5 + 195) >= 16
    || !*(_QWORD *)(v5 + 104)
    || (v16 = *(_QWORD *)(v5 + 104)) == 0
    || (v17 = *(unsigned int *)(a1 + 216) + v16) == 0
    || (v18 = sub_1402103E0(v5, v17, v6, 0, 0LL), v8 = 1, !v18) )
  {
    v8 = *(_BYTE *)(v5 + 195);
  }
  v9 = v8 & 0x7F | (*(_BYTE *)(v5 + 119) << 7);
  *v7 = v9;
  v10 = *(_QWORD *)(a1 + 35000);
  if ( v10 )
  {
    if ( v5 == *(_QWORD *)(a1 + 24) )
      v19 = (unsigned int)dword_140D0504C;
    else
      v19 = v9 & 0x7F;
    sub_14045B7FC(v10, v19, 0LL);
  }
  v11 = *(_QWORD *)(a1 + 56);
  if ( dword_140D068FC )
  {
    v20 = *(_DWORD *)(v5 + 80);
    v21 = (*(_BYTE *)(v11 + 64) ^ *(_BYTE *)(v5 + 512)) & 7 ^ *(_BYTE *)(v11 + 64);
    v22 = (v21 ^ (8 * *(_BYTE *)(v5 + 516))) & 0x38 ^ v21;
    if ( v20 <= *(_DWORD *)(v5 + 84) )
      v20 = *(_DWORD *)(v5 + 84);
    *(_BYTE *)(v11 + 64) = (v20 >= dword_140D05308 ? 0x40 : 0) | v22 & 0xBF;
  }
  v12 = *(_QWORD *)(a1 + 35000);
  v13 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 16) = v5;
  if ( v12 )
    *(_BYTE *)(v12 + 16) = v5 == v13;
  LOBYTE(v14) = *(_BYTE *)(v5 + 388);
  if ( (_BYTE)v14 == 1 )
  {
    v14 = *(_DWORD *)(v5 + 132) - *(_DWORD *)(v5 + 436) + MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(v5 + 132) = v14;
  }
  *(_BYTE *)(v5 + 388) = 3;
  return v14;
}
