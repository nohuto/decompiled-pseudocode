/*
 * XREFs of sub_1409C8EE8 @ 0x1409C8EE8
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140669A90 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     sub_1406C5CA0 @ 0x1406C5CA0 (sub_1406C5CA0.c)
 *     sub_1406CE5F8 @ 0x1406CE5F8 (sub_1406CE5F8.c)
 *     sub_140722B40 @ 0x140722B40 (sub_140722B40.c)
 *     sub_140731DA0 @ 0x140731DA0 (sub_140731DA0.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x1408629D0 (SeOpenObjectAuditAlarmForNonObObject.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1409CB230 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x14023A1C0 (PsGetCurrentThreadProcess.c)
 *     sub_1402F3558 @ 0x1402F3558 (sub_1402F3558.c)
 *     sub_1403CD84C @ 0x1403CD84C (sub_1403CD84C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405F4CC8 @ 0x1405F4CC8 (sub_1405F4CC8.c)
 *     sub_140724320 @ 0x140724320 (sub_140724320.c)
 *     sub_1407B66E0 @ 0x1407B66E0 (sub_1407B66E0.c)
 *     sub_1409CE660 @ 0x1409CE660 (sub_1409CE660.c)
 *     sub_1409CE6B8 @ 0x1409CE6B8 (sub_1409CE6B8.c)
 *     sub_1409CF1A0 @ 0x1409CF1A0 (sub_1409CF1A0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

bool __fastcall sub_1409C8EE8(
        unsigned __int16 a1,
        const int *a2,
        unsigned __int64 *a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        __int16 *a6,
        _QWORD *a7,
        _QWORD *a8,
        unsigned int a9,
        unsigned int a10,
        int *a11,
        unsigned __int8 a12,
        __int64 a13,
        int a14,
        __int64 a15,
        unsigned int a16,
        _DWORD *a17,
        __int128 *a18,
        __int64 a19)
{
  __int16 *v19; // r12
  __int64 v21; // rbx
  PVOID v22; // rdi
  __int128 *v24; // rcx
  __int64 CurrentThreadProcess; // rax
  int v26; // esi
  __int64 *v27; // rax
  __int64 v28; // rdi
  unsigned __int8 v29; // r9
  int v30; // eax
  const int *v31; // rcx
  __int64 v32; // r10
  int v33; // eax
  int v34; // eax
  int v35; // eax
  bool v36; // al
  unsigned __int64 v37; // r8
  __int64 v38; // rcx
  unsigned __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rbx
  __int64 v42; // rcx
  PVOID v43; // r15
  int v44; // ecx
  size_t v45; // r13
  size_t v46; // rbx
  char *Pool2; // rax
  char *v48; // rdi
  unsigned int v49; // eax
  __int64 v50; // rax
  __int64 v51; // rax
  int v52; // eax
  __int64 v53; // rax
  unsigned int v54; // ecx
  unsigned int v55; // edx
  unsigned __int16 v56; // r13
  _WORD *v57; // rax
  char *v58; // rax
  _OWORD *v59; // r9
  __int64 v60; // rdx
  unsigned int v61; // r8d
  _DWORD *v62; // r10
  __int64 v63; // rcx
  unsigned __int16 *v64; // rdx
  int v65; // ecx
  unsigned int v66; // ebx
  int v67; // ecx
  int v68; // eax
  __int16 *v69; // rcx
  int v70; // eax
  __int16 v71; // [rsp+28h] [rbp-E0h] BYREF
  char v72; // [rsp+2Ah] [rbp-DEh] BYREF
  unsigned __int16 v73; // [rsp+2Ch] [rbp-DCh]
  PVOID Src; // [rsp+30h] [rbp-D8h] BYREF
  size_t Size; // [rsp+38h] [rbp-D0h] BYREF
  PVOID v76; // [rsp+40h] [rbp-C8h] BYREF
  const int *v77; // [rsp+48h] [rbp-C0h]
  _QWORD *v78; // [rsp+50h] [rbp-B8h]
  __int16 *v79; // [rsp+58h] [rbp-B0h] BYREF
  PVOID v80; // [rsp+60h] [rbp-A8h]
  PVOID P; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v82; // [rsp+70h] [rbp-98h]
  __int64 v83; // [rsp+78h] [rbp-90h]
  unsigned __int64 *v84; // [rsp+80h] [rbp-88h]
  __int128 *v85; // [rsp+88h] [rbp-80h]
  __int16 *v86; // [rsp+90h] [rbp-78h]
  struct _SECURITY_SUBJECT_CONTEXT v87; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v88[132]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v89; // [rsp+4D8h] [rbp+3D0h] BYREF

  v19 = a6;
  v73 = a1;
  v21 = 0LL;
  v82 = a19;
  v22 = 0LL;
  v84 = a3;
  v77 = a2;
  v78 = a8;
  v87.PrimaryToken = a8;
  v86 = a6;
  v79 = a6;
  v80 = 0LL;
  P = 0LL;
  *(_QWORD *)&v87.ImpersonationLevel = 0LL;
  v87.ProcessAuditId = 0LL;
  v89 = 0LL;
  Size = 0LL;
  Src = 0LL;
  v76 = 0LL;
  v72 = 0;
  v71 = 0;
  v87.ClientToken = a7;
  if ( !sub_140724320(123LL, a12, a12 == 0, &v87) )
    return 1;
  v24 = &v89;
  if ( a18 )
    v24 = a18;
  v85 = v24;
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  v26 = sub_1407B66E0(CurrentThreadProcess, &P);
  if ( v26 >= 0 )
  {
    if ( a7 )
    {
      v21 = a7[3];
      v27 = (__int64 *)a7[19];
    }
    else
    {
      v27 = (__int64 *)v78[19];
    }
    v28 = v78[3];
    v83 = *v27;
    memset(v88, 0, 0x418uLL);
    v29 = a12;
    v30 = 8;
    HIDWORD(v88[0]) = 4656;
    LOWORD(v88[2]) = v73;
    WORD1(v88[2]) = 8;
    if ( a14 == 2 )
      v30 = 3;
    LODWORD(v88[0]) = v30;
    if ( !a12 )
      WORD1(v88[2]) = 16;
    v31 = &qword_140001B08;
    v32 = 4LL;
    v88[6] = v83;
    if ( v77 )
      v31 = v77;
    LODWORD(v88[3]) = 4;
    LODWORD(v88[7]) = 1;
    v33 = *(unsigned __int8 *)(v83 + 1);
    v88[10] = v31;
    v88[11] = 0x800000005LL;
    v88[12] = v21;
    HIDWORD(v88[3]) = 4 * v33 + 8;
    v34 = *(unsigned __int16 *)v31 + 16;
    HIDWORD(v88[7]) = v34;
    if ( !a7 )
      v88[12] = v28;
    LODWORD(v88[15]) = 1;
    HIDWORD(v88[15]) = v34;
    v88[18] = v31;
    if ( !a4 )
    {
      v26 = -1073741811;
LABEL_19:
      v22 = Src;
      goto LABEL_43;
    }
    HIDWORD(v88[19]) = *a4 + 16;
    LODWORD(v88[19]) = 1;
    v88[22] = a4;
    if ( a5 )
    {
      if ( v73 == 116 || (LODWORD(v88[23]) = 1, v73 == 128) )
        LODWORD(v88[23]) = 2;
      v35 = *a5;
      v88[26] = a5;
      HIDWORD(v88[23]) = v35 + 16;
    }
    v88[27] = 0x80000000BLL;
    if ( v84 )
    {
      v36 = sub_1402F3558(*v84, 0);
      v39 = v38 ^ 0xFFFFFFFF80000000uLL;
      if ( !v36 )
        v39 = v37;
      v88[28] = v39 & 0xFFFFFFFFFFFFFFFCuLL;
    }
    else
    {
      v88[28] = 0LL;
    }
    v88[34] = v85;
    v40 = a10;
    v88[31] = 0x100000000DLL;
    LODWORD(v88[35]) = 7;
    HIDWORD(v88[35]) = v32;
    v88[37] = v32;
    if ( !v29 )
      v40 = a9;
    v41 = v82;
    v88[36] = v40;
    LODWORD(v88[1]) = 9;
    if ( v82 && (v42 = *(_QWORD *)(v82 + 72)) != 0 )
    {
      v26 = sub_1405F4CC8(*(__int16 **)(v42 + 56), &Src, (ULONG *)&Size + 1, (_BYTE *)&v71 + 1);
      if ( v26 < 0 )
        goto LABEL_19;
      v26 = sub_1405F4CC8(*(__int16 **)(*(_QWORD *)(v41 + 72) + 64LL), &v76, (ULONG *)&Size, &v72);
      if ( v26 < 0 )
        goto LABEL_19;
      v43 = Src;
      if ( Src || v76 )
      {
        v44 = 8;
        goto LABEL_41;
      }
    }
    else
    {
      v43 = Src;
    }
    v44 = 0;
LABEL_41:
    v45 = HIDWORD(Size);
    LODWORD(v77) = HIDWORD(Size) + Size - v44 + 152;
    v46 = (unsigned int)v77;
    Pool2 = (char *)ExAllocatePool2(256LL, (unsigned int)v77, 1883333971LL);
    v48 = Pool2;
    if ( !Pool2 )
    {
      v22 = Src;
      v26 = -1073741670;
      goto LABEL_43;
    }
    memset(Pool2, 0, v46);
    v49 = a10;
    *((_DWORD *)v48 + 34) = a12;
    if ( !a12 )
      v49 = a9;
    *((_DWORD *)v48 + 33) = 4;
    *(_DWORD *)v48 = v49 & 0xFDFFFFFF;
    if ( v82 )
    {
      v50 = *(_QWORD *)(v82 + 72);
      if ( v50 )
      {
        *(_OWORD *)(v48 + 4) = *(_OWORD *)(v50 + 88);
        *(_OWORD *)(v48 + 20) = *(_OWORD *)(v50 + 104);
        *(_OWORD *)(v48 + 36) = *(_OWORD *)(v50 + 120);
        *(_OWORD *)(v48 + 52) = *(_OWORD *)(v50 + 136);
        *(_OWORD *)(v48 + 68) = *(_OWORD *)(v50 + 152);
        *(_OWORD *)(v48 + 84) = *(_OWORD *)(v50 + 168);
        *(_OWORD *)(v48 + 100) = *(_OWORD *)(v50 + 184);
        *(_OWORD *)(v48 + 116) = *(_OWORD *)(v50 + 200);
      }
    }
    if ( v43 )
      memmove(v48 + 144, v43, v45);
    if ( v76 )
      memmove(&v48[v45 + 144], v76, (unsigned int)Size);
    HIDWORD(v88[39]) = (_DWORD)v77;
    v51 = a10;
    LODWORD(v88[39]) = 29;
    v88[42] = v48;
    v88[43] = 0x40000000ALL;
    if ( !a12 )
      v51 = a9;
    v88[44] = v51;
    if ( a11 )
    {
      v52 = *a11;
      if ( *a11 )
      {
        LODWORD(v88[47]) = 8;
        v88[50] = a11;
        HIDWORD(v88[47]) = 12 * v52 + 8;
      }
    }
    LODWORD(v88[1]) = 12;
    v53 = 12LL;
    if ( a16 )
    {
      v54 = 0;
      v55 = 0;
      v56 = 2 - (a12 != 0);
      v57 = (_WORD *)(a15 + 2);
      do
      {
        if ( !v55 || (v56 & *v57) != 0 )
          ++v54;
        ++v55;
        v57 += 24;
      }
      while ( v55 < a16 );
      v53 = 12LL;
      if ( v54 )
      {
        v58 = (char *)ExAllocatePool2(256LL, 24LL * v54, 1883333971LL);
        v80 = v58;
        if ( !v58 )
        {
          v26 = -1073741670;
LABEL_101:
          ExFreePoolWithTag(v48, 0);
          goto LABEL_19;
        }
        v59 = (_OWORD *)(a15 + 4);
        v60 = 0LL;
        v61 = 0;
        v62 = a17;
        do
        {
          if ( !v61 || (v56 & *((_WORD *)v59 - 1)) != 0 )
          {
            v63 = 3 * v60;
            *(_OWORD *)&v58[8 * v63] = *v59;
            *(_WORD *)&v58[8 * v63 + 18] = *((_WORD *)v59 - 2);
            if ( v61 )
            {
              *(_WORD *)&v58[24 * v60 + 16] = 0;
              if ( a17 && a12 )
                *(_DWORD *)&v58[24 * v60 + 20] = *v62;
            }
            else
            {
              *(_WORD *)&v58[24 * v60 + 16] = 1;
              *(_DWORD *)&v58[24 * v60 + 20] = 0;
            }
            v60 = (unsigned int)(v60 + 1);
          }
          ++v61;
          v59 += 3;
          ++v62;
        }
        while ( v61 < a16 );
        v88[54] = v58;
        v19 = v86;
        HIDWORD(v88[51]) = 24 * v60;
        v53 = 13LL;
        LODWORD(v88[51]) = 9;
        v88[53] = 4LL;
        LODWORD(v88[1]) = 13;
        HIDWORD(v88[0]) = 4661;
      }
    }
    v64 = (unsigned __int16 *)P;
    LODWORD(v88[4 * v53 + 3]) = 27;
    HIDWORD(v88[4 * LODWORD(v88[1]) + 3]) = 4;
    v88[4 * LODWORD(v88[1]) + 4] = *((unsigned int *)v78 + 32);
    ++LODWORD(v88[1]);
    LODWORD(v88[4 * LODWORD(v88[1]) + 3]) = 11;
    HIDWORD(v88[4 * LODWORD(v88[1]) + 3]) = 8;
    v88[4 * LODWORD(v88[1]) + 4] = a13;
    ++LODWORD(v88[1]);
    LODWORD(v88[4 * LODWORD(v88[1]) + 3]) = 2;
    HIDWORD(v88[4 * LODWORD(v88[1]) + 3]) = *v64 + 16;
    v65 = v73;
    v88[4 * LODWORD(v88[1]) + 6] = v64;
    v66 = ++LODWORD(v88[1]);
    v67 = v65 - 116;
    if ( (!v67 || v67 == 12) && v19 && HIDWORD(v88[0]) == 4656 && (unsigned __int8)sub_1409CE660(v19) )
    {
      v68 = sub_1405F4CC8(v19, (PVOID *)&v79, (ULONG *)&Size + 1, &v71);
      v19 = v79;
      v26 = v68;
      if ( v68 < 0 )
        goto LABEL_99;
      v69 = v79;
      LODWORD(v88[4 * v66 + 3]) = 31;
      v70 = sub_1409CE6B8(v69);
      HIDWORD(v88[4 * LODWORD(v88[1]) + 3]) = v70;
      v88[4 * LODWORD(v88[1]) + 6] = v19;
      v88[4 * LODWORD(v88[1]) + 4] = 32LL;
      v88[4 * LODWORD(v88[1]) + 5] = 0LL;
      v66 = v88[1];
    }
    LODWORD(v88[1]) = v66 + 1;
    sub_1403CD84C(v88);
LABEL_99:
    if ( v80 )
      ExFreePoolWithTag(v80, 0);
    goto LABEL_101;
  }
LABEL_43:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( (_BYTE)v71 && v19 )
    ExFreePoolWithTag(v19, 0);
  if ( HIBYTE(v71) && v22 )
    ExFreePoolWithTag(v22, 0);
  if ( v72 && v76 )
    ExFreePoolWithTag(v76, 0);
  if ( v26 < 0 )
    sub_1409CF1A0((unsigned int)v26);
  return v26 >= 0;
}
