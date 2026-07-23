/*
 * XREFs of sub_140284EB0 @ 0x140284EB0
 * Callers:
 *     sub_14025868C @ 0x14025868C (sub_14025868C.c)
 *     MmCopyMemory @ 0x14026BBB0 (MmCopyMemory.c)
 *     sub_14029A2A0 @ 0x14029A2A0 (sub_14029A2A0.c)
 *     sub_1405B88D8 @ 0x1405B88D8 (sub_1405B88D8.c)
 *     sub_1406EC048 @ 0x1406EC048 (sub_1406EC048.c)
 *     sub_1406F4650 @ 0x1406F4650 (sub_1406F4650.c)
 *     NtSetInformationVirtualMemory @ 0x140753430 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     sub_140232E08 @ 0x140232E08 (sub_140232E08.c)
 *     sub_14024B1FC @ 0x14024B1FC (sub_14024B1FC.c)
 *     sub_14026C7D0 @ 0x14026C7D0 (sub_14026C7D0.c)
 *     sub_1402792E0 @ 0x1402792E0 (sub_1402792E0.c)
 *     sub_140285380 @ 0x140285380 (sub_140285380.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     sub_1402CFEB0 @ 0x1402CFEB0 (sub_1402CFEB0.c)
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     sub_1405943E4 @ 0x1405943E4 (sub_1405943E4.c)
 *     sub_140594C08 @ 0x140594C08 (sub_140594C08.c)
 *     sub_140594F80 @ 0x140594F80 (sub_140594F80.c)
 */

__int64 __fastcall sub_140284EB0(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // r8
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int8 v8; // dl
  __int64 v9; // rcx
  char v10; // al
  __int64 v11; // rax
  __int64 v12; // rcx
  ULONG_PTR *v13; // r15
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r10
  __int64 v17; // rsi
  __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // r8
  signed __int64 v21; // rdx
  ULONG_PTR v22; // rax
  ULONG_PTR v23; // rcx
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // r14
  int v26; // r9d
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // esi
  int v30; // r14d
  int v31; // eax
  unsigned __int64 v33; // rax
  int v34; // r8d
  int v35; // eax
  _QWORD **v36; // rcx
  _QWORD *v37; // rdx
  int v38; // eax
  int v39; // ecx
  __int64 v40; // [rsp+30h] [rbp-69h] BYREF
  __int64 v41; // [rsp+38h] [rbp-61h]
  unsigned __int64 v42; // [rsp+40h] [rbp-59h]
  unsigned __int64 v43; // [rsp+48h] [rbp-51h]
  unsigned __int64 v44; // [rsp+50h] [rbp-49h]
  _QWORD v45[2]; // [rsp+58h] [rbp-41h] BYREF
  _QWORD v46[2]; // [rsp+68h] [rbp-31h] BYREF
  unsigned __int64 v47; // [rsp+78h] [rbp-21h] BYREF
  int v48; // [rsp+80h] [rbp-19h]
  int v49; // [rsp+84h] [rbp-15h]
  __int64 v50; // [rsp+88h] [rbp-11h]
  _OWORD v51[3]; // [rsp+90h] [rbp-9h] BYREF
  int v52; // [rsp+100h] [rbp+67h]
  int v54; // [rsp+118h] [rbp+7Fh]

  v40 = 1LL;
  v49 = 0;
  v6 = a2;
  v43 = 0LL;
  v44 = 0LL;
  v45[1] = v45;
  v45[0] = v45;
  v46[1] = v46;
  v46[0] = v46;
  v41 = a2;
  v42 = a1;
  v47 = 0LL;
  v50 = 0LL;
  v48 = a4;
  CurrentThread = KeGetCurrentThread();
  v54 = 0;
  v52 = 0;
  v8 = *((_BYTE *)CurrentThread + 1390);
  v9 = *((_QWORD *)CurrentThread + 23);
  if ( v8 >= 2u )
    return 3221225626LL;
  if ( a3 == 1 )
  {
    v13 = &StartContext;
    goto LABEL_7;
  }
  v10 = *(_BYTE *)(a3 + 184) & 7;
  if ( v10 != 1 )
  {
    if ( !v10 )
    {
      v12 = *(unsigned __int16 *)(v9 + 1838);
      goto LABEL_6;
    }
    return 3221225485LL;
  }
  v11 = *(_QWORD *)(v9 + 1368);
  if ( !v11 )
    return 3221225485LL;
  v12 = *(unsigned __int16 *)(v11 + 366);
LABEL_6:
  v13 = *(ULONG_PTR **)(qword_140C51F48 + 8 * v12);
LABEL_7:
  *((_BYTE *)CurrentThread + 1390) = v8 + 1;
  --*((_WORD *)CurrentThread + 242);
  memset(v51, 0, sizeof(v51));
  if ( v43 >= v42 )
  {
    v29 = 0;
    v30 = 0;
    goto LABEL_50;
  }
  v14 = 0xFFFFF6FFFFFFFFFFuLL;
  while ( 1 )
  {
    v15 = 0xFFFF800000000000uLL;
    v16 = 0xFFFFF68000000000uLL;
    if ( (v48 & 0x40000) != 0 && (*((_DWORD *)CurrentThread + 344) & 1) != 0 )
    {
      v29 = -1073741749;
      goto LABEL_49;
    }
    v17 = v6 + 16 * v43;
    v18 = *(_QWORD *)(v17 + 8);
    if ( v44 >= ((unsigned __int64)(*(_DWORD *)v17 & 0xFFF) + v18 + 4095) >> 12 )
      goto LABEL_78;
    if ( !v18 )
    {
      v43 = v42;
      v44 = 0LL;
LABEL_48:
      v29 = v54;
LABEL_49:
      v30 = v52;
      goto LABEL_50;
    }
    v19 = *(_QWORD *)v17 + (v44 << 12);
    v20 = v19;
    if ( v19 >= qword_140C540C0 && v19 <= qword_140C51BF0
      || v19 >= 0xFFFF800000000000uLL && sub_14026C7D0(*(_QWORD *)v17 + (v44 << 12)) )
    {
LABEL_78:
      sub_140232E08(&v40);
      goto LABEL_36;
    }
    if ( v19 >= v16 && v19 <= v14 )
    {
      if ( v19 >= v16 + 0x4000000000LL )
        goto LABEL_78;
      v20 = sub_1402CFEB0(v19);
    }
    if ( v20 >= v15 )
    {
      if ( byte_140C53F50[((v20 >> 39) & 0x1FF) - 256] == 1 )
      {
        if ( a3 == 1 || (*(_BYTE *)(a3 + 184) & 7) != 1 )
          goto LABEL_78;
      }
      else if ( a3 != 1 )
      {
        goto LABEL_78;
      }
    }
    else if ( a3 == 1 || (*(_BYTE *)(a3 + 184) & 7) != 0 )
    {
      goto LABEL_78;
    }
    if ( (v48 & 0x80u) == 0 )
      break;
LABEL_24:
    if ( (a4 & 0x20000) != 0 )
      sub_140594C08((unsigned int)v51, (unsigned int)&v40, (_DWORD)v13, a3, v17, v19);
    v24 = v43;
    v25 = v44;
    v26 = sub_14031C860(0LL, v19);
    if ( BYTE1(v40) == 2 )
    {
      if ( (v48 & 0x80u) == 0 )
        goto LABEL_48;
    }
    else if ( BYTE1(v40) != 1 )
    {
      if ( v44 == v25 && v43 == v24 )
      {
        v27 = *(_QWORD *)(v41 + 16 * v43 + 8) + 4095LL;
        v28 = *(_DWORD *)(v41 + 16 * v43) & 0xFFF;
        if ( ++v44 == (unsigned __int64)(v27 + v28) >> 12 )
        {
          v33 = v43 + 1;
          v43 = v33;
          v44 = 0LL;
          if ( v33 < v42 && !*(_QWORD *)(v41 + 16 * v33 + 8) )
            v43 = v42;
        }
      }
      goto LABEL_31;
    }
    BYTE1(v40) = 0;
LABEL_31:
    if ( v26 < 0 )
    {
      v52 = v26;
      v30 = v26;
      if ( v26 != -1073741819 || v43 == v42 || !(unsigned int)sub_1405943E4(&v40, 0LL) )
        goto LABEL_95;
    }
    if ( v47 >= 0x200000 )
      sub_14024B1FC(v46, (__int64)v45, &v47);
    if ( (v48 & 0x400) != 0 )
    {
      v34 = 0;
      v35 = 0;
      while ( 1 )
      {
        v36 = (_QWORD **)v45;
        if ( !v35 )
          v36 = (_QWORD **)v46;
        v37 = *v36;
        if ( *v36 != v36 )
          break;
LABEL_65:
        if ( (unsigned int)++v35 >= 2 )
          goto LABEL_35;
      }
      while ( ++v34 != 4 )
      {
        v37 = (_QWORD *)*v37;
        if ( v37 == v36 )
          goto LABEL_65;
      }
      v38 = sub_1402792E0(v45, v46, a3);
      if ( v38 < 0 )
      {
        v39 = v54;
        if ( v54 >= 0 )
          v39 = v38;
        v54 = v39;
      }
      v47 = 0LL;
    }
LABEL_35:
    v14 = 0xFFFFF6FFFFFFFFFFuLL;
LABEL_36:
    if ( v43 >= v42 )
      goto LABEL_48;
    v6 = a2;
  }
  if ( !(unsigned int)sub_140285380(v13, 288LL) )
    goto LABEL_48;
  v22 = v13[2187];
  v23 = v13[2157];
  if ( v23 > v22 )
    goto LABEL_48;
  if ( v22 - v23 >= 0x1080 )
  {
    if ( (__int64)v13[2120] < v21 )
      goto LABEL_48;
    goto LABEL_24;
  }
  v30 = v52;
LABEL_95:
  v29 = v54;
LABEL_50:
  if ( (a4 & 0x20000) != 0 )
    sub_140594F80(v51, &v40, v13, 1LL);
  v31 = sub_1402792E0(v45, v46, a3);
  if ( v31 < 0 )
  {
    if ( v29 >= 0 )
      v29 = v31;
  }
  else if ( v29 >= 0 && v30 < 0 && (v48 & 0x8000) != 0 )
  {
    v29 = v30;
  }
  sub_1402AC800(CurrentThread);
  --*((_BYTE *)CurrentThread + 1390);
  return (unsigned int)v29;
}
