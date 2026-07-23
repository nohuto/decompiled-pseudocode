/*
 * XREFs of sub_140722B40 @ 0x140722B40
 * Callers:
 *     sub_1406C0050 @ 0x1406C0050 (sub_1406C0050.c)
 *     sub_14071F1F0 @ 0x14071F1F0 (sub_14071F1F0.c)
 *     sub_1409CAAA0 @ 0x1409CAAA0 (sub_1409CAAA0.c)
 *     sub_1409CAB50 @ 0x1409CAB50 (sub_1409CAB50.c)
 * Callees:
 *     sub_140218B60 @ 0x140218B60 (sub_140218B60.c)
 *     sub_140219130 @ 0x140219130 (sub_140219130.c)
 *     SeTokenIsRestricted @ 0x14021F680 (SeTokenIsRestricted.c)
 *     RtlOwnerAcesPresent @ 0x14022A360 (RtlOwnerAcesPresent.c)
 *     sub_140232910 @ 0x140232910 (sub_140232910.c)
 *     sub_14023F0CC @ 0x14023F0CC (sub_14023F0CC.c)
 *     sub_1402402D0 @ 0x1402402D0 (sub_1402402D0.c)
 *     sub_14024429C @ 0x14024429C (sub_14024429C.c)
 *     sub_1402443C4 @ 0x1402443C4 (sub_1402443C4.c)
 *     sub_14024F43C @ 0x14024F43C (sub_14024F43C.c)
 *     sub_1402A458C @ 0x1402A458C (sub_1402A458C.c)
 *     sub_1402A45A8 @ 0x1402A45A8 (sub_1402A45A8.c)
 *     sub_1402A45CC @ 0x1402A45CC (sub_1402A45CC.c)
 *     sub_1402A4660 @ 0x1402A4660 (sub_1402A4660.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1402F9614 @ 0x1402F9614 (sub_1402F9614.c)
 *     sub_1402FA820 @ 0x1402FA820 (sub_1402FA820.c)
 *     sub_1402FB7E0 @ 0x1402FB7E0 (sub_1402FB7E0.c)
 *     sub_1402FBC90 @ 0x1402FBC90 (sub_1402FBC90.c)
 *     sub_1402FD2CC @ 0x1402FD2CC (sub_1402FD2CC.c)
 *     sub_1402FD4DC @ 0x1402FD4DC (sub_1402FD4DC.c)
 *     sub_140374F38 @ 0x140374F38 (sub_140374F38.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1405F4024 @ 0x1405F4024 (sub_1405F4024.c)
 *     sub_1405F412C @ 0x1405F412C (sub_1405F412C.c)
 *     sub_1405F41D0 @ 0x1405F41D0 (sub_1405F41D0.c)
 *     sub_1405F4288 @ 0x1405F4288 (sub_1405F4288.c)
 *     sub_1405F42D0 @ 0x1405F42D0 (sub_1405F42D0.c)
 *     sub_1405F4304 @ 0x1405F4304 (sub_1405F4304.c)
 *     sub_1405F4EC8 @ 0x1405F4EC8 (sub_1405F4EC8.c)
 *     sub_1405F5D18 @ 0x1405F5D18 (sub_1405F5D18.c)
 *     sub_140668444 @ 0x140668444 (sub_140668444.c)
 *     sub_14066846C @ 0x14066846C (sub_14066846C.c)
 *     SeLockSubjectContext @ 0x140722AE0 (SeLockSubjectContext.c)
 *     sub_140723E0C @ 0x140723E0C (sub_140723E0C.c)
 *     SeUnlockSubjectContext @ 0x140723F40 (SeUnlockSubjectContext.c)
 *     sub_140723F80 @ 0x140723F80 (sub_140723F80.c)
 *     sub_140724008 @ 0x140724008 (sub_140724008.c)
 *     sub_1407241BC @ 0x1407241BC (sub_1407241BC.c)
 *     sub_140724320 @ 0x140724320 (sub_140724320.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     SeReleaseSecurityDescriptor @ 0x1407B3DA0 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x1407B3DD0 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_1409C8EE8 @ 0x1409C8EE8 (sub_1409C8EE8.c)
 *     sub_1409CB770 @ 0x1409CB770 (sub_1409CB770.c)
 *     sub_1409CF1A0 @ 0x1409CF1A0 (sub_1409CF1A0.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140722B40(
        _DWORD *a1,
        __int64 a2,
        void **a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7,
        int a8,
        int a9,
        char a10,
        unsigned __int64 a11,
        int a12,
        __int64 a13,
        volatile void *a14,
        volatile void *a15,
        _BYTE *a16,
        char a17)
{
  __int64 v18; // rdi
  unsigned __int64 v19; // rbx
  char *v20; // r15
  unsigned __int8 v21; // si
  _DWORD *ClientToken; // r15
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // edi
  unsigned int *v26; // rbx
  __int16 v27; // cx
  __int64 v28; // rax
  char *v29; // rax
  __int64 v30; // rax
  char *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // r12d
  __int64 v36; // rcx
  unsigned int v37; // esi
  int v38; // eax
  int v39; // r14d
  char v40; // al
  char v41; // r12
  char v42; // di
  _DWORD *v43; // rax
  int *v44; // r12
  __int64 v45; // r14
  int v46; // r8d
  char v47; // al
  char *v48; // r10
  int v49; // r15d
  char v50; // r9
  char v51; // r8
  int *v52; // rsi
  int v53; // edi
  char v54; // r14
  char v55; // di
  _DWORD *v56; // rcx
  _DWORD *v57; // rdx
  _DWORD *v58; // r14
  unsigned int v59; // ecx
  int v60; // edx
  char *v61; // r10
  char *v62; // r11
  char v63; // r12
  int *v64; // r9
  unsigned int *v65; // r8
  _DWORD *v66; // r8
  _DWORD *v67; // r9
  __int64 v68; // rdx
  __int64 v69; // r9
  __int16 v71; // ax
  __int64 v72; // rax
  ACL *v73; // rcx
  int v74; // eax
  unsigned int v75; // eax
  int v76; // ebx
  unsigned int v77; // eax
  unsigned int v78; // eax
  struct _KTHREAD *CurrentThread; // rax
  char v80; // di
  char v81; // bl
  ULONGLONG v82; // rax
  int v83; // edx
  unsigned __int8 v84; // al
  unsigned __int8 v85; // cl
  void *v86; // rcx
  int v87; // ecx
  char *Pool2; // rax
  int *v89; // r8
  unsigned int v90; // edx
  unsigned int v91; // esi
  __int64 v92; // rcx
  __int16 v93; // dx
  __int64 v94; // rax
  ACL *v95; // rax
  _BYTE *v96; // rax
  int v97; // eax
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v98; // rdx
  char *v99; // rax
  unsigned int v100; // edx
  unsigned int v101; // esi
  __int64 v102; // rcx
  char *v103; // rax
  int *v104; // r10
  unsigned int v105; // eax
  __int64 v106; // r13
  PVOID v107; // r8
  _QWORD *v108; // rax
  __int64 v109; // r10
  __int64 v110; // rdx
  __int64 v111; // rcx
  void *v112; // r9
  int v113; // eax
  int v114; // ebx
  _QWORD *v115; // rax
  __int64 v116; // r8
  __int64 v117; // rdx
  __int64 v118; // rcx
  void *v119; // r9
  unsigned int v120; // r12d
  unsigned int v121; // ebx
  PVOID v122; // rbx
  int v123; // edx
  int v124; // eax
  int v125; // edx
  unsigned int v126; // r8d
  unsigned int v127; // edx
  unsigned int v128; // r9d
  __int64 v129; // rcx
  int PrimaryToken; // r10d
  __int16 v131; // ax
  __int64 v132; // rdx
  unsigned int v133; // ecx
  __int64 v134; // rcx
  unsigned int v135; // eax
  int v136; // r14d
  char v137; // di
  int v138; // r8d
  __int16 v139; // ax
  __int64 v140; // rdx
  unsigned int v141; // eax
  int v142; // r10d
  __int64 v143; // r8
  __int64 *v144; // r10
  __int64 v145; // rdx
  __int64 *v146; // r8
  struct _LIST_ENTRY *Blink; // rcx
  int Object; // [rsp+20h] [rbp-2E8h]
  int HandleInformation; // [rsp+28h] [rbp-2E0h]
  char v150; // [rsp+30h] [rbp-2D8h]
  unsigned int v151; // [rsp+40h] [rbp-2C8h]
  unsigned int v152; // [rsp+40h] [rbp-2C8h]
  char v153; // [rsp+A0h] [rbp-268h]
  unsigned __int8 v154; // [rsp+A1h] [rbp-267h] BYREF
  char v155; // [rsp+A2h] [rbp-266h]
  unsigned __int8 v156; // [rsp+A3h] [rbp-265h] BYREF
  char v157; // [rsp+A4h] [rbp-264h]
  char v158; // [rsp+A5h] [rbp-263h]
  char v159; // [rsp+A6h] [rbp-262h]
  char v160; // [rsp+A7h] [rbp-261h]
  int v161; // [rsp+A8h] [rbp-260h]
  int v162; // [rsp+B0h] [rbp-258h]
  PVOID v163; // [rsp+B8h] [rbp-250h]
  char v164; // [rsp+C0h] [rbp-248h] BYREF
  char v165; // [rsp+C1h] [rbp-247h]
  int v166; // [rsp+C4h] [rbp-244h] BYREF
  char v167; // [rsp+C8h] [rbp-240h] BYREF
  char v168; // [rsp+C9h] [rbp-23Fh] BYREF
  _BYTE v169[6]; // [rsp+CAh] [rbp-23Eh] BYREF
  PVOID v170; // [rsp+D0h] [rbp-238h] BYREF
  PVOID v171; // [rsp+D8h] [rbp-230h]
  _WORD v172[2]; // [rsp+E0h] [rbp-228h] BYREF
  int v173; // [rsp+E4h] [rbp-224h] BYREF
  unsigned int v174; // [rsp+E8h] [rbp-220h] BYREF
  char v175; // [rsp+ECh] [rbp-21Ch]
  unsigned __int8 v176; // [rsp+EDh] [rbp-21Bh] BYREF
  unsigned __int8 v177; // [rsp+EEh] [rbp-21Ah] BYREF
  char v178; // [rsp+EFh] [rbp-219h]
  char v179; // [rsp+F0h] [rbp-218h]
  char v180; // [rsp+F1h] [rbp-217h]
  char v181; // [rsp+F5h] [rbp-213h]
  char v182; // [rsp+F7h] [rbp-211h]
  int v183; // [rsp+F8h] [rbp-210h]
  int v184; // [rsp+FCh] [rbp-20Ch]
  int v185; // [rsp+100h] [rbp-208h]
  int *v186; // [rsp+108h] [rbp-200h]
  int v187; // [rsp+110h] [rbp-1F8h]
  unsigned int v188; // [rsp+114h] [rbp-1F4h]
  int v189; // [rsp+118h] [rbp-1F0h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+120h] [rbp-1E8h] BYREF
  unsigned int v191; // [rsp+140h] [rbp-1C8h]
  int v192; // [rsp+144h] [rbp-1C4h] BYREF
  __int64 v193; // [rsp+148h] [rbp-1C0h] BYREF
  int *v194; // [rsp+150h] [rbp-1B8h]
  PVOID v195; // [rsp+158h] [rbp-1B0h] BYREF
  PVOID v196; // [rsp+160h] [rbp-1A8h] BYREF
  int v197; // [rsp+168h] [rbp-1A0h] BYREF
  ACL *v198; // [rsp+170h] [rbp-198h]
  volatile void *v199; // [rsp+178h] [rbp-190h]
  __int64 v200; // [rsp+180h] [rbp-188h] BYREF
  volatile void *Address; // [rsp+188h] [rbp-180h]
  PVOID v202; // [rsp+190h] [rbp-178h] BYREF
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v203; // [rsp+198h] [rbp-170h] BYREF
  int v204; // [rsp+1A0h] [rbp-168h]
  PVOID v205; // [rsp+1A8h] [rbp-160h] BYREF
  PVOID P; // [rsp+1B0h] [rbp-158h] BYREF
  _DWORD *v207; // [rsp+1B8h] [rbp-150h]
  int v208[2]; // [rsp+1C0h] [rbp-148h] BYREF
  _BYTE *v209; // [rsp+1C8h] [rbp-140h]
  int v210; // [rsp+1D0h] [rbp-138h] BYREF
  __int64 v211; // [rsp+1D8h] [rbp-130h] BYREF
  PVOID v212; // [rsp+1E0h] [rbp-128h]
  PVOID v213; // [rsp+1E8h] [rbp-120h] BYREF
  void *Src; // [rsp+1F0h] [rbp-118h]
  int v215; // [rsp+1F8h] [rbp-110h] BYREF
  PVOID v216; // [rsp+200h] [rbp-108h] BYREF
  _DWORD *v217; // [rsp+208h] [rbp-100h]
  __int64 v218; // [rsp+210h] [rbp-F8h]
  __int64 v219; // [rsp+218h] [rbp-F0h]
  void *v220; // [rsp+230h] [rbp-D8h]
  __int128 v221; // [rsp+238h] [rbp-D0h] BYREF
  void **v222; // [rsp+248h] [rbp-C0h]
  __int64 v223; // [rsp+250h] [rbp-B8h]
  __int64 v224; // [rsp+258h] [rbp-B0h]
  unsigned __int64 v225; // [rsp+260h] [rbp-A8h]
  _OWORD SecurityDescriptor[2]; // [rsp+268h] [rbp-A0h] BYREF
  __int64 v227; // [rsp+288h] [rbp-80h]
  __int128 v228; // [rsp+290h] [rbp-78h] BYREF
  __int64 v229; // [rsp+2A0h] [rbp-68h]
  int v230; // [rsp+2A8h] [rbp-60h]
  __int128 v231; // [rsp+2B0h] [rbp-58h] BYREF

  v218 = a4;
  v217 = a1;
  v207 = a1;
  v211 = a2;
  v222 = a3;
  v223 = a4;
  v219 = a5;
  v224 = a6;
  Src = a7;
  v225 = a11;
  v162 = a12;
  v18 = a13;
  v199 = a14;
  v19 = (unsigned __int64)a15;
  Address = a15;
  v209 = a16;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v161 = 0;
  v174 = 0;
  v20 = 0LL;
  v163 = 0LL;
  v165 = 0;
  v166 = -1073741823;
  v210 = 0;
  v171 = 0LL;
  v215 = 0;
  v194 = 0LL;
  v187 = 0;
  v183 = 0;
  v175 = 0;
  P = 0LL;
  v195 = 0LL;
  v205 = 0LL;
  v170 = 0LL;
  v200 = 0LL;
  v193 = 0LL;
  v173 = 0;
  v231 = 0LL;
  v202 = 0LL;
  v154 = 0;
  v156 = 0;
  v169[0] = 0;
  v164 = 0;
  v178 = 0;
  v160 = 0;
  v157 = 0;
  v176 = 1;
  v177 = 0;
  v212 = 0LL;
  v220 = 0LL;
  v179 = 0;
  v221 = 0LL;
  v208[1] = 0;
  v198 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v227 = 0LL;
  v203 = 0LL;
  v159 = 0;
  v158 = 0;
  v155 = 0;
  v180 = 0;
  v172[0] = 999;
  v228 = 0LL;
  v229 = 0LL;
  v230 = 0;
  v185 = 0;
  v182 = 0;
  v184 = 0;
  v196 = 0LL;
  v192 = 0;
  LODWORD(v186) = 0;
  v181 = 0;
  v167 = 0;
  v168 = 0;
  v213 = 0LL;
  v197 = -1;
  v208[0] = -1;
  v21 = *((_BYTE *)KeGetCurrentThread() + 562);
  v153 = v21;
  v169[1] = v21;
  SeCaptureSubjectContext(&SubjectContext);
  if ( a9 )
  {
    if ( a9 != 1 )
    {
      v25 = -1073741811;
      goto LABEL_372;
    }
    v204 = 7;
  }
  else
  {
    v204 = 2;
  }
  ClientToken = SubjectContext.ClientToken;
  if ( a3 )
    goto LABEL_6;
  if ( !SubjectContext.ClientToken )
  {
    v25 = -1073741732;
    v20 = 0LL;
LABEL_372:
    v58 = 0LL;
    goto LABEL_373;
  }
  if ( SubjectContext.ImpersonationLevel < SecurityIdentification )
  {
    v25 = -1073741659;
    v20 = 0LL;
    goto LABEL_372;
  }
LABEL_6:
  if ( a17 )
  {
    if ( !v162 || (unsigned int)v162 > 0x1000 )
    {
      v25 = -1073741811;
      v161 = -1073741811;
      goto LABEL_19;
    }
    ProbeForWrite(Address, 4LL * (unsigned int)v162, 4u);
    ProbeForWrite(v199, 4LL * (unsigned int)v162, 4u);
  }
  else
  {
    v23 = v19;
    if ( v19 >= 0x7FFFFFFF0000LL )
      v23 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v23 = *(_DWORD *)v23;
    v24 = (__int64)v199;
    if ( (unsigned __int64)v199 >= 0x7FFFFFFF0000LL )
      v24 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v24 = *(_DWORD *)v24;
  }
  if ( (v18 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v231 = *(_OWORD *)v18;
  ClientToken = SubjectContext.ClientToken;
  v25 = v161;
LABEL_19:
  if ( v25 < 0 )
    goto LABEL_187;
  if ( !a3 )
  {
LABEL_21:
    if ( !ClientToken )
      ClientToken = SubjectContext.PrimaryToken;
    v207 = ClientToken;
    if ( (unsigned __int8)sub_140724008(&SubjectContext, v21) )
    {
LABEL_24:
      if ( (a8 & 0xF0000000) != 0 )
      {
        v25 = -1073741594;
        v20 = (char *)v163;
        v58 = v163;
        goto LABEL_373;
      }
      v25 = SeCaptureSecurityDescriptor(a6, v21, 1, 0, (__int64)&v170);
      v161 = v25;
      if ( v25 < 0 )
      {
        v26 = 0LL;
        goto LABEL_190;
      }
      v26 = (unsigned int *)v170;
      if ( v170 )
      {
        v27 = *((_WORD *)v170 + 1);
        if ( v27 >= 0 )
        {
          v29 = (char *)*((_QWORD *)v170 + 1);
        }
        else
        {
          v28 = *((unsigned int *)v170 + 1);
          if ( !(_DWORD)v28 )
            goto LABEL_192;
          v29 = (char *)v170 + v28;
        }
        if ( v29 )
        {
          if ( v27 >= 0 )
          {
            v31 = (char *)*((_QWORD *)v170 + 2);
          }
          else
          {
            v30 = *((unsigned int *)v170 + 2);
            if ( !(_DWORD)v30 )
              goto LABEL_192;
            v31 = (char *)v170 + v30;
          }
          if ( v31 )
          {
            v32 = (__int64)v209;
            if ( (unsigned __int64)v209 >= 0x7FFFFFFF0000LL )
              v32 = 0x7FFFFFFF0000LL;
            *(_BYTE *)v32 = *(_BYTE *)v32;
            v25 = sub_140723E0C(v217, &P);
            v161 = v25;
            if ( v25 >= 0 )
            {
              v25 = sub_140723E0C(v218, &v195);
              v161 = v25;
              if ( v25 >= 0 )
              {
                v25 = sub_140723E0C(v219, &v205);
                v161 = v25;
              }
            }
            LOBYTE(v35) = v185;
            if ( v25 >= 0 )
            {
              if ( Src )
              {
                v25 = sub_14066846C((char *)Src, v21, v33, v34, Object, 1, (PSID *)&v200);
                if ( v25 < 0 )
                {
                  v200 = 0LL;
                  v20 = (char *)v163;
                  v58 = v163;
                  goto LABEL_373;
                }
              }
              v25 = sub_1402FD2CC(v225, v162, v21, &v193);
              if ( v25 >= 0 )
              {
                v26 = (unsigned int *)v170;
                v25 = sub_1402F9614(v36, (__int64)v170, &SubjectContext, 0LL, 0LL, 1, &v197);
                if ( v25 < 0 )
                {
LABEL_191:
                  v20 = (char *)v163;
                  v58 = v163;
                  goto LABEL_117;
                }
                v37 = a8;
                v25 = sub_1402A458C(&v197, a8);
                v161 = v25;
                if ( v25 < 0 )
                {
                  v167 = 1;
LABEL_48:
                  if ( v25 < 0 )
                    goto LABEL_54;
                  v25 = sub_1402FB7E0((int *)&v231, (__int64)v26, 0LL, (__int64)ClientToken, 1, (__int64)&v221);
                  if ( v25 >= 0 )
                  {
                    v38 = sub_1402A45A8(&v221, v37);
                    v25 = v38;
                    v161 = v38;
                    if ( (v38 < 0 || (v37 & 0x2000000) != 0) && (ClientToken[50] & 0x4000) != 0 )
                    {
                      v35 = (unsigned __int8)v35;
                      if ( HIDWORD(v221) <= 0x2000 )
                        v35 = 1;
                      v185 = v35;
                    }
                    if ( v38 >= 0 || (_BYTE)v35 )
                    {
                      v25 = sub_1402FD4DC(&a8, &v173, (__int64 *)&SubjectContext, 0LL, (__int64)&v202, v153);
                      v161 = v25;
                      v37 = a8;
                      if ( !a8 )
                      {
                        v87 = (unsigned __int8)v186;
                        v39 = v173;
                        if ( v173 )
                          v87 = 1;
                        LODWORD(v186) = v87;
LABEL_55:
                        SeLockSubjectContext(&SubjectContext);
                        if ( v25 < 0 && !(_BYTE)v35 )
                        {
                          v156 = 1;
                          v166 = v25;
                          if ( a17 )
                          {
                            Pool2 = (char *)ExAllocatePool2(256LL, 8LL * (unsigned int)v162, 1632068947LL);
                            v163 = Pool2;
                            if ( !Pool2 )
                            {
                              SeUnlockSubjectContext(&SubjectContext);
                              v25 = -1073741670;
                              v21 = v153;
                              v20 = 0LL;
                              v58 = v171;
                              goto LABEL_117;
                            }
                            v165 = 1;
                            v89 = (int *)&Pool2[4 * v162];
                            v90 = 0;
                            v91 = v162;
                            while ( v90 < v91 )
                            {
                              v92 = v90;
                              *(_DWORD *)&Pool2[v92 * 4] = v174;
                              v89[v92] = v166;
                              ++v90;
                            }
                            v37 = a8;
                            v44 = v89;
                          }
                          else
                          {
                            v163 = &v174;
                            v44 = &v166;
                          }
                          goto LABEL_71;
                        }
                        v40 = sub_1402A45CC((__int64)ClientToken);
                        v155 = v40;
                        v26 = (unsigned int *)v170;
                        if ( !byte_140C1B311 )
                          goto LABEL_57;
                        v93 = *((_WORD *)v170 + 1);
                        if ( (v93 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
                          goto LABEL_57;
                        if ( v93 >= 0 )
                        {
                          v95 = (ACL *)*((_QWORD *)v170 + 3);
                        }
                        else
                        {
                          v94 = *((unsigned int *)v170 + 3);
                          if ( !(_DWORD)v94 )
                          {
                            v198 = 0LL;
LABEL_220:
                            v40 = v155;
LABEL_57:
                            v41 = v159;
                            v25 = v161;
                            goto LABEL_58;
                          }
                          v95 = (ACL *)((char *)v170 + v94);
                        }
                        v198 = v95;
                        if ( v95 )
                        {
                          v96 = sub_1405F4288(v95);
                          if ( v96 )
                          {
                            v97 = sub_1405F5D18(v96, &v203);
                            v98 = v203;
                            if ( v97 < 0 )
                              v98 = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)qword_140D3B0F8;
                            v203 = v98;
                            v25 = 0;
                            v161 = 0;
                            v41 = 1;
                            v159 = 1;
                            v40 = v155;
LABEL_58:
                            v37 = a8;
                            if ( (a8 & 0x2060000) != 0
                              && v40
                              && ((v71 = *((_WORD *)v26 + 1), (v71 & 4) == 0)
                                ? (v73 = 0LL)
                                : v71 >= 0
                                ? (v73 = (ACL *)*((_QWORD *)v26 + 4))
                                : (v72 = v26[4], !(_DWORD)v72)
                                ? (v73 = 0LL)
                                : (v73 = (ACL *)((char *)v26 + v72)),
                                  !RtlOwnerAcesPresent(v73)) )
                            {
                              if ( (v37 & 0x2000000) != 0 )
                              {
                                v74 = 393216;
                                v39 = v173 | 0x60000;
                              }
                              else
                              {
                                v74 = v37 & 0x60000;
                                v39 = v173 | v37 & 0x60000;
                              }
                              v184 = v74;
                              v173 = v39;
                              v37 &= 0xFFF9FFFF;
                              a8 = v37;
                            }
                            else
                            {
                              v39 = v173;
                            }
                            if ( !v37 && (!v41 || (_BYTE)v186) && ((ClientToken[50] & 0x2000) != 0 || !v184) )
                            {
                              v174 = v39;
                              if ( v39 )
                              {
                                v83 = 0;
                                v84 = 0;
                                v85 = 1;
                              }
                              else
                              {
                                v83 = -1073741790;
                                v84 = 1;
                                v85 = 0;
                              }
                              v154 = v85;
                              v156 = v84;
                              v166 = v83;
                              if ( !a17 )
                              {
                                v163 = &v174;
                                v44 = &v166;
LABEL_71:
                                if ( !ClientToken )
                                  goto LABEL_78;
                                if ( v167 || v168 )
                                  goto LABEL_161;
                                if ( !HIDWORD(v228) && (ClientToken[50] & 0x4000) != 0 )
                                {
                                  if ( v25 < 0 )
                                    goto LABEL_78;
                                  if ( v166 < 0 || HIBYTE(v229) )
                                  {
LABEL_161:
                                    CurrentThread = KeGetCurrentThread();
                                    --*((_WORD *)CurrentThread + 242);
                                    ExAcquireResourceSharedLite(*((PERESOURCE *)ClientToken + 6), 1u);
                                    v80 = v166 >= 0;
                                    v81 = a8 | v173;
                                    v82 = sub_140232910((__int64 *)&SubjectContext);
                                    sub_14024429C((char *)ClientToken, 0LL, 0LL, v82, (__int64)v170, v81, v80);
                                    ExReleaseResourceLite(*((PERESOURCE *)ClientToken + 6));
                                    sub_1402F9540((__int64)KeGetCurrentThread());
                                    v37 = a8;
                                    v25 = v161;
                                    v26 = (unsigned int *)v170;
                                    v39 = v173;
                                  }
                                }
                                if ( v25 >= 0
                                  && v166 < 0
                                  && !HIDWORD(v228)
                                  && (ClientToken[50] & 0x4000) != 0
                                  && sub_14024F43C((__int64)&v228, v37) )
                                {
                                  sub_140374F38();
                                }
LABEL_78:
                                if ( v178 )
                                  goto LABEL_90;
                                v49 = v204;
                                if ( v204 == 2 )
                                {
                                  if ( v154 )
                                  {
                                    LOBYTE(HandleInformation) = 0;
                                    v160 = sub_140723F80(0LL, v195, v154, 0LL, &SubjectContext, HandleInformation, v172);
                                  }
                                  if ( !v156 )
                                  {
LABEL_83:
                                    v50 = v157;
                                    goto LABEL_84;
                                  }
                                  LOBYTE(HandleInformation) = 0;
                                  v50 = sub_140723F80(0LL, v195, 0LL, v156, &SubjectContext, HandleInformation, v172);
                                  v157 = v50;
                                }
                                else
                                {
                                  if ( v154 )
                                  {
                                    v172[0] = 151;
                                    v160 = sub_140724320(151LL, v154, 0LL, &SubjectContext);
                                  }
                                  if ( !v156 )
                                    goto LABEL_83;
                                  v172[0] = 151;
                                  v50 = sub_140724320(151LL, 0LL, v156, &SubjectContext);
                                  v157 = v50;
                                }
LABEL_84:
                                v51 = v160;
                                if ( v160 || v50 )
                                {
                                  PrimaryToken = (int)SubjectContext.PrimaryToken;
                                  if ( SubjectContext.ClientToken )
                                    PrimaryToken = (int)SubjectContext.ClientToken;
                                  v131 = *((_WORD *)v26 + 1);
                                  if ( (v131 & 0x10) != 0 )
                                  {
                                    if ( v131 >= 0 )
                                    {
                                      v132 = *((_QWORD *)v26 + 3);
                                    }
                                    else
                                    {
                                      v133 = v26[3];
                                      if ( v133 )
                                        LODWORD(v132) = (_DWORD)v26 + v133;
                                      else
                                        LODWORD(v132) = 0;
                                    }
                                  }
                                  else
                                  {
                                    LODWORD(v132) = 0;
                                  }
                                  if ( (v131 & 0x10) != 0 )
                                  {
                                    if ( v131 >= 0 )
                                    {
                                      v134 = *((_QWORD *)v26 + 3);
                                    }
                                    else
                                    {
                                      v135 = v26[3];
                                      if ( v135 )
                                        LODWORD(v134) = (_DWORD)v26 + v135;
                                      else
                                        LODWORD(v134) = 0;
                                    }
                                  }
                                  else
                                  {
                                    LODWORD(v134) = 0;
                                  }
                                  v136 = v37 | v39;
                                  v52 = (int *)v163;
                                  v137 = a17;
                                  sub_1409CB770(
                                    v134,
                                    v132,
                                    PrimaryToken,
                                    v136,
                                    v193,
                                    v162,
                                    a17,
                                    (__int64)v44,
                                    (__int64)v163,
                                    v200,
                                    v155,
                                    (__int64)v169,
                                    (__int64)&v164);
                                  v138 = (int)SubjectContext.PrimaryToken;
                                  if ( SubjectContext.ClientToken )
                                    v138 = (int)SubjectContext.ClientToken;
                                  v139 = *((_WORD *)v26 + 1);
                                  if ( (v139 & 0x10) != 0 )
                                  {
                                    if ( v139 >= 0 )
                                    {
                                      v140 = *((_QWORD *)v26 + 3);
                                    }
                                    else
                                    {
                                      v141 = v26[3];
                                      if ( v141 )
                                        LODWORD(v140) = (_DWORD)v26 + v141;
                                      else
                                        LODWORD(v140) = 0;
                                    }
                                  }
                                  else
                                  {
                                    LODWORD(v140) = 0;
                                  }
                                  v150 = v137;
                                  v53 = v162;
                                  sub_1405F4EC8(
                                    (__int64)v195,
                                    v140,
                                    v138,
                                    v136,
                                    v193,
                                    v162,
                                    v150,
                                    (__int64)v44,
                                    (__int64)v52,
                                    v200,
                                    v155,
                                    (__int64)v169,
                                    &v164);
                                  v51 = v160;
                                  v50 = v157;
                                }
                                else
                                {
                                  v52 = (int *)v163;
                                  v53 = v162;
                                }
                                if ( v169[0] || v164 )
                                {
                                  v142 = (unsigned __int8)v183;
                                  if ( v154 )
                                    v142 = 1;
                                  v183 = v142;
                                  v54 = a17;
                                  if ( v169[0] && v51 )
                                  {
                                    v143 = (__int64)v52;
                                    if ( !a17 )
                                      v143 = 0LL;
                                    v144 = &v211;
                                    if ( !v154 )
                                      LODWORD(v144) = 0;
                                    v26 = (unsigned int *)v170;
                                    sub_1409C8EE8(
                                      v172[0],
                                      (int)P,
                                      (int)v144,
                                      (int)v195,
                                      (__int64)v205,
                                      v170,
                                      (__int64)SubjectContext.ClientToken,
                                      (__int64)SubjectContext.PrimaryToken,
                                      *v52,
                                      *v52,
                                      (__int64)v202,
                                      1,
                                      *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1088LL),
                                      v49,
                                      v193,
                                      v53,
                                      v143,
                                      0LL,
                                      0LL);
                                    v50 = v157;
                                  }
                                  if ( v164 && v50 )
                                  {
                                    v145 = (__int64)v52;
                                    if ( !v54 )
                                      v145 = 0LL;
                                    v146 = &v211;
                                    if ( !v154 )
                                      LODWORD(v146) = 0;
                                    v26 = (unsigned int *)v170;
                                    sub_1409C8EE8(
                                      v172[0],
                                      (int)P,
                                      (int)v146,
                                      (int)v195,
                                      (__int64)v205,
                                      v170,
                                      (__int64)SubjectContext.ClientToken,
                                      (__int64)SubjectContext.PrimaryToken,
                                      a8,
                                      a8,
                                      (__int64)v202,
                                      0,
                                      *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1088LL),
                                      v49,
                                      v193,
                                      v53,
                                      v145,
                                      0LL,
                                      0LL);
                                  }
                                  goto LABEL_91;
                                }
                                if ( v202 && v154 )
                                {
                                  sub_1407241BC(
                                    (_DWORD)P,
                                    (_DWORD)v195,
                                    (_DWORD)v205,
                                    (unsigned int)&v211,
                                    (__int64)SubjectContext.ClientToken,
                                    (__int64)SubjectContext.PrimaryToken,
                                    *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1088LL),
                                    a8,
                                    (__int64)v202,
                                    v154);
                                  v55 = 0;
                                  v26 = (unsigned int *)v170;
                                  v54 = a17;
LABEL_92:
                                  SeUnlockSubjectContext(&SubjectContext);
                                  if ( v54 )
                                  {
                                    v59 = 0;
                                    v191 = 0;
                                    if ( v44 )
                                    {
                                      v20 = (char *)v163;
                                      v66 = Address;
                                      v67 = v199;
                                      v58 = v171;
                                      while ( v59 < v162 )
                                      {
                                        v68 = v59;
                                        v66[v68] = v44[v68];
                                        v67[v68] = *(_DWORD *)&v20[v68 * 4];
                                        if ( byte_140C1B311 && v158 && v44[v68] >= 0 )
                                        {
                                          v66[v59] = v194[v59];
                                          v67[v59] &= v58[v59];
                                        }
                                        v191 = ++v59;
                                        v26 = (unsigned int *)v170;
                                      }
                                      goto LABEL_116;
                                    }
                                    v60 = v166;
                                    v61 = (char *)Address;
                                    v62 = (char *)v199;
                                    v63 = v158;
                                    while ( v59 < v162 )
                                    {
                                      v64 = (int *)&v61[4 * v59];
                                      *v64 = v60;
                                      v65 = (unsigned int *)&v62[4 * v59];
                                      *v65 = v174;
                                      if ( byte_140C1B311 && v63 )
                                      {
                                        v60 = v166;
                                        if ( v166 >= 0 )
                                        {
                                          *v64 = v166;
                                          *v65 &= v174;
                                        }
                                      }
                                      else
                                      {
                                        v60 = v166;
                                      }
                                      v191 = ++v59;
                                      v26 = (unsigned int *)v170;
                                    }
                                  }
                                  else
                                  {
                                    v56 = Address;
                                    *(_DWORD *)Address = v166;
                                    v57 = v199;
                                    *(_DWORD *)v199 = v174;
                                    if ( byte_140C1B311 && v158 && v166 >= 0 )
                                    {
                                      *v56 = *v194;
                                      v58 = v171;
                                      *v57 &= *(_DWORD *)v171;
                                      v26 = (unsigned int *)v170;
                                      goto LABEL_96;
                                    }
                                    v26 = (unsigned int *)v170;
                                  }
                                  v58 = v171;
LABEL_96:
                                  v20 = (char *)v163;
LABEL_116:
                                  *v209 = v55;
                                  v25 = 0;
                                  v161 = 0;
                                  v21 = v153;
                                  goto LABEL_117;
                                }
LABEL_90:
                                v54 = a17;
LABEL_91:
                                v55 = v183;
                                goto LABEL_92;
                              }
                              v99 = (char *)ExAllocatePool2(256LL, 8LL * (unsigned int)v162, 1632068947LL);
                              v163 = v99;
                              if ( v99 )
                              {
                                v165 = 1;
                                v44 = (int *)&v99[4 * v162];
                                v100 = 0;
                                v101 = v162;
                                while ( v100 < v101 )
                                {
                                  v102 = v100;
                                  *(_DWORD *)&v99[v102 * 4] = v174;
                                  v44[v102] = v166;
                                  ++v100;
                                }
                                v37 = a8;
                                goto LABEL_71;
                              }
LABEL_240:
                              v25 = -1073741670;
                              SeUnlockSubjectContext(&SubjectContext);
                              v21 = v153;
                              v20 = (char *)v163;
                              v58 = v171;
                              goto LABEL_117;
                            }
                            v42 = a17;
                            if ( a17 )
                            {
                              v43 = (_DWORD *)ExAllocatePool2(256LL, 8LL * (unsigned int)v162, 1632068947LL);
                              v163 = v43;
                              if ( !v43 )
                                goto LABEL_240;
                              v165 = 1;
                              v44 = &v43[v162];
                              v42 = a17;
                            }
                            else
                            {
                              v43 = &v174;
                              v163 = &v174;
                              v44 = &v166;
                            }
                            v186 = v44;
                            LODWORD(v228) = v184;
                            v151 = v39;
                            v45 = (unsigned int)v162;
                            sub_1402FA820(
                              (__int64)v26,
                              v200,
                              (__int64)SubjectContext.PrimaryToken,
                              (__int64)ClientToken,
                              v37,
                              (__int128 *)v193,
                              v162,
                              &v231,
                              v151,
                              v153,
                              v43,
                              0LL,
                              v44,
                              v42,
                              v155,
                              (int *)&v228,
                              (__int64 *)&v196,
                              (char *)&v154,
                              (char *)&v156);
                            if ( byte_140C1B311 && *v44 >= 0 && v159 )
                            {
                              if ( v42 )
                              {
                                v103 = (char *)ExAllocatePool2(256LL, 8 * v45, 1632068947LL);
                                v171 = v103;
                                if ( !v103 )
                                {
                                  SeUnlockSubjectContext(&SubjectContext);
                                  SeReleaseSubjectContext(&SubjectContext);
                                  v25 = -1073741670;
LABEL_249:
                                  v21 = v153;
                                  v20 = (char *)v163;
                                  v58 = v171;
                                  goto LABEL_373;
                                }
                                v104 = (int *)&v103[4 * v45];
                              }
                              else
                              {
                                v171 = &v210;
                                v104 = &v215;
                              }
                              v194 = v104;
                              if ( v162 )
                              {
                                v25 = sub_1405F41D0(v193, v162, (__int64 *)&v213);
                                v161 = v25;
                                if ( v25 < 0 )
                                {
                                  v21 = v153;
                                  v20 = (char *)v163;
                                  v58 = v171;
                                  goto LABEL_373;
                                }
                              }
                              else
                              {
                                v25 = v161;
                              }
                              LOBYTE(v44) = 0;
                              v189 = (int)v44;
                              v105 = 0;
                              v37 = a8;
                              v39 = v173;
                              v46 = v162;
                              while ( 1 )
                              {
                                v188 = v105;
                                if ( v105 >= HIDWORD(v203[2].Linkage.Blink) )
                                  break;
                                v106 = *(&v203[2].Signature + v105);
                                if ( !*(_QWORD *)(v106 + 24) )
                                  goto LABEL_295;
                                v107 = v196;
                                if ( !v196 )
                                {
                                  LODWORD(v44) = (unsigned __int8)v44;
                                  if ( (int)sub_140218B60((__int64)v198, (__int64 *)&v196) < 0 )
                                    LODWORD(v44) = 1;
                                  v189 = (int)v44;
                                  v107 = v196;
                                }
                                v108 = (_QWORD *)*((_QWORD *)ClientToken + 137);
                                v109 = v108 ? v108[75] : 0LL;
                                v110 = v108 ? v108[73] : 0LL;
                                v111 = v108 ? v108[74] : 0LL;
                                v112 = v108 ? (void *)v108[72] : 0LL;
                                v113 = sub_140219130(
                                         ClientToken,
                                         *((void **)ClientToken + 97),
                                         v107,
                                         v112,
                                         v111,
                                         v110,
                                         v109,
                                         *(_DWORD **)(v106 + 24),
                                         *(_DWORD *)(v106 + 16),
                                         1,
                                         0,
                                         &v192);
                                v25 = v113;
                                v161 = v113;
                                v114 = v192;
                                if ( v192 == 1 )
                                  goto LABEL_295;
                                if ( v113 < 0 )
                                  goto LABEL_249;
                                if ( SeTokenIsRestricted(ClientToken) )
                                {
                                  v115 = (_QWORD *)*((_QWORD *)ClientToken + 137);
                                  if ( v115 )
                                    v116 = v115[75];
                                  else
                                    v116 = 0LL;
                                  if ( v115 )
                                    v117 = v115[73];
                                  else
                                    v117 = 0LL;
                                  if ( v115 )
                                    v118 = v115[74];
                                  else
                                    v118 = 0LL;
                                  if ( v115 )
                                    v119 = (void *)v115[72];
                                  else
                                    v119 = 0LL;
                                  v25 = sub_140219130(
                                          ClientToken,
                                          *((void **)ClientToken + 97),
                                          v196,
                                          v119,
                                          v118,
                                          v117,
                                          v116,
                                          *(_DWORD **)(v106 + 24),
                                          *(_DWORD *)(v106 + 16),
                                          1,
                                          1,
                                          &v192);
                                  v161 = v25;
                                  if ( v25 < 0 )
                                    goto LABEL_249;
                                  v114 = v192;
                                }
                                if ( (_BYTE)v44 || v114 == 1 )
                                {
LABEL_295:
                                  if ( (*(_DWORD *)(v106 + 48) & 1) != 0 )
                                  {
                                    if ( (v37 & 0x2000000) != 0 )
                                      v120 = v37;
                                    else
                                      v120 = v37 | v39;
                                    v121 = 0;
                                  }
                                  else
                                  {
                                    v120 = v37;
                                    v121 = v39;
                                  }
                                  v25 = sub_1405F412C(SecurityDescriptor, *(unsigned __int8 **)(v106 + 32), v198);
                                  v161 = v25;
                                  if ( v25 < 0 )
                                    goto LABEL_249;
                                  v152 = v121;
                                  v122 = v213;
                                  sub_1402FA820(
                                    (__int64)SecurityDescriptor,
                                    v200,
                                    (__int64)SubjectContext.PrimaryToken,
                                    (__int64)SubjectContext.ClientToken,
                                    v120,
                                    (__int128 *)v213,
                                    v162,
                                    &v231,
                                    v152,
                                    v153,
                                    (unsigned int *)v171,
                                    0LL,
                                    v194,
                                    a17,
                                    v155,
                                    (int *)&v228,
                                    (__int64 *)&v196,
                                    (char *)&v176,
                                    (char *)&v177);
                                  v123 = *(_DWORD *)v171;
                                  if ( v158 )
                                    v123 = v187 & *(_DWORD *)v171;
                                  v187 = v123;
                                  v46 = v162;
                                  if ( v122 )
                                    sub_1405F42D0(v193, (__int64)v122, v162);
                                  v158 = 1;
                                  LOBYTE(v44) = v189;
                                }
                                else
                                {
                                  v46 = v162;
                                }
                                v105 = v188 + 1;
                              }
                              v154 = v176;
                              v156 = v177;
                              v124 = v187;
                              *(_DWORD *)v171 &= v187;
                              v44 = v186;
                              if ( !v124 )
                              {
                                *v194 = -1073741790;
                                v154 = 0;
                                v156 = 1;
                              }
                            }
                            else
                            {
                              v37 = a8;
                              v25 = v161;
                              v39 = v173;
                              v46 = v162;
                            }
                            if ( (v37 & 0x2000000) != 0 )
                            {
                              if ( !(_BYTE)v185
                                || !*(_WORD *)((char *)&v229 + 5) && !sub_1402443C4((__int64)ClientToken) )
                              {
                                if ( a17 )
                                  v75 = v46;
                                else
                                  v75 = 0;
                                sub_1402402D0((__int64)&v221, v37, (char *)v163, (char *)v44, 0LL, v75);
                              }
                            }
                            else if ( (_BYTE)v185 && !*(_WORD *)((char *)&v229 + 5) )
                            {
                              if ( !sub_1402443C4((__int64)ClientToken) || HIDWORD(v228) )
                              {
                                v154 = 0;
                                v156 = 1;
                                v126 = 0;
                                v174 = 0;
                                v166 = v125;
                                v47 = a17;
                                if ( a17 )
                                {
                                  v127 = 0;
                                  v48 = (char *)v163;
                                  v128 = v162;
                                  while ( v127 < v128 )
                                  {
                                    v129 = v127;
                                    *(_DWORD *)&v48[v129 * 4] = v126;
                                    v44[v129] = v166;
                                    ++v127;
                                    v126 = v174;
                                  }
                                  v47 = a17;
                                  goto LABEL_69;
                                }
LABEL_68:
                                v48 = (char *)v163;
LABEL_69:
                                if ( (v37 & 0x2000000) != 0 )
                                {
                                  v76 = v162;
                                  if ( v47 )
                                    v77 = v162;
                                  else
                                    v77 = 0;
                                  sub_14023F0CC(v197, v37, v48, (char *)v44, 0LL, v77, &v167);
                                  if ( a17 )
                                    v78 = v76;
                                  else
                                    v78 = 0;
                                  sub_14023F0CC(v208[0], v37, (char *)v163, (char *)v44, 0LL, v78, &v168);
                                }
                                v26 = (unsigned int *)v170;
                                goto LABEL_71;
                              }
                              HIBYTE(v229) = 1;
                              v154 = 1;
                              v156 = 0;
                              v174 = v37;
                              v166 = 0;
                            }
                            v47 = a17;
                            goto LABEL_68;
                          }
                        }
                        goto LABEL_220;
                      }
                    }
LABEL_54:
                    v39 = v173;
                    goto LABEL_55;
                  }
                  goto LABEL_190;
                }
                v25 = sub_1402FBC90((__int64)v26, (__int64 *)&v196, ClientToken, 1, v208);
                if ( v25 >= 0 )
                {
                  v25 = sub_1402A458C(v208, v37);
                  v161 = v25;
                  if ( v25 < 0 )
                    v168 = 1;
                  goto LABEL_48;
                }
LABEL_190:
                v21 = v153;
                goto LABEL_191;
              }
            }
            goto LABEL_187;
          }
        }
      }
LABEL_192:
      v25 = -1073741703;
      v20 = (char *)v163;
      v58 = v163;
      goto LABEL_117;
    }
    if ( (a10 & 1) != 0 )
    {
      v178 = 1;
      goto LABEL_24;
    }
    v25 = -1073741727;
LABEL_187:
    v20 = (char *)v163;
    v58 = v163;
LABEL_373:
    v26 = (unsigned int *)v170;
    goto LABEL_117;
  }
  v86 = *a3;
  v216 = 0LL;
  v25 = ObReferenceObjectByHandle(v86, 8u, (POBJECT_TYPE)SeTokenObjectType, v21, &v216, 0LL);
  v212 = v216;
  if ( v25 >= 0 )
  {
    v220 = ClientToken;
    ClientToken = v216;
    SubjectContext.ClientToken = v216;
    v179 = 1;
    goto LABEL_21;
  }
  v212 = 0LL;
  v26 = (unsigned int *)v170;
  v20 = (char *)v163;
  v58 = v163;
  if ( v25 != -1073741816 )
    v180 = 1;
LABEL_117:
  if ( v179 )
  {
    ObfDereferenceObject(v212);
    SubjectContext.ClientToken = v220;
  }
  if ( v202 )
    ExFreePoolWithTag(v202, 0);
  SeReleaseSubjectContext(&SubjectContext);
  SeReleaseSecurityDescriptor(v26, v21, 0LL, v69);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v195 )
    ExFreePoolWithTag(v195, 0);
  if ( v205 )
    ExFreePoolWithTag(v205, 0);
  if ( v200 )
    sub_140668444((void *)v200, v21, 1);
  if ( v193 )
    sub_1405F4024((void *)v193);
  if ( v165 )
  {
    if ( v20 )
      ExFreePoolWithTag(v20, 0);
    if ( v58 )
      ExFreePoolWithTag(v58, 0);
  }
  if ( v159 )
  {
    Blink = v203[1].Linkage.Blink;
    if ( Blink )
      sub_1405F4304((volatile signed __int64 *)Blink);
  }
  if ( v213 )
    ExFreePoolWithTag(v213, 0);
  sub_1402A4660(v196);
  if ( v25 == -1073741670 || v180 )
    sub_1409CF1A0((unsigned int)v25);
  return (unsigned int)v25;
}
