/*
 * XREFs of sub_140B0C394 @ 0x140B0C394
 * Callers:
 *     sub_140B0C87C @ 0x140B0C87C (sub_140B0C87C.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140B0C230 @ 0x140B0C230 (sub_140B0C230.c)
 *     sub_140B0D2E8 @ 0x140B0D2E8 (sub_140B0D2E8.c)
 *     sub_140B0D360 @ 0x140B0D360 (sub_140B0D360.c)
 *     sub_140B0D564 @ 0x140B0D564 (sub_140B0D564.c)
 *     sub_140B0D5DC @ 0x140B0D5DC (sub_140B0D5DC.c)
 *     sub_140B0D634 @ 0x140B0D634 (sub_140B0D634.c)
 */

__int64 __fastcall sub_140B0C394(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  __int64 v5; // r15
  void *v6; // r13
  _BYTE *v7; // r14
  __int64 Pool2; // rax
  _QWORD *v9; // rsi
  char v10; // al
  _DWORD *v11; // r14
  unsigned int v12; // r8d
  int v13; // r12d
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // ecx
  _QWORD *v17; // rax
  _QWORD *v18; // r12
  _QWORD *v19; // rax
  int v20; // edx
  _QWORD *v22; // rax
  _QWORD *v23; // r12
  _QWORD *v24; // rax
  unsigned int v25; // ecx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // rcx
  _QWORD *v30; // rcx
  void *v31; // rcx
  void *v32; // rcx
  ULONG v33; // edx
  void *i; // rcx
  _QWORD *v35; // rsi
  __int64 v36; // rdx
  _QWORD *v37; // rax
  _QWORD *v38; // rsi
  __int64 v39; // rdx
  _QWORD *v40; // rax
  unsigned int v41; // [rsp+30h] [rbp-20h] BYREF
  int v42; // [rsp+34h] [rbp-1Ch]
  unsigned int v43; // [rsp+38h] [rbp-18h] BYREF
  __int64 v44; // [rsp+40h] [rbp-10h] BYREF
  _DWORD *v45; // [rsp+48h] [rbp-8h] BYREF
  char v47; // [rsp+A8h] [rbp+58h] BYREF

  v43 = 0;
  v45 = 0LL;
  v44 = 0LL;
  v41 = 0;
  v4 = 0;
  v42 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v7 = (_BYTE *)sub_140B0D360(a1, "Rule", a2);
  if ( !v7 )
  {
    v4 = -1073741275;
    goto LABEL_56;
  }
  Pool2 = ExAllocatePool2(256LL, 0x10uLL, 0x74734D45u);
  v9 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)Pool2 = 0;
    *(_QWORD *)(Pool2 + 8) = 0LL;
  }
  do
  {
    if ( *v7 != 37 )
    {
      if ( *v7 == 38 )
        goto LABEL_47;
      if ( *v7 != 63 )
      {
        if ( *v7 != 124 )
          goto LABEL_62;
LABEL_47:
        if ( *(_DWORD *)v9 < 2u )
          goto LABEL_62;
        v5 = ExAllocatePool2(256LL, 0x38uLL, 0x74734D45u);
        if ( !v5
          || (*(_QWORD *)(v5 + 8) = ExAllocatePool2(256LL, 0x20uLL, 0x74734D45u),
              v27 = ExAllocatePool2(256LL, 0x20uLL, 0x74734D45u),
              v28 = *(_QWORD *)(v5 + 8),
              *(_QWORD *)(v5 + 32) = v27,
              !v28)
          || !v27 )
        {
LABEL_61:
          v4 = -1073741670;
          goto LABEL_29;
        }
        *(_BYTE *)v5 = *v7;
        *(_DWORD *)(v28 + 16) = 0;
        *(_QWORD *)(*(_QWORD *)(v5 + 8) + 24LL) = 0LL;
        *(_DWORD *)(*(_QWORD *)(v5 + 32) + 16LL) = 0;
        *(_QWORD *)(*(_QWORD *)(v5 + 32) + 24LL) = 0LL;
        if ( !(unsigned __int8)sub_140B0D5DC(
                                 (_DWORD)v9,
                                 *(_QWORD *)(v5 + 32),
                                 (unsigned int)*(_QWORD *)(v5 + 32) + 8,
                                 (int)v5 + 48,
                                 v5 + 40)
          || !(unsigned __int8)sub_140B0D5DC(
                                 (_DWORD)v9,
                                 *(_QWORD *)(v5 + 8),
                                 (unsigned int)*(_QWORD *)(v5 + 8) + 8,
                                 (int)v5 + 24,
                                 v5 + 16) )
        {
          goto LABEL_60;
        }
        sub_140B0D564((_DWORD)v9, 2, v5, 0, 0);
        goto LABEL_25;
      }
    }
    v4 = sub_140B0C230(a1, (__int64)v7, &v45, &v44, &v41);
    if ( v4 < 0 )
      goto LABEL_29;
    v10 = *v7;
    v11 = v45;
    v47 = v10;
    if ( v10 == 63 )
    {
      v12 = v45[14];
      v13 = v45[15];
    }
    else
    {
      v12 = v45[10];
      v13 = v45[11];
    }
    v14 = v13 + v12;
    if ( (unsigned int)v14 > v41 )
      goto LABEL_62;
    v15 = 0LL;
    if ( v12 )
    {
      while ( *(_DWORD *)(v44 + 4 * v15) < *(_DWORD *)(a3 + 40) )
      {
        v15 = (unsigned int)(v15 + 1);
        if ( (unsigned int)v15 >= v12 )
          goto LABEL_14;
      }
      goto LABEL_62;
    }
LABEL_14:
    v16 = v12;
    if ( v12 < (unsigned int)v14 )
    {
      while ( *(_DWORD *)(v44 + 4LL * v16) < *(_DWORD *)(a3 + 44) )
      {
        if ( ++v16 >= (unsigned int)v14 )
          goto LABEL_17;
      }
      goto LABEL_62;
    }
LABEL_17:
    while ( (unsigned int)v14 < v41 )
    {
      v25 = *(_DWORD *)(v44 + 4 * v14);
      if ( v25 >= *(_DWORD *)(a3 + 48) )
        goto LABEL_62;
      v26 = v47 == 63
          ? *(_QWORD *)&v45[2 * ((_DWORD)v14 - v13 - v12) + 18]
          : *(_QWORD *)(*((_QWORD *)v45 + 7) + 8LL * ((_DWORD)v14 - v13 - v12));
      if ( *(_QWORD *)(*(_QWORD *)(a3 + 56) + 8LL * v25) != v26 )
        goto LABEL_62;
      v14 = (unsigned int)(v14 + 1);
    }
    if ( v47 == 63 )
    {
      v22 = (_QWORD *)ExAllocatePool2(256LL, 0x10uLL, 0x74694D45u);
      if ( !v22 )
        goto LABEL_61;
      *v22 = v11;
      v23 = v11 + 12;
      v22[1] = *(_QWORD *)(a3 + 64);
      *(_QWORD *)(a3 + 64) = v22 + 1;
      if ( !(unsigned __int8)sub_140B0D634(v11 + 12, a3) )
      {
        v24 = (_QWORD *)ExAllocatePool2(256LL, 0x18uLL, 0x74694D45u);
        if ( !v24 )
          goto LABEL_61;
        *v24 = a3;
        v24[1] = *v23;
        *v23 = v24 + 1;
      }
      v20 = 0;
    }
    else
    {
      v17 = (_QWORD *)ExAllocatePool2(256LL, 0x18uLL, 0x74694D45u);
      if ( !v17 )
        goto LABEL_61;
      *v17 = v11;
      v18 = v11 + 8;
      v17[1] = *(_QWORD *)(a3 + 72);
      *(_QWORD *)(a3 + 72) = v17 + 1;
      if ( !(unsigned __int8)sub_140B0D634(v11 + 8, a3) )
      {
        v19 = (_QWORD *)ExAllocatePool2(256LL, 0x18uLL, 0x74694D45u);
        if ( !v19 )
          goto LABEL_61;
        *v19 = a3;
        v19[1] = *v18;
        *v18 = v19 + 1;
      }
      v20 = 1;
    }
    sub_140B0D564((_DWORD)v9, v20, (_DWORD)v11, v44, v41);
LABEL_25:
    v7 = (_BYTE *)sub_140B0D2E8(a1, "Rule", v43, (unsigned int)++v42);
  }
  while ( v7 );
  if ( *(_DWORD *)v9 == 1 )
  {
    v6 = (void *)ExAllocatePool2(256LL, 0x20uLL, 0x74694D45u);
    if ( (unsigned __int8)sub_140B0D5DC((_DWORD)v9, (_DWORD)v6, (int)v6 + 8, (int)v6 + 24, (__int64)v6 + 16) )
    {
      *(_QWORD *)(a3 + 96) = v6;
      goto LABEL_29;
    }
LABEL_60:
    v4 = -1073741275;
    goto LABEL_29;
  }
LABEL_62:
  v4 = -1073741811;
LABEL_29:
  if ( v9 )
  {
    while ( v9[1] )
      sub_140B0D5DC((_DWORD)v9, (unsigned int)&v43, (unsigned int)&v44, (unsigned int)&v45, (__int64)&v47);
    ExFreePoolWithTag(v9, 0x74734D45u);
  }
  if ( v4 < 0 )
  {
    if ( !v5 )
      goto LABEL_56;
    v31 = *(void **)(v5 + 8);
    if ( v31 )
      ExFreePoolWithTag(v31, 0x74734D45u);
    v32 = *(void **)(v5 + 32);
    if ( v32 )
      ExFreePoolWithTag(v32, 0x74734D45u);
    v33 = 1953713477;
    for ( i = (void *)v5; ; i = v35 )
    {
      ExFreePoolWithTag(i, v33);
LABEL_56:
      v29 = *(_QWORD **)(a3 + 72);
      if ( !v29 )
        break;
      v35 = v29 - 1;
      *(_QWORD *)(a3 + 72) = *v29;
      v36 = *(v29 - 1);
      v37 = *(_QWORD **)(v36 + 32);
      if ( *(v37 - 1) == a3 )
      {
        if ( v37 )
          *(_QWORD *)(v36 + 32) = *v37;
        ExFreePoolWithTag(v37 - 1, 0x74694D45u);
      }
      v33 = 1953058117;
    }
    while ( 1 )
    {
      v30 = *(_QWORD **)(a3 + 64);
      if ( !v30 )
        break;
      v38 = v30 - 1;
      *(_QWORD *)(a3 + 64) = *v30;
      v39 = *(v30 - 1);
      v40 = *(_QWORD **)(v39 + 48);
      if ( *(v40 - 1) == a3 )
      {
        if ( v40 )
          *(_QWORD *)(v39 + 48) = *v40;
        ExFreePoolWithTag(v40 - 1, 0x74694D45u);
      }
      ExFreePoolWithTag(v38, 0x74694D45u);
    }
    if ( v6 )
      ExFreePoolWithTag(v6, 0x74694D45u);
  }
  return (unsigned int)v4;
}
