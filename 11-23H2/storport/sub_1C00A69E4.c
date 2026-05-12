/*
 * XREFs of sub_1C00A69E4 @ 0x1C00A69E4
 * Callers:
 *     sub_1C00AAE60 @ 0x1C00AAE60 (sub_1C00AAE60.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C0010DF4 @ 0x1C0010DF4 (sub_1C0010DF4.c)
 *     sub_1C0035DE4 @ 0x1C0035DE4 (sub_1C0035DE4.c)
 *     sub_1C0035EB8 @ 0x1C0035EB8 (sub_1C0035EB8.c)
 *     sub_1C0063D90 @ 0x1C0063D90 (sub_1C0063D90.c)
 *     sub_1C00A6778 @ 0x1C00A6778 (sub_1C00A6778.c)
 */

__int64 __fastcall sub_1C00A69E4(__int64 a1, __int64 a2, _QWORD *a3, _BYTE *a4, _QWORD *a5, _BYTE *a6)
{
  _BYTE *v6; // r14
  _QWORD *v8; // rdx
  _QWORD *v9; // rax
  _QWORD *v12; // r8
  _QWORD *v13; // rcx
  unsigned int v14; // esi
  _QWORD *v15; // r10
  _QWORD *v16; // r9
  __int64 v17; // rdx
  _QWORD *v18; // rax
  _QWORD *v19; // rdi
  _QWORD *v20; // rax
  _DWORD *v21; // rax
  _DWORD *v22; // r14
  _DWORD *v23; // r12
  __int64 v24; // rax
  __int64 v25; // rcx
  __int16 v26; // ax
  __int64 v27; // rax
  int v28; // r8d
  int v29; // eax
  char v30; // r13
  _QWORD *v31; // rcx
  char v32; // si
  struct _DEVICE_OBJECT *v33; // rcx
  __int64 v34; // rax
  struct _UNICODE_STRING *v35; // rax
  struct _UNICODE_STRING **v36; // rcx
  struct _UNICODE_STRING *v37; // rax
  struct _UNICODE_STRING *v39; // [rsp+20h] [rbp-10h] BYREF
  PVOID v40; // [rsp+28h] [rbp-8h] BYREF
  char v41; // [rsp+78h] [rbp+48h] BYREF
  _QWORD *v42; // [rsp+80h] [rbp+50h]
  char v43; // [rsp+88h] [rbp+58h]

  v42 = a3;
  v6 = a6;
  *a3 = 0LL;
  v8 = a5;
  v9 = a3;
  *a4 = 0;
  v41 = 0;
  v39 = 0LL;
  v12 = *(_QWORD **)(a2 + 40);
  v13 = 0LL;
  v43 = 0;
  v14 = 0;
  *v8 = 0LL;
  v15 = 0LL;
  *v6 = 0;
  v16 = 0LL;
  if ( v12 != (_QWORD *)(a2 + 40) )
  {
    do
    {
      v13 = v12 - 1;
      v15 = v12 - 1;
      v16 = v12 - 1;
      v17 = v12[2] - *(_QWORD *)(a1 + 5000);
      if ( !v17 )
        v17 = v13[4] - *(_QWORD *)(a1 + 5008);
      if ( !v17 )
        break;
      v12 = (_QWORD *)*v12;
      v13 = 0LL;
      v15 = 0LL;
      v16 = 0LL;
    }
    while ( v12 != (_QWORD *)(a2 + 40) );
    v9 = v42;
    v8 = a5;
  }
  if ( v15 )
  {
    *v9 = v13;
    *v8 = v16[7];
    *a4 = 1;
    *v6 = 1;
    return v14;
  }
  v18 = (_QWORD *)sub_1C0007CF4(64LL, 112LL, 1145266514LL, *(_QWORD *)(a1 + 8));
  v40 = v18;
  v19 = v18;
  if ( !v18 )
    return (unsigned int)-1073741670;
  v20 = v18 + 1;
  v20[1] = v20;
  *v20 = v20;
  *(_DWORD *)v19 = 112;
  *(_OWORD *)(v19 + 3) = *(_OWORD *)(a1 + 5000);
  v21 = (_DWORD *)sub_1C0007CF4(64LL, 352LL, 1145266514LL, *(_QWORD *)(a1 + 8));
  v22 = v21;
  if ( !v21 )
  {
    v14 = -1073741670;
    goto LABEL_46;
  }
  v23 = v21 + 78;
  *v21 = 312;
  ObfReferenceObject(*(PVOID *)(a1 + 8));
  *((_QWORD *)v22 + 1) = a1;
  *((_OWORD *)v22 + 4) = *(_OWORD *)(a1 + 344);
  *((_OWORD *)v22 + 5) = *(_OWORD *)(a1 + 360);
  *((_OWORD *)v22 + 6) = *(_OWORD *)(a1 + 376);
  *((_OWORD *)v22 + 7) = *(_OWORD *)(a1 + 392);
  *((_OWORD *)v22 + 8) = *(_OWORD *)(a1 + 408);
  *((_OWORD *)v22 + 9) = *(_OWORD *)(a1 + 424);
  *((_OWORD *)v22 + 10) = *(_OWORD *)(a1 + 440);
  *((_OWORD *)v22 + 11) = *(_OWORD *)(a1 + 456);
  *((_OWORD *)v22 + 12) = *(_OWORD *)(a1 + 472);
  *((_OWORD *)v22 + 13) = *(_OWORD *)(a1 + 488);
  *((_OWORD *)v22 + 14) = *(_OWORD *)(a1 + 504);
  *((_OWORD *)v22 + 15) = *(_OWORD *)(a1 + 520);
  *((_OWORD *)v22 + 16) = *(_OWORD *)(a1 + 536);
  *((_OWORD *)v22 + 17) = *(_OWORD *)(a1 + 552);
  *((_DWORD *)v19 + 11) = 312;
  v24 = sub_1C0007CF4(64LL, 0x10000LL, 1145266514LL, *(_QWORD *)(a1 + 8));
  if ( v24 )
  {
    *((_QWORD *)v22 + 6) = v24;
    v22[10] = 0x10000;
    if ( (unsigned __int8)(*(_BYTE *)(a1 + 488) - 2) <= 2u )
      *((_DWORD *)v19 + 10) |= 1u;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 568) + 184LL) & 0x20) != 0 )
      *((_DWORD *)v19 + 10) |= 2u;
    v25 = *(_QWORD *)(a1 + 568);
    if ( (*(_DWORD *)(v25 + 184) & 0x80u) != 0 && (*(_DWORD *)(v25 + 188) & 2) != 0 )
      v26 = word_1C00933DC;
    else
      v26 = -1;
    *((_WORD *)v22 + 148) = v26;
    if ( *(_BYTE *)(a1 + 4306) )
    {
      v19[8] = *(_QWORD *)(a1 + 760);
      v27 = a1 + 832;
    }
    else
    {
      v19[8] = 0LL;
      v27 = 0LL;
    }
    *((_QWORD *)v22 + 36) = v27;
    v28 = *(_DWORD *)(a1 + 536);
    if ( v28 )
      sub_1C0063D90(a1, (__int64)(v22 + 16), v28);
    v29 = sub_1C00A6778(a1, a2, &v39, &v41);
    v30 = v41;
    v14 = v29;
    if ( v29 < 0 )
    {
      v37 = v39;
      goto LABEL_41;
    }
    v31 = *(_QWORD **)(a1 + 4896);
    if ( v31 && (int)PoFxRegisterCrashdumpDevice(*v31) >= 0 )
    {
      *(_BYTE *)v23 = 1;
      v32 = 1;
      *((_QWORD *)v23 + 1) = **(_QWORD **)(a1 + 4896);
    }
    else
    {
      v32 = v43;
    }
    v33 = *(struct _DEVICE_OBJECT **)(a1 + 24);
    *(_WORD *)(a1 + 4962) = 1;
    *(_WORD *)(a1 + 4960) = 40;
    if ( sub_1C0010DF4(v33, (LARGE_INTEGER)(a1 + 4960)) >= 0
      && (v34 = *(_QWORD *)(a1 + 4992)) != 0
      && *(_QWORD *)(a1 + 4984) )
    {
      *((_QWORD *)v23 + 3) = v34;
      *((_QWORD *)v23 + 4) = *(_QWORD *)(a1 + 4968);
    }
    else
    {
      *(_WORD *)(a1 + 4962) = 0;
      if ( !v32 )
      {
LABEL_39:
        v35 = v39;
        v14 = 0;
        v36 = (struct _UNICODE_STRING **)a5;
        v19[6] = v22;
        v22 = 0LL;
        v19[7] = v35;
        v40 = 0LL;
        *v36 = v35;
        v37 = 0LL;
        v39 = 0LL;
        *a6 = v30;
        *v42 = v19;
        v19 = 0LL;
LABEL_41:
        if ( !v30 && v37 )
          sub_1C0035DE4((PVOID *)&v39);
        if ( !v22 )
          goto LABEL_46;
        goto LABEL_45;
      }
    }
    *((_QWORD *)v23 + 2) = a1 + 4829;
    *((_QWORD *)v22 + 2) = a1 + 4829;
    *((_QWORD *)v22 + 3) = sub_1C004DDB0;
    *((_QWORD *)v22 + 4) = v23;
    goto LABEL_39;
  }
  v14 = -1073741670;
LABEL_45:
  ExFreePoolWithTag(v22, 0x44436152u);
LABEL_46:
  if ( v19 )
    sub_1C0035EB8(&v40);
  return v14;
}
