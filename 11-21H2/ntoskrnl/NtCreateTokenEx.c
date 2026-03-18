/*
 * XREFs of NtCreateTokenEx @ 0x1406647E0
 * Callers:
 *     NtCreateToken @ 0x1409CC120 (NtCreateToken.c)
 * Callees:
 *     SepCreateTokenEx @ 0x1402022FC (SepCreateTokenEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     SeReleaseAcl @ 0x140663448 (SeReleaseAcl.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1406651C8 (SeReleaseLuidAndAttributesArray.c)
 *     SeReleaseSid @ 0x140668444 (SeReleaseSid.c)
 *     SeCaptureSid @ 0x14066846C (SeCaptureSid.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSecurityQos @ 0x140729B40 (SeCaptureSecurityQos.c)
 *     SeCaptureAcl @ 0x140753E4C (SeCaptureAcl.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x140754108 (SepCaptureTokenSecurityAttributesInformation.c)
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x140754758 (SepFreeCapturedTokenSecurityAttributesInformation.c)
 *     SeCaptureSidAndAttributesArray @ 0x140799DB0 (SeCaptureSidAndAttributesArray.c)
 *     SeCaptureLuidAndAttributesArray @ 0x14079E674 (SeCaptureLuidAndAttributesArray.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtCreateTokenEx(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        __int64 *a5,
        __int64 *a6,
        void *a7,
        int *a8,
        int *a9,
        unsigned __int64 a10,
        __int64 a11,
        int *a12,
        int *a13,
        __int64 a14,
        void **a15,
        void **a16,
        __int64 a17)
{
  void **v17; // rbx
  KPROCESSOR_MODE PreviousMode; // si
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // edi
  __int64 result; // rax
  __int64 v23; // rdx
  int v24; // edi
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // ebx
  int v28; // [rsp+20h] [rbp-1F8h]
  int v29; // [rsp+28h] [rbp-1F0h]
  int v30; // [rsp+28h] [rbp-1F0h]
  int v31; // [rsp+30h] [rbp-1E8h]
  int v32; // [rsp+30h] [rbp-1E8h]
  char v33; // [rsp+C0h] [rbp-158h] BYREF
  char v34; // [rsp+C1h] [rbp-157h]
  KPROCESSOR_MODE v35; // [rsp+C2h] [rbp-156h]
  int v36; // [rsp+C4h] [rbp-154h]
  __int64 v37; // [rsp+C8h] [rbp-150h] BYREF
  int v38; // [rsp+D0h] [rbp-148h] BYREF
  int v39; // [rsp+D4h] [rbp-144h]
  int v40; // [rsp+D8h] [rbp-140h]
  int v41; // [rsp+DCh] [rbp-13Ch]
  int v42; // [rsp+E0h] [rbp-138h]
  __int64 v43; // [rsp+E8h] [rbp-130h] BYREF
  __int64 v44; // [rsp+F0h] [rbp-128h] BYREF
  __int64 v45; // [rsp+F8h] [rbp-120h] BYREF
  PVOID P; // [rsp+100h] [rbp-118h] BYREF
  PVOID v47; // [rsp+108h] [rbp-110h] BYREF
  __int64 v48; // [rsp+110h] [rbp-108h] BYREF
  __int64 v49; // [rsp+118h] [rbp-100h] BYREF
  __int64 v50; // [rsp+120h] [rbp-F8h] BYREF
  PSID v51; // [rsp+128h] [rbp-F0h] BYREF
  __int64 v52; // [rsp+130h] [rbp-E8h] BYREF
  __int64 v53; // [rsp+138h] [rbp-E0h] BYREF
  unsigned int v54; // [rsp+140h] [rbp-D8h]
  __int64 *v55; // [rsp+148h] [rbp-D0h]
  __int64 *v56; // [rsp+150h] [rbp-C8h]
  int *v57; // [rsp+158h] [rbp-C0h]
  int *v58; // [rsp+160h] [rbp-B8h]
  void **v59; // [rsp+168h] [rbp-B0h]
  __int64 v60; // [rsp+170h] [rbp-A8h]
  __int64 v61; // [rsp+178h] [rbp-A0h] BYREF
  __int64 v62; // [rsp+180h] [rbp-98h] BYREF
  int v63[2]; // [rsp+188h] [rbp-90h]
  int v64[2]; // [rsp+190h] [rbp-88h] BYREF
  _QWORD *v65; // [rsp+198h] [rbp-80h]
  __int64 v66; // [rsp+1A0h] [rbp-78h] BYREF
  int v67; // [rsp+1A8h] [rbp-70h]
  void *Src; // [rsp+1B0h] [rbp-68h]
  __int64 v69; // [rsp+1B8h] [rbp-60h]
  int *v70; // [rsp+1C0h] [rbp-58h]
  __int64 v71[2]; // [rsp+1C8h] [rbp-50h] BYREF

  v42 = a4;
  *(_QWORD *)v63 = a3;
  v54 = a2;
  v65 = a1;
  v70 = a13;
  v55 = a5;
  v59 = a15;
  v17 = (void **)a14;
  v69 = a14;
  v60 = a17;
  v58 = a9;
  v57 = a8;
  v56 = a6;
  Src = a7;
  v53 = 0LL;
  *(_QWORD *)v64 = 0LL;
  v33 = 0;
  v66 = 0LL;
  v67 = 0;
  v62 = 0LL;
  v61 = 0LL;
  v48 = 0LL;
  v52 = 0LL;
  v41 = 0;
  v49 = 0LL;
  v37 = 0x100000000LL;
  v40 = 0;
  v50 = 0LL;
  v51 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  *(_OWORD *)v71 = 0LL;
  v38 = 0;
  v34 = 0;
  P = 0LL;
  v47 = 0LL;
  v39 = 0;
  v45 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v35 = PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeCreateTokenPrivilege, PreviousMode) )
    return 3221225569LL;
  if ( PreviousMode )
  {
    v19 = 0x7FFFFFFF0000LL;
    v20 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v65 < 0x7FFFFFFF0000LL )
      v20 = (__int64)v65;
    *(_QWORD *)v20 = *(_QWORD *)v20;
    if ( ((unsigned __int8)v56 & 3) == 0
      && ((unsigned __int8)v57 & 3) == 0
      && ((unsigned __int8)v58 & 3) == 0
      && (v60 & 3) == 0
      && (!a14 || (a14 & 3) == 0)
      && ((unsigned __int8)v59 & 3) == 0
      && (!a16 || ((unsigned __int8)a16 & 3) == 0)
      && ((unsigned __int8)v55 & 3) == 0
      && (!a13 || ((unsigned __int8)a13 & 3) == 0)
      && (!a12 || ((unsigned __int8)a12 & 3) == 0)
      && (!a11 || (a11 & 3) == 0) )
    {
      if ( !a10 )
        goto LABEL_33;
      if ( (a10 & 3) == 0 )
      {
        if ( a10 < 0x7FFFFFFF0000LL )
          v19 = a10;
        goto LABEL_33;
      }
    }
    ExRaiseDatatypeMisalignment();
  }
LABEL_33:
  v21 = v42;
  if ( (unsigned int)(v42 - 1) > 1 )
    return 3221225640LL;
  LOBYTE(v19) = PreviousMode;
  result = SeCaptureSecurityQos(*(_QWORD *)v63, v19, &v33, &v66);
  if ( (int)result >= 0 )
  {
    if ( v33 || v21 != 2 )
    {
      v36 = 0;
      v62 = *v55;
      v61 = *v56;
      v24 = SeCaptureSidAndAttributesArray(Src, 0, v29, v31, (__int64)&v48, (__int64)&v52);
      v36 = v24;
      if ( v24 >= 0 )
      {
        v41 = *v57;
        v27 = v41;
        v24 = SeCaptureSidAndAttributesArray(v57 + 2, 0, v30, v32, (__int64)&v49, (__int64)&v37);
        v36 = v24;
        LODWORD(v37) = (-16 * v27 + v37 + 3) & 0xFFFFFFFC;
        v17 = (void **)v69;
      }
      if ( v24 >= 0 )
      {
        v40 = *v58;
        v24 = SeCaptureLuidAndAttributesArray(v58 + 1, v28, v30, v32, (__int64)&v50, (__int64)&v52 + 4);
        v36 = v24;
      }
      if ( v17 && v24 >= 0 )
      {
        v24 = SeCaptureSid(*v17, v28, 1, (__int64)&v51);
        v36 = v24;
      }
      if ( v24 >= 0 )
      {
        v24 = SeCaptureSid(*v59, v28, 1, (__int64)&v43);
        v36 = v24;
      }
      if ( a16 && v24 >= 0 && *a16 )
      {
        v24 = SeCaptureAcl(*a16, 512, v30, (__int64)&v44, (__int64)&v53);
        v36 = v24;
      }
      *(_OWORD *)v71 = *(_OWORD *)v60;
      if ( a12 && v24 >= 0 )
      {
        v39 = *a12;
        v24 = SeCaptureSidAndAttributesArray(a12 + 2, 0, v30, v32, (__int64)&v45, (__int64)&v53 + 4);
        v36 = v24;
      }
      if ( a10 && v24 >= 0 )
      {
        LOBYTE(v26) = PreviousMode;
        v24 = SepCaptureTokenSecurityAttributesInformation(a10, (unsigned int)&v37 + 4, 1, v26, 0, (__int64)&P);
        v36 = v24;
      }
      if ( a11 && v24 >= 0 )
      {
        LOBYTE(v26) = PreviousMode;
        v24 = SepCaptureTokenSecurityAttributesInformation(a11, (unsigned int)&v37 + 4, 1, v26, 0, (__int64)&v47);
        v36 = v24;
      }
      if ( v70 && v24 >= 0 )
      {
        v38 = *v70;
        v34 = 1;
      }
      if ( v24 >= 0 )
        v24 = SepCreateTokenEx(
                (HANDLE *)v64,
                PreviousMode,
                v54,
                *(_QWORD **)v63,
                v42,
                SHIDWORD(v66),
                (__int64)&v62,
                &v61,
                (void **)v48,
                v41,
                v49,
                v37,
                v40,
                (char **)v50,
                v51,
                (void *)v43,
                (void *)v44,
                v71,
                (__int64)P,
                (__int64)v47,
                v39,
                v45,
                (_DWORD *)((unsigned __int64)&v38 & -(__int64)(v34 != 0)),
                0);
      if ( v48 )
      {
        LOBYTE(v23) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v48, v23);
      }
      if ( v49 )
      {
        LOBYTE(v23) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v49, v23);
      }
      if ( v50 )
      {
        LOBYTE(v23) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v50, v23);
      }
      if ( v51 )
      {
        LOBYTE(v25) = 1;
        LOBYTE(v23) = PreviousMode;
        SeReleaseSid(v51, v23, v25, v26);
      }
      if ( v43 )
      {
        LOBYTE(v25) = 1;
        LOBYTE(v23) = PreviousMode;
        SeReleaseSid(v43, v23, v25, v26);
      }
      if ( v44 )
        SeReleaseAcl((void *)v44, PreviousMode);
      if ( v45 )
      {
        LOBYTE(v23) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v45, v23);
      }
      if ( P )
        SepFreeCapturedTokenSecurityAttributesInformation(P);
      if ( v47 )
        SepFreeCapturedTokenSecurityAttributesInformation(v47);
      if ( v24 >= 0 )
        *v65 = *(_QWORD *)v64;
      return (unsigned int)v24;
    }
    else
    {
      return 3221225637LL;
    }
  }
  return result;
}
