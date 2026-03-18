/*
 * XREFs of NtQueryValueKey @ 0x1407C9930
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406A5770 (ExpWatchProductTypeWork.c)
 *     IopLoadDriver @ 0x14074A178 (IopLoadDriver.c)
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 *     ExpWatchProductTypeInitialization @ 0x140B1CC84 (ExpWatchProductTypeInitialization.c)
 *     IopProtectSystemPartition @ 0x140B2F684 (IopProtectSystemPartition.c)
 *     InitSafeBoot @ 0x140B4B918 (InitSafeBoot.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     EtwGetKernelTraceTimestamp @ 0x140223A20 (EtwGetKernelTraceTimestamp.c)
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     _tlgWriteAgg @ 0x1402A1A20 (_tlgWriteAgg.c)
 *     CmpIsRegistryLockAcquired @ 0x1402ACD00 (CmpIsRegistryLockAcquired.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x140367AF0 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x140429880 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x140735760 (CmpCallCallBacksEx.c)
 *     CmQueryValueKey @ 0x1407C83F0 (CmQueryValueKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1407CA1C0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpIsBufferGloballyVisible @ 0x1407D557C (CmpIsBufferGloballyVisible.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     CmpReleaseShutdownRundown @ 0x140AB42A0 (CmpReleaseShutdownRundown.c)
 *     CmObReferenceObjectByHandle @ 0x140AB4630 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140AB46D0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall NtQueryValueKey(
        HANDLE Handle,
        unsigned __int64 a2,
        unsigned int a3,
        char *a4,
        size_t Size,
        unsigned int *a6)
{
  unsigned int v10; // r15d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  __int64 v15; // r8
  unsigned __int8 v16; // si
  __int64 v17; // rcx
  int v18; // ebx
  int v19; // eax
  unsigned __int64 v20; // rcx
  SIZE_T Length; // rbx
  const void *Buffer; // rdi
  __int64 v23; // rdi
  struct _KTHREAD *CurrentThread; // rax
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  unsigned int v28; // eax
  _BYTE *v29; // rcx
  PSLIST_ENTRY v31; // rdi
  PVOID TransientPoolWithQuotaTag; // rax
  void *v33; // rdi
  KPROCESSOR_MODE PreviousMode; // r9
  unsigned int v35; // edx
  char v36; // cl
  int ValueKey; // eax
  UNICODE_STRING *p_DestinationString; // rcx
  char v39; // [rsp+40h] [rbp-288h]
  char v40; // [rsp+41h] [rbp-287h]
  char v41; // [rsp+42h] [rbp-286h] BYREF
  char v42; // [rsp+43h] [rbp-285h]
  unsigned int v43; // [rsp+44h] [rbp-284h]
  __int64 v44; // [rsp+48h] [rbp-280h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-278h] BYREF
  unsigned int v46; // [rsp+60h] [rbp-268h] BYREF
  int v47; // [rsp+64h] [rbp-264h]
  PVOID Object; // [rsp+68h] [rbp-260h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+70h] [rbp-258h]
  unsigned int v50; // [rsp+78h] [rbp-250h]
  PVOID v51[2]; // [rsp+80h] [rbp-248h] BYREF
  __int64 v52; // [rsp+90h] [rbp-238h]
  PVOID v53; // [rsp+98h] [rbp-230h] BYREF
  _QWORD v54[2]; // [rsp+A0h] [rbp-228h] BYREF
  __int64 v55; // [rsp+B0h] [rbp-218h] BYREF
  __int64 v56; // [rsp+B8h] [rbp-210h] BYREF
  UNICODE_STRING v57; // [rsp+C0h] [rbp-208h]
  __int128 v58; // [rsp+D0h] [rbp-1F8h] BYREF
  PVOID v59; // [rsp+E0h] [rbp-1E8h] BYREF
  int v60; // [rsp+E8h] [rbp-1E0h]
  int v61; // [rsp+ECh] [rbp-1DCh]
  _QWORD *v62; // [rsp+F0h] [rbp-1D8h]
  int v63; // [rsp+F8h] [rbp-1D0h]
  __int128 v64; // [rsp+FCh] [rbp-1CCh]
  __int64 v65; // [rsp+10Ch] [rbp-1BCh]
  int v66; // [rsp+114h] [rbp-1B4h]
  _QWORD v67[10]; // [rsp+120h] [rbp-1A8h] BYREF
  void *Src[2]; // [rsp+170h] [rbp-158h]
  char v69; // [rsp+180h] [rbp-148h]
  _BYTE v70[79]; // [rsp+181h] [rbp-147h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v71[2]; // [rsp+1D0h] [rbp-F8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+1F0h] [rbp-D8h] BYREF
  __int64 *v73; // [rsp+210h] [rbp-B8h]
  __int64 v74; // [rsp+218h] [rbp-B0h]
  char *v75; // [rsp+220h] [rbp-A8h]
  __int64 v76; // [rsp+228h] [rbp-A0h]
  __int64 *v77; // [rsp+230h] [rbp-98h]
  __int64 v78; // [rsp+238h] [rbp-90h]
  _BYTE v79[64]; // [rsp+240h] [rbp-88h] BYREF

  v43 = a3;
  v10 = Size;
  v50 = a3;
  v58 = 0LL;
  DestinationString = 0LL;
  LODWORD(v51[0]) = 0;
  memset(v70, 0, 0x47uLL);
  memset(v71, 0, sizeof(v71));
  v44 = 0LL;
  v52 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((unsigned __int64)v71, 0x20000uLL);
  v39 = 0;
  v40 = 0;
  Object = 0LL;
  v46 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  Privileges = 0LL;
  memset(v67, 0, 0x48uLL);
  *(_OWORD *)Src = 0LL;
  v69 = 0;
  v54[1] = v54;
  v54[0] = v54;
  CmpInitializeThreadInfo((__int64)&v58);
  v53 = 0LL;
  v42 = CmpAcquireShutdownRundown(v12, v11, v13);
  if ( !v42 )
  {
    v18 = -1073741431;
    goto LABEL_107;
  }
  if ( a3 > 4 )
  {
    if ( CmpTraceRoutine
      && Handle
      && (PreviousMode = KeGetCurrentThread()->PreviousMode,
          v51[0] = 0LL,
          ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, v51, 0LL) >= 0) )
    {
      v23 = *((_QWORD *)v51[0] + 1);
      ObfDereferenceObject(v51[0]);
    }
    else
    {
      v23 = 0LL;
    }
    v18 = -1073741811;
    goto LABEL_70;
  }
  v16 = KeGetCurrentThread()->PreviousMode;
  v18 = CmObReferenceObjectByHandle((_DWORD)Handle, 1, v15, v16, (__int64)&Object, 0LL);
  v47 = v18;
  if ( v18 < 0 )
  {
LABEL_107:
    v23 = 0LL;
    goto LABEL_70;
  }
  if ( CmpTraceRoutine )
  {
    v17 = (__int64)Object;
    if ( Object )
    {
      v44 = *((_QWORD *)Object + 1);
      v52 = v44;
    }
  }
  if ( v16 == 1 )
  {
    v57 = 0LL;
    v15 = 0x7FFFFFFF0000LL;
    if ( a2 >= 0x7FFFFFFF0000LL )
      a2 = 0x7FFFFFFF0000LL;
    v19 = *(_DWORD *)a2;
    *(_DWORD *)&v57.Length = v19;
    v20 = *(_QWORD *)(a2 + 8);
    v57.Buffer = (wchar_t *)v20;
    DestinationString = v57;
    if ( (_WORD)v19 )
    {
      if ( (v20 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v14 = v20 + (unsigned __int16)v19;
      if ( v14 > 0x7FFFFFFF0000LL || v14 < v20 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( (_DWORD)Size )
    {
      if ( ((unsigned __int8)a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a4[(unsigned int)Size] > 0x7FFFFFFF0000LL || &a4[(unsigned int)Size] < a4 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v17 = (__int64)a6;
    if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v17 = *(_DWORD *)v17;
  }
  else
  {
    DestinationString = *(UNICODE_STRING *)a2;
  }
  Length = DestinationString.Length;
  DestinationString.MaximumLength = DestinationString.Length;
  Buffer = DestinationString.Buffer;
  if ( v16
    || *((_QWORD *)&CmpRegistryProcess + 1) && !(unsigned __int8)CmpIsBufferGloballyVisible(DestinationString.Buffer) )
  {
    if ( (_WORD)Length )
    {
      if ( (unsigned int)Length > 0x40 )
      {
        Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithQuotaTag(v17, Length, 0x6E764D43u);
        if ( !Privileges )
        {
          v18 = -1073741670;
          v47 = -1073741670;
          v23 = v44;
          goto LABEL_70;
        }
        Buffer = DestinationString.Buffer;
        LOWORD(Length) = DestinationString.Length;
      }
      else
      {
        Privileges = (PPRIVILEGE_SET)v79;
      }
      if ( Privileges )
      {
        memmove(Privileges, Buffer, (unsigned __int16)Length);
        LOWORD(Length) = DestinationString.Length;
      }
    }
    else
    {
      Privileges = 0LL;
    }
    Buffer = Privileges;
    DestinationString.Buffer = (wchar_t *)Privileges;
  }
  if ( (DestinationString.Length & 1) != 0 )
  {
    v18 = -1073741811;
    v47 = -1073741811;
    v23 = v44;
    goto LABEL_70;
  }
  while ( (_WORD)Length && !*((_WORD *)Buffer + ((unsigned __int64)(unsigned __int16)Length >> 1) - 1) )
  {
    LOWORD(Length) = Length - 2;
    DestinationString.Length = Length;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v40 = 1;
  if ( !CmpCallBackCount || CmpIsRegistryLockAcquired() )
  {
LABEL_49:
    v18 = CmKeyBodyRemapToVirtualForEnum(&Object, v16, 1LL, &v53);
    if ( v18 < 0 )
      goto LABEL_63;
    Src[0] = a4;
    if ( (_DWORD)Size )
    {
      if ( *((_QWORD *)&CmpRegistryProcess + 1) && (v16 || !(unsigned __int8)CmpIsBufferGloballyVisible(a4)) )
      {
        if ( (unsigned int)dword_140C03868 > 5 && (byte_140C03878 & 4) != 0 && (qword_140C03880 & 4) == qword_140C03880 )
        {
          v55 = 1LL;
          v73 = &v55;
          v74 = 8LL;
          v41 = 3;
          v75 = &v41;
          v76 = 1LL;
          v35 = Size;
          if ( (((_DWORD)Size - 1) & (unsigned int)Size) != 0 )
          {
            v36 = -1;
            do
            {
              ++v36;
              v35 >>= 1;
            }
            while ( v35 );
            v35 = 1 << (v36 + 1);
          }
          v56 = v35;
          v77 = &v56;
          v78 = 8LL;
          tlgWriteAgg((__int64)&dword_140C03868, (unsigned __int8 *)&dword_14002988C, v15, 5u, &v72);
        }
        if ( (unsigned int)Size > 0x40uLL )
        {
          if ( (unsigned int)Size > 0x1000uLL )
            goto LABEL_103;
          ++dword_140CE2414;
          v31 = RtlpInterlockedPopEntrySList(&CmpBounceBufferLookaside);
          if ( !v31 )
          {
            ++dword_140CE2418;
            v31 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, union _SLIST_HEADER *))qword_140CE2430)(
                                  (unsigned int)dword_140CE2424,
                                  (unsigned int)dword_140CE242C,
                                  (unsigned int)dword_140CE2428,
                                  &CmpBounceBufferLookaside);
          }
          if ( v31 )
          {
            memset(v31, 0, (unsigned int)Size);
            v69 |= 1u;
            Src[1] = v31;
          }
          else
          {
LABEL_103:
            TransientPoolWithQuotaTag = CmpAllocateTransientPoolWithQuotaTag(v26, (unsigned int)Size, 0x42424D43u);
            v33 = TransientPoolWithQuotaTag;
            if ( !TransientPoolWithQuotaTag )
            {
              v18 = -1073741670;
              goto LABEL_58;
            }
            memset(TransientPoolWithQuotaTag, 0, (unsigned int)Size);
            Src[1] = v33;
          }
        }
        else
        {
          memset(v70, 0, (unsigned int)Size);
          Src[1] = v70;
        }
      }
      else
      {
        Src[1] = a4;
      }
    }
    else
    {
      Src[1] = 0LL;
    }
    v18 = 0;
LABEL_58:
    if ( v18 >= 0 )
    {
      if ( !v53 )
        goto LABEL_60;
      *(UNICODE_STRING *)v51 = DestinationString;
      ValueKey = CmQueryValueKey((__int64)v53, (__int64)v51, v43, (size_t)Src[1], Size, (__int64)&v46);
      v18 = ValueKey;
      if ( ValueKey >= 0 || ValueKey == -1073741789 || ValueKey == -2147483643 )
      {
LABEL_64:
        v28 = v46;
        *a6 = v46;
        if ( v18 != -1073741789 )
        {
          if ( v28 < (unsigned int)Size )
            v10 = v28;
          if ( Src[0] != Src[1] )
            memmove(Src[0], Src[1], v10);
        }
        v23 = v44;
        goto LABEL_70;
      }
      if ( ValueKey == -1073741772 )
      {
LABEL_60:
        *(UNICODE_STRING *)v51 = DestinationString;
        v27 = CmQueryValueKey((__int64)Object, (__int64)v51, v43, (size_t)Src[1], Size, (__int64)&v46);
        v18 = v27;
        if ( v27 < 0 && v27 != -2147483643 && v27 != -1073741789 )
          goto LABEL_63;
        goto LABEL_64;
      }
    }
LABEL_63:
    v23 = v44;
    goto LABEL_70;
  }
  v67[0] = Object;
  v67[1] = &DestinationString;
  LODWORD(v67[2]) = v43;
  v67[3] = a4;
  LODWORD(v67[4]) = Size;
  v67[5] = a6;
  v25 = CmpCallCallBacksEx(8u, (__int64)v67, 0LL, 1, 0x17u, (__int64)Object, (__int64)v54);
  v18 = v25;
  if ( v25 >= 0 )
  {
    v39 = 1;
    goto LABEL_49;
  }
  v23 = v44;
  if ( v25 == -1073740541 )
    v18 = 0;
LABEL_70:
  if ( v53 )
    ObfDereferenceObject(v53);
  if ( v39 && CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v54[0] != v54 )
  {
    v61 = 0;
    v64 = 0LL;
    v65 = 0LL;
    v66 = 0;
    v59 = Object;
    v60 = v18;
    v63 = v18;
    v62 = v67;
    CmpCallCallBacksEx(0x17u, (__int64)&v59, 0LL, 0, 0x17u, (__int64)Object, (__int64)v54);
    v18 = v63;
  }
  if ( v40 )
    KeLeaveCriticalRegion();
  if ( Object )
    ObfDereferenceObject(Object);
  v29 = Src[1];
  if ( Src[1] && Src[1] != Src[0] && Src[1] != v70 )
  {
    if ( (v69 & 1) != 0 )
    {
      ++dword_140CE241C;
      if ( LOWORD(CmpBounceBufferLookaside.Alignment) >= (unsigned __int16)word_140CE2410 )
      {
        ++dword_140CE2420;
        ((void (__fastcall *)(void *, union _SLIST_HEADER *))qword_140CE2438)(Src[1], &CmpBounceBufferLookaside);
      }
      else
      {
        RtlpInterlockedPushEntrySList(&CmpBounceBufferLookaside, (PSLIST_ENTRY)Src[1]);
      }
    }
    else
    {
      CmSiFreeMemory((PPRIVILEGE_SET)Src[1]);
    }
  }
  if ( CmpTraceRoutine )
  {
    p_DestinationString = &DestinationString;
    LOBYTE(p_DestinationString) = 16;
    CmpTraceRoutine(p_DestinationString, v71, (unsigned int)v18, v43, v23, &DestinationString);
  }
  if ( Privileges )
  {
    v29 = v79;
    if ( Privileges != (PPRIVILEGE_SET)v79 )
      CmSiFreeMemory(Privileges);
  }
  if ( v42 )
    CmpReleaseShutdownRundown(v29, v14, v15);
  CmCleanupThreadInfo((__int64 *)&v58);
  return (unsigned int)v18;
}
