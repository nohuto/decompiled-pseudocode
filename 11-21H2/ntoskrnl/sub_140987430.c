/*
 * XREFs of sub_140987430 @ 0x140987430
 * Callers:
 *     sub_1406AE11C @ 0x1406AE11C (sub_1406AE11C.c)
 * Callees:
 *     sub_140360A84 @ 0x140360A84 (sub_140360A84.c)
 *     sub_140360AC0 @ 0x140360AC0 (sub_140360AC0.c)
 *     sub_1406EC048 @ 0x1406EC048 (sub_1406EC048.c)
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     sub_1407E0768 @ 0x1407E0768 (sub_1407E0768.c)
 *     sub_1407E0884 @ 0x1407E0884 (sub_1407E0884.c)
 *     sub_140987D68 @ 0x140987D68 (sub_140987D68.c)
 *     sub_140987E44 @ 0x140987E44 (sub_140987E44.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140987430(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 *v2; // r15
  int v3; // r13d
  int v4; // edx
  int v5; // r8d
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // r14d
  __int64 v10; // rsi
  char *v11; // rdi
  unsigned int v12; // ebx
  __int64 result; // rax
  __int64 v14; // rdi
  __int64 v15; // r9
  unsigned int v16; // eax
  __int64 *v17; // r14
  unsigned int v18; // r12d
  unsigned int v19; // r15d
  unsigned int v20; // [rsp+30h] [rbp-38h]
  HANDLE Handle[2]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v22; // [rsp+48h] [rbp-20h]
  PVOID P[2]; // [rsp+50h] [rbp-18h] BYREF
  int v25; // [rsp+B8h] [rbp+50h]
  int v26; // [rsp+C0h] [rbp+58h]
  __int64 v27; // [rsp+C8h] [rbp+60h] BYREF

  v1 = *a1;
  v2 = a1;
  LODWORD(v27) = 0;
  v3 = 0;
  *(_OWORD *)P = 0LL;
  v20 = *(unsigned __int16 *)(*a1 + 30);
  v4 = *(_DWORD *)(*a1 + 28);
  v22 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
      + (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v5 = *(_DWORD *)(v1 + 80);
  v6 = (8 * (v20 & 7)) | v4 & 7;
  v7 = v6 | 0x100;
  if ( (v5 & 0x10) != 0 )
    v7 = v6;
  v8 = v7 | 0x200;
  if ( (v5 & 8) == 0 )
    v8 = v7;
  v9 = v8 | 0x800;
  if ( (v5 & 0x20) == 0 )
    v9 = v8;
  v10 = 0LL;
  v26 = v9;
  v25 = 0;
  if ( !*(_DWORD *)(v1 + 20) )
  {
LABEL_15:
    v12 = 0;
    goto LABEL_16;
  }
  while ( 1 )
  {
    *(_OWORD *)Handle = 0LL;
    if ( sub_140360A84(v2) )
    {
      v3 = 1;
LABEL_10:
      v11 = (char *)Handle[1];
      goto LABEL_11;
    }
    v14 = *(_QWORD *)(v1 + 56) + 40 * v10;
    if ( (int)sub_140987D68(v14, P) < 0 || (int)sub_140987E44(v14, Handle) < 0 )
      goto LABEL_10;
    v11 = (char *)Handle[1];
    if ( (*(_DWORD *)(v1 + 80) & 4) == 0 )
    {
      v16 = (unsigned int)P[0];
      *(_DWORD *)(v1 + 104) += LODWORD(P[0]);
      sub_1406EC048(v11, v16, (__int64)P[1], v9);
LABEL_32:
      ++*(_DWORD *)(v1 + 92);
      goto LABEL_11;
    }
    v17 = v2 + 6;
    v18 = (unsigned int)P[0];
    Handle[0] = P[1];
    sub_140360AC0((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, (_OWORD *)v2 + 3, 0xB0u, v15, &v27);
    if ( !v18 )
      goto LABEL_32;
    while ( !sub_140360A84(v2) && (unsigned __int64)(*v17 + v17[1] + sub_1407E0884((__int64)(v17 + 5), 0, v20)) >= 0x80 )
    {
      v19 = v18;
      if ( v18 > 0x10 )
        v19 = 16;
      if ( sub_1406EC048(v11, v19, (__int64)Handle[0], v26) >= 0 )
        *(_DWORD *)(v1 + 104) += v19;
      sub_1407E0768(v17, v19);
      Handle[0] = (char *)Handle[0] + 16 * v19;
      v18 -= v19;
      v2 = a1;
      if ( !v18 )
      {
        LODWORD(v10) = v25;
        goto LABEL_32;
      }
    }
    LODWORD(v10) = v25;
    v3 = 1;
LABEL_11:
    if ( v11 )
      NtClose(v11);
    if ( v3 )
      break;
    v9 = v26;
    v10 = (unsigned int)(v10 + 1);
    v25 = v10;
    if ( (unsigned int)v10 >= *(_DWORD *)(v1 + 20) )
      goto LABEL_15;
  }
  v12 = -1073741248;
LABEL_16:
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  result = v12;
  *(_DWORD *)(*v2 + 120) += ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
                          + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                          - v22;
  return result;
}
