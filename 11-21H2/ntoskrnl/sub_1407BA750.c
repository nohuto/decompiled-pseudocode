/*
 * XREFs of sub_1407BA750 @ 0x1407BA750
 * Callers:
 *     sub_140395068 @ 0x140395068 (sub_140395068.c)
 *     sub_1407BA710 @ 0x1407BA710 (sub_1407BA710.c)
 *     sub_1407F89C0 @ 0x1407F89C0 (sub_1407F89C0.c)
 *     sub_140A07780 @ 0x140A07780 (sub_140A07780.c)
 * Callees:
 *     sub_140202010 @ 0x140202010 (sub_140202010.c)
 *     sub_140280EF8 @ 0x140280EF8 (sub_140280EF8.c)
 *     sub_140281750 @ 0x140281750 (sub_140281750.c)
 *     sub_140281C00 @ 0x140281C00 (sub_140281C00.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_1402E67E8 @ 0x1402E67E8 (sub_1402E67E8.c)
 *     sub_1402EE0C8 @ 0x1402EE0C8 (sub_1402EE0C8.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14030B7F0 @ 0x14030B7F0 (sub_14030B7F0.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_14030EA00 @ 0x14030EA00 (sub_14030EA00.c)
 *     sub_14030EA70 @ 0x14030EA70 (sub_14030EA70.c)
 *     sub_14030EB30 @ 0x14030EB30 (sub_14030EB30.c)
 *     sub_14030EB64 @ 0x14030EB64 (sub_14030EB64.c)
 *     sub_14030EB80 @ 0x14030EB80 (sub_14030EB80.c)
 *     sub_14030EBA0 @ 0x14030EBA0 (sub_14030EBA0.c)
 *     sub_14030EBD0 @ 0x14030EBD0 (sub_14030EBD0.c)
 *     sub_14030EBF4 @ 0x14030EBF4 (sub_14030EBF4.c)
 *     sub_14030EC14 @ 0x14030EC14 (sub_14030EC14.c)
 *     sub_14030EC40 @ 0x14030EC40 (sub_14030EC40.c)
 *     sub_14030EC70 @ 0x14030EC70 (sub_14030EC70.c)
 *     sub_14030FA5C @ 0x14030FA5C (sub_14030FA5C.c)
 *     sub_14032A72C @ 0x14032A72C (sub_14032A72C.c)
 *     sub_14032E700 @ 0x14032E700 (sub_14032E700.c)
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 *     sub_1403606EC @ 0x1403606EC (sub_1403606EC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlCompareMemoryUlong @ 0x14042A260 (RtlCompareMemoryUlong.c)
 *     sub_14054EF74 @ 0x14054EF74 (sub_14054EF74.c)
 *     sub_14058FE88 @ 0x14058FE88 (sub_14058FE88.c)
 *     sub_1405A605C @ 0x1405A605C (sub_1405A605C.c)
 *     sub_1405AAFD8 @ 0x1405AAFD8 (sub_1405AAFD8.c)
 *     sub_140695CF8 @ 0x140695CF8 (sub_140695CF8.c)
 *     sub_1407103B0 @ 0x1407103B0 (sub_1407103B0.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     sub_140978430 @ 0x140978430 (sub_140978430.c)
 *     sub_14097D244 @ 0x14097D244 (sub_14097D244.c)
 *     ExRaiseAccessViolation @ 0x140A021F0 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1407BA750(
        ULONG_PTR BugCheckParameter1,
        unsigned __int64 a2,
        int a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        _QWORD *a6,
        int a7)
{
  unsigned __int64 v10; // r12
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v12; // r9
  unsigned int v13; // ebx
  int v14; // r15d
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  PVOID v19; // rdi
  __int64 v20; // r15
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rdi
  PVOID v23; // r9
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rax
  __int64 v26; // r9
  bool v27; // zf
  unsigned __int64 v28; // r9
  int v29; // r10d
  int v30; // eax
  __int64 v31; // rax
  unsigned __int64 v32; // rdi
  __int64 v33; // rax
  unsigned __int64 v34; // r15
  __int64 v35; // r9
  unsigned __int16 *v36; // r10
  int v37; // r11d
  __int64 v38; // rdi
  int v39; // ecx
  __int64 *v40; // rax
  unsigned __int16 v41; // r12
  int v42; // edi
  __int64 result; // rax
  unsigned __int64 v44; // r15
  char v45; // bl
  int v46; // eax
  __int64 v47; // rax
  __int64 v48; // rax
  int v49; // ecx
  int v50; // eax
  int v51; // ecx
  int v52; // eax
  int v53; // ecx
  unsigned __int64 v54; // rax
  __int64 v55; // rax
  int v56; // ecx
  char v57; // al
  int v58; // edx
  int v59; // eax
  __int64 v60; // rdx
  int v61; // r10d
  __int64 v62; // rcx
  unsigned __int64 v63; // r8
  int v64; // r10d
  __int64 v65; // r11
  unsigned __int64 v66; // rdx
  PVOID v67; // rdi
  int v68; // ebx
  __int64 *v69; // rax
  __int64 v70; // rdx
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // rdi
  __int64 v73; // rdi
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // rdi
  bool v76; // cf
  int v77; // eax
  unsigned __int64 v78; // rdi
  __int64 v79; // rbx
  int v80; // eax
  __int64 v81; // rax
  __int64 v82; // r9
  __int64 v83; // rax
  unsigned int v84; // [rsp+40h] [rbp-148h]
  unsigned __int8 v85; // [rsp+44h] [rbp-144h]
  unsigned int v86; // [rsp+48h] [rbp-140h] BYREF
  _QWORD *v87; // [rsp+50h] [rbp-138h]
  unsigned __int64 v88; // [rsp+58h] [rbp-130h]
  PVOID Object; // [rsp+60h] [rbp-128h]
  PVOID v90; // [rsp+68h] [rbp-120h] BYREF
  unsigned __int64 v91; // [rsp+70h] [rbp-118h]
  unsigned __int64 v92; // [rsp+78h] [rbp-110h]
  _OWORD v93[3]; // [rsp+80h] [rbp-108h] BYREF
  __int128 v94; // [rsp+B0h] [rbp-D8h]
  __int64 v95; // [rsp+C0h] [rbp-C8h]
  unsigned __int64 v96; // [rsp+C8h] [rbp-C0h]
  __int64 P; // [rsp+D0h] [rbp-B8h] BYREF
  struct _KTHREAD *v98; // [rsp+D8h] [rbp-B0h]
  __int128 Source; // [rsp+E8h] [rbp-A0h] BYREF
  __int128 v100; // [rsp+F8h] [rbp-90h]
  __int128 v101; // [rsp+108h] [rbp-80h]
  _BYTE v102[48]; // [rsp+118h] [rbp-70h] BYREF

  v88 = a2;
  v87 = a6;
  v86 = 0;
  v90 = 0LL;
  P = 0LL;
  memset(v93, 0, sizeof(v93));
  v94 = 0LL;
  v95 = 0LL;
  memset(v102, 0, sizeof(v102));
  v84 = 0;
  v91 = 0LL;
  if ( a3 != 3 )
  {
    if ( a3 )
    {
      switch ( a3 )
      {
        case 1:
          v10 = a5;
          v76 = a5 < 8;
          goto LABEL_183;
        case 2:
          goto LABEL_157;
        case 4:
          v10 = a5;
          v76 = a5 < 0x10;
LABEL_183:
          if ( !v76 )
            goto LABEL_184;
          return 3221225476LL;
        case 5:
          v10 = a5;
          if ( a5 < 8 )
            return 3221225476LL;
          goto LABEL_3;
        case 6:
          v10 = a5;
          if ( a5 < 0x18 )
            return 3221225476LL;
          goto LABEL_3;
        case 7:
          v10 = a5;
          if ( a5 < 0x20 )
            return 3221225476LL;
          goto LABEL_3;
        case 8:
          break;
        case 11:
          v10 = a5;
          if ( a5 < 0x28 )
            return 3221225476LL;
LABEL_184:
          v84 = 256;
          goto LABEL_3;
        case 12:
          if ( a2 )
            return 3221225485LL;
LABEL_157:
          v10 = a5;
          goto LABEL_3;
        default:
          return 3221225475LL;
      }
    }
    v10 = a5;
    if ( a5 >= 0x30 )
      goto LABEL_3;
    return 3221225476LL;
  }
  v10 = a5;
  if ( a5 < 0x18 )
    return 3221225476LL;
LABEL_3:
  CurrentThread = KeGetCurrentThread();
  v98 = CurrentThread;
  v12 = *((unsigned __int8 *)CurrentThread + 562);
  v85 = *((_BYTE *)CurrentThread + 562);
  v13 = v84;
  if ( v84 < 0x100 || !(_BYTE)v12 || (v77 = sub_140695CF8((__int64)CurrentThread), v12 = v85, v77) )
    v14 = a7;
  else
    v14 = a7 | 0x40000000;
  if ( (_BYTE)v12 )
  {
    if ( v10 )
    {
      v15 = a4;
      if ( (a4 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = v10 + a4 - 1;
      if ( a4 > v16 || v16 >= 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v17 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v15 = *(_BYTE *)v15;
        v15 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v15 != v17 );
      v13 = v84;
    }
    if ( v87 )
    {
      v18 = (__int64)v87;
      if ( (unsigned __int64)v87 >= 0x7FFFFFFF0000LL )
        v18 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v18 = *(_QWORD *)v18;
      v13 = v84;
    }
  }
  if ( v88 > 0x7FFFFFFEFFFFLL )
    return 3221225485LL;
  v96 = v88 & 0xFFFFFFFFFFFFF000uLL;
  if ( a3 != 10 )
    goto LABEL_22;
  Source = *(_OWORD *)a4;
  v100 = *(_OWORD *)(a4 + 16);
  v101 = *(_OWORD *)(a4 + 32);
  v78 = *((_QWORD *)&v100 + 1);
  *((_QWORD *)&v100 + 1) = 0LL;
  if ( RtlCompareMemoryUlong(&Source, 0x30uLL, 0) != 48 || v78 > 0x7FFFFFFF0000LL - v88 )
    return 3221225485LL;
  v91 = (((v88 & 0xFFF) + v78 + 4095) & 0xFFFFFFFFFFFFF000uLL) + v96;
  CurrentThread = v98;
  v12 = v85;
LABEL_22:
  if ( BugCheckParameter1 == -1LL )
  {
    v19 = (PVOID)*((_QWORD *)CurrentThread + 23);
    Object = v19;
    v90 = v19;
  }
  else
  {
    v58 = 4096;
    if ( (v14 & 0x40000000) != 0 )
      v58 = 1024;
    result = sub_140732D40(BugCheckParameter1, v58, (__int64)PsProcessType, v12, 0x6D566D4Du, &v90, 0LL, 0LL);
    if ( (int)result < 0 )
      return result;
    v19 = v90;
    Object = v90;
    if ( (*((_DWORD *)v90 + 543) & 0x1000) != 0 )
    {
      ObfDereferenceObjectWithTag(v90, 0x6D566D4Du);
      return 3221225506LL;
    }
    v12 = v85;
  }
  switch ( a3 )
  {
    case 11:
      v68 = sub_140978430(v19, a4, v10, v12);
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObjectWithTag(v19, 0x6D566D4Du);
      if ( v68 >= 0 )
      {
        if ( v87 )
          *v87 = v10;
        return 0LL;
      }
      return (unsigned int)v68;
    case 12:
      v68 = sub_14058FE88((ULONG_PTR)v19, (_QWORD *)a4, v10, (__int64)v87);
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObjectWithTag(v19, 0x6D566D4Du);
      if ( v68 >= 0 )
        return 0LL;
      return (unsigned int)v68;
    case 4:
      v68 = sub_1402E67E8((ULONG_PTR)v19, v14, a4, v10);
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObjectWithTag(v19, 0x6D566D4Du);
      if ( v68 >= 0 )
      {
        if ( v87 )
          *v87 = v10;
        return 0LL;
      }
      return (unsigned int)v68;
    case 1:
      v68 = sub_1405A605C((__int64)v19, v14, a4, v10, &P);
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObjectWithTag(v19, 0x6D566D4Du);
      if ( v68 >= 0 )
      {
        if ( v87 )
          *v87 = 8 * P + 8;
        return 0LL;
      }
      return (unsigned int)v68;
    case 5:
      v79 = *((_QWORD *)v19 + 293);
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObjectWithTag(v90, 0x6D566D4Du);
      *(_QWORD *)a4 = v79;
      if ( v87 )
        *v87 = 8LL;
      return 0LL;
  }
  if ( BugCheckParameter1 != -1LL )
  {
    sub_14030D5C0((ULONG_PTR)v19, 0LL, (__int64)v102, v12);
    v13 |= 1u;
    LOBYTE(v84) = v13;
  }
  if ( a3 == 8 )
  {
    if ( *((_QWORD *)v19 + 124) )
    {
      v80 = sub_14054EF74((__int64)v19, v88, v93);
      if ( v80 >= 0 )
      {
        if ( LODWORD(v93[2]) == 4096 )
          WORD2(v93[1]) = *(_WORD *)sub_14032A72C((__int64)v19);
        else
          WORD2(v93[1]) = 0;
        if ( (v13 & 1) != 0 )
        {
          sub_1402D0930((__int64)v102, 0LL);
          ObfDereferenceObjectWithTag(v19, 0x6D566D4Du);
        }
        *(_OWORD *)a4 = v93[0];
        *(__m256i *)(a4 + 16) = *(__m256i *)&v93[1];
        if ( v87 )
          *v87 = 48LL;
        return 0LL;
      }
    }
  }
  v20 = (__int64)v98;
  while ( 2 )
  {
    while ( 2 )
    {
      sub_14030EB30(v20, (__int64)v19);
      if ( (*((_DWORD *)v19 + 281) & 0x20) != 0 )
      {
        sub_14030EA00(v20, (__int64)v19);
        if ( (v13 & 1) != 0 )
        {
          sub_1402D0930((__int64)v102, 0LL);
          ObfDereferenceObjectWithTag(v19, 0x6D566D4Du);
        }
        return 3221225738LL;
      }
      v21 = 0LL;
      v22 = 0LL;
      v23 = Object;
      v24 = *((_QWORD *)Object + 251);
      if ( !v24 )
        goto LABEL_44;
      v22 = v88 >> 12;
      while ( 1 )
      {
        while ( 1 )
        {
          v21 = v24;
          v25 = *(unsigned int *)(v24 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 32) << 32);
          if ( v22 >= v25 )
            break;
LABEL_41:
          v24 = *(_QWORD *)v24;
          if ( !v24 )
            goto LABEL_44;
        }
        if ( v22 <= (*(unsigned int *)(v24 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 33) << 32)) )
          break;
        if ( v22 < v25 )
          goto LABEL_41;
        v24 = *(_QWORD *)(v24 + 8);
        if ( !v24 )
          goto LABEL_44;
      }
      v13 |= 2u;
      LOBYTE(v84) = v13;
LABEL_44:
      if ( (v13 & 2) == 0 )
      {
        if ( v21 )
        {
          v70 = *(unsigned int *)(v21 + 24);
          if ( (v70 | ((unsigned __int64)*(unsigned __int8 *)(v21 + 32) << 32)) >= v22 )
          {
            v72 = v70 | ((unsigned __int64)*(unsigned __int8 *)(v21 + 32) << 32);
            goto LABEL_174;
          }
          v71 = sub_140281C00(v21);
          if ( v71 )
          {
            v72 = *(unsigned int *)(v71 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v71 + 32) << 32);
LABEL_174:
            v73 = v72 << 12;
            goto LABEL_175;
          }
          v73 = 0x7FFFFFFF0000LL;
        }
        else
        {
          v73 = 0x7FFFFFFF0000LL;
        }
LABEL_175:
        sub_14030EA00(v20, (__int64)v23);
        v74 = v88 & 0xFFFFFFFFFFFFF000uLL;
        v88 = v74;
        v75 = v73 - v74;
        if ( (v13 & 1) != 0 )
        {
          sub_1402D0930((__int64)v102, 0LL);
          ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
          v74 = v88;
        }
        if ( (a3 & 0xFFFFFFF5) == 0 && a3 != 2 )
        {
          *(_QWORD *)(a4 + 8) = 0LL;
          *(_DWORD *)(a4 + 16) = 0;
          *(_QWORD *)a4 = v74;
          *(_QWORD *)(a4 + 24) = v75;
          *(_DWORD *)(a4 + 32) = 0x10000;
          *(_QWORD *)(a4 + 36) = 1LL;
          *(_WORD *)(a4 + 20) = 0;
          if ( v87 )
            *v87 = 48LL;
          return 0LL;
        }
        return 3221225793LL;
      }
      sub_14030EB64(v21);
      --*(_WORD *)(v20 + 484);
      sub_14030EA00(v20, v26);
      sub_14030EBA0(v20, v21);
      v27 = (*(_WORD *)(v20 + 484))++ == 0xFFFF;
      if ( v27 && *(_QWORD *)(v20 + 152) != v20 + 152 && !*(_WORD *)(v20 + 486) )
        KiCheckForKernelApcDelivery();
      if ( (unsigned int)sub_14030EB80(v21) )
      {
        sub_140280EF8(v20, v21);
        sub_14030B7F0(v20, v21);
        sub_140202010(v21);
        sub_14032E700((char *)v21);
        v13 &= ~2u;
        LOBYTE(v84) = v13;
        v19 = Object;
        continue;
      }
      break;
    }
    if ( v22 < (*(unsigned int *)(v21 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 32) << 32))
      || v22 > (*(unsigned int *)(v21 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 33) << 32)) )
    {
      sub_14030EA70((char *)v21);
      v13 &= ~2u;
      LOBYTE(v84) = v13;
      v19 = Object;
      continue;
    }
    break;
  }
  memset((char *)&v93[1] + 4, 0, 20);
  HIDWORD(v93[2]) = 0;
  *(_QWORD *)&v93[0] = v96;
  *((_QWORD *)&v93[0] + 1) = (*(unsigned int *)(v21 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 32) << 32)) << 12;
  LODWORD(v93[1]) = dword_140016150[(*(_DWORD *)(v21 + 48) >> 7) & 0x1F] | sub_14030EBD0(v21);
  v30 = *(_DWORD *)(v21 + 48);
  if ( (v30 & 0x200000) != 0 )
  {
    DWORD2(v93[2]) = 0x20000;
    if ( (unsigned int)sub_14030FA5C(v21) )
      LOBYTE(v13) = v13 | 0x40;
    v55 = *(unsigned int *)(v21 + 52);
    LODWORD(v55) = v55 & 0x7FFFFFFF;
    if ( (v55 | ((unsigned __int64)*(unsigned __int8 *)(v21 + 34) << 31)) == 0x7FFFFFFFDLL )
      LOBYTE(v13) = v13 | 0x80;
    v56 = *(_DWORD *)(v21 + 48);
    if ( (v56 & 0x70) == 0x10 )
      LOBYTE(v13) = v13 | 8;
    if ( (v56 & 0x70) == 0x30 )
      LOBYTE(v13) = v13 | 0x10;
    v57 = v13 | 0x20;
    if ( (v56 & 0x400000) == 0 )
      v57 = v13;
    LOBYTE(v13) = v57;
    LOBYTE(v84) = v57;
    v32 = v28;
  }
  else
  {
    if ( (v30 & 0x70) == 0x20 )
    {
      DWORD2(v93[2]) = 0x1000000;
      if ( a3 == 7 && (*(_BYTE *)(**(_QWORD **)(v21 + 72) + 62LL) & 0xC) == 4 )
      {
LABEL_257:
        LOBYTE(v13) = v13 | 4;
        LOBYTE(v84) = v13;
      }
    }
    else
    {
      DWORD2(v93[2]) = 0x40000;
      if ( a3 == 3 && v10 >= 0x30 || a3 == 7 )
      {
        v31 = *(_QWORD *)(v21 + 72);
        if ( *(_QWORD *)(*(_QWORD *)v31 + 64LL) == v28 )
        {
          DWORD2(v93[2]) = 0x8000000;
        }
        else if ( a3 == 7 && (*(_BYTE *)(*(_QWORD *)v31 + 62LL) & 0xC) == 4 )
        {
          goto LABEL_257;
        }
      }
    }
    if ( a3 == 2 )
    {
      v69 = *(__int64 **)(v21 + 72);
      v32 = *(_QWORD *)(*v69 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v32 )
      {
        v32 = sub_140281750(*v69);
        v29 = v96;
        v28 = 0LL;
      }
      if ( !v32 )
        v32 = 1LL;
    }
    else
    {
      v32 = v28;
    }
  }
  if ( ((a3 - 3) & 0xFFFFFFFB) != 0 )
  {
    if ( a3 == 6 )
    {
      v94 = 0LL;
      v95 = 0LL;
      v59 = *(_DWORD *)(v21 + 48);
      if ( (v59 & 0x200000) != 0 || (v59 & 0x70) != 0x20 )
      {
        v67 = Object;
      }
      else
      {
        v60 = ***(_QWORD ***)(v21 + 72);
        *(_QWORD *)&v94 = (*(unsigned int *)(v21 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 32) << 32)) << 12;
        *((_QWORD *)&v94 + 1) = _InterlockedCompareExchange64((volatile signed __int64 *)(v60 + 24), -1LL, -1LL);
        v61 = v95 & 0xFFFFFFC3 | (*(unsigned __int8 *)(v60 + 15) >> 2) & 0x3FFFFFFC;
        LODWORD(v95) = v61;
        if ( (*(_DWORD *)(v21 + 48) & 0xF80) == 0x80 )
          LODWORD(v95) = v61 | 2;
        if ( sub_14030EC40(v21) )
        {
          v81 = sub_1402EE0C8(v62, 16LL);
          v66 = *(_QWORD *)(v81 + 16);
          *(_QWORD *)&v94 = v82 + ((unsigned __int64)*(unsigned __int8 *)(v81 + 8) << 16);
        }
        else
        {
          v66 = (*(unsigned int *)(v21 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 33) << 32))
              - (*(unsigned int *)(v21 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 32) << 32))
              + 1;
        }
        if ( (v63 & 0xFFF) == 0 )
          v65 = 0LL;
        v67 = v90;
        LOBYTE(v13) = v84;
        if ( v66 < v65 + (v63 >> 12) )
          LODWORD(v95) = v64 | 1;
      }
      sub_14030EA70((char *)v21);
      if ( (v13 & 1) != 0 )
      {
        sub_1402D0930((__int64)v102, 0LL);
        ObfDereferenceObjectWithTag(v67, 0x6D566D4Du);
      }
      v86 = 24;
      *(_OWORD *)a4 = v94;
      *(_QWORD *)(a4 + 16) = v95;
      if ( v87 )
        *v87 = 24LL;
      return 0LL;
    }
    if ( (a3 & 0xFFFFFFF5) == 0 && a3 != 2 )
    {
      v54 = sub_14030EC70((__int64)v93, v29, v91, v21);
      *((_QWORD *)&v93[1] + 1) = v54 - *(_QWORD *)&v93[0];
    }
    sub_14030EA70((char *)v21);
    if ( (v13 & 1) != 0 )
    {
      sub_1402D0930((__int64)v102, 0LL);
      ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    }
    if ( (a3 & 0xFFFFFFF5) == 0 && a3 != 2 )
    {
      *(_OWORD *)a4 = v93[0];
      *(__m256i *)(a4 + 16) = *(__m256i *)&v93[1];
      if ( v87 )
        *v87 = 48LL;
      return 0LL;
    }
    if ( v32 )
    {
      if ( v32 == 1 )
        return 3221225624LL;
      if ( (unsigned int)v10 < v10 )
      {
        ObfDereferenceObject((PVOID)v32);
        return 3221225715LL;
      }
      v86 = 0;
      v68 = sub_1407103B0((char *)v32, a4, v10, &v86);
      ObfDereferenceObject((PVOID)v32);
      if ( v87 )
        *v87 = v86;
      return (unsigned int)v68;
    }
    return 3221225793LL;
  }
  LODWORD(v88) = v28;
  v92 = ((*(unsigned int *)(v21 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 33) << 32))
       - (*(unsigned int *)(v21 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 32) << 32))
       + 1) << 12;
  v33 = *(unsigned int *)(v21 + 52);
  LODWORD(v33) = v33 & 0x7FFFFFFF;
  v34 = v33 | ((unsigned __int64)*(unsigned __int8 *)(v21 + 34) << 31);
  if ( v34 >= 0x7FFFFFFFDLL )
    v34 = v28;
  v91 = sub_14030EBF4(v21);
  v36 = (unsigned __int16 *)sub_14032A72C((__int64)Object);
  v38 = v35;
  v39 = *(_DWORD *)(v21 + 48);
  if ( (v39 & 0x200000) != 0 )
  {
    if ( (v13 & 0x10) != 0 )
    {
      sub_1405AAFD8(v21);
      v91 = sub_14097D244(v21);
      LOWORD(v35) = 0;
    }
    else if ( (v39 & 0x800000) != 0 || (v39 & 0x180000u) >= 0x100000 )
    {
      v83 = sub_1402EE0C8(v21, 16LL);
      if ( v83 )
      {
        v38 = *(_QWORD *)(v83 + 24);
        if ( v38 )
        {
          if ( !sub_1403606EC(*(_QWORD *)(v83 + 24)) )
          {
            v37 = -1073740640;
            LODWORD(v88) = -1073740640;
            v38 = v35;
          }
        }
      }
    }
  }
  else
  {
    v40 = *(__int64 **)(v21 + 72);
    if ( v40 && *v40 )
      v36 = (unsigned __int16 *)sub_14030EC14(*v40);
  }
  if ( v37 < 0 )
    v41 = v35;
  else
    v41 = *v36;
  if ( v38 )
    sub_1403606C4(v38);
  v42 = (*(_DWORD *)(v21 + 48) >> 12) & 0x7F;
  sub_14030EA70((char *)v21);
  if ( (v13 & 1) != 0 )
  {
    sub_1402D0930((__int64)v102, 0LL);
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  }
  result = (unsigned int)v88;
  if ( (v88 & 0x80000000) == 0LL )
  {
    v44 = v34 << 12;
    v45 = v13 & 0xFD;
    *(_QWORD *)a4 = *((_QWORD *)&v93[0] + 1);
    *(_DWORD *)(a4 + 8) = v93[1];
    *(_QWORD *)(a4 + 16) = v92;
    if ( a3 != 7 )
    {
      v46 = DWORD2(v93[2]);
      goto LABEL_74;
    }
    v49 = 0;
    *(_DWORD *)(a4 + 12) = 0;
    if ( DWORD2(v93[2]) == 0x20000 )
    {
      v49 = 1;
      *(_DWORD *)(a4 + 12) = 1;
    }
    else if ( (v45 & 8) != 0 )
    {
      *(_DWORD *)(a4 + 12) = 16;
      v49 = 16;
    }
    else
    {
      switch ( DWORD2(v93[2]) )
      {
        case 0x40000:
          *(_DWORD *)(a4 + 12) = 2;
          v49 = 2;
          break;
        case 0x1000000:
          *(_DWORD *)(a4 + 12) = 4;
          v49 = 4;
          break;
        case 0x8000000:
          *(_DWORD *)(a4 + 12) = 8;
          v49 = 8;
          break;
      }
    }
    switch ( v91 )
    {
      case 0x10uLL:
        v49 |= 0x80u;
        goto LABEL_100;
      case 0x200uLL:
        v49 |= 0x800u;
        goto LABEL_100;
      case 0x40000uLL:
        v49 |= 0x1000u;
LABEL_100:
        *(_DWORD *)(a4 + 12) = v49;
        break;
    }
    v50 = v49 | (32 * (v45 & 0x20));
    *(_DWORD *)(a4 + 12) = v50;
    v51 = v50 | (32 * (v45 & 0x10));
    *(_DWORD *)(a4 + 12) = v51;
    v52 = v51 | (8 * (v45 & 4));
    *(_DWORD *)(a4 + 12) = v52;
    v53 = v52 | v45 & 0x40;
    *(_DWORD *)(a4 + 12) = v53;
    v46 = v53 | (2 * (v45 & 0x80));
LABEL_74:
    *(_DWORD *)(a4 + 12) = v46;
    v47 = 24LL;
    v86 = 24;
    if ( a5 >= 0x20 )
    {
      *(_QWORD *)(a4 + 24) = v44;
      v47 = 32LL;
      v86 = 32;
    }
    if ( a5 >= 0x28 )
    {
      *(_QWORD *)(a4 + 32) = v41;
      v47 = 40LL;
      v86 = 40;
    }
    if ( a5 >= 0x30 )
    {
      if ( v42 )
        v48 = (unsigned int)(v42 - 1);
      else
        v48 = 0xFFFFFFFFLL;
      *(_QWORD *)(a4 + 40) = v48;
      v86 = 48;
      v47 = 48LL;
    }
    if ( v87 )
      *v87 = v47;
    return 0LL;
  }
  return result;
}
