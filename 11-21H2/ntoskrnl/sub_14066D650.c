/*
 * XREFs of sub_14066D650 @ 0x14066D650
 * Callers:
 *     <none>
 * Callees:
 *     sub_140251BD0 @ 0x140251BD0 (sub_140251BD0.c)
 *     sub_14025302C @ 0x14025302C (sub_14025302C.c)
 *     PsIsSystemProcess @ 0x1402820E0 (PsIsSystemProcess.c)
 *     sub_1402956D0 @ 0x1402956D0 (sub_1402956D0.c)
 *     sub_140297D10 @ 0x140297D10 (sub_140297D10.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PsGetProcessServerSilo @ 0x140347680 (PsGetProcessServerSilo.c)
 *     PsGetProcessSignatureLevel @ 0x1403A1460 (PsGetProcessSignatureLevel.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwSystemDebugControl @ 0x14041F080 (ZwSystemDebugControl.c)
 *     __chkstk @ 0x14042A4D0 (__chkstk.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14066CFE4 @ 0x14066CFE4 (sub_14066CFE4.c)
 *     sub_14066D038 @ 0x14066D038 (sub_14066D038.c)
 *     sub_14066D0AC @ 0x14066D0AC (sub_14066D0AC.c)
 *     sub_14066D4BC @ 0x14066D4BC (sub_14066D4BC.c)
 *     sub_14066D620 @ 0x14066D620 (sub_14066D620.c)
 *     IoCreateFileEx @ 0x14066E670 (IoCreateFileEx.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x14066EEA0 (FsRtlFreeExtraCreateParameterList.c)
 *     sub_14066EFCC @ 0x14066EFCC (sub_14066EFCC.c)
 *     sub_14066EFE8 @ 0x14066EFE8 (sub_14066EFE8.c)
 *     sub_14066F248 @ 0x14066F248 (sub_14066F248.c)
 *     sub_14066F440 @ 0x14066F440 (sub_14066F440.c)
 *     sub_14066F4C0 @ 0x14066F4C0 (sub_14066F4C0.c)
 *     sub_14066F864 @ 0x14066F864 (sub_14066F864.c)
 *     sub_14066F8EC @ 0x14066F8EC (sub_14066F8EC.c)
 *     sub_1406703B8 @ 0x1406703B8 (sub_1406703B8.c)
 *     sub_140670488 @ 0x140670488 (sub_140670488.c)
 *     sub_140683990 @ 0x140683990 (sub_140683990.c)
 *     sub_14069D410 @ 0x14069D410 (sub_14069D410.c)
 *     SeQueryServerSiloToken @ 0x1406C1480 (SeQueryServerSiloToken.c)
 *     sub_1406D6DA8 @ 0x1406D6DA8 (sub_1406D6DA8.c)
 *     sub_1406D7C10 @ 0x1406D7C10 (sub_1406D7C10.c)
 *     sub_1406D833C @ 0x1406D833C (sub_1406D833C.c)
 *     sub_1406E1570 @ 0x1406E1570 (sub_1406E1570.c)
 *     sub_140701218 @ 0x140701218 (sub_140701218.c)
 *     sub_140701A98 @ 0x140701A98 (sub_140701A98.c)
 *     sub_140701EB4 @ 0x140701EB4 (sub_140701EB4.c)
 *     sub_1407021EC @ 0x1407021EC (sub_1407021EC.c)
 *     sub_140702C3C @ 0x140702C3C (sub_140702C3C.c)
 *     sub_1407045D0 @ 0x1407045D0 (sub_1407045D0.c)
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140732CC0 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     sub_1407A34A0 @ 0x1407A34A0 (sub_1407A34A0.c)
 *     sub_1407D80A4 @ 0x1407D80A4 (sub_1407D80A4.c)
 *     SeCompareSigningLevels @ 0x140811D10 (SeCompareSigningLevels.c)
 *     sub_140882484 @ 0x140882484 (sub_140882484.c)
 *     sub_1409CC1BC @ 0x1409CC1BC (sub_1409CC1BC.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_14066D650(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        unsigned int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  PVOID v11; // rbx
  KPROCESSOR_MODE v12; // r15
  unsigned int v13; // r12d
  __int64 result; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // r13d
  int v21; // esi
  KPROCESSOR_MODE v22; // r14
  PVOID v23; // rsi
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int8 v26; // bl
  __int64 v27; // rcx
  int v28; // eax
  ULONG v29; // eax
  __int64 v30; // rcx
  int v31; // esi
  int v32; // eax
  int v33; // ecx
  PVOID v34; // rcx
  unsigned __int8 v35; // bl
  int v36; // r8d
  __int64 v37; // r9
  __int64 v38; // rcx
  char v39; // bl
  __int64 v40; // r13
  __int64 v41; // rcx
  __int64 v42; // rcx
  int v43; // r9d
  __int64 *v44; // r13
  char v45; // r11
  int v46; // r8d
  unsigned int v47; // esi
  int v48; // ecx
  unsigned __int64 v49; // rax
  void *v50; // rsp
  unsigned int v51; // edx
  __int64 v52; // rsi
  int v53; // r9d
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rsi
  bool v58; // al
  unsigned int v59; // r8d
  int v60; // r15d
  __int64 v61; // rax
  int v62; // ebx
  __int64 ProcessServerSilo; // rax
  _OWORD *v64; // rax
  __int64 v65; // rbx
  bool IsSystemProcess; // al
  KPROCESSOR_MODE v67; // dl
  unsigned __int8 v68; // [rsp+80h] [rbp+0h] BYREF
  unsigned __int8 v69; // [rsp+81h] [rbp+1h] BYREF
  char v70; // [rsp+82h] [rbp+2h] BYREF
  char v71; // [rsp+83h] [rbp+3h] BYREF
  char v72; // [rsp+84h] [rbp+4h] BYREF
  char v73; // [rsp+85h] [rbp+5h]
  PVOID v74; // [rsp+88h] [rbp+8h] BYREF
  KPROCESSOR_MODE v75; // [rsp+90h] [rbp+10h]
  __int64 v76; // [rsp+94h] [rbp+14h] BYREF
  char v77[4]; // [rsp+9Ch] [rbp+1Ch] BYREF
  PVOID Object; // [rsp+A0h] [rbp+20h] BYREF
  PVOID v79; // [rsp+A8h] [rbp+28h]
  void *v80; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v81; // [rsp+B8h] [rbp+38h]
  __int64 v82; // [rsp+C0h] [rbp+40h] BYREF
  int v83; // [rsp+C8h] [rbp+48h]
  unsigned int v84; // [rsp+CCh] [rbp+4Ch]
  PVOID v85; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v86; // [rsp+D8h] [rbp+58h]
  __int64 v87; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v88; // [rsp+E8h] [rbp+68h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+F0h] [rbp+70h]
  __int64 v90; // [rsp+F8h] [rbp+78h] BYREF
  PVOID v91; // [rsp+100h] [rbp+80h] BYREF
  __int64 v92; // [rsp+108h] [rbp+88h]
  __int64 v93; // [rsp+110h] [rbp+90h]
  _QWORD *v94; // [rsp+118h] [rbp+98h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v96; // [rsp+150h] [rbp+D0h]
  PVOID v97; // [rsp+158h] [rbp+D8h]
  struct _IO_DRIVER_CREATE_CONTEXT DriverContext; // [rsp+160h] [rbp+E0h] BYREF
  __int64 v99; // [rsp+180h] [rbp+100h]
  __int128 InputBuffer; // [rsp+188h] [rbp+108h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+198h] [rbp+118h] BYREF
  __int64 v102[2]; // [rsp+1A8h] [rbp+128h] BYREF
  __int64 v103; // [rsp+1B8h] [rbp+138h]
  _BYTE v104[80]; // [rsp+1C0h] [rbp+140h] BYREF
  __int64 v105[64]; // [rsp+210h] [rbp+190h] BYREF
  _BYTE v106[400]; // [rsp+410h] [rbp+390h] BYREF
  __int64 v107[50]; // [rsp+5A0h] [rbp+520h] BYREF
  __int64 v108[2]; // [rsp+730h] [rbp+6B0h] BYREF
  __int64 v109; // [rsp+740h] [rbp+6C0h]
  char v110; // [rsp+748h] [rbp+6C8h]

  v83 = a4;
  v84 = a3;
  v93 = a2;
  v94 = a1;
  v92 = a5;
  v96 = a6;
  v86 = a9;
  v90 = 0LL;
  *(_WORD *)((char *)v105 + 1) = 0;
  BYTE3(v105[0]) = 0;
  v76 = 0LL;
  *(_DWORD *)(&DriverContext.Size + 1) = 0;
  *(&DriverContext.Size + 3) = 0;
  IoStatusBlock = 0LL;
  v74 = 0LL;
  v91 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  Object = 0LL;
  memset(v106, 0, sizeof(v106));
  InputBuffer = 0LL;
  v71 = 0;
  v68 = 0;
  v70 = 0;
  v72 = 0;
  *(_OWORD *)v108 = 0LL;
  v109 = 0LL;
  v110 = 0;
  memset(v107, 0, sizeof(v107));
  v82 = 0LL;
  *(_DWORD *)v77 = 0;
  v88 = 0LL;
  *(_OWORD *)v102 = 0LL;
  v103 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v11 = (PVOID)*((_QWORD *)CurrentThread + 23);
  v81 = (__int64)v11;
  v97 = v11;
  v12 = *((_BYTE *)CurrentThread + 562);
  v75 = v12;
  v87 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v73 = 0;
  memset(&DriverContext, 0, sizeof(DriverContext));
  v99 = 0LL;
  memset(v104, 0, 0x48uLL);
  v13 = a7;
  if ( (a7 & 0xFFF97838) != 0 || (a8 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  if ( (a7 & 0x8400) == 0x8400 )
    return 3221225520LL;
  v106[388] = v12;
  if ( v12 )
  {
    v15 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v94 < 0x7FFFFFFF0000LL )
      v15 = (__int64)v94;
    *(_QWORD *)v15 = *(_QWORD *)v15;
    v16 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v93 < 0x7FFFFFFF0000LL )
      v16 = v93;
    *(_QWORD *)v16 = *(_QWORD *)v16;
    v79 = v80;
  }
  if ( a5 )
  {
    if ( v12 )
    {
      if ( (a5 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v79 = v80;
    }
    if ( v12 )
      v17 = *(_DWORD *)(a5 + 24) & 0x1DF2;
    else
      v17 = *(_DWORD *)(a5 + 24) & 0x11FF2;
    *(_DWORD *)&v106[384] = v17;
  }
  memset(v105, 0, 0x1F8uLL);
  if ( !a11 || (LOBYTE(v18) = v12, result = sub_140670488(a11, v18, 0LL, v105), (int)result >= 0) )
  {
    v20 = 0x20000;
    if ( (a7 & 0x40) != 0 && (v105[0] & 0x2000000000000LL) != 0 && !LOBYTE(v105[45]) )
    {
      v13 = a7 & 0xFFFFFFBF;
      HIDWORD(v105[0]) &= ~0x20000u;
    }
    if ( (v13 & 4) == 0 && (v105[0] & 0x80000000000LL) != 0 || (v105[0] & 0x2000000000000LL) != 0 && (v13 & 0x40) == 0 )
      goto LABEL_166;
    LOBYTE(v19) = v12;
    v21 = sub_1406703B8(v19, a10, v105);
    if ( v21 < 0 )
      goto LABEL_167;
    v22 = 1;
    if ( (v105[0] & 0x100000000LL) != 0 )
    {
      v21 = ObReferenceObjectByHandleWithTag(
              (HANDLE)v105[15],
              0x80u,
              (POBJECT_TYPE)PsProcessType,
              v12,
              0x72437350u,
              &Object,
              0LL);
      if ( v21 < 0 )
        goto LABEL_167;
      v23 = Object;
      v105[16] = (__int64)Object;
    }
    else
    {
      v23 = v11;
      Object = v11;
    }
    v105[55] = sub_14066F8EC(v23, v105[47], HIDWORD(v105[48]));
    if ( (BYTE1(v105[1]) & 0xC) == 4 && (v23 != v11 || PsIsSystemProcess((__int64)v11)) )
      goto LABEL_166;
    LOBYTE(v24) = v12;
    v21 = sub_14066F864(v23, v105[18], v24, &v105[19]);
    if ( v21 < 0 )
    {
      v105[19] = 0LL;
      goto LABEL_167;
    }
    if ( v105[18] && (int)SeQueryServerSiloToken(v105[19], &v88) >= 0 && !(unsigned __int8)sub_1406E1570(v88) )
      goto LABEL_166;
    if ( (v105[0] & 0x2000000000LL) != 0 )
    {
      v26 = (v105[0] & 0x2000000000000LL) != 0 ? LOBYTE(v105[45]) : 0;
      v69 = v26;
      if ( (NtGlobalFlag & 0x40000) != 0 )
      {
        InputBuffer = *(_OWORD *)&v105[29];
        ZwSystemDebugControl(SysDbgKdPullRemoteFile, &InputBuffer, 0x10u, 0LL, 0, 0LL);
      }
      LOBYTE(v25) = v26;
      v21 = sub_14066F4C0(v105[19], &v105[29], (v13 >> 6) & 1, v25, &v68, &v70, &v69);
      if ( v21 < 0 )
        goto LABEL_167;
      if ( (v13 & 0x20000) != 0 )
      {
        LOBYTE(v18) = 8;
        LOBYTE(v27) = v68;
        v28 = SeCompareSigningLevels(v27, v18);
        v20 = v68;
        if ( !v28 )
          v20 = 8;
      }
      else
      {
        LOBYTE(v20) = v68;
      }
      LODWORD(v82) = v20;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      v29 = 1600;
      if ( v12 != 1 )
        v29 = 576;
      ObjectAttributes.Attributes = v29;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v105[29];
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v21 = 0;
      if ( qword_140D3B3F0 )
        v21 = sub_14042A5E0(v105[19], v18);
      if ( v21 < 0 )
        goto LABEL_167;
      v21 = sub_14066F440((_DWORD)Object, v13, v105[47], HIDWORD(v105[48]), (__int64)&v87);
      if ( v21 < 0 )
        goto LABEL_167;
      v21 = sub_14066F248(&DriverContext, v105[19]);
      if ( v21 < 0 )
        goto LABEL_167;
      v21 = IoCreateFileEx(
              (PHANDLE)&v105[21],
              HIDWORD(v105[20]) | 0x100020,
              &ObjectAttributes,
              &IoStatusBlock,
              0LL,
              0x80u,
              5u,
              1u,
              0x60u,
              0LL,
              0,
              CreateFileTypeNone,
              0LL,
              0,
              &DriverContext);
      if ( v21 < 0 && HIDWORD(v105[20]) )
        v21 = IoCreateFileEx(
                (PHANDLE)&v105[21],
                0x100020u,
                &ObjectAttributes,
                &IoStatusBlock,
                0LL,
                0x80u,
                5u,
                1u,
                0x60u,
                0LL,
                0,
                CreateFileTypeNone,
                0LL,
                0,
                &DriverContext);
      if ( v21 < 0 )
      {
        v105[21] = 0LL;
        v30 = 1LL;
LABEL_63:
        sub_14066EFE8(v30, v105, 0LL);
        goto LABEL_167;
      }
      v85 = 0LL;
      v21 = ObReferenceObjectByHandle((HANDLE)v105[21], 0x100020u, (POBJECT_TYPE)IoFileObjectType, 0, &v85, 0LL);
      v105[22] = (__int64)v85;
      if ( v21 < 0 )
      {
        v105[22] = 0LL;
LABEL_169:
        sub_14066EFCC(v87);
        sub_1407021EC(v105);
        if ( DriverContext.ExtraCreateParameter )
          FsRtlFreeExtraCreateParameterList(DriverContext.ExtraCreateParameter);
        if ( BYTE4(v76) )
          ObfDereferenceObject(v79);
        return (unsigned int)v21;
      }
      ObjectAttributes.ObjectName = 0LL;
      v31 = 1;
      if ( v105[46] )
        v31 = 5;
      LODWORD(v88) = v31;
      if ( v105[50] )
      {
        v32 = sub_1409CC1BC(v105[19], v105[50], LODWORD(v105[51]), &v80);
        v33 = BYTE4(v76);
        if ( v32 >= 0 )
          v33 = 1;
        HIDWORD(v76) = v33;
        v73 = v33;
        v34 = v80;
      }
      else
      {
        v34 = v79;
      }
      if ( !BYTE4(v76) )
        v34 = (PVOID)v105[19];
      v79 = v34;
      v80 = v34;
      v21 = sub_14066D4BC(&v105[23], (int)&ObjectAttributes, (__int64)v34, v20, v105[21], v31);
      if ( v21 < 0 )
      {
LABEL_96:
        v105[23] = 0LL;
        v30 = 2LL;
        goto LABEL_63;
      }
      while ( 1 )
      {
        v85 = 0LL;
        v21 = ObReferenceObjectByHandle((HANDLE)v105[23], 8u, MmSectionObjectType, 0, &v85, 0LL);
        v105[25] = (__int64)v85;
        if ( v21 < 0 )
        {
          v105[25] = 0LL;
          goto LABEL_167;
        }
        v35 = v69;
        LOBYTE(v18) = v69;
        v21 = sub_1406D833C(v85, v18, &v71);
        if ( v21 < 0 )
          goto LABEL_167;
        LOBYTE(v37) = v71;
        if ( v71 == v35 )
          break;
        v21 = sub_14066F4C0(v105[19], &v105[29], 1LL, v37, &v72, &v70, &v69);
        if ( v21 < 0 )
          goto LABEL_167;
        v39 = v72;
        if ( v72 == (_BYTE)v20 )
        {
          v35 = v69;
          break;
        }
        if ( (v20 & 0x30) != 0 && (v72 & 0x30) != (v20 & 0x30) )
          goto LABEL_166;
        LOBYTE(v18) = v20;
        LOBYTE(v38) = v72;
        if ( !(unsigned int)SeCompareSigningLevels(v38, v18) )
          goto LABEL_166;
        ObCloseHandle((HANDLE)v105[23], 0);
        ObfDereferenceObject((PVOID)v105[25]);
        v105[23] = 0LL;
        v105[25] = 0LL;
        LOBYTE(v20) = v39;
        LODWORD(v82) = v20;
        v21 = sub_14066D4BC(&v105[23], (int)&ObjectAttributes, (__int64)v79, v39, v105[21], v88);
        if ( v21 < 0 )
          goto LABEL_96;
      }
      LOBYTE(v36) = v12;
      v40 = v81;
      v21 = sub_1406D6DA8(v81, (unsigned int)v105, v36, v13, v35);
      if ( v21 < 0 )
        goto LABEL_167;
      if ( (v13 & 0x40000) != 0
        || (v35 & 7) != 1 && (LOBYTE(v41) = v12, LOBYTE(v18) = *(_BYTE *)(v40 + 2170), sub_14066D038(v41, v18, v35)) )
      {
        LOBYTE(v105[1]) |= 8u;
      }
      sub_1406D7C10(v105, v87);
      LOBYTE(v42) = v12;
      v21 = sub_14069D410(v42, v86, v105);
      if ( v21 < 0 )
      {
        LOBYTE(v105[1]) &= ~4u;
        goto LABEL_167;
      }
      v44 = v108;
      v45 = v82;
LABEL_109:
      LOBYTE(v43) = v35;
      LOBYTE(v18) = v12;
      v21 = sub_14070BD10(
              (_DWORD)Object,
              v18,
              v92,
              v43,
              v45,
              v70,
              v105[25],
              v105[19],
              v13,
              0,
              (__int64)v105,
              v105[18] != 0,
              v87,
              (__int64)&v90,
              (__int64)&v74);
      if ( v21 < 0 )
        goto LABEL_167;
      v47 = v105[25] != 0 ? 1048587 : 1048603;
      v48 = *((_DWORD *)v74 + 629) & 0x4000;
      v92 = v48 != 0 ? 0x800 : 0;
      if ( v48 )
        v47 |= 0x100040u;
      sub_1402956D0(v47, v77, v48 != 0 ? 0x800 : 0);
      v49 = *(unsigned int *)v77 + 15LL;
      if ( v49 <= *(unsigned int *)v77 )
        v49 = 0xFFFFFFFFFFFFFF0LL;
      v50 = alloca(v49 & 0xFFFFFFFFFFFFFFF0uLL);
      v86 = (__int64)&v68;
      memset(&v68, 0, *(unsigned int *)v77);
      v51 = v47;
      v52 = v86;
      sub_140297D10(v86, v51, &v82, v92);
      if ( v105[25] )
      {
        if ( *((_QWORD *)v74 + 176) )
          v54 = sub_140251BD0(HIDWORD(v105[28]));
        else
          v54 = *((_QWORD *)v74 + 170);
        sub_140702C3C(v52, 1, qword_140D07170, v105[6], v54);
      }
      else
      {
        LOBYTE(v53) = 1;
        v21 = sub_1407045D0((_DWORD)CurrentThread, v52, 0, v53, 1);
        if ( v21 < 0 )
        {
          sub_14025302C((__int64)v74, (__int64)CurrentThread);
          sub_140683990((ULONG_PTR)v74);
          goto LABEL_167;
        }
        v52 = v86;
        *(_QWORD *)(v86 + 120) = 297LL;
      }
      ObfReferenceObjectWithTag(v74, 0x72437350u);
      if ( v44 )
      {
        *(_BYTE *)v44 = 0;
        v55 = v105[8];
        if ( v105[8] < 0x40000uLL )
          v55 = 0x40000LL;
        v44[3] = v55;
        v44[2] = v105[9];
        v44[1] = LODWORD(v105[7]);
      }
      *(_DWORD *)v77 = 0;
      sub_140701EB4(a8, &v76);
      if ( (_DWORD)v90 )
      {
        *(_DWORD *)v77 = 2;
        LODWORD(v76) = v76 | 0x10;
      }
      if ( HIDWORD(v90) )
        v13 |= 0x400u;
      v102[0] = (__int64)v104;
      LODWORD(v76) = v76 | 0x60;
      v21 = sub_1407A34A0(
              (ULONG_PTR)v74,
              v52,
              (__int64)v102,
              0LL,
              0LL,
              (__int64)&v76,
              (__int64)&v91,
              (__int64)v44,
              (__int64)v107);
      if ( v21 < 0 )
      {
        sub_14025302C((__int64)v74, (__int64)CurrentThread);
        sub_140683990((ULONG_PTR)v74);
LABEL_165:
        ObfDereferenceObjectWithTag(v74, 0x72437350u);
        goto LABEL_167;
      }
      v57 = v81;
      LOBYTE(v56) = v12;
      v58 = sub_14066CFE4(v56, v81, (__int64)v74);
      v59 = v84;
      if ( v58 )
      {
        if ( (v84 & 0x2000000) != 0 )
        {
          v59 = ~*(_DWORD *)&byte_140A38E00[12 * ((unsigned __int64)v35 >> 4) + 4] & 0x1FFFFF | v84 & 0xFDFFFFFF;
          if ( !v105[16] || v57 == v105[16] )
            v59 |= 1u;
        }
        v60 = v83;
        if ( (v83 & 0x2000000) != 0 )
        {
          v60 = ~*(_DWORD *)&byte_140A38E00[12 * ((unsigned __int64)v35 >> 4) + 8] & 0x1FFFFF | v83 & 0xFDFFFFFF;
          if ( !v105[16] || v57 == v105[16] )
            v60 |= 1u;
        }
      }
      else
      {
        v60 = v83;
      }
      if ( v105[26] )
        v61 = v105[26] + 112;
      else
        v61 = 0LL;
      v62 = sub_14066D0AC((char *)v74, (__int64)Object, v59, v13, (HANDLE)v105[17], v77[0], v61, (PACCESS_STATE)v106);
      v21 = sub_140701218(
              (ULONG_PTR)v91,
              (ULONG_PTR)v74,
              v60,
              (__int64)v44,
              (__int64)v105,
              0LL,
              (__int64)v107,
              v93,
              v105[2]);
      sub_1402AC800((__int64)CurrentThread);
      if ( v62 < 0 )
      {
        sub_140683990((ULONG_PTR)v74);
        v21 = v62;
LABEL_164:
        ObfDereferenceObject(v91);
        goto LABEL_165;
      }
      if ( v21 < 0 )
      {
LABEL_163:
        sub_1407D80A4(v74, (unsigned int)v21);
        goto LABEL_164;
      }
      ProcessServerSilo = PsGetProcessServerSilo((__int64)v74);
      if ( ProcessServerSilo != v105[55] )
      {
        v21 = -1073741267;
        goto LABEL_163;
      }
      v21 = sub_140701A98(v74, v106, PsProcessType);
      if ( v21 >= 0 )
      {
        v64 = (_OWORD *)v105[4];
        if ( v105[4] )
        {
          *(_OWORD *)v105[4] = *(_OWORD *)&v105[6];
          v64[1] = *(_OWORD *)&v105[8];
          v64[2] = *(_OWORD *)&v105[10];
          v64[3] = *(_OWORD *)&v105[12];
        }
        *v94 = *(_QWORD *)&v106[392];
        v65 = v81;
        v21 = sub_14066EFE8(6LL, v105, v74);
        if ( v21 >= 0 )
        {
LABEL_162:
          sub_140882484(v106);
          if ( v21 >= 0 )
            goto LABEL_164;
          goto LABEL_163;
        }
        if ( (*(_WORD *)&v106[384] & 0x200) != 0 || (IsSystemProcess = PsIsSystemProcess(v65), v67 = 1, IsSystemProcess) )
          v67 = 0;
        ObCloseHandle(*(HANDLE *)&v106[392], v67);
      }
      if ( (v107[48] & 0x200) != 0 || PsIsSystemProcess(v81) )
        v22 = 0;
      ObCloseHandle((HANDLE)v107[49], v22);
      goto LABEL_162;
    }
    if ( Object != v11
      || !v12
      || v86
      || (v105[1] & 0xC00) != 0
      || (v105[0] & 0x8000000000LL) != 0
      || (v105[0] & 0x2000000000000LL) != 0
      || (v105[1] & 0x10) != 0 )
    {
LABEL_166:
      v21 = -1073741811;
    }
    else
    {
      LOBYTE(v105[1]) &= ~4u;
      v35 = *((_BYTE *)Object + 2170);
      PsGetProcessSignatureLevel((__int64)Object, &v70);
      if ( (v13 & 0x40) != 0 && (v35 & 7) == 0 )
      {
        v21 = -1073741790;
        goto LABEL_167;
      }
      LOBYTE(v46) = v12;
      v21 = sub_1406D6DA8(v81, (unsigned int)v105, v46, v13, v35);
      if ( v21 >= 0 )
      {
        v44 = 0LL;
        goto LABEL_109;
      }
    }
LABEL_167:
    if ( v105[22] )
      sub_14066D620(v105[22], v18);
    goto LABEL_169;
  }
  return result;
}
