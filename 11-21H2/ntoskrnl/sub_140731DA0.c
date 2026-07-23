/*
 * XREFs of sub_140731DA0 @ 0x140731DA0
 * Callers:
 *     ObOpenObjectByPointer @ 0x1407277A0 (ObOpenObjectByPointer.c)
 *     NtOpenProcessTokenEx @ 0x1407279B0 (NtOpenProcessTokenEx.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     ObOpenObjectByNameEx @ 0x1407CAF90 (ObOpenObjectByNameEx.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_140229AD4 @ 0x140229AD4 (sub_140229AD4.c)
 *     sub_140229FF0 @ 0x140229FF0 (sub_140229FF0.c)
 *     sub_14028AE58 @ 0x14028AE58 (sub_14028AE58.c)
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 *     PsGetCurrentThreadProcessId @ 0x1402A7BC0 (PsGetCurrentThreadProcessId.c)
 *     sub_1402AC350 @ 0x1402AC350 (sub_1402AC350.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     SeAccessCheck @ 0x1402F9C80 (SeAccessCheck.c)
 *     sub_1402FD65C @ 0x1402FD65C (sub_1402FD65C.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwDuplicateObject @ 0x14041BEE0 (ZwDuplicateObject.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405C5EC8 @ 0x1405C5EC8 (sub_1405C5EC8.c)
 *     sub_14066915C @ 0x14066915C (sub_14066915C.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140669A90 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     sub_14066B3D8 @ 0x14066B3D8 (sub_14066B3D8.c)
 *     sub_1406A6C04 @ 0x1406A6C04 (sub_1406A6C04.c)
 *     sub_1406A78D0 @ 0x1406A78D0 (sub_1406A78D0.c)
 *     SeAppendPrivileges @ 0x1406A8AD0 (SeAppendPrivileges.c)
 *     sub_1406A97F0 @ 0x1406A97F0 (sub_1406A97F0.c)
 *     sub_1406B5E34 @ 0x1406B5E34 (sub_1406B5E34.c)
 *     SePrivilegeObjectAuditAlarm @ 0x140724160 (SePrivilegeObjectAuditAlarm.c)
 *     sub_1407241BC @ 0x1407241BC (sub_1407241BC.c)
 *     ObDereferenceSecurityDescriptor @ 0x140725730 (ObDereferenceSecurityDescriptor.c)
 *     sub_140726520 @ 0x140726520 (sub_140726520.c)
 *     RtlMapGenericMask @ 0x140728CB0 (RtlMapGenericMask.c)
 *     SePrivilegeCheck @ 0x14072B5E0 (SePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_140733B40 @ 0x140733B40 (sub_140733B40.c)
 *     sub_1407A2BDC @ 0x1407A2BDC (sub_1407A2BDC.c)
 *     sub_1407A2FA0 @ 0x1407A2FA0 (sub_1407A2FA0.c)
 *     sub_14080BF48 @ 0x14080BF48 (sub_14080BF48.c)
 *     sub_140881DF2 @ 0x140881DF2 (sub_140881DF2.c)
 *     sub_140881FB8 @ 0x140881FB8 (sub_140881FB8.c)
 *     sub_140882966 @ 0x140882966 (sub_140882966.c)
 *     sub_1409843A0 @ 0x1409843A0 (sub_1409843A0.c)
 *     sub_1409C8EE8 @ 0x1409C8EE8 (sub_1409C8EE8.c)
 *     sub_1409C9C64 @ 0x1409C9C64 (sub_1409C9C64.c)
 *     sub_1409E3B48 @ 0x1409E3B48 (sub_1409E3B48.c)
 *     sub_1409F9244 @ 0x1409F9244 (sub_1409F9244.c)
 *     sub_1409F92FC @ 0x1409F92FC (sub_1409F92FC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140731DA0(
        int a1,
        char *a2,
        ACCESS_MASK a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        char a7,
        POBJECT_TYPE *a8,
        int a9,
        PVOID *a10,
        _QWORD *a11)
{
  int v11; // esi
  char *v12; // r13
  POBJECT_TYPE *v13; // r15
  int v15; // edi
  struct _EX_RUNDOWN_REF *v16; // rdx
  unsigned int *v17; // rax
  bool v18; // al
  KPROCESSOR_MODE AccessMode; // si
  __int64 v20; // r15
  unsigned int v21; // eax
  signed __int64 v22; // rdx
  signed __int64 v23; // rbx
  signed __int64 v24; // rdx
  unsigned __int64 v25; // rbx
  __int64 v26; // rax
  NTSTATUS v27; // edi
  PVOID v28; // rbx
  __int64 v29; // r13
  __int64 v30; // rdi
  signed __int64 v31; // rdx
  signed __int64 v32; // rbx
  signed __int64 v33; // rdx
  unsigned __int64 v34; // rbx
  int v35; // edi
  int v36; // eax
  PVOID v37; // rbx
  int v38; // edx
  struct _KTHREAD *v39; // r12
  unsigned int *v40; // r8
  char v41; // al
  int LockArray_high; // edx
  unsigned int v43; // ecx
  unsigned int v44; // r15d
  int v45; // esi
  ULONG_PTR v46; // rbx
  unsigned __int64 *v47; // rdi
  unsigned __int64 v48; // rax
  int v49; // eax
  void *v50; // r15
  unsigned int *v51; // rbx
  unsigned int v52; // edx
  unsigned int v53; // ebx
  PPRIVILEGE_SET *v54; // r12
  PPRIVILEGE_SET *v55; // rax
  __int64 v56; // rdi
  char v57; // si
  int v58; // edi
  _DWORD *v59; // r9
  POBJECT_TYPE *v60; // r12
  unsigned __int64 v61; // rdi
  PVOID v62; // r10
  int v63; // edx
  _QWORD *v64; // rsi
  struct _EX_RUNDOWN_REF *v65; // rbx
  signed __int64 v67; // rax
  signed __int64 v68; // rtt
  signed __int64 v69; // rax
  int v70; // eax
  int v71; // eax
  volatile signed __int64 *v72; // rdi
  __int64 v73; // rbx
  char v74; // si
  ULONG_PTR v75; // rdi
  unsigned __int64 v76; // rcx
  ULONG_PTR v77; // r13
  signed __int64 v78; // rdx
  signed __int64 v79; // rax
  signed __int64 v80; // rbx
  signed __int64 v81; // rdx
  __int64 Pool2; // rbx
  char v83; // r12
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v85; // r15
  ACCESS_MASK v86; // eax
  UNICODE_STRING *v87; // rcx
  __int64 v88; // rcx
  signed __int64 v89; // rax
  signed __int64 v90; // rtt
  signed __int64 v91; // rax
  signed __int64 v92; // rtt
  signed __int64 v93; // rax
  struct _KTHREAD *v94; // rax
  unsigned __int64 v95; // rsi
  struct _KTHREAD *v96; // rax
  struct _ERESOURCE *v97; // rcx
  struct _KTHREAD *v98; // rax
  struct _KTHREAD *v99; // rax
  unsigned __int8 *v100; // rax
  void **v101; // rcx
  __int64 v102; // r8
  unsigned __int8 v103; // bl
  void *v104; // r8
  __int64 v105; // r8
  PVOID v106; // rsi
  __int64 CurrentThreadProcessId; // rax
  unsigned __int16 v108; // r12
  __int64 v109; // rax
  __int64 v110; // rdx
  PPRIVILEGE_SET *Privileges; // [rsp+28h] [rbp-F8h]
  int AccessStatus; // [rsp+48h] [rbp-D8h]
  char v113; // [rsp+A0h] [rbp-80h]
  unsigned __int8 v114; // [rsp+A1h] [rbp-7Fh]
  int v115; // [rsp+A4h] [rbp-7Ch] BYREF
  char v116; // [rsp+A8h] [rbp-78h]
  PVOID Object; // [rsp+B0h] [rbp-70h]
  unsigned int v118; // [rsp+B8h] [rbp-68h]
  int v119; // [rsp+BCh] [rbp-64h]
  ULONG_PTR BugCheckParameter1; // [rsp+C0h] [rbp-60h]
  POBJECT_TYPE *v121; // [rsp+C8h] [rbp-58h]
  NTSTATUS v122; // [rsp+D0h] [rbp-50h] BYREF
  ACCESS_MASK AccessMask; // [rsp+D8h] [rbp-48h] BYREF
  unsigned int *v124; // [rsp+E0h] [rbp-40h]
  int v125; // [rsp+E8h] [rbp-38h]
  int v126; // [rsp+ECh] [rbp-34h]
  PVOID v127; // [rsp+F0h] [rbp-30h] BYREF
  PPRIVILEGE_SET v128; // [rsp+F8h] [rbp-28h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+100h] [rbp-20h] BYREF
  int v130; // [rsp+104h] [rbp-1Ch] BYREF
  int v131; // [rsp+108h] [rbp-18h]
  HANDLE TargetHandle; // [rsp+110h] [rbp-10h] BYREF
  PVOID v133; // [rsp+118h] [rbp-8h] BYREF
  _DWORD v134[2]; // [rsp+120h] [rbp+0h] BYREF
  __int64 v135; // [rsp+128h] [rbp+8h] BYREF
  PVOID P; // [rsp+130h] [rbp+10h] BYREF
  __int128 v137; // [rsp+138h] [rbp+18h] BYREF
  unsigned int v138; // [rsp+148h] [rbp+28h]
  int v139[2]; // [rsp+150h] [rbp+30h] BYREF
  _QWORD *v140; // [rsp+158h] [rbp+38h]
  unsigned __int64 v141; // [rsp+160h] [rbp+40h]
  unsigned __int64 v142; // [rsp+168h] [rbp+48h]
  PVOID *v143; // [rsp+170h] [rbp+50h]
  _PRIVILEGE_SET RequiredPrivileges; // [rsp+178h] [rbp+58h] BYREF

  v11 = a6;
  v12 = a2;
  v13 = a8;
  v143 = a10;
  v15 = a1;
  v140 = a11;
  v137 = 0LL;
  AccessMask = a3;
  v115 = 0;
  v134[0] = 0;
  v134[1] = a9;
  Object = a2;
  v126 = a1;
  v119 = a6;
  v16 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)KeGetCurrentThread() + 23);
  BugCheckParameter1 = (ULONG_PTR)v16;
  v121 = a8;
  v127 = 0LL;
  v113 = 0;
  P = 0LL;
  v116 = 0;
  if ( (a6 & 0x200) != 0 )
  {
    v17 = (unsigned int *)qword_140C24F88;
    BugCheckParameter1 = (ULONG_PTR)PsInitialSystemProcess;
    goto LABEL_4;
  }
  if ( *((_BYTE *)KeGetCurrentThread() + 586) != 1 )
  {
    v17 = *(unsigned int **)(*((_QWORD *)KeGetCurrentThread() + 23) + 1392LL);
LABEL_4:
    v124 = v17;
    goto LABEL_5;
  }
  v17 = (unsigned int *)sub_14066B3D8(v16);
  v124 = v17;
  if ( !v17 )
    return (unsigned int)-1073741558;
  v116 = 1;
LABEL_5:
  v18 = v17 == (unsigned int *)qword_140C24F88;
  v114 = v18;
  if ( a4 && (!v18 || *(_DWORD *)(a4 + 24)) )
  {
    AccessMode = 1;
    v122 = 0;
    if ( (a6 & 0x400) == 0 )
      AccessMode = a7;
    if ( (unsigned int)(v15 - 1) > 1 )
    {
      v20 = qword_140D07490[(unsigned __int8)dword_140D06C0C ^ (unsigned __int8)*(v12 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v12 - 48) >> 8)];
      v21 = *(_DWORD *)(a4 + 16);
      if ( (v21 & 0x2000000) != 0 )
      {
        v21 = v21 & 0xEDFFFFFF | 0x10000000;
        *(_DWORD *)(a4 + 16) = v21;
      }
      if ( (v21 & 0xF0000000) != 0 )
      {
        RtlMapGenericMask((PACCESS_MASK)(a4 + 16), (PGENERIC_MAPPING)(v20 + 76));
        v21 = *(_DWORD *)(a4 + 16);
      }
      if ( (v21 & 0x1000000) == 0 )
      {
LABEL_15:
        *(_DWORD *)(a4 + 20) |= *(_DWORD *)(a4 + 16);
        *(_DWORD *)(a4 + 16) = 0;
        *(_DWORD *)(a4 + 20) &= *(_DWORD *)(v20 + 92) | 0x1000000;
        _m_prefetchw(v12 - 8);
        v22 = *((_QWORD *)v12 - 1);
        if ( (v22 & 0xF) != 0 )
        {
          do
          {
            v93 = _InterlockedCompareExchange64((volatile signed __int64 *)v12 - 1, v22 - 1, v22);
            if ( v22 == v93 )
              break;
            v22 = v93;
          }
          while ( (v93 & 0xF) != 0 );
        }
        v23 = v22;
        v24 = v22 & 0xF;
        v25 = v23 & 0xFFFFFFFFFFFFFFF0uLL;
        if ( (unsigned int)v24 <= 1 && v25 )
          v25 = sub_14080BF48(v12 - 48, v24, v25);
        *(_DWORD *)(a4 + 20) &= ~(unsigned int)sub_1402AC350(
                                                 (PSECURITY_SUBJECT_CONTEXT)(a4 + 32),
                                                 a4,
                                                 *(_DWORD *)(a4 + 20),
                                                 v25);
        if ( v25 )
        {
          _m_prefetchw(v12 - 8);
          v91 = *((_QWORD *)v12 - 1);
          if ( (v25 ^ v91) >= 0xF )
          {
LABEL_207:
            ObDereferenceSecurityDescriptor(v25, 1u);
          }
          else
          {
            while ( 1 )
            {
              v92 = v91;
              v91 = _InterlockedCompareExchange64((volatile signed __int64 *)v12 - 1, v91 + 1, v91);
              if ( v92 == v91 )
                break;
              if ( (v25 ^ v91) >= 0xF )
                goto LABEL_207;
            }
          }
        }
        goto LABEL_20;
      }
      RequiredPrivileges.Privilege[0].Attributes = 0;
      RequiredPrivileges.Privilege[0].Luid = stru_140D3CA98;
      RequiredPrivileges.PrivilegeCount = 1;
      RequiredPrivileges.Control = 1;
      if ( SePrivilegeCheck(&RequiredPrivileges, (PSECURITY_SUBJECT_CONTEXT)(a4 + 32), AccessMode) )
      {
        *(_DWORD *)(a4 + 16) &= ~0x1000000u;
        *(_DWORD *)(a4 + 20) |= 0x1000000u;
        SeAppendPrivileges((PACCESS_STATE)a4, &RequiredPrivileges);
        goto LABEL_15;
      }
      sub_140726520(0LL, (__int64 *)(a4 + 32), (int *)&RequiredPrivileges, 0);
      v27 = -1073741727;
LABEL_140:
      v65 = (struct _EX_RUNDOWN_REF *)BugCheckParameter1;
      goto LABEL_90;
    }
    v75 = (ULONG_PTR)(v12 - 48);
    GrantedAccess = 0;
    v128 = 0LL;
    v76 = (unsigned __int8)*(v12 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v12 - 48) >> 8);
    v118 = 0;
    v125 = 0;
    v77 = qword_140D07490[(unsigned __int8)dword_140D06C0C ^ v76];
    if ( *(__int64 (__fastcall **)(void *, int, DWORD *, char *, ULONG *, __int64 *, POOL_TYPE, GENERIC_MAPPING *))(v77 + 152) == sub_140725080 )
    {
      _m_prefetchw((const void *)(v75 + 40));
      v78 = *(_QWORD *)(v75 + 40);
      if ( (v78 & 0xF) != 0 )
      {
        do
        {
          v79 = _InterlockedCompareExchange64((volatile signed __int64 *)(v75 + 40), v78 - 1, v78);
          if ( v78 == v79 )
            break;
          v78 = v79;
        }
        while ( (v79 & 0xF) != 0 );
      }
      v80 = v78;
      v81 = v78 & 0xF;
      Pool2 = v80 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( (unsigned int)v81 <= 1 && Pool2 )
        Pool2 = sub_14080BF48(v75, v81, Pool2);
      v83 = 0;
      if ( !Pool2 && ((*(_BYTE *)(v77 + 66) & 8) != 0 || (*(_BYTE *)(v75 + 26) & 2) != 0) )
        KeBugCheckEx(0x189u, v75, v77, 1uLL, 0LL);
      v27 = 0;
      goto LABEL_123;
    }
    v125 = 447;
    v118 = dword_140C095A0;
    Pool2 = ExAllocatePool2(256LL, (unsigned int)dword_140C095A0, 1901290063LL);
    if ( !Pool2 )
    {
      v27 = -1073741670;
LABEL_199:
      v12 = (char *)Object;
      v122 = v27;
LABEL_139:
      if ( v27 >= 0 )
      {
        v11 = v119;
        v15 = v126;
        goto LABEL_21;
      }
      goto LABEL_140;
    }
    v27 = sub_14042A5E0(Object, 1LL);
    if ( v27 == -1073741789 )
    {
      ExFreePoolWithTag((PVOID)Pool2, 0);
      dword_140C095A0 = v118;
      Pool2 = ExAllocatePool2(256LL, v118, 1901290063LL);
      if ( !Pool2 )
      {
        v27 = -1073741670;
LABEL_212:
        v13 = v121;
        goto LABEL_199;
      }
      v27 = sub_14042A5E0(Object, 1LL);
    }
    if ( v27 >= 0 )
    {
      v83 = 1;
LABEL_123:
      if ( !Pool2 )
      {
        *(_DWORD *)(a4 + 20) |= *(_DWORD *)(a4 + 16);
        v12 = (char *)Object;
        *(_DWORD *)(a4 + 16) = 0;
        v122 = v27;
LABEL_20:
        v11 = v119;
        v13 = v121;
        v15 = v126;
        v115 = *(_DWORD *)(a4 + 20);
        goto LABEL_21;
      }
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(a4 + 48) + 48LL), 1u);
      if ( *(_QWORD *)(a4 + 32) )
      {
        v99 = KeGetCurrentThread();
        --*((_WORD *)v99 + 242);
        ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(a4 + 32) + 48LL), 1u);
      }
      v85 = SeAccessCheck(
              (PSECURITY_DESCRIPTOR)Pool2,
              (PSECURITY_SUBJECT_CONTEXT)(a4 + 32),
              1u,
              *(_DWORD *)(a4 + 16),
              *(_DWORD *)(a4 + 20),
              &v128,
              (PGENERIC_MAPPING)(v77 + 76),
              AccessMode,
              &GrantedAccess,
              &v122);
      if ( v128 )
      {
        SeAppendPrivileges((PACCESS_STATE)a4, v128);
        SeFreePrivileges(v128);
      }
      if ( v85 )
      {
        v86 = GrantedAccess;
        *(_DWORD *)(a4 + 20) |= GrantedAccess;
        *(_DWORD *)(a4 + 16) &= ~(v86 | 0x2000000);
      }
      if ( AccessMode )
      {
        v87 = (UNICODE_STRING *)(v77 + 16);
        v12 = (char *)Object;
        SeOpenObjectAuditAlarmWithTransaction(
          v87,
          Object,
          0LL,
          (PSECURITY_DESCRIPTOR)Pool2,
          (PACCESS_STATE)a4,
          0,
          v85,
          AccessMode,
          0LL,
          (PBOOLEAN)(a4 + 10));
      }
      else
      {
        v12 = (char *)Object;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(a4 + 48) + 48LL));
      KeLeaveCriticalRegion();
      v88 = *(_QWORD *)(a4 + 32);
      if ( v88 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v88 + 48));
        KeLeaveCriticalRegion();
      }
      if ( v83 )
      {
        ExFreePoolWithTag((PVOID)Pool2, 0);
      }
      else
      {
        _m_prefetchw(v12 - 8);
        v89 = *((_QWORD *)v12 - 1);
        if ( (Pool2 ^ (unsigned __int64)v89) >= 0xF )
        {
LABEL_213:
          ObDereferenceSecurityDescriptor(Pool2, 1u);
        }
        else
        {
          while ( 1 )
          {
            v90 = v89;
            v89 = _InterlockedCompareExchange64((volatile signed __int64 *)v12 - 1, v89 + 1, v89);
            if ( v90 == v89 )
              break;
            if ( (Pool2 ^ (unsigned __int64)v89) >= 0xF )
              goto LABEL_213;
          }
        }
      }
      if ( v85 )
        goto LABEL_20;
      v27 = v122;
      v13 = v121;
      goto LABEL_139;
    }
    ExFreePoolWithTag((PVOID)Pool2, 0);
    goto LABEL_212;
  }
  v70 = AccessMask;
  if ( (AccessMask & 0x2000000) != 0 )
  {
    v70 = AccessMask & 0xEDFFFFFF | 0x10000000;
    AccessMask = v70;
  }
  if ( (v70 & 0xF0000000) != 0 )
  {
    RtlMapGenericMask(
      &AccessMask,
      (PGENERIC_MAPPING)(qword_140D07490[(unsigned __int8)dword_140D06C0C ^ (unsigned __int8)*(v12 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v12 - 48) >> 8)]
                       + 76));
    v70 = AccessMask;
  }
  v115 = v70;
LABEL_21:
  v26 = 0LL;
  v135 = 0LL;
  if ( v13 )
  {
    v26 = (__int64)v13[4];
    v135 = v26;
  }
  v27 = sub_140733B40(v15, (unsigned int)&v115, BugCheckParameter1, (_DWORD)v12, a7, v11, v26);
  if ( v27 < 0 )
    goto LABEL_140;
  if ( a4 )
  {
    if ( v13 )
    {
      v65 = (struct _EX_RUNDOWN_REF *)BugCheckParameter1;
      v27 = sub_14066915C(BugCheckParameter1, v12, (__int64)&v115, a4, a7, v13, &v127);
      if ( v27 < 0 )
        goto LABEL_90;
      v28 = v127;
      if ( v127 == v12 )
      {
        v28 = 0LL;
        v127 = 0LL;
      }
      else
      {
        v12 = (char *)v127;
        Object = v127;
        v113 = 1;
      }
    }
    else
    {
      v28 = v127;
    }
    if ( *(_BYTE *)(a4 + 10) )
      LOBYTE(v11) = v11 | 4;
  }
  else
  {
    v28 = v127;
  }
  v29 = (__int64)(v12 - 48);
  v30 = qword_140D07490[(unsigned __int8)dword_140D06C0C ^ *(unsigned __int8 *)(v29 + 24) ^ (unsigned __int64)BYTE1(v29)];
  v121 = (POBJECT_TYPE *)v30;
  v115 &= *(_DWORD *)(v30 + 92) | 0x1000000;
  if ( a4 )
  {
    _m_prefetchw((const void *)(v29 + 40));
    v31 = *(_QWORD *)(v29 + 40);
    if ( (v31 & 0xF) != 0 )
    {
      do
      {
        v69 = _InterlockedCompareExchange64((volatile signed __int64 *)(v29 + 40), v31 - 1, v31);
        if ( v31 == v69 )
          break;
        v31 = v69;
      }
      while ( (v69 & 0xF) != 0 );
    }
    v32 = v31;
    v33 = v31 & 0xF;
    v34 = v32 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (unsigned int)v33 <= 1 && v34 )
      v34 = sub_14080BF48(v29, v33, v34);
    v35 = sub_1402AC350((PSECURITY_SUBJECT_CONTEXT)(a4 + 32), a4, v115, v34);
    if ( v34 )
    {
      _m_prefetchw((const void *)(v29 + 40));
      v67 = *(_QWORD *)(v29 + 40);
      if ( (v34 ^ v67) >= 0xF )
      {
LABEL_214:
        ObDereferenceSecurityDescriptor(v34, 1u);
      }
      else
      {
        while ( 1 )
        {
          v68 = v67;
          v67 = _InterlockedCompareExchange64((volatile signed __int64 *)(v29 + 40), v67 + 1, v67);
          if ( v68 == v67 )
            break;
          if ( (v34 ^ v67) >= 0xF )
            goto LABEL_214;
        }
      }
    }
    v28 = v127;
    v36 = ~v35 & v115;
    v30 = (__int64)v121;
    v115 = v36;
    *(_DWORD *)(a4 + 20) = v36;
    v134[0] = *(_DWORD *)(*(_QWORD *)(a4 + 72) + 28LL);
  }
  if ( a5 )
    sub_140229FF0((ULONG_PTR)Object, a5);
  if ( v28 )
    ObfDereferenceObject(v28);
  v37 = Object;
  if ( v13 && (POBJECT_TYPE)v30 == qword_140C24FC0 && !v113 )
    sub_1406A97F0((__int64)Object);
  *((_QWORD *)&v137 + 1) = &v137;
  *(_QWORD *)&v137 = &v137;
  if ( (*(_BYTE *)(v30 + 66) & 0x40) == 0 || *(_QWORD *)(v30 + 200) == v30 + 200 )
    goto LABEL_42;
  v130 = v115;
  v27 = sub_1406A78D0((__int64)v37, v114, &v130, (__int64)&v137);
  if ( v27 < 0 )
  {
    sub_1407A2FA0(BugCheckParameter1);
    if ( a5 )
      sub_14028AE58((ULONG_PTR)v37, a5);
    goto LABEL_140;
  }
  if ( !v114 )
  {
    v115 = v130;
    if ( a4 )
      *(_DWORD *)(a4 + 20) = v130;
  }
LABEL_42:
  v142 = 0LL;
  v38 = v115 & 0x1FFFFFF;
  if ( (v11 & 8) != 0 )
    v38 |= 0x2000000u;
  v39 = KeGetCurrentThread();
  LODWORD(v142) = v38;
  v141 = ((v29 & 0xFFFFFFFFFFFFFFF1uLL) << 16) | ((unsigned __int64)(v11 & 7) << 17) | 1;
  --*((_WORD *)v39 + 242);
  v40 = v124;
  v41 = *((_BYTE *)v124 + 44);
  if ( (v41 & 4) != 0 )
  {
LABEL_220:
    sub_1402AC800((__int64)v39);
    goto LABEL_221;
  }
  if ( (v41 & 1) != 0 )
    LockArray_high = 0;
  else
    LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
  v43 = dword_140D3CA8C;
  v131 = dword_140D3CA8C;
  v119 = LockArray_high;
LABEL_48:
  v44 = 0;
  v138 = *v40;
  v45 = LockArray_high;
  while ( 1 )
  {
    v46 = (ULONG_PTR)&v40[16 * v45 + 16];
    if ( *(_QWORD *)(v46 + 8) )
      break;
LABEL_108:
    v71 = v45 + 1;
    ++v44;
    v45 = 0;
    if ( v71 != v43 )
      v45 = v71;
    if ( v44 >= v43 )
    {
      v72 = (volatile signed __int64 *)(v40 + 14);
      v73 = (__int64)&v40[16 * v119 + 16];
      v74 = 1;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v40 + 14), 0LL);
      if ( v138 == *v124 )
        v74 = sub_1406A6C04(v124, v73);
      if ( (_InterlockedExchangeAdd64(v72, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v72);
      sub_1402AFC00((ULONG_PTR)v72);
      if ( v74 )
      {
        v43 = v131;
        LockArray_high = v119;
        v40 = v124;
        goto LABEL_48;
      }
      goto LABEL_220;
    }
  }
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&v40[16 * v45 + 16], 0LL);
  v47 = *(unsigned __int64 **)(v46 + 8);
  if ( v47 )
  {
    v48 = v47[1];
    *(_QWORD *)(v46 + 8) = v48;
    if ( !v48 )
      *(_QWORD *)(v46 + 16) = 0LL;
    v49 = ++*(_DWORD *)(v46 + 24);
    if ( v49 > *(_DWORD *)(v46 + 28) )
      *(_DWORD *)(v46 + 28) = v49;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v46, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v46);
  sub_1402AFC00(v46);
  if ( !v47 )
  {
    v43 = v131;
    v40 = v124;
    goto LABEL_108;
  }
  v50 = (void *)(*(_QWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFF000uLL) + 8)
               + 4 * ((__int64)((__int64)v47 - ((unsigned __int64)v47 & 0xFFFFFFFFFFFFF000uLL)) >> 4));
  if ( v134[0] || a9 )
  {
    v51 = v124;
    if ( (unsigned int)sub_1409F9244(v124, v50, v134) )
    {
      sub_1407A2BDC(v51, v50, v47);
      goto LABEL_220;
    }
  }
  else
  {
    v51 = v124;
  }
  if ( *((_QWORD *)v51 + 12) )
    sub_1409F92FC(v51, v39, v50, 1LL);
  v47[1] = v142;
  *v47 = v141;
  sub_1402AC800((__int64)v39);
  if ( v50 )
  {
    v52 = a5;
    if ( a5 && dword_140D05010 )
    {
      sub_1405C5EC8(v29, 0, 1u, 0x746C6644u);
      sub_1405C5EC8(v29, 1, 1u, 0x6E48624Fu);
      v52 = a5;
    }
    v53 = (unsigned int)v50;
    if ( !a4 )
    {
      v60 = v121;
LABEL_83:
      v62 = Object;
      if ( v52 && v143 )
        *v143 = Object;
      v63 = v114;
      v27 = v113 != 0 ? 0x40000000 : 0;
      if ( v114 )
        v50 = (void *)(v53 | 0xFFFFFFFF80000000uLL);
      v64 = v140;
      v65 = (struct _EX_RUNDOWN_REF *)BugCheckParameter1;
      *v140 = v50;
      goto LABEL_87;
    }
    v54 = 0LL;
    if ( (*(_BYTE *)(v29 + 26) & 0x20) == 0
      || (v100 = (unsigned __int8 *)byte_140C25440[*(_BYTE *)(v29 + 26) & 0x3F],
          v101 = (void **)(v29 - (_QWORD)v100),
          (unsigned __int8 *)v29 == v100) )
    {
      v55 = (PPRIVILEGE_SET *)v135;
      if ( !v135 )
        goto LABEL_68;
    }
    else
    {
      v55 = (PPRIVILEGE_SET *)*v101;
      if ( !*v101 )
      {
        if ( v135 )
        {
          sub_140881DF2(v29, &v135, 0LL);
          v52 = a5;
          TargetHandle = 0LL;
          v133 = 0LL;
          v56 = *(_QWORD *)(a4 + 72);
          v128 = (PPRIVILEGE_SET)v56;
          *(_QWORD *)v139 = v50;
          goto LABEL_69;
        }
        if ( ((unsigned __int8)dword_140D06C0C ^ (unsigned __int8)(*(_BYTE *)(v29 + 24) ^ BYTE1(v29))) != *((_BYTE *)IoFileObjectType + 40)
          || (*(_DWORD *)(*((_QWORD *)Object + 1) + 52LL) & 0x10) == 0 )
        {
          v102 = *(_QWORD *)(a4 + 72);
          v103 = 0;
          if ( v102 && (v104 = *(void **)(v102 + 56)) != 0LL )
            v103 = 1;
          else
            v104 = 0LL;
          if ( (int)sub_1406B5E34((__int64)Object, 0x20u, v104, &P) >= 0 )
          {
            v54 = (PPRIVILEGE_SET *)P;
            sub_140881DF2(v29, &P, v103);
          }
          v52 = a5;
        }
LABEL_68:
        v133 = 0LL;
        TargetHandle = 0LL;
        v56 = *(_QWORD *)(a4 + 72);
        v128 = (PPRIVILEGE_SET)v56;
        *(_QWORD *)v139 = v50;
        if ( v54 )
        {
          v57 = 0;
        }
        else
        {
LABEL_69:
          v54 = *(PPRIVILEGE_SET **)(v56 + 56);
          v57 = 0;
          if ( !v54 )
            v54 = *(PPRIVILEGE_SET **)(a4 + 64);
        }
        v53 = (unsigned int)v50;
        if ( *(_BYTE *)(a4 + 9) )
        {
          if ( !*(_BYTE *)(a4 + 124) )
            goto LABEL_238;
          sub_1407241BC(
            &qword_140001B08,
            (unsigned __int16 *)(a4 + 144),
            (unsigned __int16 *)(a4 + 128),
            (unsigned __int64)v50,
            *(_QWORD *)(a4 + 32),
            *(_QWORD *)(a4 + 48),
            *(_QWORD *)(a4 + 56),
            *(_DWORD *)(a4 + 20),
            *(int **)v56,
            1);
        }
        else
        {
          if ( !*(_BYTE *)(v56 + 216) )
          {
LABEL_73:
            v58 = v126;
            *(_BYTE *)(a4 + 10) = v57;
            if ( !v58 )
            {
              v59 = **(_DWORD ***)(a4 + 72);
              if ( v59 )
              {
                if ( *v59 )
                {
                  SePrivilegeObjectAuditAlarm(
                    (int)v50,
                    (__int64 *)(a4 + 32),
                    *(_DWORD *)(a4 + 20),
                    (__int64)v59,
                    1,
                    *((_BYTE *)KeGetCurrentThread() + 562));
                  v52 = a5;
                }
              }
            }
            if ( P )
            {
              ExFreePoolWithTag(P, 0);
              v52 = a5;
            }
            v60 = v121;
            if ( !v58 && (v121 == CmKeyObjectType || v121 == IoFileObjectType) )
            {
              v61 = *(_QWORD *)(a4 + 32);
              if ( v61 )
              {
                v94 = KeGetCurrentThread();
                v95 = *(_QWORD *)(a4 + 48);
                --*((_WORD *)v94 + 242);
                if ( v95 < v61 )
                {
                  ExAcquireResourceSharedLite(*(PERESOURCE *)(v95 + 48), 1u);
                  v98 = KeGetCurrentThread();
                  --*((_WORD *)v98 + 242);
                  v97 = *(struct _ERESOURCE **)(v61 + 48);
                }
                else
                {
                  ExAcquireResourceSharedLite(*(PERESOURCE *)(v61 + 48), 1u);
                  v96 = KeGetCurrentThread();
                  --*((_WORD *)v96 + 242);
                  v97 = *(struct _ERESOURCE **)(v95 + 48);
                }
                ExAcquireResourceSharedLite(v97, 1u);
                if ( (*(_DWORD *)(v61 + 200) & 0x4000) != 0
                  && *(int *)(v61 + 196) >= 2
                  && !RtlEqualSid(**(PSID **)(v95 + 152), **(PSID **)(v61 + 152))
                  && sub_140229AD4(v29)
                  && sub_1402FD65C((PSID_AND_ATTRIBUTES_HASH)(v95 + 808), 0LL, qword_140C1BA28, 0, 1, 0) )
                {
                  sub_1409843A0(*(_QWORD *)(v61 + 216) + 128LL, Object);
                }
                ExReleaseResourceLite(*(PERESOURCE *)(v95 + 48));
                KeLeaveCriticalRegion();
                ExReleaseResourceLite(*(PERESOURCE *)(v61 + 48));
                KeLeaveCriticalRegion();
                v52 = a5;
              }
            }
            goto LABEL_83;
          }
LABEL_238:
          if ( ZwDuplicateObject(
                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                 v50,
                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                 &TargetHandle,
                 0,
                 0x200u,
                 2u) >= 0 )
          {
            v133 = 0LL;
            ObReferenceObjectByHandle(TargetHandle, 0, 0LL, 0, &v133, 0LL);
          }
          v106 = v133;
          LOBYTE(v105) = 1;
          LOWORD(v118) = sub_140882966(v133, a4 + 144, v105, 0LL);
          if ( v106 )
            ObfDereferenceObject(v106);
          if ( TargetHandle )
          {
            ZwClose(TargetHandle);
            TargetHandle = 0LL;
          }
          CurrentThreadProcessId = PsGetCurrentThreadProcessId();
          Privileges = v54;
          v108 = v118;
          LOBYTE(v118) = sub_1409C8EE8(
                           (unsigned __int16)v118,
                           (int)&qword_140001B08,
                           (int)v139,
                           (int)a4 + 144,
                           a4 + 128,
                           Privileges,
                           *(_QWORD *)(a4 + 32),
                           *(_QWORD *)(a4 + 48),
                           *(_DWORD *)(a4 + 24),
                           *(_DWORD *)(a4 + 20),
                           *(_QWORD *)&v128->PrivilegeCount,
                           1,
                           CurrentThreadProcessId,
                           2,
                           0LL,
                           0,
                           0LL,
                           v56 + 32,
                           a4);
          v109 = PsGetCurrentThreadProcessId();
          LOBYTE(AccessStatus) = 1;
          sub_1409C9C64(
            v108,
            v110,
            v139,
            a4 + 144,
            a4 + 128,
            *(_QWORD *)(a4 + 32),
            *(_QWORD *)(a4 + 48),
            *(_DWORD *)(a4 + 24),
            *(_DWORD *)(a4 + 20),
            AccessStatus,
            v109,
            a4);
          v57 = v118;
        }
        v52 = a5;
        goto LABEL_73;
      }
    }
    v54 = v55;
    goto LABEL_68;
  }
LABEL_221:
  v65 = (struct _EX_RUNDOWN_REF *)BugCheckParameter1;
  sub_1407A2FA0(BugCheckParameter1);
  if ( a5 )
    sub_14028AE58((ULONG_PTR)Object, a5);
  v60 = v121;
  v27 = -1073741670;
  v62 = Object;
  v63 = v114;
  v64 = v140;
LABEL_87:
  if ( (__int128 *)v137 != &v137 )
  {
    sub_140881FB8((_DWORD)v62, v63, v27, v115, (__int64)&v137);
    v62 = Object;
  }
  if ( (xmmword_140D06910 & 0x40) != 0 && v27 >= 0 )
    sub_1409E3B48(4384LL, *v64, v62, v60);
LABEL_90:
  if ( v116 )
    sub_1402AD030(v65 + 139);
  return (unsigned int)v27;
}
