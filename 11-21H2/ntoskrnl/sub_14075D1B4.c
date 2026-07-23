/*
 * XREFs of sub_14075D1B4 @ 0x14075D1B4
 * Callers:
 *     sub_14075D0B0 @ 0x14075D0B0 (sub_14075D0B0.c)
 *     sub_140B2305C @ 0x140B2305C (sub_140B2305C.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     sub_14045F87C @ 0x14045F87C (sub_14045F87C.c)
 *     sub_14075D4B8 @ 0x14075D4B8 (sub_14075D4B8.c)
 *     sub_14075D8DC @ 0x14075D8DC (sub_14075D8DC.c)
 *     sub_14075DEAC @ 0x14075DEAC (sub_14075DEAC.c)
 *     sub_14075E074 @ 0x14075E074 (sub_14075E074.c)
 *     sub_1407838E0 @ 0x1407838E0 (sub_1407838E0.c)
 *     sub_14078418C @ 0x14078418C (sub_14078418C.c)
 *     sub_14084E03C @ 0x14084E03C (sub_14084E03C.c)
 *     sub_140855120 @ 0x140855120 (sub_140855120.c)
 *     sub_140856634 @ 0x140856634 (sub_140856634.c)
 *     sub_1409DE4C4 @ 0x1409DE4C4 (sub_1409DE4C4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14075D1B4(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  int v7; // edi
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rsi
  unsigned int v13; // r12d
  int v14; // eax
  int v15; // eax
  _QWORD **v16; // rsi
  char v17; // r12
  __int64 v18; // rdx
  int v19; // edi
  __int64 v20; // rdx
  _WORD *v21; // rsi
  _WORD *v22; // rdi
  _QWORD *v24; // r14
  _QWORD **v25; // r14
  _QWORD *v26; // rsi
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 v29; // rax
  bool v30; // zf
  _QWORD *v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // r14
  _QWORD *v34; // rax
  _QWORD *v35; // r15
  _QWORD *v36; // rcx
  __int64 v37; // rax
  _QWORD *v38; // rax
  char v39; // [rsp+30h] [rbp-30h]
  char v40[7]; // [rsp+31h] [rbp-2Fh] BYREF
  __int128 v41; // [rsp+38h] [rbp-28h] BYREF
  __int128 v42; // [rsp+48h] [rbp-18h] BYREF

  v5 = *(_QWORD *)(a1 + 32);
  v7 = a3;
  v8 = a1;
  v40[0] = 0;
  v9 = 0LL;
  v39 = 0;
  v41 = 0LL;
  v42 = 0LL;
  if ( !v5 )
  {
    v10 = sub_14075E074(&off_140C037E0);
    v5 = v10;
    if ( !v10 )
      return (unsigned int)-1073741670;
    v11 = (_QWORD *)(v10 + 40);
    *(_DWORD *)(v5 + 64) = 4;
    v39 = 1;
    v11[1] = v11;
    *v11 = v11;
    *(_QWORD *)(v5 + 72) = v5 + 80;
    *(_OWORD *)(v5 + 80) = 0LL;
    *(_OWORD *)(v5 + 96) = 0LL;
    *(_DWORD *)(v5 + 56) = *(_DWORD *)(v8 + 56);
  }
  v12 = a2 + 24;
  v13 = 0;
  if ( *(_DWORD *)(a2 + 16) )
  {
    while ( 1 )
    {
      v14 = *(_DWORD *)(v12 + 16);
      if ( (v14 & 0x10000) == 0 && (v14 & 0x81000) != 0x80000 )
      {
        v27 = sub_14075E074(&off_140C037A0);
        v28 = v27;
        if ( !v27 )
        {
          v19 = -1073741670;
LABEL_47:
          v17 = v39;
LABEL_45:
          if ( v5 && v17 )
          {
            *(_DWORD *)(v5 + 16) |= 1u;
            sub_1407838E0(&off_140C037E0, v5);
          }
          return (unsigned int)v19;
        }
        *(_DWORD *)(v27 + 16) |= 8u;
        *(_QWORD *)(v27 + 56) = v12;
        *(_QWORD *)(v27 + 64) = v5;
        v19 = sub_14075D4B8(v12, a2, v7, v27, *(_DWORD *)(v5 + 56));
        v29 = *(_QWORD *)v12 - 0x11D1D56605901221LL;
        if ( *(_QWORD *)v12 == 0x11D1D56605901221LL )
          v29 = *(_QWORD *)(v12 + 8) - 0x102906C9A000F0B2LL;
        v30 = v29 == 0;
        v31 = (_QWORD *)(v5 + 40);
        v32 = *(_QWORD *)(v5 + 40);
        if ( v30 )
          v9 = v28;
        v33 = (_QWORD *)(v28 + 40);
        if ( *(_QWORD **)(v32 + 8) != v31 )
LABEL_61:
          __fastfail(3u);
        *v33 = v32;
        v33[1] = v31;
        *(_QWORD *)(v32 + 8) = v33;
        *v31 = v33;
        if ( v19 < 0 )
          goto LABEL_47;
        v7 = a3;
      }
      ++v13;
      v12 += 32LL;
      if ( v13 >= *(_DWORD *)(a2 + 16) )
      {
        v8 = a1;
        break;
      }
    }
  }
  v15 = *(_DWORD *)(v8 + 48) & 0x40000000;
  if ( v15 )
  {
    *((_QWORD *)&v41 + 1) = &v41;
    *(_QWORD *)&v41 = &v41;
    *((_QWORD *)&v42 + 1) = &v42;
    *(_QWORD *)&v42 = &v42;
  }
  v16 = (_QWORD **)((unsigned __int64)&v41 & -(__int64)(v15 != 0));
  sub_14045F87C();
  v17 = v39;
  LOBYTE(v18) = v39;
  v19 = sub_14075DEAC(v5, v18, v16);
  KeReleaseMutex(&Object, 0);
  v20 = 0LL;
  if ( v16 )
  {
    while ( 1 )
    {
      v24 = *v16;
      if ( *v16 == v16 )
        break;
      if ( (_QWORD **)v24[1] != v16 )
        goto LABEL_61;
      v34 = (_QWORD *)*v24;
      if ( *(_QWORD **)(*v24 + 8LL) != v24 )
        goto LABEL_61;
      *v16 = v34;
      v34[1] = v16;
      sub_140855120(v24[2], v20);
      v35 = v24 + 5;
      while ( 1 )
      {
        v36 = (_QWORD *)*v35;
        if ( (_QWORD *)*v35 == v35 )
          break;
        if ( (_QWORD *)v36[1] != v35 )
          goto LABEL_61;
        v37 = *v36;
        if ( *(_QWORD **)(*v36 + 8LL) != v36 )
          goto LABEL_61;
        *v35 = v37;
        *(_QWORD *)(v37 + 8) = v35;
        KeSetEvent((PRKEVENT)(v36 + 2), 0, 0);
      }
      ExFreePoolWithTag(v24, 0x70696D57u);
    }
    v25 = v16 + 2;
    while ( 1 )
    {
      v26 = *v25;
      if ( *v25 == v25 )
        break;
      if ( (_QWORD **)v26[1] != v25 )
        goto LABEL_61;
      v38 = (_QWORD *)*v26;
      if ( *(_QWORD **)(*v26 + 8LL) != v26 )
        goto LABEL_61;
      *v25 = v38;
      v38[1] = v25;
      KeWaitForSingleObject(v26 + 4, Executive, 0, 0, 0LL);
      ExFreePoolWithTag(v26, 0x70696D57u);
    }
    v8 = a1;
  }
  if ( v19 < 0 )
    goto LABEL_45;
  *(_QWORD *)(v8 + 32) = v5;
  if ( v9 )
    sub_1409DE4C4(v9, qword_140A37EB8);
  if ( a4 )
    v21 = (_WORD *)sub_14078418C(a4, 0LL);
  else
    v21 = 0LL;
  if ( a5 )
    v22 = (_WORD *)sub_14078418C(a5, 0LL);
  else
    v22 = 0LL;
  if ( v21 )
  {
    if ( *v21 && v22 && *v22 && (int)sub_14084E03C(v5, (_DWORD)v21, 0, (_DWORD)v22, (__int64)v40) >= 0 && v40[0] )
      sub_140856634(v21, v22);
    ExFreePoolWithTag(v21, 0);
  }
  if ( v22 )
    ExFreePoolWithTag(v22, 0);
  sub_14075D8DC(v5, 1LL);
  return 0;
}
