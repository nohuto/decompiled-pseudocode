/*
 * XREFs of SepAdtOpenObjectAuditAlarm @ 0x1409CC368
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1406C0560 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406C10A0 (SepAccessCheckAndAuditAlarm.c)
 *     ObpCreateHandle @ 0x1406E4540 (ObpCreateHandle.c)
 *     SeAuditHandleCreation @ 0x1407DCB58 (SeAuditHandleCreation.c)
 *     NtOpenObjectAuditAlarm @ 0x1407DF750 (NtOpenObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x140862CE0 (SeOpenObjectAuditAlarmForNonObObject.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1409CE360 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x14020BB00 (PsGetCurrentThreadProcess.c)
 *     ObpIsKernelHandle @ 0x1402BEDE4 (ObpIsKernelHandle.c)
 *     SepAdtLogAuditRecord @ 0x14039B960 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SepCheckAndCopySelfRelativeSD @ 0x1405B9228 (SepCheckAndCopySelfRelativeSD.c)
 *     SepAdtAuditThisEventWithContext @ 0x1406C3500 (SepAdtAuditThisEventWithContext.c)
 *     SepSecurityDescriptorStrictLength @ 0x14070DBCC (SepSecurityDescriptorStrictLength.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x140742964 (PsGetAllocatedFullProcessImageNameEx.c)
 *     SepSDContainsAttributeACE @ 0x1409D1488 (SepSDContainsAttributeACE.c)
 *     SepAuditFailed @ 0x1409D1E40 (SepAuditFailed.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

bool __fastcall SepAdtOpenObjectAuditAlarm(
        __int16 a1,
        const int *a2,
        __int64 *a3,
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
  __int128 *v23; // rax
  _KPROCESS *CurrentThreadProcess; // rax
  int AllocatedFullProcessImageName; // esi
  __int64 *v26; // rax
  __int64 v27; // rdi
  unsigned __int8 v28; // r9
  int v29; // eax
  const int *v30; // rcx
  __int64 v31; // r10
  int v32; // eax
  int v33; // eax
  int v34; // eax
  bool IsKernelHandle; // al
  unsigned __int64 v36; // r8
  __int64 v37; // rcx
  unsigned __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rcx
  PVOID v42; // r13
  int v43; // ecx
  size_t v44; // r15
  char *Pool2; // rax
  char *v46; // rdi
  unsigned int v47; // eax
  __int64 v48; // rax
  int v49; // ebx
  __int64 v50; // rax
  int v51; // eax
  __int64 v52; // rax
  unsigned int v53; // ecx
  unsigned int v54; // edx
  unsigned __int16 v55; // r13
  _WORD *v56; // rax
  char *v57; // rax
  _OWORD *v58; // r9
  __int64 v59; // rdx
  unsigned int v60; // r8d
  _DWORD *v61; // r10
  __int64 v62; // rcx
  unsigned __int16 *v63; // rdx
  int v64; // ecx
  unsigned int v65; // ebx
  int v66; // ecx
  int v67; // eax
  __int64 v68; // rcx
  int v69; // eax
  __int16 v70; // [rsp+28h] [rbp-E0h] BYREF
  char v71; // [rsp+2Ah] [rbp-DEh] BYREF
  int v72; // [rsp+2Ch] [rbp-DCh]
  size_t Size; // [rsp+30h] [rbp-D8h] BYREF
  PVOID Src; // [rsp+38h] [rbp-D0h] BYREF
  PVOID v75; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD *v76; // [rsp+48h] [rbp-C0h]
  __int16 *v77; // [rsp+50h] [rbp-B8h] BYREF
  PVOID v78; // [rsp+58h] [rbp-B0h]
  PVOID P; // [rsp+60h] [rbp-A8h]
  __int64 v80; // [rsp+68h] [rbp-A0h]
  const int *v81; // [rsp+70h] [rbp-98h]
  __int64 v82; // [rsp+78h] [rbp-90h]
  __int64 *v83; // [rsp+80h] [rbp-88h]
  __int128 *v84; // [rsp+88h] [rbp-80h]
  __int16 *v85; // [rsp+90h] [rbp-78h]
  struct _SECURITY_SUBJECT_CONTEXT v86; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v87[132]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v88; // [rsp+4D8h] [rbp+3D0h] BYREF

  v19 = a6;
  LOWORD(v72) = a1;
  v21 = 0LL;
  v80 = a19;
  v83 = a3;
  v81 = a2;
  v76 = a8;
  v86.PrimaryToken = a8;
  v85 = a6;
  v77 = a6;
  v78 = 0LL;
  P = 0LL;
  *(_QWORD *)&v86.ImpersonationLevel = 0LL;
  v86.ProcessAuditId = 0LL;
  v88 = 0LL;
  Size = 0LL;
  Src = 0LL;
  v75 = 0LL;
  v71 = 0;
  v70 = 0;
  v86.ClientToken = a7;
  if ( !SepAdtAuditThisEventWithContext(124LL, a12, a12 == 0, &v86) )
    return 1;
  v23 = &v88;
  if ( a18 )
    v23 = a18;
  v84 = v23;
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess);
  if ( AllocatedFullProcessImageName >= 0 )
  {
    if ( a7 )
    {
      v21 = a7[3];
      v26 = (__int64 *)a7[19];
    }
    else
    {
      v26 = (__int64 *)v76[19];
    }
    v27 = v76[3];
    v82 = *v26;
    memset(v87, 0, 0x418uLL);
    v28 = a12;
    v29 = 8;
    HIDWORD(v87[0]) = 4656;
    LOWORD(v87[2]) = v72;
    WORD1(v87[2]) = 8;
    if ( a14 == 2 )
      v29 = 3;
    LODWORD(v87[0]) = v29;
    if ( !a12 )
      WORD1(v87[2]) = 16;
    v30 = &SeSubsystemName;
    v31 = 4LL;
    v87[6] = v82;
    if ( v81 )
      v30 = v81;
    LODWORD(v87[3]) = 4;
    LODWORD(v87[7]) = 1;
    v32 = *(unsigned __int8 *)(v82 + 1);
    v87[10] = v30;
    v87[11] = 0x800000005LL;
    v87[12] = v21;
    HIDWORD(v87[3]) = 4 * v32 + 8;
    v33 = *(unsigned __int16 *)v30 + 16;
    HIDWORD(v87[7]) = v33;
    if ( !a7 )
      v87[12] = v27;
    LODWORD(v87[15]) = 1;
    HIDWORD(v87[15]) = v33;
    v87[18] = v30;
    if ( !a4 )
    {
      AllocatedFullProcessImageName = -1073741811;
      goto LABEL_42;
    }
    HIDWORD(v87[19]) = *a4 + 16;
    LODWORD(v87[19]) = 1;
    v87[22] = a4;
    if ( a5 )
    {
      if ( (_WORD)v72 == 117 || (LODWORD(v87[23]) = 1, (_WORD)v72 == 129) )
        LODWORD(v87[23]) = 2;
      v34 = *a5;
      v87[26] = a5;
      HIDWORD(v87[23]) = v34 + 16;
    }
    v87[27] = 0x80000000BLL;
    if ( v83 )
    {
      IsKernelHandle = ObpIsKernelHandle(*v83, 0);
      v38 = v37 ^ 0xFFFFFFFF80000000uLL;
      if ( !IsKernelHandle )
        v38 = v36;
      v87[28] = v38 & 0xFFFFFFFFFFFFFFFCuLL;
    }
    else
    {
      v87[28] = 0LL;
    }
    v87[34] = v84;
    v39 = a10;
    v87[31] = 0x100000000DLL;
    LODWORD(v87[35]) = 7;
    HIDWORD(v87[35]) = v31;
    v87[37] = v31;
    if ( !v28 )
      v39 = a9;
    v40 = v80;
    v87[36] = v39;
    LODWORD(v87[1]) = 9;
    if ( v80 && (v41 = *(_QWORD *)(v80 + 72)) != 0 )
    {
      AllocatedFullProcessImageName = SepCheckAndCopySelfRelativeSD(
                                        *(__int16 **)(v41 + 56),
                                        &Src,
                                        (ULONG *)&Size,
                                        (_BYTE *)&v70 + 1);
      if ( AllocatedFullProcessImageName < 0 )
        goto LABEL_42;
      AllocatedFullProcessImageName = SepCheckAndCopySelfRelativeSD(
                                        *(__int16 **)(*(_QWORD *)(v40 + 72) + 64LL),
                                        &v75,
                                        (ULONG *)&Size + 1,
                                        &v71);
      if ( AllocatedFullProcessImageName < 0 )
        goto LABEL_42;
      v42 = Src;
      if ( Src || v75 )
      {
        v43 = 8;
        goto LABEL_40;
      }
    }
    else
    {
      v42 = Src;
    }
    v43 = 0;
LABEL_40:
    v44 = (unsigned int)(HIDWORD(Size) - v43 + Size + 152);
    Pool2 = (char *)ExAllocatePool2(256LL, (unsigned int)v44, 1883333971LL);
    v46 = Pool2;
    if ( !Pool2 )
    {
      AllocatedFullProcessImageName = -1073741670;
      goto LABEL_42;
    }
    memset(Pool2, 0, v44);
    v47 = a10;
    *((_DWORD *)v46 + 34) = a12;
    if ( !a12 )
      v47 = a9;
    *((_DWORD *)v46 + 33) = 4;
    *(_DWORD *)v46 = v47 & 0xFDFFFFFF;
    if ( v80 )
    {
      v48 = *(_QWORD *)(v80 + 72);
      if ( v48 )
      {
        *(_OWORD *)(v46 + 4) = *(_OWORD *)(v48 + 88);
        *(_OWORD *)(v46 + 20) = *(_OWORD *)(v48 + 104);
        *(_OWORD *)(v46 + 36) = *(_OWORD *)(v48 + 120);
        *(_OWORD *)(v46 + 52) = *(_OWORD *)(v48 + 136);
        *(_OWORD *)(v46 + 68) = *(_OWORD *)(v48 + 152);
        *(_OWORD *)(v46 + 84) = *(_OWORD *)(v48 + 168);
        *(_OWORD *)(v46 + 100) = *(_OWORD *)(v48 + 184);
        *(_OWORD *)(v46 + 116) = *(_OWORD *)(v48 + 200);
      }
    }
    v49 = Size;
    if ( v42 )
      memmove(v46 + 144, v42, (unsigned int)Size);
    if ( v75 )
      memmove(&v46[v49 + 144], v75, HIDWORD(Size));
    v50 = a10;
    HIDWORD(v87[39]) = v44;
    LODWORD(v87[39]) = 29;
    v87[42] = v46;
    v87[43] = 0x40000000ALL;
    if ( !a12 )
      v50 = a9;
    v87[44] = v50;
    if ( a11 )
    {
      v51 = *a11;
      if ( *a11 )
      {
        LODWORD(v87[47]) = 8;
        v87[50] = a11;
        HIDWORD(v87[47]) = 12 * v51 + 8;
      }
    }
    LODWORD(v87[1]) = 12;
    v52 = 12LL;
    if ( a16 )
    {
      v53 = 0;
      v54 = 0;
      v55 = 2 - (a12 != 0);
      v56 = (_WORD *)(a15 + 2);
      do
      {
        if ( !v54 || (v55 & *v56) != 0 )
          ++v53;
        ++v54;
        v56 += 24;
      }
      while ( v54 < a16 );
      v52 = 12LL;
      if ( v53 )
      {
        v57 = (char *)ExAllocatePool2(256LL, 24LL * v53, 1883333971LL);
        v78 = v57;
        if ( !v57 )
        {
          AllocatedFullProcessImageName = -1073741670;
LABEL_100:
          ExFreePoolWithTag(v46, 0);
          goto LABEL_42;
        }
        v58 = (_OWORD *)(a15 + 4);
        v59 = 0LL;
        v60 = 0;
        v61 = a17;
        do
        {
          if ( !v60 || (v55 & *((_WORD *)v58 - 1)) != 0 )
          {
            v62 = 3 * v59;
            *(_OWORD *)&v57[8 * v62] = *v58;
            *(_WORD *)&v57[8 * v62 + 18] = *((_WORD *)v58 - 2);
            if ( v60 )
            {
              *(_WORD *)&v57[24 * v59 + 16] = 0;
              if ( a17 && a12 )
                *(_DWORD *)&v57[24 * v59 + 20] = *v61;
            }
            else
            {
              *(_WORD *)&v57[24 * v59 + 16] = 1;
              *(_DWORD *)&v57[24 * v59 + 20] = 0;
            }
            v59 = (unsigned int)(v59 + 1);
          }
          ++v60;
          v58 += 3;
          ++v61;
        }
        while ( v60 < a16 );
        v87[54] = v57;
        v19 = v85;
        HIDWORD(v87[51]) = 24 * v59;
        v52 = 13LL;
        LODWORD(v87[51]) = 9;
        v87[53] = 4LL;
        LODWORD(v87[1]) = 13;
        HIDWORD(v87[0]) = 4661;
      }
    }
    v63 = (unsigned __int16 *)P;
    LODWORD(v87[4 * v52 + 3]) = 27;
    HIDWORD(v87[4 * LODWORD(v87[1]) + 3]) = 4;
    v87[4 * LODWORD(v87[1]) + 4] = *((unsigned int *)v76 + 32);
    ++LODWORD(v87[1]);
    LODWORD(v87[4 * LODWORD(v87[1]) + 3]) = 11;
    HIDWORD(v87[4 * LODWORD(v87[1]) + 3]) = 8;
    v87[4 * LODWORD(v87[1]) + 4] = a13;
    ++LODWORD(v87[1]);
    LODWORD(v87[4 * LODWORD(v87[1]) + 3]) = 2;
    HIDWORD(v87[4 * LODWORD(v87[1]) + 3]) = *v63 + 16;
    v64 = (unsigned __int16)v72;
    v87[4 * LODWORD(v87[1]) + 6] = v63;
    v65 = ++LODWORD(v87[1]);
    v66 = v64 - 117;
    if ( (!v66 || v66 == 12) && v19 && HIDWORD(v87[0]) == 4656 && (unsigned __int8)SepSDContainsAttributeACE(v19) )
    {
      v67 = SepCheckAndCopySelfRelativeSD(v19, (PVOID *)&v77, (ULONG *)&Size, &v70);
      v19 = v77;
      AllocatedFullProcessImageName = v67;
      if ( v67 < 0 )
        goto LABEL_98;
      v68 = (__int64)v77;
      LODWORD(v87[4 * v65 + 3]) = 31;
      v69 = SepSecurityDescriptorStrictLength(v68);
      HIDWORD(v87[4 * LODWORD(v87[1]) + 3]) = v69;
      v87[4 * LODWORD(v87[1]) + 6] = v19;
      v87[4 * LODWORD(v87[1]) + 4] = 32LL;
      v87[4 * LODWORD(v87[1]) + 5] = 0LL;
      v65 = v87[1];
    }
    LODWORD(v87[1]) = v65 + 1;
    SepAdtLogAuditRecord(v87);
LABEL_98:
    if ( v78 )
      ExFreePoolWithTag(v78, 0);
    goto LABEL_100;
  }
LABEL_42:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( (_BYTE)v70 && v19 )
    ExFreePoolWithTag(v19, 0);
  if ( HIBYTE(v70) && Src )
    ExFreePoolWithTag(Src, 0);
  if ( v71 && v75 )
    ExFreePoolWithTag(v75, 0);
  if ( AllocatedFullProcessImageName < 0 )
    SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
  return AllocatedFullProcessImageName >= 0;
}
