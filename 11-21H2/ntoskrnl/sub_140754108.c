/*
 * XREFs of sub_140754108 @ 0x140754108
 * Callers:
 *     sub_1406647E0 @ 0x1406647E0 (sub_1406647E0.c)
 *     sub_140753F8C @ 0x140753F8C (sub_140753F8C.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406A0BF0 @ 0x1406A0BF0 (sub_1406A0BF0.c)
 *     sub_140752A78 @ 0x140752A78 (sub_140752A78.c)
 *     RtlCompareUnicodeString @ 0x1407CAA80 (RtlCompareUnicodeString.c)
 *     sub_1409CA4E8 @ 0x1409CA4E8 (sub_1409CA4E8.c)
 *     sub_1409CA714 @ 0x1409CA714 (sub_1409CA714.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140754108(unsigned __int64 a1, _DWORD *a2, int a3, char a4, char a5, __int64 *a6)
{
  unsigned __int16 *v8; // rsi
  signed int v9; // edi
  void *v10; // r12
  __int64 Pool2; // r14
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  __int64 v14; // r15
  unsigned __int64 v15; // rax
  __int64 v16; // r8
  unsigned int v17; // r15d
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned int v20; // r13d
  unsigned int v21; // edx
  unsigned __int16 v22; // ax
  int v23; // eax
  unsigned int v25; // r13d
  char v26; // r12
  __int64 j; // rax
  unsigned int v28; // r15d
  unsigned int v29; // r13d
  unsigned int k; // r15d
  void *v31; // rcx
  unsigned int v32; // [rsp+24h] [rbp-84h]
  PVOID P; // [rsp+28h] [rbp-80h] BYREF
  unsigned int v34; // [rsp+30h] [rbp-78h]
  int i; // [rsp+34h] [rbp-74h]
  int v36; // [rsp+38h] [rbp-70h]
  int v37; // [rsp+3Ch] [rbp-6Ch]
  void *v38; // [rsp+40h] [rbp-68h]
  void *v39; // [rsp+48h] [rbp-60h]
  __int64 v40; // [rsp+50h] [rbp-58h]
  unsigned __int16 *v41; // [rsp+58h] [rbp-50h]
  int v42; // [rsp+60h] [rbp-48h]
  char v45; // [rsp+C8h] [rbp+20h]
  int v46; // [rsp+C8h] [rbp+20h]

  v8 = 0LL;
  v41 = 0LL;
  v34 = 0;
  v37 = 0;
  v45 = 0;
  v9 = 0;
  v10 = 0LL;
  v38 = 0LL;
  v32 = 0;
  v36 = 0;
  P = 0LL;
  if ( !a4 )
    return 3221225659LL;
  Pool2 = ExAllocatePool2(256LL, 16LL, 1950442835LL);
  v40 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  if ( !a2 || !a3 || *a2 == 1 )
    v45 = 1;
  *(_OWORD *)Pool2 = 0LL;
  if ( a4 != 1 )
    goto LABEL_75;
  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a1 + 16 > 0x7FFFFFFF0000LL || a1 + 16 < a1 )
    MEMORY[0x7FFFFFFF0000] = 0;
  *(_WORD *)Pool2 = *(_WORD *)a1;
  *(_WORD *)(Pool2 + 2) = *(_WORD *)(a1 + 2);
  v12 = *(unsigned int *)(a1 + 4);
  *(_DWORD *)(Pool2 + 4) = v12;
  if ( !(_DWORD)v12 )
  {
    *a6 = Pool2;
    return 0LL;
  }
  *(_QWORD *)(Pool2 + 8) = *(_QWORD *)(a1 + 8);
  v13 = 40 * v12;
  v39 = (void *)v13;
  v14 = 0xFFFFFFFFLL;
  if ( v13 <= 0xFFFFFFFF )
    v14 = (unsigned int)v13;
  v42 = v14;
  v9 = v13 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v13 > 0xFFFFFFFF )
  {
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return (unsigned int)v9;
  }
  v8 = (unsigned __int16 *)ExAllocatePool2(256LL, (unsigned int)v14, 1950442835LL);
  v41 = v8;
  if ( !v8 )
  {
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return 3221225626LL;
  }
  if ( (_DWORD)v14 )
  {
    v15 = *(_QWORD *)(Pool2 + 8);
    if ( (v15 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v15 + v14 > 0x7FFFFFFF0000LL || v15 + v14 < v15 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  memmove(v8, *(const void **)(Pool2 + 8), (unsigned int)v14);
  v17 = 0;
  for ( i = 0; ; i = v17 )
  {
    v10 = 0LL;
    v39 = 0LL;
    v38 = 0LL;
    if ( v17 >= *(_DWORD *)(Pool2 + 4) )
      break;
    if ( !v8[20 * v17] )
    {
      v9 = -1073741811;
      v10 = 0LL;
      v39 = 0LL;
      v38 = 0LL;
      goto LABEL_68;
    }
    v10 = (void *)ExAllocatePool2(256LL, v8[20 * v17], 1950442835LL);
    v39 = v10;
    v38 = v10;
    if ( !v10 )
    {
      v9 = -1073741670;
      goto LABEL_68;
    }
    v18 = v8[20 * v17];
    if ( (_WORD)v18 )
    {
      v19 = *(_QWORD *)&v8[20 * v17 + 4];
      if ( (v19 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v19 + v18 > 0x7FFFFFFF0000LL || v19 + v18 < v19 )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        LOWORD(v18) = v8[20 * v17];
      }
    }
    memmove(v10, *(const void **)&v8[20 * v17 + 4], (unsigned __int16)v18);
    *(_QWORD *)&v8[20 * v17 + 4] = v10;
    v37 = ++v34;
    v38 = 0LL;
    ++v17;
  }
  v20 = 0;
  i = 0;
  while ( v20 < *(_DWORD *)(Pool2 + 4) )
  {
    v21 = *(_DWORD *)&v8[20 * v20 + 12];
    if ( v21 )
    {
      v22 = v8[20 * v20 + 8];
      if ( !v22 )
        goto LABEL_67;
      if ( v22 <= 2u )
        goto LABEL_41;
      switch ( v22 )
      {
        case 3u:
          LOBYTE(v16) = 1;
          v23 = sub_1406A0BF0(*(_QWORD *)&v8[20 * v20 + 16], v21, v16, &P);
          goto LABEL_42;
        case 4u:
          v23 = sub_1409CA4E8(*(void **)&v8[20 * v20 + 16]);
          goto LABEL_42;
        case 5u:
LABEL_65:
          v23 = sub_1409CA714(*(void **)&v8[20 * v20 + 16]);
          goto LABEL_42;
        case 6u:
LABEL_41:
          v23 = sub_140752A78(*(char **)&v8[20 * v20 + 16], v21, v16, &P);
LABEL_42:
          v9 = v23;
          if ( v23 >= 0 )
            *(_QWORD *)&v8[20 * v20 + 16] = P;
          break;
        default:
          v16 = 16LL;
          if ( v22 == 16 )
            goto LABEL_65;
LABEL_67:
          v9 = -1073741637;
          break;
      }
      if ( v9 < 0 )
        goto LABEL_68;
      v36 = ++v32;
      P = 0LL;
      goto LABEL_33;
    }
    if ( !a5 )
    {
      v9 = -1073741811;
      goto LABEL_68;
    }
    *(_QWORD *)&v8[20 * v20 + 16] = 0LL;
    v36 = ++v32;
LABEL_33:
    i = ++v20;
  }
  if ( v9 >= 0 )
  {
    *(_QWORD *)(Pool2 + 8) = v8;
    if ( !v45 && a3 != *(_DWORD *)(Pool2 + 4) )
      v9 = -1073741811;
  }
LABEL_68:
  if ( v9 < 0 )
    goto LABEL_90;
  v25 = 0;
  v26 = v45;
  while ( v25 < *(_DWORD *)(Pool2 + 4) )
  {
    if ( v26 || ((a2[v25] - 2) & 0xFFFFFFFD) == 0 )
    {
      for ( j = 0LL; ; j = (unsigned int)(v46 + 1) )
      {
        v46 = j;
        if ( (unsigned int)j >= 4 )
          break;
        v40 = j;
        if ( !RtlCompareUnicodeString((PCUNICODE_STRING)&v8[20 * v25], (PCUNICODE_STRING)&qword_140A39890[3 * j], 1u) )
        {
          if ( v8[20 * v25 + 8] != LODWORD(qword_140A39890[3 * v40 + 2]) )
            v9 = -1073741811;
          if ( *(_DWORD *)&v8[20 * v25 + 12] < HIDWORD(qword_140A39890[3 * v40 + 2]) )
            v9 = -1073741811;
          break;
        }
      }
    }
    ++v25;
  }
  v10 = v39;
LABEL_75:
  if ( v9 < 0 )
  {
LABEL_90:
    if ( v8 )
    {
      v28 = 0;
      v29 = v34;
      while ( v28 < v29 )
        ExFreePoolWithTag(*(PVOID *)&v8[20 * v28++ + 4], 0);
      for ( k = 0; k < v32; ++k )
      {
        v31 = *(void **)&v8[20 * k + 16];
        if ( v31 )
          ExFreePoolWithTag(v31, 0);
      }
      ExFreePoolWithTag(v8, 0);
    }
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
    if ( P )
      ExFreePoolWithTag(P, 0);
    ExFreePoolWithTag((PVOID)Pool2, 0);
  }
  else
  {
    *a6 = Pool2;
  }
  return (unsigned int)v9;
}
