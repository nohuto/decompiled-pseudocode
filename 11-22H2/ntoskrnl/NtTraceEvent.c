/*
 * XREFs of NtTraceEvent @ 0x1402577C0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpTraceMessageVa @ 0x140226F30 (EtwpTraceMessageVa.c)
 *     EtwpOpenLogger @ 0x140227610 (EtwpOpenLogger.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14022D390 (PsGetCurrentServerSiloGlobals.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140231190 (ExReleasePushLockEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259BB0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpLogSystemEventUnsafe @ 0x14038C540 (EtwpLogSystemEventUnsafe.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     EtwTraceEvent @ 0x140467D22 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1405FF3C8 (EtwTraceRaw.c)
 *     EtwpAccessCheck @ 0x1406BDBDC (EtwpAccessCheck.c)
 *     EtwpUpdateEnableMask @ 0x1406BDC94 (EtwpUpdateEnableMask.c)
 *     EtwpFindGuidEntryByGuid @ 0x1406BF870 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x1406BF9A4 (EtwpUnreferenceGuidEntry.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     EtwpWriteUserEvent @ 0x1406F41F0 (EtwpWriteUserEvent.c)
 *     EtwpSetMark @ 0x1409E6960 (EtwpSetMark.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtTraceEvent(HANDLE TraceHandle, ULONG Flags, ULONG FieldSize, PVOID Fields)
{
  __int64 v5; // rsi
  ULONG v7; // eax
  int v8; // r12d
  int v9; // esi
  unsigned __int8 *v10; // r14
  _QWORD *v11; // rcx
  __int64 v12; // r8
  ULONG v13; // edi
  __int64 v14; // rax
  __int64 v15; // r13
  int v16; // edx
  int v17; // edx
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // r10
  int v22; // edx
  _QWORD *CurrentServerSiloGlobals; // rax
  ULONG_PTR GuidEntryByGuid; // rax
  _QWORD *v25; // r14
  struct _KTHREAD *v26; // rax
  int v27; // r9d
  unsigned __int16 v28; // r10
  __int64 v29; // r14
  __int64 v30; // rdi
  char PreviousMode; // r15
  __int64 v32; // rax
  int v33; // r9d
  int v34; // edx
  unsigned __int16 v35; // r10
  __int64 v36; // r11
  unsigned int v37; // r9d
  char *v38; // rax
  __int64 v39; // rdx
  struct _KTHREAD *v40; // rax
  int v41; // r9d
  int v42; // edx
  unsigned __int8 v43; // [rsp+80h] [rbp-118h] BYREF
  char v44; // [rsp+81h] [rbp-117h]
  char *v45; // [rsp+88h] [rbp-110h]
  int v46; // [rsp+90h] [rbp-108h]
  int v47; // [rsp+94h] [rbp-104h]
  unsigned __int64 v48; // [rsp+98h] [rbp-100h]
  unsigned __int8 v50; // [rsp+A2h] [rbp-F6h]
  __int16 v51; // [rsp+A4h] [rbp-F4h]
  NTSTATUS v52; // [rsp+A8h] [rbp-F0h]
  int v53; // [rsp+ACh] [rbp-ECh]
  int v54; // [rsp+B0h] [rbp-E8h]
  __int64 v55; // [rsp+B8h] [rbp-E0h]
  __int64 v56; // [rsp+C0h] [rbp-D8h] BYREF
  __int64 v57; // [rsp+C8h] [rbp-D0h]
  struct _KTHREAD *CurrentThread; // [rsp+D0h] [rbp-C8h]
  __int64 v59; // [rsp+D8h] [rbp-C0h]
  __int64 v60; // [rsp+E0h] [rbp-B8h]
  int v61; // [rsp+F0h] [rbp-A8h]
  int v62; // [rsp+F4h] [rbp-A4h]
  char *v63; // [rsp+108h] [rbp-90h]
  unsigned __int64 v64; // [rsp+110h] [rbp-88h]
  __int64 v65; // [rsp+118h] [rbp-80h]
  __int64 v66; // [rsp+120h] [rbp-78h]
  PVOID Object[2]; // [rsp+128h] [rbp-70h] BYREF
  __int128 v68; // [rsp+138h] [rbp-60h] BYREF
  __int128 v69; // [rsp+148h] [rbp-50h]

  v5 = FieldSize;
  v7 = Flags & 0xFF00;
  if ( v7 == 768 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( CurrentThread->PreviousMode )
    {
      if ( ((unsigned __int8)Fields & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)Fields + 120 > 0x7FFFFFFF0000LL || (char *)Fields + 120 < Fields )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v48 = *((_QWORD *)Fields + 11);
    v64 = v48;
    LODWORD(v45) = *((_DWORD *)Fields + 21);
    v61 = (int)v45;
    v8 = *((unsigned __int16 *)Fields + 41);
    v65 = *((unsigned __int16 *)Fields + 41);
    v47 = *((_DWORD *)Fields + 28);
    v62 = v47;
    v57 = *((_QWORD *)Fields + 6);
    v66 = v57;
    v43 = *((_BYTE *)Fields + 44);
    v50 = v43;
    v55 = 0LL;
    if ( *((_BYTE *)Fields + 80) )
      v55 = (__int64)Fields + 96;
    Object[0] = 0LL;
    v9 = ObReferenceObjectByHandle(TraceHandle, 0x800u, EtwpRegistrationObjectType, 1, Object, 0LL);
    if ( v9 >= 0 )
    {
      v56 = 0LL;
      v10 = (unsigned __int8 *)Object[0];
      v11 = (_QWORD *)*((_QWORD *)Object[0] + 4);
      Object[0] = v11;
      v12 = *((_QWORD *)v10 + 5);
      CurrentThread = (struct _KTHREAD *)v12;
      v13 = Flags >> 31;
      v68 = 0LL;
      v69 = 0LL;
      v14 = *((_QWORD *)v10 + 13);
      v15 = v14 + 28;
      if ( !v14 )
        v15 = 0LL;
      v16 = v10[100];
      if ( (_BYTE)v16 )
      {
        v9 = EtwpWriteUserEvent(
               (_DWORD)v11,
               v16,
               (unsigned __int16)v13,
               v8,
               v47,
               (__int64)Fields,
               v55,
               v43,
               v57,
               (_DWORD)v45,
               v48,
               (__int64)&v68,
               0LL,
               *((_WORD *)v10 + 49),
               v15,
               (__int64)&v56);
        v11 = Object[0];
        v12 = (__int64)CurrentThread;
      }
      v17 = v10[101];
      if ( (_BYTE)v17 )
      {
        v9 = EtwpWriteUserEvent(
               (_DWORD)v11,
               v17,
               (unsigned __int16)v13,
               v8,
               v47,
               (__int64)Fields,
               v55,
               v43,
               v57,
               (_DWORD)v45,
               v48,
               (__int64)&v68,
               v12,
               *((_WORD *)v10 + 49),
               v15,
               (__int64)&v56);
        v11 = Object[0];
      }
      if ( v11[50] )
      {
        v68 = 0LL;
        v69 = 0LL;
        v34 = v10[102];
        if ( (_BYTE)v34 )
        {
          v9 = EtwpWriteUserEvent(
                 v11[50],
                 v34,
                 (unsigned __int16)v13,
                 0,
                 v47,
                 (__int64)Fields,
                 v55,
                 v43,
                 v57,
                 (_DWORD)v45,
                 v48,
                 (__int64)&v68,
                 0LL,
                 *((_WORD *)v10 + 49),
                 v15,
                 (__int64)&v56);
          v11 = Object[0];
        }
        v42 = v10[103];
        if ( (_BYTE)v42 )
          v9 = EtwpWriteUserEvent(
                 v11[50],
                 v42,
                 (unsigned __int16)v13,
                 0,
                 v47,
                 (__int64)Fields,
                 v55,
                 v43,
                 v57,
                 (_DWORD)v45,
                 v48,
                 (__int64)&v68,
                 (__int64)CurrentThread->WaitBlock[1].Object,
                 *((_WORD *)v10 + 49),
                 v15,
                 (__int64)&v56);
      }
      ObfDereferenceObjectWithTag(v10, 0x746C6644u);
    }
    return v9;
  }
  if ( v7 <= 0x600 )
  {
    switch ( v7 )
    {
      case 0x600u:
        v43 = 0;
        v29 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
        v30 = v28;
        if ( v28 == 0xFFFF || !v28 )
          v30 = *(unsigned __int8 *)(v29 + 4232);
        if ( (unsigned int)v30 >= *(_DWORD *)(v29 + 16) )
          return -1073741816;
        PreviousMode = KeGetCurrentThread()->PreviousMode;
        v32 = EtwpOpenLogger(v30, v29, PreviousMode, &v43);
        if ( !v32 )
          return -1073741816;
        if ( (*(_DWORD *)(v32 + 12) & 0x2000000) != 0 )
        {
          v39 = 32LL * *(unsigned __int8 *)(v32 + 818) + v29 + 4284;
          if ( v39 && (*(_DWORD *)(v39 + 4) & 0x28) != 0 )
            LOBYTE(v33) = 1;
          else
            v33 = 0;
          v9 = EtwpSetMark(v32, (int)Fields, v5, v33, PreviousMode);
          v52 = v9;
        }
        else
        {
          v9 = -1073741811;
          v52 = -1073741811;
        }
        if ( v43 )
        {
          ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v29 + 448) + 8 * v30), 1u);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          return v52;
        }
        return v9;
      case 0x200u:
        Object[0] = TraceHandle;
        v48 = 0LL;
        if ( FieldSize == 40 )
        {
          if ( KeGetCurrentThread()->PreviousMode == 1 )
          {
            v45 = (char *)Fields;
            if ( ((unsigned __int8)Fields & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (unsigned __int64)(v45 + 40) > 0x7FFFFFFF0000LL || v45 + 40 < v45 )
              MEMORY[0x7FFFFFFF0000] = 0;
            v46 = *((_DWORD *)v45 + 6);
            if ( (Flags & 0x80000000) != 0 )
            {
              LODWORD(v48) = *((_DWORD *)v45 + 8);
              v46 |= 0x80u;
            }
            else
            {
              v48 = *((_QWORD *)v45 + 4);
            }
            v19 = *((unsigned int *)v45 + 7);
            v47 = v19;
            if ( (unsigned int)v19 <= 0x10000 )
            {
              if ( (_DWORD)v19 && (v48 + v19 > 0x7FFFFFFF0000LL || v48 + v19 < v48) )
                MEMORY[0x7FFFFFFF0000] = 0;
              HIDWORD(Object[0]) = v19;
              return EtwpTraceMessageVa(
                       (unsigned __int64)Object[0],
                       v46 | 0x40u,
                       (LONG *)v45 + 2,
                       *((_WORD *)v45 + 2),
                       v48,
                       1u);
            }
            v9 = -1073741811;
            v52 = -1073741811;
            return v9;
          }
          return -1073741637;
        }
        return -1073741811;
      case 0x100u:
        return EtwTraceEvent(
                 TraceHandle,
                 Fields,
                 48LL,
                 (((int)Flags >> 31) & 0xFFF60000) - 1072431104,
                 KeGetCurrentThread()->PreviousMode);
      case 0x400u:
        v36 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
        v37 = 0;
        if ( v35 != 0xFFFF )
          v37 = v35;
        if ( v37 < *(_DWORD *)(v36 + 16) )
        {
          if ( (unsigned int)v5 > 0xFFDF )
            return -1073741675;
          if ( KeGetCurrentThread()->PreviousMode == 1 )
          {
            if ( ((unsigned __int8)Fields & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v38 = (char *)Fields + v5 + 32;
            if ( (unsigned __int64)v38 > 0x7FFFFFFF0000LL || v38 < Fields )
              MEMORY[0x7FFFFFFF0000] = 0;
            v63 = (char *)Fields + 32;
            v51 = *((_WORD *)Fields + 3);
            Object[0] = (char *)Fields + 32;
            Object[1] = (PVOID)(unsigned int)v5;
            EtwpLogSystemEventUnsafe(
              v36,
              (unsigned int)Object,
              (unsigned int)KeGetCurrentThread(),
              v37,
              1,
              v51,
              Flags & 0xC00F00FF | 0x3100,
              1);
            return 0;
          }
          return -1073741637;
        }
        return -1073741811;
      case 0x500u:
        v21 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
        if ( *(_DWORD *)(v21 + 4072) == v22 )
        {
          if ( ((unsigned __int8)Fields & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)(v20 + 120) > 0x7FFFFFFF0000LL || v20 + 120 < (unsigned __int64)Fields )
            MEMORY[0x7FFFFFFF0000] = 0;
          return EtwpWriteUserEvent(
                   (int)v21 + 24,
                   *(unsigned __int8 *)(v21 + 4064),
                   0,
                   0,
                   *(_DWORD *)(v20 + 112),
                   (__int64)Fields,
                   0LL,
                   *((_BYTE *)Fields + 44),
                   *((_QWORD *)Fields + 6),
                   *(_DWORD *)(v20 + 84),
                   *(_QWORD *)(v20 + 88),
                   0LL,
                   0LL,
                   0,
                   0LL,
                   0LL);
        }
        return -1073741790;
    }
    return -1073741811;
  }
  if ( v7 != 1792 )
  {
    if ( v7 == 2048 )
      return EtwTraceEvent(
               TraceHandle,
               Fields,
               72LL,
               (((int)Flags >> 31) & 0xFFF60000) - 1072365568,
               KeGetCurrentThread()->PreviousMode);
    if ( v7 == 2304 )
    {
      if ( Flags == 2304 && FieldSize && Fields )
        return EtwTraceRaw(TraceHandle, Fields, FieldSize, (unsigned __int8)KeGetCurrentThread()->PreviousMode);
      return -1073741811;
    }
    return -1073741811;
  }
  *(_OWORD *)Object = 0LL;
  if ( !TraceHandle )
    return -1073741811;
  if ( ((unsigned __int8)Fields & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)Fields + 120 > 0x7FFFFFFF0000LL || (char *)Fields + 120 < Fields )
    MEMORY[0x7FFFFFFF0000] = 0;
  if ( ((unsigned __int8)TraceHandle & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)TraceHandle + 16 > 0x7FFFFFFF0000LL || (char *)TraceHandle + 16 < TraceHandle )
    MEMORY[0x7FFFFFFF0000] = 0;
  v59 = *((_QWORD *)Fields + 11);
  v53 = *((_DWORD *)Fields + 21);
  v54 = *((_DWORD *)Fields + 28);
  v60 = *((_QWORD *)Fields + 6);
  v44 = *((_BYTE *)Fields + 44);
  *(_OWORD *)Object = *(_OWORD *)TraceHandle;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(CurrentServerSiloGlobals[108], Object, 0LL);
  v25 = (_QWORD *)GuidEntryByGuid;
  if ( GuidEntryByGuid )
  {
    if ( *(_DWORD *)(GuidEntryByGuid + 96) )
    {
      v9 = EtwpAccessCheck(*(PSECURITY_DESCRIPTOR *)(GuidEntryByGuid + 72), 0x800u);
      if ( v9 >= 0 )
      {
        v43 = 0;
        v26 = KeGetCurrentThread();
        --v26->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(v25 + 51), 0LL);
        v25[52] = KeGetCurrentThread();
        LOBYTE(v27) = 1;
        EtwpUpdateEnableMask((_DWORD)v25, 0, 0, v27, (__int64)&v43);
        v25[52] = 0LL;
        ExReleasePushLockEx(v25 + 51, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v9 = EtwpWriteUserEvent(
               (_DWORD)v25,
               v43,
               (Flags & 0x80000000) != 0,
               0,
               v54,
               (__int64)Fields,
               0LL,
               v44,
               v60,
               v53,
               v59,
               0LL,
               0LL,
               0,
               0LL,
               0LL);
        if ( v25[50] )
        {
          v43 = 0;
          v40 = KeGetCurrentThread();
          --v40->KernelApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)(v25 + 51), 0LL);
          v25[52] = KeGetCurrentThread();
          LOBYTE(v41) = 1;
          EtwpUpdateEnableMask(v25[50], 0, 1, v41, (__int64)&v43);
          v25[52] = 0LL;
          ExReleasePushLockEx(v25 + 51, 0LL);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          v9 = EtwpWriteUserEvent(
                 v25[50],
                 v43,
                 Flags >> 31,
                 0,
                 v54,
                 (__int64)Fields,
                 0LL,
                 v44,
                 v60,
                 v53,
                 v59,
                 0LL,
                 0LL,
                 0,
                 0LL,
                 0LL);
        }
      }
      EtwpUnreferenceGuidEntry((ULONG_PTR)v25);
      return v9;
    }
    EtwpUnreferenceGuidEntry(GuidEntryByGuid);
  }
  return -1073741054;
}
