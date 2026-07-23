/*
 * XREFs of CmLoadDifferencingKey @ 0x14069108C
 * Callers:
 *     NtLoadKeyEx @ 0x140691020 (NtLoadKeyEx.c)
 *     VrpPreLoadKey @ 0x14077A634 (VrpPreLoadKey.c)
 *     VrpLoadDifferencingHive @ 0x14077BC8C (VrpLoadDifferencingHive.c)
 *     NtLoadKey3 @ 0x1407E8D30 (NtLoadKey3.c)
 *     NtLoadKey2 @ 0x1408754D0 (NtLoadKey2.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     CmpFreeTransientPoolWithTag @ 0x14022CFE4 (CmpFreeTransientPoolWithTag.c)
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     CmpInitializeThreadInfo @ 0x14022E750 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E790 (CmCleanupThreadInfo.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     CmpIsRegistryLockAcquired @ 0x14022FC60 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x14029788C (CmpAllocateTransientPoolWithQuota.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmCheckNoTxContext @ 0x140691C88 (CmCheckNoTxContext.c)
 *     CmConvertHandleToKernelHandle @ 0x140691CD0 (CmConvertHandleToKernelHandle.c)
 *     CmPostCallbackNotificationEx @ 0x140691E30 (CmPostCallbackNotificationEx.c)
 *     CmpNameFromAttributes @ 0x140691F04 (CmpNameFromAttributes.c)
 *     CmpTraceHiveLoadStop @ 0x140692A28 (CmpTraceHiveLoadStop.c)
 *     CmpCleanupParseContext @ 0x140692A84 (CmpCleanupParseContext.c)
 *     CmpTraceHiveLoadStart @ 0x140692AE4 (CmpTraceHiveLoadStart.c)
 *     ObDeleteCapturedInsertInfo @ 0x140692B60 (ObDeleteCapturedInsertInfo.c)
 *     CmReleaseLoadKeyContext @ 0x140692BE4 (CmReleaseLoadKeyContext.c)
 *     CmLoadKey @ 0x1406957C0 (CmLoadKey.c)
 *     ObReferenceObjectByName @ 0x1406C2C80 (ObReferenceObjectByName.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x1406E8620 (CmpCallCallBacksEx.c)
 *     ObOpenObjectByPointer @ 0x1407376C0 (ObOpenObjectByPointer.c)
 *     SeSinglePrivilegeCheck @ 0x140737CF0 (SeSinglePrivilegeCheck.c)
 *     CmLoadAppKey @ 0x140769830 (CmLoadAppKey.c)
 *     CmpDereferenceKeyControlBlock @ 0x14076AD00 (CmpDereferenceKeyControlBlock.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140AF5008 (CmpReleaseHiveLoadUnloadRundown.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140AF502C (CmpAcquireHiveLoadUnloadRundown.c)
 *     CmObReferenceObjectByHandle @ 0x140AF53D0 (CmObReferenceObjectByHandle.c)
 *     CmpLockRegistry @ 0x140AF54A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmLoadDifferencingKey(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        void *a5,
        ACCESS_MASK DesiredAccess,
        HANDLE *a7,
        int a8,
        __int64 a9,
        char a10,
        void *a11,
        KPROCESSOR_MODE PreviousMode)
{
  char v14; // r13
  PVOID v15; // r15
  PVOID v16; // r12
  __int64 v17; // rdx
  NTSTATUS v18; // edi
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // r8
  unsigned __int16 v22; // ax
  unsigned int Length; // edi
  struct _PRIVILEGE_SET *TransientPoolWithQuota; // rax
  wchar_t *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // r8
  int v28; // r9d
  PVOID v29; // rax
  struct _KTHREAD *CurrentThread; // rax
  PVOID v31; // rbx
  int v32; // r9d
  int Key; // eax
  int v34; // eax
  UNICODE_STRING *p_DestinationString; // rcx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  PVOID v39; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  POBJECT_TYPE ObjectType; // [rsp+20h] [rbp-358h]
  KPROCESSOR_MODE AccessMode[8]; // [rsp+28h] [rbp-350h]
  int Handle; // [rsp+30h] [rbp-348h]
  char v48; // [rsp+60h] [rbp-318h]
  int v49; // [rsp+64h] [rbp-314h]
  char v50; // [rsp+68h] [rbp-310h]
  char v51; // [rsp+69h] [rbp-30Fh]
  PVOID v52; // [rsp+70h] [rbp-308h]
  char UnloadRundown; // [rsp+78h] [rbp-300h]
  PVOID Object; // [rsp+80h] [rbp-2F8h] BYREF
  int v55; // [rsp+88h] [rbp-2F0h]
  PVOID v56; // [rsp+90h] [rbp-2E8h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+98h] [rbp-2E0h] BYREF
  void *v58[2]; // [rsp+A0h] [rbp-2D8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-2C8h] BYREF
  HANDLE *v60; // [rsp+C0h] [rbp-2B8h]
  PVOID v61; // [rsp+C8h] [rbp-2B0h] BYREF
  int v62; // [rsp+D0h] [rbp-2A8h]
  unsigned int v63; // [rsp+D8h] [rbp-2A0h]
  PVOID v64; // [rsp+E0h] [rbp-298h]
  HANDLE v65; // [rsp+E8h] [rbp-290h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+F0h] [rbp-288h]
  HANDLE v67[2]; // [rsp+F8h] [rbp-280h] BYREF
  UNICODE_STRING v68; // [rsp+108h] [rbp-270h] BYREF
  HANDLE v69; // [rsp+118h] [rbp-260h] BYREF
  __m128i v70; // [rsp+120h] [rbp-258h]
  HANDLE v71[2]; // [rsp+130h] [rbp-248h] BYREF
  __int128 v72; // [rsp+140h] [rbp-238h]
  __int128 v73; // [rsp+150h] [rbp-228h]
  __int128 v74; // [rsp+160h] [rbp-218h] BYREF
  __int64 v75; // [rsp+170h] [rbp-208h]
  int v76; // [rsp+178h] [rbp-200h]
  __int64 v77; // [rsp+180h] [rbp-1F8h]
  __int64 v78; // [rsp+188h] [rbp-1F0h]
  __int128 v79; // [rsp+190h] [rbp-1E8h] BYREF
  _QWORD v80[12]; // [rsp+1A0h] [rbp-1D8h] BYREF
  _OWORD v81[19]; // [rsp+200h] [rbp-178h] BYREF

  v77 = a4;
  v70.m128i_i64[0] = a2;
  v60 = a7;
  v63 = a3;
  Object = a5;
  v78 = a9;
  v67[0] = a11;
  v79 = 0LL;
  *(_OWORD *)v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  DestinationString = 0LL;
  v68 = 0LL;
  v58[0] = 0LL;
  v69 = 0LL;
  v50 = 0;
  v76 = 0;
  v14 = 0;
  CmpInitializeThreadInfo((__int64)&v79);
  RtlInitUnicodeString(&DestinationString, 0LL);
  v51 = 0;
  RtlInitUnicodeString(&v68, 0LL);
  v56 = 0LL;
  BugCheckParameter4 = 0LL;
  v61 = 0LL;
  v65 = 0LL;
  v15 = 0LL;
  v52 = 0LL;
  Privileges = 0LL;
  memset(v81, 0, 0x128uLL);
  LODWORD(v81[6]) = -1;
  *((_QWORD *)&v81[9] + 1) = &v81[9];
  *(_QWORD *)&v81[9] = &v81[9];
  memset((char *)&v81[13] + 8, 0, 0x50uLL);
  v16 = 0LL;
  v64 = 0LL;
  UnloadRundown = CmpAcquireHiveLoadUnloadRundown();
  if ( !UnloadRundown )
  {
    v18 = -1073741431;
    goto LABEL_109;
  }
  v48 = 0;
  if ( (a3 & 0xFFFF000B) != 0 || a9 && (a3 & 0xFFFF9EFF) != 0 )
    goto LABEL_108;
  if ( a10 )
  {
    if ( !a9 )
    {
      v18 = -1073741576;
      goto LABEL_109;
    }
    if ( (a3 & 0x4000) == 0 )
      goto LABEL_108;
  }
  if ( (a3 & 0x1000) != 0 && (a3 & 0x600) != 0x600 )
  {
LABEL_108:
    v18 = -1073741583;
LABEL_109:
    v49 = v18;
    goto LABEL_78;
  }
  v55 = a3 & 0x810;
  v18 = CmCheckNoTxContext();
  v49 = v18;
  if ( v18 < 0 )
    goto LABEL_78;
  v62 = a3 & 0x10;
  if ( (a3 & 0x10) == 0 && !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
  {
    v18 = -1073741727;
    goto LABEL_12;
  }
  if ( !v55 )
  {
    if ( !v60 )
    {
      if ( Object )
      {
        v18 = -1073741581;
        goto LABEL_12;
      }
      goto LABEL_16;
    }
LABEL_125:
    v18 = -1073741579;
    goto LABEL_12;
  }
  if ( !v60 )
    goto LABEL_125;
  if ( (a3 & 0x444) != 0 && (a3 & 0x10) != 0 )
  {
    v18 = -1073741583;
LABEL_12:
    v49 = v18;
LABEL_13:
    v14 = 0;
    v15 = 0LL;
    goto LABEL_78;
  }
LABEL_16:
  LOBYTE(v17) = PreviousMode;
  v18 = CmpNameFromAttributes(v70.m128i_i64[0], v17, &v68);
  v49 = v18;
  if ( v18 < 0 )
    goto LABEL_13;
  if ( PreviousMode == 1 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v55 )
    {
      v20 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)v60 < 0x7FFFFFFF0000LL )
        v20 = (__int64)v60;
      *(_QWORD *)v20 = 0LL;
    }
  }
  *(_OWORD *)v71 = *(_OWORD *)a1;
  v72 = *(_OWORD *)(a1 + 16);
  v73 = *(_OWORD *)(a1 + 32);
  if ( (a3 & 0x10) != 0 && v71[1] )
  {
    v18 = -1073741585;
    v49 = -1073741585;
    v15 = 0LL;
    v14 = 0;
    goto LABEL_78;
  }
  if ( PreviousMode == 1 )
  {
    v70 = 0LL;
    v19 = v72;
    if ( (unsigned __int64)v72 >= 0x7FFFFFFF0000LL )
      v19 = 0x7FFFFFFF0000LL;
    v70.m128i_i32[0] = *(_DWORD *)v19;
    v21 = *(_QWORD *)(v19 + 8);
    v70.m128i_i64[1] = v21;
    DestinationString = (UNICODE_STRING)v70;
    v22 = _mm_cvtsi128_si32(v70);
    if ( v22 )
    {
      if ( (v21 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v19 = v22 + v21;
      if ( v19 > 0x7FFFFFFF0000LL || v22 + v21 < v21 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    DestinationString = *(UNICODE_STRING *)*(_QWORD *)(a1 + 16);
  }
  Length = DestinationString.Length;
  if ( DestinationString.Length )
  {
    TransientPoolWithQuota = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuota(
                                                        v19,
                                                        DestinationString.Length,
                                                        1801604419LL);
    Privileges = TransientPoolWithQuota;
    if ( !TransientPoolWithQuota )
    {
      v18 = -1073741670;
      v49 = -1073741670;
      v15 = 0LL;
      v14 = 0;
      goto LABEL_78;
    }
    v25 = (wchar_t *)TransientPoolWithQuota;
    memmove(TransientPoolWithQuota, DestinationString.Buffer, Length);
    DestinationString.Length = Length;
    DestinationString.MaximumLength = Length;
    DestinationString.Buffer = v25;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
  }
  *(_QWORD *)&v72 = &DestinationString;
  *(_QWORD *)&v73 = 0LL;
  if ( !v77
    || (LOBYTE(v28) = PreviousMode,
        v18 = CmObReferenceObjectByHandle(v77, 0, v27, v28, (__int64)&v56, 0LL),
        v49 = v18,
        v18 >= 0) )
  {
    v29 = Object;
    if ( Object )
    {
      Object = 0LL;
      v18 = ObReferenceObjectByHandle(v29, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
      v52 = Object;
      v49 = v18;
      if ( v18 < 0 )
      {
        v15 = Object;
        goto LABEL_77;
      }
    }
    if ( v78 )
    {
      LOBYTE(v28) = PreviousMode;
      v18 = CmObReferenceObjectByHandle(v78, 0, v27, v28, (__int64)&v61, 0LL);
      v49 = v18;
      if ( v18 < 0 )
      {
LABEL_76:
        v15 = v52;
LABEL_77:
        v14 = v48;
        goto LABEL_78;
      }
    }
    if ( v67[0] )
    {
      Object = 0LL;
      v18 = ObReferenceObjectByHandle(v67[0], 4u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Object, 0LL);
      v16 = Object;
      v64 = Object;
      v49 = v18;
      if ( v18 < 0 )
        goto LABEL_76;
      if ( *((_DWORD *)Object + 48) != 2 )
      {
        v18 = -1073741656;
        v49 = -1073741656;
        goto LABEL_76;
      }
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v51 = 1;
    LOBYTE(v27) = PreviousMode;
    v18 = CmConvertHandleToKernelHandle(v71[1], v26, v27, 131097LL, &v65);
    v49 = v18;
    if ( v18 >= 0 )
    {
      v71[1] = v65;
      v31 = 0LL;
      memset(v80, 0, sizeof(v80));
      v74 = 0LL;
      v75 = 0LL;
      v67[1] = v67;
      v67[0] = v67;
      if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
      {
        if ( v71[1] )
        {
          Object = 0LL;
          ObReferenceObjectByHandle(v71[1], 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
          v31 = Object;
        }
        v80[10] = 2LL;
        v80[0] = v31;
        v80[1] = &DestinationString;
        v80[2] = &v68;
        LODWORD(v80[3]) = a3;
        v80[4] = v56;
        v80[5] = v52;
        LODWORD(v80[6]) = DesiredAccess;
        v80[7] = v60;
        v80[11] = v16;
        *(_QWORD *)&v74 = v80;
        *((_QWORD *)&v74 + 1) = v61;
        LOBYTE(v75) = a10;
        LOBYTE(v32) = 1;
        v18 = CmpCallCallBacksEx(32, (unsigned int)v80, (unsigned int)&v74, v32, 33, 0LL, (__int64)v67);
        v49 = v18;
      }
      if ( v18 < 0 )
      {
        if ( v18 == -1073740541 )
        {
          v18 = 0;
          v49 = 0;
          v50 = 1;
        }
      }
      else
      {
        CmpTraceHiveLoadStart(&v68, a3);
        v48 = 1;
        if ( (a3 & 0x10) != 0 )
        {
          LOBYTE(Handle) = PreviousMode;
          Key = CmLoadAppKey(v71, &v68, a3, v56, v52, v16, Handle, v58, &BugCheckParameter4);
        }
        else
        {
          Key = CmLoadKey(
                  (unsigned int)v71,
                  (unsigned int)&v68,
                  a3,
                  (_DWORD)v56,
                  (__int64)v61,
                  a10,
                  (__int64)v52,
                  (__int64)v16,
                  PreviousMode,
                  (__int64)v58,
                  (__int64)&BugCheckParameter4);
        }
        v18 = CmPostCallbackNotificationEx(33, (_DWORD)v31, Key, (unsigned int)v80, (__int64)&v74, (__int64)v67);
        v49 = v18;
      }
      if ( v31 )
        ObfDereferenceObject(v31);
      if ( v56 )
      {
        ObfDereferenceObject(v56);
        v56 = 0LL;
      }
      if ( v18 >= 0 && v55 && !v50 )
      {
        Object = 0LL;
        v34 = v81[0];
        if ( (a3 & 0x10) != 0 )
          v34 = 64;
        LODWORD(v81[0]) = v34;
        p_DestinationString = &DestinationString;
        if ( v58[0] )
          p_DestinationString = (UNICODE_STRING *)v58[0];
        v58[0] = p_DestinationString;
        v18 = ObReferenceObjectByName(
                (_DWORD)p_DestinationString,
                64,
                0,
                0,
                (__int64)CmKeyObjectType,
                0,
                (unsigned int)v81,
                (__int64)&Object);
        v49 = v18;
        if ( v18 >= 0 )
        {
          v39 = Object;
          ObDeleteCapturedInsertInfo(Object);
          v18 = ObOpenObjectByPointer(
                  v39,
                  PreviousMode != 0 ? 64 : 576,
                  0LL,
                  DesiredAccess,
                  (POBJECT_TYPE)CmKeyObjectType,
                  PreviousMode,
                  &v69);
          v49 = v18;
          ObfDereferenceObject(v39);
          if ( v18 >= 0 )
            *v60 = v69;
        }
        if ( BugCheckParameter4 )
        {
          if ( (a3 & 0x10) != 0 )
          {
            CmReleaseLoadKeyContext(BugCheckParameter4);
          }
          else
          {
            CmpLockRegistry(BugCheckParameter4, v36, v37, v38);
            CmpDereferenceKeyControlBlock(BugCheckParameter4);
            CmpUnlockRegistry(v42, v41, v43, v44, ObjectType, *(_QWORD *)AccessMode);
          }
          BugCheckParameter4 = 0LL;
        }
        if ( v18 < 0 && (a3 & 0x800) != 0 )
        {
          v18 = 0;
          v49 = 0;
        }
      }
    }
    goto LABEL_76;
  }
  v15 = 0LL;
  v14 = 0;
LABEL_78:
  if ( BugCheckParameter4 )
    CmReleaseLoadKeyContext(BugCheckParameter4);
  if ( v58[0] && v58[0] != &DestinationString )
    CmpFreeTransientPoolWithTag(v58[0], 0x624E4D43u);
  if ( v65 )
    ZwClose(v65);
  if ( v51 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v18 = v49;
  }
  if ( v16 )
    ObfDereferenceObject(v16);
  if ( v61 )
    ObfDereferenceObject(v61);
  if ( v15 )
    ObfDereferenceObject(v15);
  if ( v56 )
    ObfDereferenceObject(v56);
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v68.Buffer )
    ExFreePoolWithTag(v68.Buffer, 0);
  CmpCleanupParseContext(v81, 0LL);
  if ( UnloadRundown )
    CmpReleaseHiveLoadUnloadRundown();
  if ( v14 )
    CmpTraceHiveLoadStop((unsigned int)v18);
  CmCleanupThreadInfo((__int64 *)&v79);
  return (unsigned int)v18;
}
