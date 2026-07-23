/*
 * XREFs of sub_1406C1D24 @ 0x1406C1D24
 * Callers:
 *     sub_1407829F8 @ 0x1407829F8 (sub_1407829F8.c)
 *     sub_14081D0F0 @ 0x14081D0F0 (sub_14081D0F0.c)
 *     sub_140827238 @ 0x140827238 (sub_140827238.c)
 *     sub_140859460 @ 0x140859460 (sub_140859460.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406C1FDC @ 0x1406C1FDC (sub_1406C1FDC.c)
 *     sub_1406C59F0 @ 0x1406C59F0 (sub_1406C59F0.c)
 *     sub_140772AA0 @ 0x140772AA0 (sub_140772AA0.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     sub_14078014C @ 0x14078014C (sub_14078014C.c)
 *     sub_140A305C4 @ 0x140A305C4 (sub_140A305C4.c)
 *     sub_140A30930 @ 0x140A30930 (sub_140A30930.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406C1D24(_QWORD *a1, __int64 a2)
{
  int v2; // eax
  int v3; // ebx
  int v4; // r14d
  __int64 v6; // r13
  int v8; // eax
  _QWORD *v9; // r15
  int v10; // eax
  int v11; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // r8
  int *v17; // r12
  __int64 v18; // rdx
  int v19; // eax
  unsigned int *v20; // r14
  int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // ecx
  PVOID P; // [rsp+48h] [rbp-8h]
  int v29; // [rsp+98h] [rbp+48h] BYREF
  int v30; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v31; // [rsp+A8h] [rbp+58h] BYREF

  v2 = *(_DWORD *)(a2 + 64);
  v3 = 0;
  P = 0LL;
  v4 = 0;
  v30 = 0;
  v6 = 0LL;
  v31 = 0LL;
  v29 = 1;
  if ( (v2 & 0x21) == 0 )
  {
    v6 = *(_QWORD *)(a2 + 80);
    if ( v6 )
    {
      v8 = sub_14042A5E0(a1, *(_QWORD *)(a2 + 24));
      if ( v8 == -1073741822 )
      {
        v6 = 0LL;
      }
      else if ( v8 < 0 )
      {
        v3 = v8;
LABEL_8:
        v11 = sub_14042A5E0(a1, *(_QWORD *)(a2 + 24));
        if ( (int)(v11 + 0x80000000) >= 0 && v11 != -1073741822 && !v3 )
          v3 = v11;
        goto LABEL_9;
      }
    }
    v9 = (_QWORD *)(a2 + 96);
    if ( !*(_QWORD *)(a2 + 96) )
    {
      v24 = *(unsigned int *)(a2 + 40);
      if ( (_DWORD)v24 )
      {
        v3 = sub_14078014C(*a1, v24, &v31);
        if ( v3 < 0 )
          goto LABEL_7;
        v4 = v31;
      }
      if ( *a1 )
        v25 = *(_QWORD *)(*a1 + 224LL);
      else
        LODWORD(v25) = 0;
      v3 = sub_14077FFEC(v25, v4, *(_QWORD *)(a2 + 56), 0, 0x2000000, a2 + 96);
      if ( v3 < 0 )
      {
LABEL_7:
        if ( !v6 )
          goto LABEL_9;
        goto LABEL_8;
      }
    }
LABEL_6:
    v10 = *(_DWORD *)(a2 + 64);
    if ( (v10 & 8) != 0 )
      goto LABEL_7;
    v16 = *v9;
    v17 = (int *)(a2 + 68);
    v18 = *(_QWORD *)(a2 + 24);
    *(_DWORD *)(a2 + 64) = v10 | 8;
    v19 = sub_1406C1FDC(a1, v18, v16, qword_14000EAF8, &v29, a2 + 68, 4, &v30);
    if ( v19 == -1073741275 )
    {
      v27 = *((_DWORD *)a1 + 2);
      if ( (unsigned int)(v27 - 1) <= 0xFFFFFFFD )
      {
        *v17 = v27;
        sub_140A30930(a1, a2);
LABEL_27:
        v20 = (unsigned int *)(a2 + 72);
        v3 = sub_1406C1FDC(a1, *(_QWORD *)(a2 + 24), *v9, qword_14000EAE0, &v29, a2 + 72, 4, &v30);
        if ( v3 < 0 )
        {
          *v20 = 0;
          v3 = 0;
        }
        else if ( v29 != 7 || v30 != 4 )
        {
          *v20 = -1;
        }
        v21 = *v17;
        if ( *v17 && (v21 == -1 || (v22 = v21 & 0xFFFF0000, v22 < 0x6020000) || v22 > ((_DWORD)a1[1] & 0xFFFF0000))
          || (v23 = *v20, *v20 == -1)
          || v23 >= 0x10001 && HIWORD(v23) != 1 )
        {
          sub_1406C59F0(a1, a2);
          *(_DWORD *)(a2 + 64) |= 4u;
          v3 = -1073740697;
        }
        goto LABEL_7;
      }
    }
    else if ( v19 >= 0 )
    {
      if ( v29 != 7 || v30 != 4 )
        *v17 = -1;
      goto LABEL_27;
    }
    *v17 = 0;
    goto LABEL_27;
  }
  v9 = (_QWORD *)(a2 + 96);
  if ( *(_QWORD *)(a2 + 96) )
    goto LABEL_9;
  v13 = *(unsigned int *)(a2 + 40);
  if ( (_DWORD)v13 )
  {
    v3 = sub_14078014C(*a1, v13, &v31);
    if ( v3 < 0 )
      goto LABEL_9;
    v4 = v31;
  }
  if ( *a1 )
    v14 = *(_QWORD *)(*a1 + 224LL);
  else
    LODWORD(v14) = 0;
  v15 = sub_14077FFEC(v14, v4, *(_QWORD *)(a2 + 56), 0, 0x2000000, (__int64)v9);
  v3 = v15;
  if ( v15 != -1073741772 )
  {
    if ( v15 < 0 )
      goto LABEL_9;
    goto LABEL_6;
  }
  v26 = sub_140A305C4();
  P = (PVOID)v26;
  if ( !v26 )
  {
    v3 = -1073741595;
    goto LABEL_9;
  }
  v3 = sub_140772AA0(*a1, v4, *(_QWORD *)(a2 + 56), 0, 0x2000000, v26, (__int64)v9, 0LL);
  if ( v3 >= 0 )
  {
    sub_140A30930(a1, a2);
    goto LABEL_6;
  }
LABEL_9:
  *(_DWORD *)(a2 + 160) = v3;
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v3;
}
