/*
 * XREFs of CmpLinkHiveToMaster @ 0x14068F84C
 * Callers:
 *     CmpLoadKeyCommon @ 0x1402F682C (CmpLoadKeyCommon.c)
 *     CmpFinishSystemHivesLoad @ 0x14080B1E0 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveVolatile @ 0x140A0C5E0 (CmpLoadHiveVolatile.c)
 *     CmInitSystem1 @ 0x140B3626C (CmInitSystem1.c)
 *     CmpInitializeSystemHive @ 0x140B37640 (CmpInitializeSystemHive.c)
 *     CmpInitializePreloadedHive @ 0x140B37CBC (CmpInitializePreloadedHive.c)
 * Callees:
 *     CmpRemoveHiveFromNamespace @ 0x140207A94 (CmpRemoveHiveFromNamespace.c)
 *     RtlUnicodeStringCopy @ 0x140208E68 (RtlUnicodeStringCopy.c)
 *     CmpFreeTransientPoolWithTag @ 0x14022CFE4 (CmpFreeTransientPoolWithTag.c)
 *     CmpDrainDelayDerefContext @ 0x14022D600 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140231594 (CmpInitializeDelayDerefContext.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     KeResetEvent @ 0x1402AFE30 (KeResetEvent.c)
 *     SetFailureLocation @ 0x1402F6C80 (SetFailureLocation.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObOpenObjectByName @ 0x14068C9D0 (ObOpenObjectByName.c)
 *     CmpInitializeKcbCache @ 0x140690F1C (CmpInitializeKcbCache.c)
 *     CmpCleanupParseContext @ 0x140692A84 (CmpCleanupParseContext.c)
 *     CmpConstructNameWithStatus @ 0x1406D7BE0 (CmpConstructNameWithStatus.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1406D92F8 (CmpReferenceKeyControlBlockUnsafe.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     CmpRecordUnloadEventForHive @ 0x140875408 (CmpRecordUnloadEventForHive.c)
 *     CmpEtwDumpKcb @ 0x1408ABAC6 (CmpEtwDumpKcb.c)
 *     CmpLogHiveLinkEvent @ 0x140A12BFC (CmpLogHiveLinkEvent.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF5230 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x140AF5250 (CmpAttachToRegistryProcess.c)
 *     CmpLockRegistry @ 0x140AF54A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpLinkHiveToMaster(
        __int64 a1,
        void *a2,
        __int64 a3,
        char a4,
        unsigned int a5,
        char a6,
        PRKEVENT Event,
        __int64 a8,
        const UNICODE_STRING *a9,
        __int64 a10,
        char a11,
        _OWORD *a12)
{
  __int64 v13; // r12
  int v15; // eax
  int v16; // eax
  int v17; // edi
  int v18; // eax
  int v19; // eax
  ULONG_PTR *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  ULONG_PTR v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  UNICODE_STRING *v30; // r15
  __int64 Pool2; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  _QWORD *v39; // rdi
  __int64 v40; // rdx
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  PVOID *Object; // [rsp+20h] [rbp-E0h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-D8h]
  char v52; // [rsp+40h] [rbp-C0h]
  PVOID v53; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v54; // [rsp+50h] [rbp-B0h]
  PCUNICODE_STRING SourceString; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v57; // [rsp+68h] [rbp-98h]
  __int64 v58; // [rsp+70h] [rbp-90h]
  __int128 v59; // [rsp+78h] [rbp-88h] BYREF
  _DWORD v60[2]; // [rsp+88h] [rbp-78h] BYREF
  PVOID v61; // [rsp+90h] [rbp-70h]
  __int64 v62; // [rsp+98h] [rbp-68h]
  int v63; // [rsp+A0h] [rbp-60h]
  int v64; // [rsp+A4h] [rbp-5Ch]
  __int64 v65; // [rsp+A8h] [rbp-58h]
  __int64 v66; // [rsp+B0h] [rbp-50h]
  _OWORD v67[19]; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD v68[3]; // [rsp+1F0h] [rbp+F0h] BYREF

  v13 = a1;
  v57 = a8;
  SourceString = a9;
  v58 = a10;
  v53 = a2;
  v54 = a1;
  v60[1] = 0;
  v64 = 0;
  Handle = 0LL;
  v52 = 0;
  v59 = 0LL;
  memset(v68, 0, sizeof(v68));
  memset(v67, 0, 0x128uLL);
  LODWORD(v67[6]) = -1;
  *((_QWORD *)&v67[9] + 1) = &v67[9];
  *(_QWORD *)&v67[9] = &v67[9];
  memset((char *)&v67[13] + 8, 0, 0x50uLL);
  CmpInitializeDelayDerefContext(&v59);
  v15 = *(_DWORD *)(a3 + 160);
  if ( (v15 & 0x20) == 0 )
  {
    v52 = 1;
    *(_DWORD *)(a3 + 160) = v15 | 0x20;
    *(_QWORD *)(a3 + 4168) = KeGetCurrentThread();
  }
  v16 = CmpInitializeKcbCache(a3, a5);
  v17 = v16;
  if ( v16 >= 0 )
  {
    v18 = 67;
    *(_QWORD *)&v67[3] = a3;
    if ( a6 )
      v18 = 2115;
    LODWORD(v67[0]) = v18;
    if ( a4 )
      DWORD2(v67[2]) = -1;
    else
      DWORD2(v67[2]) = *(_DWORD *)(*(_QWORD *)(a3 + 64) + 36LL);
    v66 = 0LL;
    *(_QWORD *)&v67[5] = SourceString;
    v61 = v53;
    v62 = v54;
    v65 = v57;
    v60[0] = 48;
    v63 = 576;
    v19 = ObOpenObjectByName((__int64)v60, (__int64)CmKeyObjectType, 0, 0LL, 131103, (__int64)v67, (__int64)&Handle);
    v17 = v19;
    if ( v19 < 0 )
    {
      SetFailureLocation((__int64)a12, 0, 30, v19, 32);
      v42 = *(_OWORD *)((char *)&v67[14] + 8);
      a12[22] = *(_OWORD *)((char *)&v67[13] + 8);
      v43 = *(_OWORD *)((char *)&v67[15] + 8);
      a12[23] = v42;
      v44 = *(_OWORD *)((char *)&v67[16] + 8);
      a12[24] = v43;
      v45 = *(_OWORD *)((char *)&v67[17] + 8);
      a12[25] = v44;
      a12[26] = v45;
LABEL_34:
      v13 = v54;
      goto LABEL_35;
    }
    v53 = 0LL;
    ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &v53, 0LL);
    v20 = (ULONG_PTR *)v53;
    ZwClose(Handle);
    CmpAttachToRegistryProcess(v68);
    if ( !a11 )
      CmpLockRegistry(v22, v21, v23, v24);
    v25 = v20[1];
    SourceString = 0LL;
    CmpConstructNameWithStatus(v25, &SourceString);
    v30 = (UNICODE_STRING *)SourceString;
    if ( !a11 )
      CmpUnlockRegistry(v27, v26, v28, v29, Object, HandleInformation);
    if ( v30 && (Pool2 = ExAllocatePool2(256LL, v30->Length, 1885883715LL), (*(_QWORD *)(a3 + 1864) = Pool2) != 0LL) )
    {
      *(_WORD *)(a3 + 1856) = 0;
      *(_WORD *)(a3 + 1858) = v30->Length;
      RtlUnicodeStringCopy((PUNICODE_STRING)(a3 + 1856), v30);
      *(_BYTE *)(a3 + 141) = 0;
      *(_DWORD *)(a3 + 1676) = _InterlockedIncrement(&CmHiveIdentity);
      if ( !a11 )
        CmpLockRegistry(1LL, v32, v33, v34);
      if ( a6 )
      {
        CmpReferenceKeyControlBlockUnsafe(v20[1]);
        *(_QWORD *)(a3 + 2936) = v20[1];
        if ( Event )
        {
          KeResetEvent(Event);
          CmpRecordUnloadEventForHive(a3, Event);
        }
      }
      if ( CmpTraceRoutine )
      {
        LOBYTE(v32) = 33;
        CmpEtwDumpKcb(v20[1], v32);
      }
      CmpDetachFromRegistryProcess(v68);
      if ( !a11 )
        CmpUnlockRegistry(v36, v35, v37, v38, Object, HandleInformation);
      v39 = (_QWORD *)v58;
      if ( v58 )
      {
        CmpReferenceKeyControlBlockUnsafe(v20[1]);
        *v39 = v20[1];
      }
      ObfDereferenceObject(v53);
      if ( a6 )
        *(_BYTE *)(a3 + 2944) = 1;
      v17 = 0;
      v20 = 0LL;
    }
    else
    {
      v17 = -1073741670;
      if ( !a11 )
        CmpLockRegistry(v27, v26, v28, v29);
      CmpRemoveHiveFromNamespace(a3, v20[1], (__int64)&v59);
      CmpDrainDelayDerefContext((_QWORD **)&v59);
      if ( !a11 )
        CmpUnlockRegistry(v47, v46, v48, v49, Object, HandleInformation);
      CmpDetachFromRegistryProcess(v68);
      if ( !v30 )
        goto LABEL_32;
    }
    CmpFreeTransientPoolWithTag(v30, 0x624E4D43u);
LABEL_32:
    if ( v20 )
      ObfDereferenceObject(v20);
    goto LABEL_34;
  }
  SetFailureLocation((__int64)a12, 0, 30, v16, 16);
LABEL_35:
  if ( v52 )
  {
    *(_DWORD *)(a3 + 160) &= ~0x20u;
    *(_QWORD *)(a3 + 4168) = 0LL;
  }
  if ( v17 >= 0 && (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
    CmpLogHiveLinkEvent(a3, v13);
  LOBYTE(v40) = a11;
  CmpCleanupParseContext(v67, v40);
  return (unsigned int)v17;
}
