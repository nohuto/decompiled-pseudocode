/*
 * XREFs of sub_1402FBEC0 @ 0x1402FBEC0
 * Callers:
 *     sub_140241910 @ 0x140241910 (sub_140241910.c)
 *     sub_1402FDDF0 @ 0x1402FDDF0 (sub_1402FDDF0.c)
 *     sub_1405F3FA0 @ 0x1405F3FA0 (sub_1405F3FA0.c)
 * Callees:
 *     sub_140218B60 @ 0x140218B60 (sub_140218B60.c)
 *     sub_140219130 @ 0x140219130 (sub_140219130.c)
 *     sub_14022A380 @ 0x14022A380 (sub_14022A380.c)
 *     sub_14023B484 @ 0x14023B484 (sub_14023B484.c)
 *     sub_14023F0CC @ 0x14023F0CC (sub_14023F0CC.c)
 *     sub_1402402D0 @ 0x1402402D0 (sub_1402402D0.c)
 *     sub_14024429C @ 0x14024429C (sub_14024429C.c)
 *     sub_14024F43C @ 0x14024F43C (sub_14024F43C.c)
 *     sub_14028AB90 @ 0x14028AB90 (sub_14028AB90.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1402B1170 @ 0x1402B1170 (sub_1402B1170.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1402F9614 @ 0x1402F9614 (sub_1402F9614.c)
 *     sub_1402FA820 @ 0x1402FA820 (sub_1402FA820.c)
 *     sub_1402FB7E0 @ 0x1402FB7E0 (sub_1402FB7E0.c)
 *     sub_1402FBC90 @ 0x1402FBC90 (sub_1402FBC90.c)
 *     sub_1402FD2CC @ 0x1402FD2CC (sub_1402FD2CC.c)
 *     sub_1402FD4DC @ 0x1402FD4DC (sub_1402FD4DC.c)
 *     sub_1402FD65C @ 0x1402FD65C (sub_1402FD65C.c)
 *     sub_1402FDBE0 @ 0x1402FDBE0 (sub_1402FDBE0.c)
 *     sub_140374F38 @ 0x140374F38 (sub_140374F38.c)
 *     ExAcquireFastResourceShared @ 0x14039B6B0 (ExAcquireFastResourceShared.c)
 *     sub_14039C618 @ 0x14039C618 (sub_14039C618.c)
 *     sub_14039CA48 @ 0x14039CA48 (sub_14039CA48.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405F412C @ 0x1405F412C (sub_1405F412C.c)
 *     sub_1405F41D0 @ 0x1405F41D0 (sub_1405F41D0.c)
 *     sub_1405F4288 @ 0x1405F4288 (sub_1405F4288.c)
 *     sub_1405F42D0 @ 0x1405F42D0 (sub_1405F42D0.c)
 *     sub_1405F4304 @ 0x1405F4304 (sub_1405F4304.c)
 *     sub_1405F5D18 @ 0x1405F5D18 (sub_1405F5D18.c)
 *     sub_140668444 @ 0x140668444 (sub_140668444.c)
 *     sub_14066846C @ 0x14066846C (sub_14066846C.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140732CC0 (ObReferenceObjectByHandleWithTag.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     SeReleaseSecurityDescriptor @ 0x1407B3DA0 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x1407B3DD0 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1402FBEC0(
        __int64 a1,
        void *a2,
        void *a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        _OWORD *a7,
        _DWORD *Address,
        PERESOURCE *a9,
        unsigned int *a10,
        int *a11,
        char a12)
{
  unsigned __int64 v13; // rdx
  _DWORD *v14; // r8
  int *v15; // r9
  unsigned __int8 v16; // r13
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 result; // rax
  int v23; // eax
  int v24; // edi
  __int16 v25; // cx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _DWORD *v31; // r14
  __int64 v32; // rsi
  unsigned int v33; // r15d
  char v34; // cl
  void *v35; // rsi
  __int64 CurrentIrql; // rdx
  struct _KTHREAD *v37; // r8
  struct _KTHREAD *CurrentThread; // rax
  char *v39; // rsi
  ULONG_PTR v40; // rdi
  __int64 v41; // rcx
  __int16 *v42; // r14
  char v43; // r12
  __int64 v44; // r13
  unsigned int v45; // edi
  unsigned int v46; // r15d
  PERESOURCE *v47; // r14
  char v48; // al
  unsigned int *v49; // rcx
  int *v50; // rsi
  char *v51; // r14
  __int16 v52; // cx
  bool v53; // zf
  PERESOURCE v54; // rcx
  int v55; // edi
  char v56; // r15
  unsigned int v57; // r12d
  _DWORD *v58; // r11
  unsigned int j; // eax
  __int64 v60; // rcx
  PVOID v61; // rbx
  __int64 v62; // rax
  __int64 v63; // rdx
  int v64; // eax
  unsigned int v65; // eax
  unsigned int v66; // eax
  unsigned int v67; // eax
  struct _KTHREAD *v68; // rax
  PVOID v69; // rbx
  ULONGLONG v70; // r9
  _DWORD *v71; // rax
  unsigned int v72; // ecx
  unsigned int *v73; // rdx
  int *v74; // r8
  unsigned int v75; // ecx
  unsigned int v76; // ecx
  unsigned __int8 v77; // al
  struct _KTHREAD *v78; // rdx
  int v79; // ecx
  int v80; // eax
  unsigned int v81; // edx
  int v82; // eax
  unsigned int v83; // eax
  void *v84; // r14
  __int64 v85; // rax
  int *v86; // r8
  unsigned int v87; // ecx
  _DWORD *v88; // r9
  __int64 v89; // rax
  ACL *v90; // rax
  void *v91; // rax
  int v92; // eax
  __int64 v93; // rdx
  unsigned int *Pool2; // rax
  int v95; // r14d
  char *v96; // rax
  __int64 v97; // rax
  _DWORD *v98; // r15
  int v99; // r13d
  __int64 v100; // rdi
  PVOID v101; // r8
  int v102; // eax
  int v103; // ecx
  _QWORD *v104; // rax
  __int64 v105; // r10
  __int64 v106; // rdx
  __int64 v107; // rcx
  void *v108; // r9
  int v109; // eax
  int v110; // ecx
  _QWORD *v111; // rax
  __int64 v112; // r8
  __int64 v113; // rdx
  __int64 v114; // rcx
  void *v115; // r9
  unsigned int v116; // eax
  unsigned int v117; // ecx
  int *v118; // r14
  PVOID v119; // rdi
  int v120; // edx
  unsigned int i; // edx
  __int64 v122; // rcx
  __int64 v123; // rcx
  int Tag; // [rsp+20h] [rbp-298h]
  char v125; // [rsp+A0h] [rbp-218h]
  char v126; // [rsp+A1h] [rbp-217h]
  int v127; // [rsp+A4h] [rbp-214h]
  char v128; // [rsp+A8h] [rbp-210h]
  char v129; // [rsp+B8h] [rbp-200h]
  char v130; // [rsp+B9h] [rbp-1FFh]
  unsigned int v131; // [rsp+C0h] [rbp-1F8h] BYREF
  char v132; // [rsp+C8h] [rbp-1F0h] BYREF
  char v133; // [rsp+C9h] [rbp-1EFh] BYREF
  char v134[2]; // [rsp+CAh] [rbp-1EEh] BYREF
  int v135; // [rsp+CCh] [rbp-1ECh]
  unsigned int v136; // [rsp+D4h] [rbp-1E4h] BYREF
  PVOID Object; // [rsp+D8h] [rbp-1E0h] BYREF
  unsigned int v138; // [rsp+E0h] [rbp-1D8h]
  int v139; // [rsp+E4h] [rbp-1D4h]
  __int64 v140; // [rsp+E8h] [rbp-1D0h] BYREF
  int v141; // [rsp+F0h] [rbp-1C8h]
  volatile void *v142; // [rsp+F8h] [rbp-1C0h]
  PERESOURCE *v143; // [rsp+100h] [rbp-1B8h]
  SIZE_T Length; // [rsp+108h] [rbp-1B0h]
  int *v145; // [rsp+110h] [rbp-1A8h]
  int v146; // [rsp+118h] [rbp-1A0h] BYREF
  PVOID v147; // [rsp+120h] [rbp-198h]
  int *v148; // [rsp+128h] [rbp-190h]
  PVOID v149; // [rsp+130h] [rbp-188h]
  PVOID P; // [rsp+138h] [rbp-180h] BYREF
  ACL *v151; // [rsp+140h] [rbp-178h]
  void *Src; // [rsp+148h] [rbp-170h] BYREF
  _OWORD *v153; // [rsp+150h] [rbp-168h] BYREF
  PVOID v154; // [rsp+158h] [rbp-160h] BYREF
  __int64 v155; // [rsp+160h] [rbp-158h] BYREF
  __int64 v156; // [rsp+168h] [rbp-150h]
  __int64 v157; // [rsp+170h] [rbp-148h] BYREF
  int v158; // [rsp+178h] [rbp-140h] BYREF
  int v159; // [rsp+17Ch] [rbp-13Ch] BYREF
  int v160; // [rsp+180h] [rbp-138h] BYREF
  int v161; // [rsp+184h] [rbp-134h] BYREF
  void *v162; // [rsp+188h] [rbp-130h]
  ULONGLONG v163; // [rsp+190h] [rbp-128h] BYREF
  PVOID v164; // [rsp+198h] [rbp-120h] BYREF
  __int64 v165; // [rsp+1A0h] [rbp-118h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+1A8h] [rbp-110h] BYREF
  void *v167; // [rsp+1D8h] [rbp-E0h]
  void *v168; // [rsp+1E0h] [rbp-D8h]
  _DWORD *v169; // [rsp+1E8h] [rbp-D0h]
  __int128 v170; // [rsp+1F0h] [rbp-C8h] BYREF
  __int64 v171; // [rsp+200h] [rbp-B8h]
  unsigned int *v172; // [rsp+208h] [rbp-B0h]
  int *v173; // [rsp+210h] [rbp-A8h]
  _OWORD SecurityDescriptor[2]; // [rsp+218h] [rbp-A0h] BYREF
  __int64 v175; // [rsp+238h] [rbp-80h]
  __int128 v176; // [rsp+240h] [rbp-78h] BYREF
  __int64 v177; // [rsp+250h] [rbp-68h]
  int v178; // [rsp+258h] [rbp-60h]
  __int128 v179; // [rsp+260h] [rbp-58h] BYREF

  v162 = a2;
  v165 = a1;
  v167 = a2;
  v168 = a3;
  v131 = a4;
  v171 = a5;
  v153 = a7;
  v169 = Address;
  v13 = (unsigned __int64)a9;
  v143 = a9;
  v14 = a10;
  v142 = a10;
  v172 = a10;
  v15 = a11;
  v145 = a11;
  v173 = a11;
  v158 = 0;
  v149 = 0LL;
  v161 = 0;
  v160 = 0;
  v147 = 0LL;
  v159 = 0;
  v148 = 0LL;
  Object = 0LL;
  v140 = 0LL;
  v155 = 0LL;
  v136 = 0;
  v139 = 0;
  v179 = 0LL;
  v154 = 0LL;
  Src = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v170 = 0LL;
  v126 = 0;
  P = 0LL;
  v176 = 0LL;
  v177 = 0LL;
  v178 = 0;
  v151 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v175 = 0LL;
  v156 = 0LL;
  v130 = 0;
  v128 = 0;
  v146 = 0;
  v129 = 0;
  v164 = 0LL;
  v133 = 0;
  v132 = 0;
  v134[0] = 0;
  v163 = 0LL;
  v157 = 0LL;
  v135 = -1073741790;
  LODWORD(Length) = 0;
  v16 = *((_BYTE *)KeGetCurrentThread() + 562);
  v125 = v16;
  if ( v16 )
  {
    v17 = (__int64)a9;
    if ( (unsigned __int64)a9 >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    v18 = *(_DWORD *)v17;
  }
  else
  {
    v18 = *(_DWORD *)a9;
  }
  LODWORD(Length) = v18;
  LODWORD(v153) = -1;
  LODWORD(v157) = -1;
  if ( !v16 )
  {
    *a11 = 0;
    *a10 = v131;
    return 0LL;
  }
  if ( a12 )
  {
    if ( !a6 )
    {
      result = 3221225485LL;
      goto LABEL_24;
    }
    ProbeForWrite(a11, 4LL * a6, 4u);
    ProbeForWrite(v142, 4LL * a6, 4u);
    v13 = (unsigned __int64)v143;
  }
  else
  {
    v19 = (__int64)a11;
    if ( (unsigned __int64)a11 >= 0x7FFFFFFF0000LL )
      v19 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v19 = *(_DWORD *)v19;
    v20 = (__int64)a10;
    if ( (unsigned __int64)a10 >= 0x7FFFFFFF0000LL )
      v20 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v20 = *(_DWORD *)v20;
  }
  v21 = v13;
  if ( v13 >= 0x7FFFFFFF0000LL )
    v21 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v21 = *(_DWORD *)v21;
  ProbeForWrite(Address, (unsigned int)Length, 4u);
  if ( Address && (unsigned int)Length >= 0x14 )
    *Address = 0;
  if ( ((unsigned __int8)a7 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v179 = *a7;
  result = 0LL;
LABEL_24:
  if ( (int)result < 0 )
    return result;
  if ( (v131 & 0xF0000000) != 0 )
  {
    v24 = -1073741594;
    goto LABEL_209;
  }
  if ( (unsigned __int64)a3 + 6 <= 2 )
    v23 = sub_14023B484((__int64)a3, v13, (__int64 *)&Object, &v133, &v163);
  else
    v23 = ObReferenceObjectByHandleWithTag(a3, 8u, (POBJECT_TYPE)SeTokenObjectType, v16, 0x74726853u, &Object, 0LL);
  v24 = v23;
  v127 = v23;
  if ( v23 < 0 )
  {
    Object = 0LL;
    v56 = a12;
    goto LABEL_99;
  }
  if ( (unsigned __int64)a3 + 6 > 2 )
  {
    if ( *((_DWORD *)Object + 48) != 2 )
    {
      v24 = -1073741732;
      goto LABEL_209;
    }
    if ( *((int *)Object + 49) < 1 )
    {
      v24 = -1073741659;
      goto LABEL_209;
    }
  }
  v24 = sub_1402FD2CC(v171, a6, v16, &v154);
  v127 = v24;
  if ( v24 < 0 || (v24 = SeCaptureSecurityDescriptor(v165, v16, 1, 0, (__int64)&v140), v127 = v24, v24 < 0) )
  {
LABEL_177:
    v56 = a12;
    goto LABEL_99;
  }
  if ( !v140 )
    goto LABEL_213;
  v165 = v140 + 2;
  v25 = *(_WORD *)(v140 + 2);
  if ( v25 >= 0 )
  {
    v27 = *(_QWORD *)(v140 + 8);
  }
  else
  {
    v26 = *(unsigned int *)(v140 + 4);
    if ( !(_DWORD)v26 )
      goto LABEL_213;
    v27 = v140 + v26;
  }
  if ( !v27 )
    goto LABEL_213;
  if ( v25 < 0 )
  {
    v28 = *(unsigned int *)(v140 + 8);
    if ( (_DWORD)v28 )
    {
      v29 = v140 + v28;
      goto LABEL_42;
    }
LABEL_213:
    v24 = -1073741703;
    goto LABEL_209;
  }
  v29 = *(_QWORD *)(v140 + 16);
LABEL_42:
  if ( !v29 )
    goto LABEL_213;
  if ( v133 )
    v30 = v163;
  else
    v30 = *((_QWORD *)Object + 138);
  v31 = Object;
  v32 = v140;
  v24 = sub_1402F9614((__int64)&v153, v140, 0LL, (__int64)Object, v30, 1, (int *)&v153);
  v127 = v24;
  if ( v24 < 0 )
    goto LABEL_177;
  v33 = v131 & 0xFDFFFFFF;
  if ( ((unsigned int)v153 & v131 & 0xFDFFFFFF) != (v131 & 0xFDFFFFFF) )
  {
    v132 = 1;
    goto LABEL_224;
  }
  v24 = sub_1402FBC90(v32, (__int64 *)&P, v31, 1, (int *)&v157);
  v127 = v24;
  if ( v24 < 0 )
    goto LABEL_177;
  if ( ((unsigned int)v157 & v33) != v33 )
  {
    v134[0] = 1;
LABEL_224:
    v13 = 3221225506LL;
    goto LABEL_55;
  }
  v24 = sub_1402FB7E0((int *)&v179, v32, 0LL, (__int64)v31, 1, (__int64)&v170);
  v127 = v24;
  if ( v24 < 0 )
    goto LABEL_177;
  v34 = 0;
  v126 = 0;
  if ( DWORD2(v170) && (v33 & (unsigned int)v170) != v33 )
  {
    v13 = 3221225506LL;
  }
  else
  {
    v13 = 0LL;
    if ( (v131 & 0x2000000) == 0 )
      goto LABEL_53;
  }
  if ( (*((_DWORD *)Object + 50) & 0x4000) != 0 && HIDWORD(v170) <= 0x2000 )
  {
    v34 = 1;
    v126 = 1;
  }
LABEL_53:
  if ( (v13 & 0x80000000) != 0LL && !v34 )
    goto LABEL_56;
  v13 = (unsigned int)sub_1402FD4DC((unsigned int)&v131, (unsigned int)&v136, 0, (_DWORD)Object, (__int64)&Src, v16);
  if ( v131 )
  {
LABEL_55:
    v34 = v126;
    goto LABEL_56;
  }
  v34 = v126;
  if ( v136 )
    v129 = 1;
LABEL_56:
  if ( (v13 & 0x80000000) != 0LL && !v34 )
  {
    v56 = a12;
    v14 = v145;
    if ( a12 )
    {
      v76 = 0;
      v138 = 0;
      v15 = (int *)v142;
      while ( v76 < a6 )
      {
        v14[v76] = v13;
        v15[v76++] = 0;
        v138 = v76;
      }
    }
    else
    {
      *v145 = v13;
      *(_DWORD *)v142 = 0;
    }
    v135 = v13;
    v24 = 0;
    v127 = 0;
    goto LABEL_99;
  }
  v35 = Src;
  if ( Src )
  {
    v79 = *(_DWORD *)Src;
    if ( *(_DWORD *)Src )
    {
      v80 = 12 * *(_DWORD *)Src;
      v81 = v80 + 8;
    }
    else
    {
      v81 = 8;
      v80 = 12 * *(_DWORD *)Src;
    }
    if ( v81 > (unsigned int)Length )
    {
      v82 = v80 + 8;
      if ( !v79 )
        v82 = 8;
      *(_DWORD *)v143 = v82;
      v24 = -1073741789;
      v127 = -1073741789;
      ExFreePoolWithTag(v35, 0);
      goto LABEL_177;
    }
    v83 = v80 + 8;
    if ( !v79 )
      v83 = 8;
    memmove(Address, Src, v83);
    ExFreePoolWithTag(v35, 0);
  }
  else
  {
    if ( (unsigned int)Length < 0x14 )
    {
      *(_DWORD *)v143 = 20;
      v24 = -1073741789;
      v127 = -1073741789;
      v56 = a12;
      goto LABEL_99;
    }
    *(_QWORD *)Address = Src;
  }
  if ( v162 )
  {
    v24 = sub_14066846C(v162, Tag, 1, (__int64)&v155);
    v127 = v24;
    if ( v24 < 0 )
    {
      v155 = 0LL;
      goto LABEL_177;
    }
  }
  SeCaptureSubjectContext(&SubjectContext);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v39 = (char *)Object;
  v143 = (PERESOURCE *)((char *)Object + 48);
  v40 = *((_QWORD *)Object + 6);
  v41 = *(unsigned __int16 *)(v40 + 26);
  if ( (v41 & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, v40, 0LL, 0LL);
  LOWORD(v41) = *(_WORD *)(v40 + 26) & 1;
  if ( (_WORD)v41 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v37 = KeGetCurrentThread();
    if ( (unsigned __int8)CurrentIrql > 1u )
      KeBugCheckEx(0x1C6u, 0LL, (unsigned __int8)CurrentIrql, 1uLL, 0LL);
    if ( (*((_BYTE *)v37 + 192) & 2) != 0 )
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    if ( !(_BYTE)CurrentIrql && (*((_DWORD *)v37 + 29) & 0x400) == 0 && !*((_DWORD *)v37 + 121) )
      goto LABEL_336;
    v39 = (char *)Object;
  }
  if ( (_WORD)v41 )
  {
    v84 = (void *)sub_14039C618(v41, CurrentIrql, v37);
    if ( !(unsigned __int8)ExAcquireFastResourceShared(v40, (ULONG_PTR)v84) )
      ExFreePoolWithTag(v84, 0);
  }
  else
  {
    sub_1402B1170(*((_QWORD *)Object + 6), 1);
  }
  v42 = (__int16 *)v165;
  v43 = sub_1402FD65C((PSID_AND_ATTRIBUTES_HASH)(v39 + 232), 0, 0);
  if ( v43 && *((_DWORD *)v39 + 32) )
    v43 = sub_1402FD65C((PSID_AND_ATTRIBUTES_HASH)(v39 + 504), 1, 0);
  if ( !byte_140C0C570 && (*((_DWORD *)v39 + 50) & 0x20) == 0 )
  {
    v85 = *((_QWORD *)v39 + 27);
    if ( v85 )
    {
      if ( (*(_DWORD *)(v85 + 32) & 0x20) != 0 )
      {
        v56 = a12;
        v86 = v145;
        if ( a12 )
        {
          v87 = 0;
          v138 = 0;
          v88 = v142;
          while ( v87 < a6 )
          {
            v86[v87] = -1073741790;
            v88[v87++] = 0;
            v138 = v87;
          }
        }
        else
        {
          *v145 = -1073741790;
          *(_DWORD *)v142 = 0;
        }
        v135 = -1073741790;
        v127 = 0;
        ExReleaseResourceLite(*((PERESOURCE *)v39 + 6));
        sub_1402F9540((__int64)KeGetCurrentThread());
        SeReleaseSubjectContext(&SubjectContext);
        v24 = 0;
        goto LABEL_99;
      }
    }
  }
  if ( !byte_140C1B311 || (*v42 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
  {
    v44 = v140;
    goto LABEL_69;
  }
  v44 = v140;
  if ( *v42 >= 0 )
  {
    v90 = *(ACL **)(v140 + 24);
  }
  else
  {
    v89 = *(unsigned int *)(v140 + 12);
    if ( !(_DWORD)v89 )
    {
      v151 = 0LL;
      goto LABEL_69;
    }
    v90 = (ACL *)(v140 + v89);
  }
  v151 = v90;
  if ( v90 )
  {
    v91 = (void *)sub_1405F4288(v90);
    if ( v91 )
    {
      v92 = sub_1405F5D18(v91);
      v93 = v156;
      if ( v92 < 0 )
        v93 = qword_140D3B0F8;
      v156 = v93;
      v130 = 1;
    }
  }
LABEL_69:
  v45 = v131;
  if ( (v131 & 0x2060000) != 0
    && v43
    && ((*v42 & 4) == 0
      ? (v63 = 0LL)
      : *v42 >= 0
      ? (v63 = *(_QWORD *)(v44 + 32))
      : (v62 = *(unsigned int *)(v44 + 16), !(_DWORD)v62)
      ? (v63 = 0LL)
      : (v63 = v62 + v44),
        !sub_14022A380(0, v63)) )
  {
    if ( (v45 & 0x2000000) != 0 )
    {
      v64 = 393216;
      v46 = v136 | 0x60000;
    }
    else
    {
      v64 = v45 & 0x60000;
      v46 = v136 | v45 & 0x60000;
    }
    v139 = v64;
    v136 = v46;
    v45 &= 0xFFF9FFFF;
    v131 = v45;
  }
  else
  {
    v46 = v136;
  }
  if ( v45 || v130 && !v129 )
  {
    v47 = (PERESOURCE *)Object;
  }
  else
  {
    v47 = (PERESOURCE *)Object;
    if ( (*((_DWORD *)Object + 50) & 0x2000) != 0 || !v139 )
    {
      if ( a12 )
      {
        v72 = 0;
        v138 = 0;
        v73 = v172;
        v74 = v173;
        while ( v72 < a6 )
        {
          if ( v46 )
          {
            v74[v72] = 0;
            v135 = 0;
            v73[v72] = v46;
          }
          else
          {
            v74[v72] = -1073741790;
            v135 = -1073741790;
            v73[v72] = 0;
          }
          v138 = ++v72;
        }
      }
      else
      {
        v71 = v142;
        if ( v46 )
        {
          *v145 = 0;
          v135 = 0;
          *v71 = v46;
        }
        else
        {
          *v145 = -1073741790;
          v135 = -1073741790;
          *v71 = 0;
        }
      }
      v127 = 0;
      v16 = v125;
      ExReleaseResourceLite(v47[6]);
      sub_1402F9540((__int64)KeGetCurrentThread());
      SeReleaseSubjectContext(&SubjectContext);
      v24 = 0;
      goto LABEL_177;
    }
  }
  v48 = a12;
  if ( a12 )
  {
    Pool2 = (unsigned int *)ExAllocatePool2(256LL, 8LL * a6, 1632068947LL);
    v49 = Pool2;
    v149 = Pool2;
    if ( Pool2 )
    {
      v50 = (int *)&Pool2[a6];
      v48 = a12;
      goto LABEL_75;
    }
    ExReleaseResourceLite(*v143);
    sub_1402F9540((__int64)KeGetCurrentThread());
    SeReleaseSubjectContext(&SubjectContext);
    v24 = -1073741670;
    v16 = v125;
LABEL_209:
    v127 = v24;
    goto LABEL_177;
  }
  v49 = (unsigned int *)&v158;
  v149 = &v158;
  v50 = &v161;
LABEL_75:
  LODWORD(v176) = v139;
  sub_1402FA820(
    v44,
    v155,
    (__int64)SubjectContext.PrimaryToken,
    (__int64)v47,
    v45,
    (__int128 *)v154,
    a6,
    &v179,
    v46,
    v125,
    v49,
    0LL,
    v50,
    v48,
    v43,
    (int *)&v176,
    (__int64 *)&P,
    0LL,
    0LL);
  if ( byte_140C1B311 && (v95 = *v50, *v50 >= 0) && v130 )
  {
    v56 = a12;
    if ( a12 )
    {
      v96 = (char *)ExAllocatePool2(256LL, 8LL * a6, 1632068947LL);
      v147 = v96;
      if ( !v96 )
      {
        ExReleaseResourceLite(*v143);
        sub_1402F9540((__int64)KeGetCurrentThread());
        SeReleaseSubjectContext(&SubjectContext);
        v24 = -1073741670;
        v127 = -1073741670;
        v16 = v125;
        goto LABEL_99;
      }
      v148 = (int *)&v96[4 * a6];
      v95 = *v50;
    }
    else
    {
      v147 = &v160;
      v148 = &v159;
    }
    v141 = *(_DWORD *)v149;
    LOBYTE(v139) = 0;
    if ( a6 )
    {
      v24 = sub_1405F41D0(v154, a6, &v164);
      v127 = v24;
      if ( v24 < 0 )
      {
        v16 = v125;
        goto LABEL_99;
      }
    }
    v97 = 0LL;
    v98 = Object;
    v99 = v131;
    while ( 1 )
    {
      LODWORD(Src) = v97;
      if ( (unsigned int)v97 >= *(_DWORD *)(v156 + 60) )
        break;
      v100 = *(_QWORD *)(v156 + 8 * v97 + 64);
      if ( !*(_QWORD *)(v100 + 24) )
        goto LABEL_318;
      v101 = P;
      if ( !P )
      {
        v102 = sub_140218B60((__int64)v151, (__int64 *)&P);
        v103 = (unsigned __int8)v139;
        if ( v102 < 0 )
          v103 = 1;
        v139 = v103;
        v101 = P;
      }
      v104 = (_QWORD *)*((_QWORD *)v98 + 137);
      v105 = v104 ? v104[75] : 0LL;
      v106 = v104 ? v104[73] : 0LL;
      v107 = v104 ? v104[74] : 0LL;
      v108 = v104 ? (void *)v104[72] : 0LL;
      v109 = sub_140219130(
               v98,
               *((void **)v98 + 97),
               v101,
               v108,
               v107,
               v106,
               v105,
               *(_DWORD **)(v100 + 24),
               *(_DWORD *)(v100 + 16),
               1,
               0,
               &v146);
      v127 = v109;
      v110 = v146;
      if ( v146 == 1 )
        goto LABEL_318;
      if ( v109 < 0 )
        goto LABEL_333;
      if ( (v98[50] & 0x10) != 0 )
      {
        v111 = (_QWORD *)*((_QWORD *)v98 + 137);
        if ( v111 )
          v112 = v111[75];
        else
          v112 = 0LL;
        if ( v111 )
          v113 = v111[73];
        else
          v113 = 0LL;
        if ( v111 )
          v114 = v111[74];
        else
          v114 = 0LL;
        if ( v111 )
          v115 = (void *)v111[72];
        else
          v115 = 0LL;
        v127 = sub_140219130(
                 v98,
                 *((void **)v98 + 97),
                 P,
                 v115,
                 v114,
                 v113,
                 v112,
                 *(_DWORD **)(v100 + 24),
                 *(_DWORD *)(v100 + 16),
                 1,
                 1,
                 &v146);
        if ( v127 < 0 )
        {
LABEL_333:
          ExReleaseResourceLite(*v143);
          sub_1402F9540((__int64)KeGetCurrentThread());
          SeReleaseSubjectContext(&SubjectContext);
          v24 = v127;
          v16 = v125;
          goto LABEL_177;
        }
        v110 = v146;
      }
      if ( (_BYTE)v139 || v110 == 1 )
      {
LABEL_318:
        v127 = sub_1405F412C(SecurityDescriptor);
        if ( v127 < 0 )
          goto LABEL_333;
        v116 = v99;
        if ( (*(_DWORD *)(v100 + 48) & 1) != 0 )
        {
          if ( (v99 & 0x2000000) == 0 )
            v116 = v136 | v99;
          v117 = 0;
        }
        else
        {
          v117 = v136;
        }
        v118 = v148;
        v119 = v164;
        sub_1402FA820(
          (__int64)SecurityDescriptor,
          v155,
          (__int64)SubjectContext.PrimaryToken,
          (__int64)v98,
          v116,
          (__int128 *)v164,
          a6,
          &v179,
          v117,
          v125,
          (unsigned int *)v147,
          0LL,
          v148,
          a12,
          v43,
          (int *)&v176,
          (__int64 *)&P,
          0LL,
          0LL);
        v120 = *(_DWORD *)v147;
        if ( v128 )
          v120 = v141 & *(_DWORD *)v147;
        v141 = v120;
        if ( v120 )
          v95 = *v118;
        else
          v95 = -1073741790;
        v128 = 1;
        if ( v119 )
          sub_1405F42D0(v154, v119, a6);
        if ( v95 < 0 )
          break;
      }
      v97 = (unsigned int)((_DWORD)Src + 1);
    }
    *v50 = v95;
    v51 = (char *)v149;
    *(_DWORD *)v149 &= v141;
  }
  else
  {
    v51 = (char *)v149;
  }
  if ( ((*v143)->Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)*v143, 0LL, 0LL);
  v52 = (*v143)->Flag & 1;
  if ( v52 )
  {
    v77 = KeGetCurrentIrql();
    v78 = KeGetCurrentThread();
    if ( v77 > 2u )
      KeBugCheckEx(0x1C6u, 0LL, v77, 2uLL, 0LL);
    if ( !v77 && (*((_DWORD *)v78 + 29) & 0x400) == 0 && !*((_DWORD *)v78 + 121) )
LABEL_336:
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  v53 = v52 == 0;
  v54 = *v143;
  if ( v53 )
    sub_1402FDBE0((ULONG_PTR)v54, (ULONG_PTR)KeGetCurrentThread());
  else
    sub_14039CA48((ULONG_PTR)v54);
  sub_1402F9540((__int64)KeGetCurrentThread());
  SeReleaseSubjectContext(&SubjectContext);
  v55 = v131 & 0x2000000;
  if ( (v131 & 0x2000000) != 0 )
  {
    if ( !v126 || !*(_WORD *)((char *)&v177 + 5) && (*((_DWORD *)Object + 50) & 0x400000) == 0 )
    {
      v56 = a12;
      if ( a12 )
        v65 = a6;
      else
        v65 = 0;
      sub_1402402D0((__int64)&v170, v131, v51, (char *)v50, 0LL, v65);
      goto LABEL_84;
    }
LABEL_83:
    v56 = a12;
LABEL_84:
    v57 = a6;
    goto LABEL_85;
  }
  if ( !v126 || *(_WORD *)((char *)&v177 + 5) )
    goto LABEL_83;
  if ( (*((_DWORD *)Object + 50) & 0x400000) == 0 || HIDWORD(v176) )
  {
    v56 = a12;
    v14 = v145;
    if ( a12 )
    {
      v75 = 0;
      v138 = 0;
      v15 = (int *)v142;
      while ( v75 < a6 )
      {
        v14[v75] = -1073741790;
        v15[v75++] = 0;
        v138 = v75;
      }
    }
    else
    {
      *v145 = -1073741790;
      *(_DWORD *)v142 = 0;
    }
    v135 = -1073741790;
    v24 = 0;
    v127 = 0;
    v16 = v125;
    goto LABEL_99;
  }
  HIBYTE(v177) = 1;
  v56 = a12;
  v57 = a6;
  if ( a12 )
  {
    for ( i = 0; i < a6; ++i )
    {
      v122 = i;
      v50[v122] = 0;
      *(_DWORD *)&v51[v122 * 4] = v136 | v131;
    }
  }
  else
  {
    *v50 = 0;
    *(_DWORD *)v51 = v136 | v131;
  }
LABEL_85:
  if ( v55 )
  {
    if ( v56 )
      v66 = v57;
    else
      v66 = 0;
    sub_14023F0CC((int)v153, v131, v51, (char *)v50, 0LL, v66, &v132);
    if ( v56 )
      v67 = v57;
    else
      v67 = 0;
    sub_14023F0CC(v157, v131, v51, (char *)v50, 0LL, v67, v134);
  }
  v13 = (unsigned __int64)v145;
  *v145 = *v50;
  v14 = v142;
  *(_DWORD *)v142 = *(_DWORD *)v51;
  v135 = *v50;
  v15 = v148;
  v58 = v147;
  if ( byte_140C1B311 && v128 && *v50 >= 0 )
  {
    *(_DWORD *)v13 = *v148;
    *v14 &= *v58;
    v135 = *v15;
  }
  if ( v56 )
  {
    for ( j = 1; ; j = v138 + 1 )
    {
      v138 = j;
      if ( j >= v57 )
        break;
      v60 = j;
      *(_DWORD *)(v13 + v60 * 4) = v50[v60];
      v14[v60] = *(_DWORD *)&v51[v60 * 4];
      if ( byte_140C1B311 && v128 && v50[v60] >= 0 )
      {
        *(_DWORD *)(v13 + 4LL * j) = v15[j];
        v14[j] &= v58[j];
      }
    }
  }
  v24 = 0;
  v127 = 0;
  v16 = v125;
LABEL_99:
  if ( v140 && Object )
  {
    if ( v132 || v134[0] )
    {
LABEL_155:
      v68 = KeGetCurrentThread();
      --*((_WORD *)v68 + 242);
      v69 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      if ( v133 )
        v70 = v163;
      else
        v70 = *((_QWORD *)v69 + 138);
      sub_14024429C((char *)v69, 0LL, 0LL, v70, v140, v136 | v131, v135 >= 0);
      ExReleaseResourceLite(*((PERESOURCE *)v69 + 6));
      sub_1402F9540((__int64)KeGetCurrentThread());
      v24 = v127;
LABEL_105:
      if ( v24 >= 0
        && v135 < 0
        && !HIDWORD(v176)
        && (*((_DWORD *)Object + 50) & 0x4000) != 0
        && sub_14024F43C((__int64)&v176, v131) )
      {
        sub_140374F38();
      }
      goto LABEL_107;
    }
    if ( HIDWORD(v176) || (*((_DWORD *)Object + 50) & 0x4000) == 0 )
      goto LABEL_105;
    if ( v24 >= 0 )
    {
      if ( v135 >= 0 && !HIBYTE(v177) )
        goto LABEL_105;
      goto LABEL_155;
    }
  }
LABEL_107:
  if ( v56 )
  {
    if ( v149 )
      ExFreePoolWithTag(v149, 0);
    if ( v147 )
      ExFreePoolWithTag(v147, 0);
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x74726853u);
  if ( v154 )
    ExFreePoolWithTag(v154, 0);
  if ( v155 )
  {
    LOBYTE(v14) = 1;
    sub_140668444(v155, v16, v14, v15);
  }
  if ( v140 )
    SeReleaseSecurityDescriptor(v140, v16, 0LL, v15);
  if ( v130 )
  {
    v123 = *(_QWORD *)(v156 + 32);
    if ( v123 )
      sub_1405F4304(v123, v13, v14, v15);
  }
  if ( v164 )
    ExFreePoolWithTag(v164, 0);
  v61 = P;
  if ( P )
  {
    sub_14028AB90(P);
    ExFreePoolWithTag(v61, 0);
  }
  return (unsigned int)v24;
}
