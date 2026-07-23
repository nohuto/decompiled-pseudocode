/*
 * XREFs of sub_1407CB6C0 @ 0x1407CB6C0
 * Callers:
 *     sub_1406686C8 @ 0x1406686C8 (sub_1406686C8.c)
 *     sub_14066915C @ 0x14066915C (sub_14066915C.c)
 *     ObReferenceObjectByName @ 0x14071EEC0 (ObReferenceObjectByName.c)
 *     ObOpenObjectByNameEx @ 0x1407CAF90 (ObOpenObjectByNameEx.c)
 * Callees:
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     PsGetPermanentSiloContext @ 0x140211FA0 (PsGetPermanentSiloContext.c)
 *     PsGetCurrentProcessSessionId @ 0x140287F00 (PsGetCurrentProcessSessionId.c)
 *     sub_1402A0E90 @ 0x1402A0E90 (sub_1402A0E90.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ObReferenceObjectByPointer @ 0x1402E0270 (ObReferenceObjectByPointer.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_1402F339C @ 0x1402F339C (sub_1402F339C.c)
 *     PsGetProcessServerSilo @ 0x140347680 (PsGetProcessServerSilo.c)
 *     PsGetThreadServerSilo @ 0x140347690 (PsGetThreadServerSilo.c)
 *     sub_1403477B0 @ 0x1403477B0 (sub_1403477B0.c)
 *     sub_140347840 @ 0x140347840 (sub_140347840.c)
 *     sub_140347B50 @ 0x140347B50 (sub_140347B50.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405C5DA0 @ 0x1405C5DA0 (sub_1405C5DA0.c)
 *     sub_1405C5EC8 @ 0x1405C5EC8 (sub_1405C5EC8.c)
 *     sub_1405F43E0 @ 0x1405F43E0 (sub_1405F43E0.c)
 *     sub_140659150 @ 0x140659150 (sub_140659150.c)
 *     sub_14069A534 @ 0x14069A534 (sub_14069A534.c)
 *     sub_14069C7C0 @ 0x14069C7C0 (sub_14069C7C0.c)
 *     sub_14069C820 @ 0x14069C820 (sub_14069C820.c)
 *     sub_14069C9C0 @ 0x14069C9C0 (sub_14069C9C0.c)
 *     sub_14069CAE8 @ 0x14069CAE8 (sub_14069CAE8.c)
 *     sub_14069CC40 @ 0x14069CC40 (sub_14069CC40.c)
 *     sub_14069D2C0 @ 0x14069D2C0 (sub_14069D2C0.c)
 *     sub_1406A79A0 @ 0x1406A79A0 (sub_1406A79A0.c)
 *     sub_1406A9C60 @ 0x1406A9C60 (sub_1406A9C60.c)
 *     ObCheckCreateObjectAccess @ 0x1406B6C50 (ObCheckCreateObjectAccess.c)
 *     sub_1406B9100 @ 0x1406B9100 (sub_1406B9100.c)
 *     sub_1406B96B0 @ 0x1406B96B0 (sub_1406B96B0.c)
 *     sub_1406CDC5C @ 0x1406CDC5C (sub_1406CDC5C.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     sub_140784700 @ 0x140784700 (sub_140784700.c)
 *     sub_1407FAE50 @ 0x1407FAE50 (sub_1407FAE50.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

int __fastcall sub_1407CB6C0(
        ULONG_PTR BugCheckParameter1,
        UNICODE_STRING *a2,
        int a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 a6,
        __int64 a7,
        char *a8,
        __int64 a9,
        struct _ACCESS_STATE *a10,
        __int64 a11,
        int *a12,
        __int64 *a13)
{
  __int64 v13; // r15
  unsigned __int64 v16; // r12
  __int64 v17; // rdi
  struct _OBJECT_TYPE *v18; // r13
  int v19; // ecx
  int result; // eax
  __int64 v21; // rbx
  unsigned __int16 Length; // dx
  PVOID v23; // rax
  KPROCESSOR_MODE v24; // r10
  __int64 v25; // rbx
  int v26; // esi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v28; // r13
  __int64 ProcessServerSilo; // rbx
  __int64 ThreadServerSilo; // r12
  char v31; // r14
  int v32; // eax
  struct _KTHREAD *v33; // r15
  _QWORD *v34; // rbx
  signed __int64 *v35; // rax
  NTSTATUS v36; // eax
  PVOID v37; // rsi
  signed __int64 v38; // r12
  signed __int64 v39; // rax
  unsigned __int16 *v40; // r8
  unsigned __int16 v41; // r9
  __int16 v42; // ax
  __int64 v43; // rax
  unsigned __int64 v44; // r14
  __int64 v45; // r15
  signed __int64 *v46; // rbx
  signed __int64 v47; // rdx
  signed __int64 v48; // rax
  signed __int64 v49; // rdi
  unsigned int v50; // edx
  char *v51; // rsi
  struct _KTHREAD *v52; // rax
  signed __int64 *v53; // rsi
  struct _KTHREAD *v54; // rax
  struct _ACCESS_STATE *v55; // r14
  char v56; // cl
  int v57; // eax
  signed __int64 v58; // rax
  signed __int64 v59; // rtt
  NTSTATUS v60; // edx
  wchar_t *Buffer; // rax
  wchar_t v62; // cx
  __int64 v63; // rcx
  __int64 *v64; // rax
  int PermanentSiloContext; // eax
  __int64 v66; // r13
  unsigned __int64 v67; // rdx
  __int64 v68; // rsi
  int (__fastcall *v69)(_DWORD *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, char, int, __int64, unsigned __int16 *, int, int, __int64, _QWORD *); // rbx
  bool v70; // si
  struct _KTHREAD *v71; // rax
  ULONG_PTR v72; // rcx
  __int64 v73; // rbx
  unsigned int v74; // r12d
  unsigned int v75; // edi
  unsigned __int16 *v76; // rsi
  unsigned __int64 v77; // rbx
  __int64 v78; // r10
  __int64 v79; // r11
  unsigned int v80; // edx
  _QWORD *v81; // rax
  unsigned __int16 v82; // dx
  __int128 v83; // rt0
  unsigned int v84; // r10d
  unsigned int v85; // edx
  int v86; // r10d
  _QWORD *v87; // rax
  unsigned __int16 v88; // dx
  char v89; // r15
  int v90; // r15d
  __int64 v91; // rcx
  __int64 **v92; // r14
  __int64 *v93; // rsi
  _QWORD *v94; // rax
  __int64 v95; // rdx
  char *v96; // r11
  unsigned int v97; // ecx
  __int64 v98; // rbx
  char *v99; // r10
  _QWORD *v100; // r11
  char *v101; // rdi
  signed __int64 v102; // r11
  unsigned __int64 v103; // r8
  unsigned __int64 v104; // r9
  KPROCESSOR_MODE v105; // si
  int (__fastcall *v106)(_DWORD *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, char, int, __int64, unsigned __int16 *, int, int, __int64, _QWORD *); // rax
  PVOID v107; // rbx
  volatile signed __int64 *v108; // rax
  PVOID v109; // rax
  __int16 v110; // cx
  int v111; // eax
  bool v112; // zf
  NTSTATUS v113; // eax
  PVOID v114; // r13
  ACCESS_MASK v115; // edx
  struct _ACCESS_STATE *v116; // r8
  char *v117; // r14
  int v118; // ebx
  unsigned int v119; // ebx
  void *Pool2; // rsi
  char *v121; // rbx
  void *v122; // rcx
  __int16 v123; // ax
  signed __int64 v124; // rax
  signed __int64 v125; // rtt
  NTSTATUS v126; // ecx
  __int64 Tag; // [rsp+20h] [rbp-E0h]
  NTSTATUS v128; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v129; // [rsp+68h] [rbp-98h]
  __int64 v130[2]; // [rsp+70h] [rbp-90h] BYREF
  int v131; // [rsp+80h] [rbp-80h]
  int v132; // [rsp+84h] [rbp-7Ch] BYREF
  PVOID P; // [rsp+88h] [rbp-78h]
  signed __int64 *v134; // [rsp+90h] [rbp-70h] BYREF
  int v135; // [rsp+98h] [rbp-68h]
  NTSTATUS v136; // [rsp+9Ch] [rbp-64h] BYREF
  void *Src[2]; // [rsp+A0h] [rbp-60h] BYREF
  _WORD v138[2]; // [rsp+B0h] [rbp-50h] BYREF
  int v139; // [rsp+B4h] [rbp-4Ch]
  __int64 v140; // [rsp+B8h] [rbp-48h]
  PVOID v141; // [rsp+C0h] [rbp-40h]
  __int64 v142; // [rsp+C8h] [rbp-38h] BYREF
  PVOID Object; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v144; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v145; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v146; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v147; // [rsp+F0h] [rbp-10h] BYREF
  void *v148; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v149; // [rsp+108h] [rbp+8h] BYREF
  __int128 v150; // [rsp+118h] [rbp+18h]
  __int128 v151; // [rsp+128h] [rbp+28h]
  __int64 v152; // [rsp+138h] [rbp+38h]
  BOOLEAN v153; // [rsp+190h] [rbp+90h]
  int v155; // [rsp+1A0h] [rbp+A0h]

  v155 = a3;
  v13 = 0LL;
  Object = 0LL;
  v138[1] = 0;
  v152 = 0LL;
  *(_OWORD *)a11 = 0LL;
  *(_QWORD *)(a11 + 16) = 0LL;
  v16 = 0LL;
  v147 = 0LL;
  P = 0LL;
  v134 = 0LL;
  v135 = 64;
  v149 = 0LL;
  v150 = 0LL;
  v151 = 0LL;
  *(_OWORD *)v130 = 0LL;
  if ( a12 )
    *a12 = 0;
  v112 = dword_140C0C630 == 0;
  v17 = 0LL;
  v18 = (struct _OBJECT_TYPE *)a4;
  *a13 = 0LL;
  v138[0] = 16;
  v128 = 0;
  v136 = 0;
  v153 = 1;
  v129 = 0LL;
  v139 = -1;
  v140 = a9;
  if ( !v112 && (*(_BYTE *)(a4 + 66) & 1) != 0 && (*((_DWORD *)KeGetCurrentThread() + 344) & 0x80000) == 0 )
  {
    a3 |= 0x40u;
    v155 = a3;
  }
  v19 = 1;
  if ( (a3 & 0x400) == 0 )
    v19 = a5;
  v131 = v19;
  v132 = a3 & 0x40;
  if ( !a8 )
    v132 = a3 & 0x40 | 1;
  if ( BugCheckParameter1 )
  {
    result = sub_140732D40(BugCheckParameter1, 0, 0LL, a5, 0x746C6644u, &Object, 0LL, &v147);
    v128 = result;
    if ( result < 0 )
      return result;
    if ( HIDWORD(v147) )
    {
      v139 &= HIDWORD(v147);
      if ( (v139 & a10->OriginalDesiredAccess) != a10->OriginalDesiredAccess )
      {
        ObfDereferenceObject(Object);
        return -1073741790;
      }
    }
    v17 = (__int64)Object;
    if ( a2->Length )
    {
      if ( *a2->Buffer == 92
        && ((unsigned __int8)dword_140D06C0C ^ (unsigned __int8)(*((char *)Object - 24) ^ ((unsigned __int16)((_WORD)Object - 48) >> 8))) != *((_BYTE *)IoFileObjectType + 40) )
      {
        ObfDereferenceObject(Object);
        return -1073741765;
      }
    }
    else if ( ((unsigned __int8)dword_140D06C0C ^ (unsigned __int8)(*((char *)Object - 24) ^ ((unsigned __int16)((_WORD)Object - 48) >> 8))) == *((_BYTE *)qword_140C24FB8 + 40) )
    {
      v128 = ObReferenceObjectByPointer(Object, 0, (POBJECT_TYPE)a4, a5);
      if ( v128 >= 0 )
        v13 = v17;
      ObfDereferenceObject((PVOID)v17);
      result = v128;
      *a13 = v13;
      return result;
    }
    *(UNICODE_STRING *)v130 = *a2;
    if ( dword_140D3CAD0 )
    {
      *((_QWORD *)&v150 + 1) = a2;
      *(_QWORD *)&v150 = a4 + 16;
      *(_QWORD *)&v151 = BugCheckParameter1;
      sub_1405F43E0((__int64)&v149);
    }
    goto LABEL_143;
  }
  v21 = (__int64)a2;
  Length = a2->Length;
  if ( !a2->Length || *a2->Buffer != 92 )
    return -1073741765;
  if ( Length == 2 )
  {
    v23 = sub_1402A0E90(a9);
    v25 = (__int64)v23;
    if ( v23 )
    {
      result = ObReferenceObjectByPointer(v23, 0, (POBJECT_TYPE)a4, v24);
      if ( result >= 0 )
        *a13 = v25;
    }
    else if ( a8 )
    {
      result = ObReferenceObjectByPointer(a8, 0, (POBJECT_TYPE)a4, v24);
      if ( result >= 0 )
        *a13 = (__int64)a8;
    }
    else
    {
      return -1073741811;
    }
    return result;
  }
  if ( dword_140D3CAD0 )
  {
    *((_QWORD *)&v150 + 1) = a2;
    *(_QWORD *)&v150 = a4 + 16;
    *(_QWORD *)&v151 = 0LL;
    sub_1405F43E0((__int64)&v149);
  }
  v26 = v155;
  while ( 1 )
  {
LABEL_40:
    if ( *(_WORD *)v21 < 8u )
    {
      if ( *(_WORD *)v21 == 6 )
      {
        v63 = *(_QWORD *)(v21 + 8);
        if ( *(_DWORD *)v63 == 4128860 && *(_WORD *)(v63 + 4) == 63 )
        {
          v64 = (__int64 *)sub_14069C820(v26, &v134);
          P = v64;
          v16 = (unsigned __int64)v64;
          if ( v64 )
          {
            if ( *v64 )
            {
              v17 = *v64;
              v113 = ObReferenceObjectByPointer((PVOID)*v64, 0, v18, a5);
              v114 = v129;
              v60 = v113;
              v128 = v113;
              goto LABEL_317;
            }
          }
        }
      }
      goto LABEL_138;
    }
    if ( **(_QWORD **)(v21 + 8) != 0x5C003F003F005CLL )
      goto LABEL_138;
    if ( v18 == (struct _OBJECT_TYPE *)IoFileObjectType && sub_140659150(v21) )
      v155 = v26 | 0x800;
    CurrentThread = KeGetCurrentThread();
    P = 0LL;
    v134 = 0LL;
    v28 = *((_QWORD *)CurrentThread + 68);
    ProcessServerSilo = PsGetProcessServerSilo(v28);
    ThreadServerSilo = PsGetThreadServerSilo((__int64)CurrentThread);
    v31 = ProcessServerSilo != ThreadServerSilo;
    v32 = *((_DWORD *)CurrentThread + 344);
    LODWORD(v141) = ProcessServerSilo != ThreadServerSilo;
    if ( (v32 & 8) == 0 || (v155 & 0x800) != 0 )
      goto LABEL_63;
    if ( ProcessServerSilo != ThreadServerSilo )
      goto LABEL_64;
    if ( (*((_DWORD *)CurrentThread + 344) & 8) != 0 )
    {
      v33 = KeGetCurrentThread();
      --*((_WORD *)v33 + 242);
      ExAcquirePushLockSharedEx((ULONG_PTR)CurrentThread + 1360, 0LL);
      if ( (*((_DWORD *)CurrentThread + 344) & 8) != 0 )
      {
        v34 = (_QWORD *)*((_QWORD *)CurrentThread + 193);
        if ( !v34 )
          v34 = (_QWORD *)(*((_QWORD *)CurrentThread + 159) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObjectWithTag(v34, 0x746C6644u);
      }
      else
      {
        v34 = 0LL;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)CurrentThread + 170, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)CurrentThread + 170);
      sub_1402AFC00((ULONG_PTR)CurrentThread + 1360);
      sub_1402AC800((__int64)v33);
      if ( !v34 )
      {
        v31 = (char)v141;
        goto LABEL_66;
      }
      if ( v34[3] == 999LL )
      {
        v31 = 1;
        ObfDereferenceObjectWithTag(v34, 0x746C6644u);
        v35 = (signed __int64 *)sub_140204738(ThreadServerSilo);
        goto LABEL_67;
      }
      v148 = 0LL;
      v36 = sub_14069CC40((__int64)v34, &v148);
      v37 = P;
      if ( v36 >= 0 )
        v37 = v148;
      P = v37;
      ObfDereferenceObjectWithTag(v34, 0x746C6644u);
      if ( v37 )
      {
        v16 = (unsigned __int64)P;
        goto LABEL_77;
      }
      v31 = (char)v141;
LABEL_63:
      if ( v31 )
      {
LABEL_64:
        v35 = (signed __int64 *)sub_140204738(ThreadServerSilo);
        goto LABEL_67;
      }
    }
LABEL_66:
    v35 = (signed __int64 *)(v28 + 1416);
LABEL_67:
    v134 = v35;
    _m_prefetchw(v35);
    v38 = *v35;
    if ( (*v35 & 0xF) == 0 )
      goto LABEL_71;
    do
    {
      v39 = _InterlockedCompareExchange64(v134, v38 - 1, v38);
      if ( v38 == v39 )
        break;
      v38 = v39;
    }
    while ( (v39 & 0xF) != 0 );
    if ( (v38 & 0xF) != 0 )
    {
      v16 = v38 & 0xFFFFFFFFFFFFFFF0uLL;
      P = (PVOID)v16;
    }
    else
    {
LABEL_71:
      v16 = (unsigned __int64)sub_14069D2C0(v134);
      P = (PVOID)v16;
    }
    if ( v16 )
      goto LABEL_78;
    if ( !v31 )
    {
      v134 = 0LL;
      v16 = sub_14069CAE8();
      P = (PVOID)v16;
    }
LABEL_77:
    if ( !v16 )
      goto LABEL_132;
LABEL_78:
    if ( !*(_QWORD *)v16 )
    {
LABEL_132:
      v21 = (__int64)a2;
LABEL_138:
      if ( !v17 )
      {
        v145 = 0LL;
        PermanentSiloContext = PsGetPermanentSiloContext(a9, dword_140D05060, (unsigned __int64 *)&v145);
        v17 = v145;
        if ( PermanentSiloContext < 0 )
          v17 = (__int64)qword_140C246D0;
        v145 = v17;
      }
      *(_OWORD *)v130 = *(_OWORD *)v21;
LABEL_143:
      v55 = a10;
LABEL_144:
      v41 = v130[0];
      v40 = (unsigned __int16 *)v130[1];
LABEL_145:
      v66 = a11;
      while ( 1 )
      {
        v67 = (unsigned __int8)dword_140D06C0C ^ *(unsigned __int8 *)(v17 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v17 - 48) >> 8);
        v68 = qword_140D07490[v67];
        v69 = *(int (__fastcall **)(_DWORD *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, char, int, __int64, unsigned __int16 *, int, int, __int64, _QWORD *))(v68 + 144);
        if ( !v69 )
        {
          while ( 1 )
          {
            if ( (POBJECT_TYPE)v68 != qword_140C24FB8 )
              goto LABEL_312;
            v141 = (PVOID)v17;
            if ( v41 && *v40 == 92 )
            {
              ++v40;
              v41 -= 2;
              WORD1(v130[0]) -= 2;
              v130[1] = (__int64)v40;
              LOWORD(v130[0]) = v41;
            }
            *(_OWORD *)Src = *(_OWORD *)v130;
            if ( v41 )
            {
              do
              {
                if ( *v40 == 92 )
                  break;
                ++v40;
                v112 = v41 == 2;
                v41 -= 2;
                v130[1] = (__int64)v40;
                LOWORD(v130[0]) = v41;
              }
              while ( !v112 );
            }
            WORD1(v130[0]) -= LOWORD(Src[0]) - v41;
            LOWORD(Src[0]) -= v41;
            if ( !LOWORD(Src[0]) )
              goto LABEL_284;
            if ( (_BYTE)v131 && (v55->Flags & 1) == 0 )
            {
              v153 = sub_1406CDC5C(v17, v67, v55, v41, v131, &v136);
              if ( !v153 )
              {
                v60 = v136;
                if ( v136 >= 0 )
                  v60 = -1073741772;
                v136 = v60;
                if ( LOWORD(v130[0]) || !a8 )
                  goto LABEL_311;
                v70 = 1;
                goto LABEL_168;
              }
              v41 = v130[0];
            }
            v70 = a8 && !v41;
LABEL_168:
            if ( *(_QWORD *)v66 )
            {
              v72 = v17 + 296;
              if ( v70 )
                ExAcquirePushLockExclusiveEx(v72, 0LL);
              else
                ExAcquirePushLockSharedEx(v72, 0LL);
              v73 = *(_QWORD *)v66;
              if ( _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v66 + 296LL), 0LL, 17LL) != 17 )
                ExfReleasePushLockShared((signed __int64 *)(v73 + 296));
              sub_1402AFC00(v73 + 296);
              if ( *(_BYTE *)(v66 + 22) )
              {
                ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)v66, 0x554C624Fu);
                *(_BYTE *)(v66 + 22) = 0;
              }
              *(_QWORD *)v66 = v17;
              *(_BYTE *)(v66 + 21) = v70;
            }
            else if ( v70 )
            {
              sub_1406B96B0(v66, v17);
            }
            else
            {
              *(_QWORD *)v66 = v17;
              *(_BYTE *)(v66 + 21) = 0;
              v71 = KeGetCurrentThread();
              --*((_WORD *)v71 + 242);
              ExAcquirePushLockSharedEx(v17 + 296, 0LL);
            }
            v74 = LOWORD(Src[0]);
            v75 = LOWORD(Src[0]) >> 1;
            v76 = (unsigned __int16 *)Src[1];
            if ( v75 < 4 )
            {
              v84 = 0;
            }
            else
            {
              v77 = 0LL;
              do
              {
                v78 = *(_QWORD *)v76;
                if ( (*(_QWORD *)v76 & 0xFF80FF80FF80FF80uLL) != 0 )
                {
                  v79 = 4LL;
                  do
                  {
                    v80 = (unsigned __int16)v78;
                    if ( (unsigned __int16)v78 >= 0x61u )
                    {
                      if ( (unsigned __int16)v78 <= 0x7Au )
                      {
                        v80 = (unsigned __int16)v78 - 32;
                      }
                      else
                      {
                        v81 = sub_140347DB0();
                        v80 = sub_1403477B0(v81[154], v82);
                      }
                    }
                    *(_QWORD *)&v83 = v78;
                    *((_QWORD *)&v83 + 1) = v80;
                    v78 = v83 >> 16;
                    --v79;
                  }
                  while ( v79 );
                }
                else
                {
                  v78 &= 0xFFDFFFDFFFDFFFDFuLL;
                }
                v76 += 4;
                v75 -= 4;
                v77 = v78 + (v77 >> 1) + 3 * v77;
              }
              while ( v75 >= 4 );
              v74 = LOWORD(Src[0]);
              v66 = a11;
              v84 = v77 + HIDWORD(v77);
            }
            for ( ; v75; v84 = v85 + v86 )
            {
              v85 = *v76++;
              --v75;
              v86 = (v84 >> 1) + 3 * v84;
              if ( v85 >= 0x61 )
              {
                if ( v85 <= 0x7A )
                {
                  v86 -= 32;
                }
                else
                {
                  v87 = sub_140347DB0();
                  v85 = sub_1403477B0(v87[154], v88);
                }
              }
            }
            v89 = v132;
            *(_DWORD *)(v66 + 16) = v84;
            v90 = v89 & 0x40;
            v91 = v84 % 0x25;
            v92 = (__int64 **)(*(_QWORD *)v66 + 8 * v91);
            *(_BYTE *)(v66 + 20) = v91;
            v93 = *v92;
            if ( !*v92 )
            {
LABEL_238:
              v17 = 0LL;
              goto LABEL_239;
            }
            while ( 1 )
            {
              if ( *((_DWORD *)v93 + 4) == *(_DWORD *)(v66 + 16) )
              {
                v94 = sub_140347DB0();
                v97 = v74;
                v98 = v94[154];
                if ( v74 == *(unsigned __int16 *)(v95 + 8) )
                  break;
              }
LABEL_237:
              v92 = (__int64 **)v93;
              v93 = (__int64 *)*v93;
              if ( !v93 )
                goto LABEL_238;
            }
            v99 = v96;
            v100 = *(_QWORD **)(v95 + 16);
            v101 = &v99[v74];
            if ( v74 >= 8 )
            {
              do
              {
                if ( *(_QWORD *)v99 != *v100 )
                  break;
                v97 -= 8;
                if ( !v97 )
                  goto LABEL_224;
                v99 += 8;
                ++v100;
              }
              while ( v97 >= 8 );
            }
            if ( v99 < v101 )
            {
              if ( v90 )
              {
                v102 = (char *)v100 - v99;
                while ( 1 )
                {
                  v103 = *(unsigned __int16 *)v99;
                  v104 = *(unsigned __int16 *)&v99[v102];
                  if ( (_WORD)v103 != (_WORD)v104 )
                  {
                    if ( (unsigned int)v103 >= 0x61 )
                    {
                      if ( (unsigned int)v103 > 0x7A )
                      {
                        if ( v98 && (unsigned __int16)v103 >= 0xC0u )
                          LOWORD(v103) = *(_WORD *)(v98
                                                  + 2
                                                  * ((v103 & 0xF)
                                                   + *(unsigned __int16 *)(v98
                                                                         + 2LL
                                                                         * (((unsigned __int8)v103 >> 4)
                                                                          + (unsigned int)*(unsigned __int16 *)(v98 + 2 * (v103 >> 8))))))
                                       + v103;
                      }
                      else
                      {
                        LOWORD(v103) = v103 - 32;
                      }
                    }
                    if ( (unsigned int)v104 >= 0x61 )
                    {
                      if ( (unsigned int)v104 > 0x7A )
                      {
                        if ( v98 && (unsigned __int16)v104 >= 0xC0u )
                          LOWORD(v104) = *(_WORD *)(v98
                                                  + 2
                                                  * ((v104 & 0xF)
                                                   + *(unsigned __int16 *)(v98
                                                                         + 2LL
                                                                         * (((unsigned __int8)v104 >> 4)
                                                                          + (unsigned int)*(unsigned __int16 *)(v98 + 2 * (v104 >> 8))))))
                                       + v104;
                      }
                      else
                      {
                        LOWORD(v104) = v104 - 32;
                      }
                    }
                    if ( (_WORD)v103 != (_WORD)v104 )
                      break;
                  }
                  v99 += 2;
                  if ( v99 >= v101 )
                    goto LABEL_224;
                }
              }
              else
              {
                while ( *(_WORD *)v99 == *(_WORD *)v100 )
                {
                  v99 += 2;
                  v100 = (_QWORD *)((char *)v100 + 2);
                  if ( v99 >= v101 )
                    goto LABEL_224;
                }
              }
              goto LABEL_237;
            }
LABEL_224:
            v17 = v93[1];
            *(_QWORD *)(v66 + 8) = v92;
            if ( v17 )
            {
              v55 = a10;
              v105 = v131;
              v16 = (unsigned __int64)P;
              goto LABEL_226;
            }
LABEL_239:
            v55 = a10;
            v105 = v131;
            v16 = (unsigned __int64)P;
            if ( (v132 & 1) != 0 )
            {
              v107 = *(PVOID *)v66;
              do
              {
                v108 = (volatile signed __int64 *)sub_1406A79A0(
                                                    (__int64)v107,
                                                    v16,
                                                    &v132,
                                                    (struct _SECURITY_SUBJECT_CONTEXT *)a10);
                v107 = (PVOID)v108;
                if ( !v108 )
                  break;
                sub_14069A534((PVOID *)v66, v108);
                v17 = sub_1406A9C60((__int64)v107, (const UNICODE_STRING *)Src, v66, v132);
              }
              while ( !v17 );
            }
LABEL_226:
            if ( !v153 )
            {
              if ( !v17 )
              {
LABEL_288:
                if ( LOWORD(v130[0]) )
                {
                  v128 = -1073741766;
                  goto LABEL_320;
                }
                if ( !a8 )
                  goto LABEL_291;
                v115 = 4;
                v116 = v55;
                v117 = (char *)v141;
                if ( (POBJECT_TYPE)a4 == qword_140C24FB8 )
                  v115 = 8;
                LOBYTE(Tag) = 0;
                if ( !ObCheckCreateObjectAccess((__int64)v141, v115, v116, (__int64)Src, Tag, v105, &v128) )
                {
                  v114 = v129;
                  if ( v128 >= 0 )
                    v128 = -1073741772;
                  goto LABEL_321;
                }
                v118 = *((_DWORD *)v117 + 85);
                if ( v118 == -1
                  || (POBJECT_TYPE)a4 != MmSectionObjectType && (POBJECT_TYPE)a4 != qword_140C24FC0
                  || v118 == (unsigned int)PsGetCurrentProcessSessionId()
                  || SeSinglePrivilegeCheck(stru_140D3CC58, v105)
                  || (unsigned __int8)sub_1407FAE50((PCUNICODE_STRING)Src) )
                {
                  v119 = LOWORD(Src[0]);
                  Pool2 = (void *)ExAllocatePool2(256LL, LOWORD(Src[0]), 1833853519LL);
                  if ( Pool2 )
                  {
                    if ( sub_1406B9100(v117, a8, v66) )
                    {
                      memmove(Pool2, Src[1], v119);
                      v121 = &a8[-byte_140C25440[*(a8 - 22) & 3] - 48];
                      v122 = (void *)*((_QWORD *)v121 + 2);
                      if ( v122 )
                        ExFreePoolWithTag(v122, 0);
                      v123 = (__int16)Src[0];
                      v17 = (__int64)a8;
                      v114 = v129;
                      *((_WORD *)v121 + 4) = Src[0];
                      *((_WORD *)v121 + 5) = v123;
                      *((_QWORD *)v121 + 2) = Pool2;
                      v128 = 0;
                      goto LABEL_325;
                    }
                    ExFreePoolWithTag(Pool2, 0);
                  }
                  v128 = -1073741670;
                  goto LABEL_320;
                }
LABEL_319:
                v128 = -1073741790;
                goto LABEL_320;
              }
              v60 = v136;
LABEL_311:
              v114 = v129;
LABEL_316:
              v128 = v60;
LABEL_317:
              if ( v60 < 0 )
                goto LABEL_321;
              goto LABEL_325;
            }
            if ( !v17 )
              goto LABEL_288;
            v41 = v130[0];
            if ( !LOWORD(v130[0]) )
            {
              v106 = *(int (__fastcall **)(_DWORD *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, char, int, __int64, unsigned __int16 *, int, int, __int64, _QWORD *))(qword_140D07490[(unsigned __int8)dword_140D06C0C ^ *(unsigned __int8 *)(v17 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v17 - 48) >> 8)] + 144);
              if ( !v106 || v106 != sub_140784700 && a8 )
              {
                v114 = v129;
                v60 = ObReferenceObjectByPointer((PVOID)v17, 0, (POBJECT_TYPE)a4, a5);
                v128 = v60;
                goto LABEL_317;
              }
            }
            v67 = (unsigned __int8)dword_140D06C0C ^ *(unsigned __int8 *)(v17 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v17 - 48) >> 8);
            v68 = qword_140D07490[v67];
            v69 = *(int (__fastcall **)(_DWORD *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, char, int, __int64, unsigned __int16 *, int, int, __int64, _QWORD *))(v68 + 144);
            if ( v69 )
              break;
            v40 = (unsigned __int16 *)v130[1];
          }
        }
        v142 = 0LL;
        if ( v69 == sub_140784700 )
        {
          v21 = (__int64)a2;
          v26 = v155;
          v60 = sub_140784700(
                  (_DWORD *)v17,
                  (POBJECT_TYPE)a4,
                  (struct _SECURITY_SUBJECT_CONTEXT *)v55,
                  v131,
                  v155,
                  (__int64)a2,
                  (unsigned __int16 *)v130,
                  a6,
                  a7,
                  (__int64)v138,
                  &v142);
          v128 = v60;
        }
        else
        {
          if ( a8 )
          {
LABEL_312:
            v128 = -1073741788;
            goto LABEL_320;
          }
          ObfReferenceObject((PVOID)v17);
          if ( *(_QWORD *)v66 )
          {
            ExReleasePushLockEx(*(_QWORD *)v66 + 296LL, 0LL);
            if ( *(_BYTE *)(v66 + 22) )
            {
              ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)v66, 0x554C624Fu);
              *(_BYTE *)(v66 + 22) = 0;
            }
            *(_QWORD *)v66 = 0LL;
            *(_BYTE *)(v66 + 21) = 0;
            KeLeaveCriticalRegion();
          }
          v26 = v155;
          LODWORD(Tag) = v155;
          v128 = sub_14042A5E0(v17, a4);
          ObfDereferenceObject((PVOID)v17);
          v60 = v128;
          v21 = (__int64)a2;
        }
        if ( v60 < 0 )
          goto LABEL_320;
        v109 = v129;
        v17 = v142;
        if ( v129 )
        {
          ObDereferenceObjectDeferDelete(v129);
          v60 = v128;
          v109 = 0LL;
          v129 = 0LL;
        }
        if ( v60 != 260 )
        {
          if ( v60 != 872 )
            v109 = (PVOID)v17;
          v129 = v109;
        }
        if ( (v139 & v55->OriginalDesiredAccess) != v55->OriginalDesiredAccess )
          goto LABEL_319;
        if ( v60 != 260 && v60 != 872 && v60 != 280 )
          break;
        if ( (v26 & 0x1000) != 0 && v60 != 872 )
          goto LABEL_283;
        if ( !--v135 )
          goto LABEL_291;
        if ( !*(_WORD *)v21 )
          goto LABEL_284;
        if ( v16 )
        {
          sub_14069C7C0(v16, v134);
          v60 = v128;
          v16 = 0LL;
          P = 0LL;
        }
        if ( *(_QWORD *)v66 )
        {
          ExReleasePushLockEx(*(_QWORD *)v66 + 296LL, 0LL);
          if ( *(_BYTE *)(v66 + 22) )
          {
            ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)v66, 0x554C624Fu);
            *(_BYTE *)(v66 + 22) = 0;
          }
          *(_QWORD *)v66 = 0LL;
          *(_BYTE *)(v66 + 21) = 0;
          KeLeaveCriticalRegion();
          v60 = v128;
        }
        v110 = **(_WORD **)(v21 + 8);
        if ( v60 != 280 )
        {
          if ( v110 != 92 )
            goto LABEL_284;
          if ( v60 == 872 )
          {
            v17 = (__int64)qword_140C246D0;
            v18 = (struct _OBJECT_TYPE *)a4;
          }
          else
          {
            v146 = 0LL;
            v111 = PsGetPermanentSiloContext(a9, dword_140D05060, (unsigned __int64 *)&v146);
            v17 = v146;
            v18 = (struct _OBJECT_TYPE *)a4;
            if ( v111 < 0 )
              v17 = (__int64)qword_140C246D0;
            v146 = v17;
          }
          goto LABEL_40;
        }
        if ( v110 == 92 )
          goto LABEL_284;
        *(_OWORD *)v130 = *(_OWORD *)v21;
        v40 = (unsigned __int16 *)v130[1];
        v41 = v130[0];
      }
      v112 = v17 == 0;
LABEL_314:
      v114 = 0LL;
      if ( v112 )
        v60 = -1073741772;
      goto LABEL_316;
    }
    v18 = (struct _OBJECT_TYPE *)a4;
    v40 = a2->Buffer + 4;
    v41 = a2->Length - 8;
    v42 = a2->MaximumLength - 8;
    v130[1] = (__int64)v40;
    LOWORD(v130[0]) = v41;
    WORD1(v130[0]) = v42;
    if ( (POBJECT_TYPE *)a4 != IoFileObjectType
      || (v132 & 1) == 0
      || v41 < 6u
      || v40[1] != 58
      || v40[2] != 92
      || (v43 = (*v40 | 0x20u) - 97, (unsigned int)v43 >= 0x1A) )
    {
LABEL_104:
      v17 = *(_QWORD *)v16;
      v55 = a10;
      goto LABEL_145;
    }
    v44 = v16;
    v45 = 8 * v43 + 32;
    while ( 1 )
    {
      v46 = (signed __int64 *)(v45 + v44);
      if ( !*(_QWORD *)(v45 + v44) )
        goto LABEL_102;
      _m_prefetchw(v46);
      v47 = *v46;
      if ( (*v46 & 0xF) != 0 )
      {
        do
        {
          v48 = _InterlockedCompareExchange64(v46, v47 - 1, v47);
          if ( v47 == v48 )
            break;
          v47 = v48;
        }
        while ( (v48 & 0xF) != 0 );
      }
      v49 = v47;
      v50 = v47 & 0xF;
      v17 = v49 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v50 <= 1 )
      {
        if ( !v50 )
          goto LABEL_96;
        sub_1402F339C((signed __int64 *)(v45 + v44), v17);
      }
      if ( dword_140D05010 )
        sub_1405C5EC8(v17 - 48, 1, 1u, 0x554C624Fu);
      if ( v17 )
        break;
LABEL_96:
      v51 = (char *)sub_140204738(*(_QWORD *)(v44 + 16));
      v52 = KeGetCurrentThread();
      --*((_WORD *)v52 + 243);
      v53 = (signed __int64 *)(v51 + 120);
      ExAcquirePushLockSharedEx((ULONG_PTR)v53, 0LL);
      v17 = sub_1405C5DA0((_QWORD *)(v45 + v44), 0x554C624Fu);
      if ( _InterlockedCompareExchange64(v53, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v53);
      sub_1402AFC00((ULONG_PTR)v53);
      v54 = KeGetCurrentThread();
      v112 = (*((_WORD *)v54 + 243))++ == 0xFFFF;
      if ( v112 && *((struct _KTHREAD **)v54 + 19) != (struct _KTHREAD *)((char *)v54 + 152) )
        KiCheckForKernelApcDelivery();
      if ( v17 )
        break;
LABEL_102:
      v44 = *(_QWORD *)(v44 + 24);
      if ( !v44 )
      {
        v40 = (unsigned __int16 *)v130[1];
        v41 = v130[0];
        goto LABEL_104;
      }
    }
    v130[1] += 4LL;
    v55 = a10;
    LOWORD(v130[0]) -= 4;
    v56 = dword_140D06C0C ^ *(_BYTE *)(v17 - 24) ^ ((unsigned __int16)(v17 - 48) >> 8);
    v144 = 0LL;
    if ( v56 == *(_BYTE *)(IoDeviceObjectType + 40) )
      v57 = sub_14072B8B0(
              (struct _DEVICE_OBJECT *)v17,
              (POBJECT_TYPE *)a4,
              a10,
              v131,
              v155,
              a2,
              (const UNICODE_STRING *)v130,
              a6,
              a7,
              (__int64)v138,
              (PFILE_OBJECT *)&v144);
    else
      v57 = sub_140784700(
              (_DWORD *)v17,
              (POBJECT_TYPE)a4,
              (struct _SECURITY_SUBJECT_CONTEXT *)a10,
              v131,
              v155,
              (__int64)a2,
              (unsigned __int16 *)v130,
              a6,
              a7,
              (__int64)v138,
              &v144);
    v128 = v57;
    _m_prefetchw(v46);
    v58 = *v46;
    if ( (v17 ^ (unsigned __int64)*v46) >= 0xF )
    {
LABEL_111:
      ObfDereferenceObjectWithTag((PVOID)v17, 0x554C624Fu);
    }
    else
    {
      while ( 1 )
      {
        v59 = v58;
        v58 = _InterlockedCompareExchange64(v46, v58 + 1, v58);
        if ( v59 == v58 )
          break;
        if ( (v17 ^ (unsigned __int64)v58) >= 0xF )
          goto LABEL_111;
      }
      sub_140347B50(v17 - 48);
    }
    v60 = v128;
    if ( v128 < 0 )
      goto LABEL_320;
    v17 = v144;
    if ( v128 != 260 && v128 != 872 )
    {
      v18 = (struct _OBJECT_TYPE *)a4;
      v129 = (PVOID)v144;
    }
    if ( (v139 & a10->OriginalDesiredAccess) != a10->OriginalDesiredAccess )
      goto LABEL_319;
    if ( v128 != 260 && v128 != 872 && v128 != 280 )
    {
      v112 = v144 == 0;
      goto LABEL_314;
    }
    v26 = v155;
    if ( (v155 & 0x1000) != 0 && v128 != 872 )
    {
LABEL_283:
      v128 = -1073740533;
      goto LABEL_320;
    }
    if ( !--v135 )
    {
LABEL_291:
      v128 = -1073741772;
      goto LABEL_320;
    }
    v21 = (__int64)a2;
    if ( !a2->Length )
      goto LABEL_284;
    sub_14069C7C0(v16, v134);
    Buffer = a2->Buffer;
    v16 = 0LL;
    P = 0LL;
    v62 = *Buffer;
    if ( v128 == 280 )
      break;
    if ( v62 != 92 )
      goto LABEL_284;
    if ( v128 == 872 )
      v17 = (__int64)qword_140C246D0;
    else
      v17 = (__int64)sub_1402A0E90(a9);
  }
  if ( v62 != 92 )
  {
    *(UNICODE_STRING *)v130 = *a2;
    goto LABEL_144;
  }
LABEL_284:
  v128 = -1073741773;
LABEL_320:
  v114 = v129;
LABEL_321:
  if ( *(_QWORD *)a11 )
  {
    ExReleasePushLockEx(*(_QWORD *)a11 + 296LL, 0LL);
    if ( *(_BYTE *)(a11 + 22) )
    {
      ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)a11, 0x554C624Fu);
      *(_BYTE *)(a11 + 22) = 0;
    }
    *(_QWORD *)a11 = 0LL;
    *(_BYTE *)(a11 + 21) = 0;
    KeLeaveCriticalRegion();
  }
LABEL_325:
  if ( v114 )
    ObDereferenceObjectDeferDelete(v114);
  if ( Object )
    ObDereferenceObjectDeferDelete(Object);
  sub_140347840();
  if ( v16 )
  {
    if ( v134 && (_m_prefetchw(v134), v124 = *v134, (v16 ^ *v134) < 0xF) )
    {
      while ( 1 )
      {
        v125 = v124;
        v124 = _InterlockedCompareExchange64(v134, v124 + 1, v124);
        if ( v125 == v124 )
          break;
        if ( (v16 ^ v124) >= 0xF )
          goto LABEL_334;
      }
    }
    else
    {
LABEL_334:
      sub_14069C9C0((volatile signed __int64 *)v16, 1u);
    }
  }
  v126 = v128;
  if ( v128 < 0 )
  {
    v17 = 0LL;
  }
  else if ( a12 && v139 != -1 )
  {
    *a12 = v139;
    result = v126;
    *a13 = v17;
    return result;
  }
  result = v128;
  *a13 = v17;
  return result;
}
