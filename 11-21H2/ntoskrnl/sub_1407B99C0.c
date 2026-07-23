/*
 * XREFs of sub_1407B99C0 @ 0x1407B99C0
 * Callers:
 *     sub_1405E1764 @ 0x1405E1764 (sub_1405E1764.c)
 *     sub_1406E616C @ 0x1406E616C (sub_1406E616C.c)
 *     NtFreeVirtualMemory @ 0x1407B98F0 (NtFreeVirtualMemory.c)
 *     sub_1409AF728 @ 0x1409AF728 (sub_1409AF728.c)
 *     sub_1409AF8C4 @ 0x1409AF8C4 (sub_1409AF8C4.c)
 *     sub_1409AFAA0 @ 0x1409AFAA0 (sub_1409AFAA0.c)
 *     sub_1409AFB7C @ 0x1409AFB7C (sub_1409AFB7C.c)
 *     sub_1409B16A8 @ 0x1409B16A8 (sub_1409B16A8.c)
 * Callees:
 *     sub_140281A58 @ 0x140281A58 (sub_140281A58.c)
 *     sub_14029F6FC @ 0x14029F6FC (sub_14029F6FC.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_1402ECEB0 @ 0x1402ECEB0 (sub_1402ECEB0.c)
 *     sub_1402EE0C8 @ 0x1402EE0C8 (sub_1402EE0C8.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_14030E7C0 @ 0x14030E7C0 (sub_14030E7C0.c)
 *     sub_14030EBF4 @ 0x14030EBF4 (sub_14030EBF4.c)
 *     sub_14032E700 @ 0x14032E700 (sub_14032E700.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     sub_1407A4C90 @ 0x1407A4C90 (sub_1407A4C90.c)
 *     sub_1407BC9B0 @ 0x1407BC9B0 (sub_1407BC9B0.c)
 *     sub_14096D8A8 @ 0x14096D8A8 (sub_14096D8A8.c)
 *     sub_14097A014 @ 0x14097A014 (sub_14097A014.c)
 *     sub_14097A0B0 @ 0x14097A0B0 (sub_14097A0B0.c)
 *     sub_1409E4084 @ 0x1409E4084 (sub_1409E4084.c)
 */

__int64 __fastcall sub_1407B99C0(
        ULONG_PTR BugCheckParameter1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        unsigned int a4,
        unsigned __int8 a5,
        int a6)
{
  unsigned int v6; // r14d
  ULONG_PTR v7; // r15
  unsigned __int64 *v8; // rsi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r13
  _QWORD *v11; // rcx
  int v12; // r8d
  int v13; // ebx
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // r12
  __int64 v16; // r15
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // r11
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r10
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  unsigned int v25; // edi
  int v26; // ecx
  __int64 v27; // rax
  int v28; // esi
  PVOID v29; // rdi
  __int64 result; // rax
  int v31; // eax
  PVOID v32; // rbx
  __int64 v33; // r9
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // r8
  int v36; // eax
  __int64 v37; // rax
  unsigned __int64 v38; // rcx
  bool v39; // zf
  __int64 v40; // rax
  unsigned int v41; // [rsp+40h] [rbp-C0h] BYREF
  char v42; // [rsp+44h] [rbp-BCh] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h]
  int v44; // [rsp+50h] [rbp-B0h]
  int v45; // [rsp+54h] [rbp-ACh]
  ULONG_PTR BugCheckParameter1a; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR v47; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v48; // [rsp+68h] [rbp-98h]
  unsigned __int64 v49; // [rsp+70h] [rbp-90h]
  _QWORD *v50; // [rsp+78h] [rbp-88h]
  unsigned __int64 v51; // [rsp+80h] [rbp-80h]
  unsigned __int64 v52; // [rsp+88h] [rbp-78h]
  unsigned __int64 *v53; // [rsp+90h] [rbp-70h]
  _QWORD v54[2]; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 *v55; // [rsp+A8h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-50h]
  __int64 v57; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v58; // [rsp+C0h] [rbp-40h]
  __int64 v59; // [rsp+D0h] [rbp-30h]
  __int64 v60; // [rsp+D8h] [rbp-28h]
  __int64 v61; // [rsp+E0h] [rbp-20h]

  v6 = a4;
  v47 = BugCheckParameter1;
  v53 = a3;
  v55 = a2;
  v57 = 0LL;
  v7 = BugCheckParameter1;
  v59 = 0LL;
  v61 = 0LL;
  BugCheckParameter1a = 0LL;
  v41 = 0;
  v54[1] = 0LL;
  v54[0] = 0LL;
  v8 = a2;
  v58 = 0LL;
  if ( (a4 & 0xC000) == 0 || (a4 & 0xC000) == 49152 )
    return 3221225714LL;
  v9 = *a2;
  v10 = *a3;
  CurrentThread = KeGetCurrentThread();
  v11 = (_QWORD *)*((_QWORD *)CurrentThread + 23);
  v50 = v11;
  v52 = v9;
  if ( v9 > 0x7FFFFFFEFFFFLL )
    return 3221225712LL;
  if ( 0x7FFFFFFF0000LL - v9 < v10 )
    return 3221225713LL;
  if ( (a4 & 2) != 0 )
  {
    if ( (a4 & 1) != 0 )
      return 3221225485LL;
    v12 = a6 | 0x4000000;
    v6 = a4 & 0xFFFFFFFD;
  }
  else
  {
    v12 = a6;
  }
  v45 = v12;
  if ( (v6 & 1) == 0 )
    goto LABEL_7;
  if ( (v6 & 2) != 0 )
    return 3221225485LL;
  v12 |= 0xC000000u;
  v45 = v12;
  v6 &= ~1u;
LABEL_7:
  v44 = v12 & 0x4000000;
  if ( (v12 & 0x4000000) != 0 )
  {
    if ( v6 == 0x8000 )
    {
      if ( v10 && v10 == (v10 & 0xFFFFFFFFFFFFF000uLL) )
      {
        if ( v9 == (v9 & 0xFFFFFFFFFFFFF000uLL) )
          goto LABEL_8;
        return 3221225712LL;
      }
      return 3221225713LL;
    }
    return 3221225714LL;
  }
LABEL_8:
  v13 = 0;
  v14 = (v9 + v10 - 1) | 0xFFF;
  v60 = 0LL;
  v15 = v9 & 0xFFFFFFFFFFFFF000uLL;
  v48 = (v9 & 0xFFFFFFFFFFFFF000uLL) >> 12;
  v49 = v14 >> 12;
  if ( v7 == -1LL )
  {
    Object = v11;
  }
  else
  {
    result = sub_140732D40(v7, 8, (__int64)PsProcessType, a5, 0x6D566D4Du, &BugCheckParameter1a, 0LL, 0LL);
    v41 = result;
    if ( (int)result < 0 )
      return result;
    v11 = (_QWORD *)BugCheckParameter1a;
    Object = (PVOID)BugCheckParameter1a;
    if ( v50 != (_QWORD *)BugCheckParameter1a )
    {
      v13 = 1;
      sub_14030D5C0(BugCheckParameter1a, 0LL, (__int64)&v57, v33);
      v11 = (_QWORD *)BugCheckParameter1a;
    }
    v12 = v45;
  }
  v42 = 0;
  if ( (v6 & 0xFFFF3FFF) != 0 && (!v11[280] || (v6 & 0x10000) == 0 || (v6 & 0x4000) != 0) )
  {
    v25 = -1073741582;
    goto LABEL_125;
  }
  if ( (v12 & 0xC000000) == 0xC000000 )
  {
    result = sub_14096D8A8(v11, v15, v14, a5);
    LODWORD(BugCheckParameter1a) = result;
    if ( v13 )
    {
      sub_1402D0930((__int64)&v57, 0LL);
      result = (unsigned int)BugCheckParameter1a;
    }
    if ( v7 != -1LL )
    {
      ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
      return (unsigned int)BugCheckParameter1a;
    }
    return result;
  }
  LODWORD(BugCheckParameter1a) = v6 & 0x8000;
  v16 = sub_14030E7C0(v15, (_DWORD)BugCheckParameter1a != 0, (int *)&v41);
  if ( !v16 )
  {
    v25 = v41;
    goto LABEL_124;
  }
  while ( 1 )
  {
    v17 = *(unsigned int *)(v16 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 32) << 32);
    v18 = *(unsigned int *)(v16 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 33) << 32);
    v51 = v17;
    v50 = (_QWORD *)v18;
    if ( v10 )
    {
      v19 = v49;
LABEL_15:
      v20 = v48;
      if ( v48 < v17 )
        goto LABEL_120;
      goto LABEL_16;
    }
    v49 = v18;
    v19 = v18;
    v14 = (v18 << 12) | 0xFFF;
    if ( !(_DWORD)BugCheckParameter1a )
      goto LABEL_15;
    v20 = v48;
    if ( v48 != v17 )
      goto LABEL_118;
    v15 = v17 << 12;
LABEL_16:
    if ( v20 > v18 || v19 < v17 || v19 > v18 )
    {
LABEL_120:
      v25 = -1073741798;
      goto LABEL_121;
    }
    v21 = *(_DWORD *)(v16 + 48);
    v22 = v21 & 0x200000;
    v41 = v21;
    if ( (v6 & 0x10000) != 0 )
    {
      if ( v22 || (v21 & 0x70) != 0 || v20 == v17 && v19 == v18 )
      {
LABEL_119:
        v25 = -1073741797;
        goto LABEL_121;
      }
      v41 = v21;
    }
    else if ( !v22 || (v21 & 0x70) == 0x10 )
    {
      goto LABEL_119;
    }
    v23 = v44;
    if ( v44 )
    {
      v37 = sub_1402EE0C8(v16, 128LL);
      v38 = (unsigned __int64)*(unsigned __int8 *)(v16 + 34) << 31;
      v39 = v37 == 0;
      v40 = *(unsigned int *)(v16 + 52);
      if ( v39 )
      {
        LODWORD(v40) = v40 & 0x7FFFFFFF;
        if ( (v40 | v38) != 0x7FFFFFFFDLL )
          goto LABEL_101;
      }
      else
      {
        LODWORD(v40) = v40 & 0x7FFFFFFF;
        if ( (v40 | v38) != 0x7FFFFFFFDLL )
        {
LABEL_105:
          v23 = v44;
          goto LABEL_23;
        }
      }
      if ( v20 == v17 && v19 == v18 )
      {
LABEL_101:
        v25 = -1073741800;
        goto LABEL_121;
      }
      goto LABEL_105;
    }
LABEL_23:
    if ( (v45 & 0x40000000) != 0 && (v41 & 0xA200000) != 0x8200000 )
      goto LABEL_101;
    if ( (v41 & 8) != 0 && (v45 & 0x40000000) == 0 )
    {
      if ( !(_DWORD)BugCheckParameter1a )
      {
        v34 = v52;
        v35 = v19 - v20;
        goto LABEL_69;
      }
      if ( (*((_DWORD *)Object + 281) & 0x20) != 0 )
      {
        v36 = 0;
      }
      else
      {
        v35 = v18 - v17;
        v34 = v17 << 12;
LABEL_69:
        v36 = sub_1407A4C90(v16, v34, (v35 + 1) << 12, 0x55u, a5);
        v18 = (unsigned __int64)v50;
        v23 = v44;
        v17 = v51;
        v19 = v49;
        v20 = v48;
      }
      v41 = v36;
      if ( v36 < 0 )
        goto LABEL_71;
    }
    if ( !(_DWORD)BugCheckParameter1a )
      break;
    if ( (*((_DWORD *)Object + 543) & 0x100) != 0 && (v20 != v17 || v19 != v18) )
    {
      v25 = -1073741558;
      goto LABEL_121;
    }
    v31 = sub_1402ECEB0(v16, (int)&v42, v20, v19, (__int64)Object, v23 != 0);
    v41 = v31;
    if ( v31 >= 0 )
    {
      if ( v13 )
        sub_1402D0930((__int64)&v57, 0LL);
      v32 = Object;
      if ( v54[0] )
        sub_14097A0B0(v54);
      if ( v47 != -1LL )
        ObfDereferenceObjectWithTag(v32, 0x6D566D4Du);
      *v53 = v14 - v15 + 1;
      goto LABEL_48;
    }
    if ( v31 != -1073741267 )
    {
LABEL_71:
      v25 = v41;
      goto LABEL_121;
    }
  }
  if ( v10 )
    v10 = v14 - v15 + 1;
  if ( (*(_DWORD *)(v16 + 48) & 0x6200000) != 0x4200000
    || (v24 = sub_14097A014((_DWORD)Object, v16, v15, v10, v45), v41 = v24, v24 == -1073741802) )
  {
    v26 = *(_DWORD *)(v16 + 48);
    if ( (*(_BYTE *)(v16 + 48) & 0x70) == 0x30
      || (v26 & 0x200000) != 0
      && ((v26 & 0x800000) != 0 || (v26 & 0x180000u) >= 0x100000)
      && ((v26 & 0xA00000) != 0xA00000 || v10 && (((sub_14030EBF4(v16) << 12) - 1) & (v15 | (v14 + 1))) != 0)
      || (v27 = *(unsigned int *)(v16 + 52),
          LODWORD(v27) = v27 & 0x7FFFFFFF,
          (v27 | ((unsigned __int64)*(unsigned __int8 *)(v16 + 34) << 31)) == 0x7FFFFFFFDLL) )
    {
      v25 = -1073741664;
      goto LABEL_121;
    }
    if ( !v10 )
    {
      if ( v52 >> 12 != (*(unsigned int *)(v16 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 32) << 32)) )
      {
LABEL_118:
        v25 = -1073741665;
        goto LABEL_121;
      }
      v14 = ((*(unsigned int *)(v16 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 33) << 32)) << 12) | 0xFFF;
    }
    v28 = sub_1407BC9B0(v16, v15, v14);
    sub_14032E700((char *)v16);
    if ( v28 )
      sub_14029F6FC(v15, v14, 0);
    v8 = v55;
    goto LABEL_41;
  }
  v25 = v24;
  if ( v24 >= 0 )
  {
    sub_14032E700((char *)v16);
LABEL_41:
    v29 = Object;
    if ( (WORD2(xmmword_140D06900[0]) & 0x8000) != 0 )
      sub_1409E4084(v15, v10, Object, v6);
    if ( v13 )
      sub_1402D0930((__int64)&v57, 0LL);
    if ( v47 != -1LL )
      ObfDereferenceObjectWithTag(v29, 0x6D566D4Du);
    *v53 = v10;
LABEL_48:
    *v8 = v15;
    return 0LL;
  }
LABEL_121:
  sub_14032E700((char *)v16);
  if ( v42 )
    sub_140281A58((__int64)CurrentThread, (__int64)Object);
LABEL_124:
  v7 = v47;
  v11 = Object;
LABEL_125:
  if ( v13 )
  {
    sub_1402D0930((__int64)&v57, 0LL);
    v11 = Object;
  }
  if ( v7 != -1LL )
    ObfDereferenceObjectWithTag(v11, 0x6D566D4Du);
  return v25;
}
