/*
 * XREFs of NtQueryValueKey @ 0x1406E2EA0
 * Callers:
 *     IopLoadDriver @ 0x1407947C8 (IopLoadDriver.c)
 *     ExpWatchProductTypeWork @ 0x1407AC220 (ExpWatchProductTypeWork.c)
 *     IoInitSystemPreDrivers @ 0x140B4B914 (IoInitSystemPreDrivers.c)
 *     ExpWatchProductTypeInitialization @ 0x140B67484 (ExpWatchProductTypeInitialization.c)
 *     IopProtectSystemPartition @ 0x140B741E8 (IopProtectSystemPartition.c)
 *     InitSafeBoot @ 0x140B90AE8 (InitSafeBoot.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     ExFreeToLookasideListEx @ 0x14020B9E0 (ExFreeToLookasideListEx.c)
 *     _tlgWriteAgg @ 0x140212E94 (_tlgWriteAgg.c)
 *     ExAllocateFromLookasideListEx @ 0x14022D190 (ExAllocateFromLookasideListEx.c)
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     CmpInitializeThreadInfo @ 0x14022E750 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E790 (CmCleanupThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x14022FC60 (CmpIsRegistryLockAcquired.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x14029788C (CmpAllocateTransientPoolWithQuota.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402A3220 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmQueryValueKey @ 0x1406E02F0 (CmQueryValueKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406E2330 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x1406E8620 (CmpCallCallBacksEx.c)
 *     CmpIsBufferGloballyVisible @ 0x14073E880 (CmpIsBufferGloballyVisible.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 *     CmpAcquireShutdownRundown @ 0x140AF5380 (CmpAcquireShutdownRundown.c)
 *     CmObReferenceObjectByHandle @ 0x140AF53D0 (CmObReferenceObjectByHandle.c)
 *     CmpReleaseShutdownRundown @ 0x140AF5470 (CmpReleaseShutdownRundown.c)
 */

NTSTATUS __cdecl NtQueryValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  KEY_VALUE_INFORMATION_CLASS v7; // r14d
  ULONG v10; // r12d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // r8d
  unsigned __int8 v15; // r14
  __int64 v16; // rcx
  NTSTATUS v17; // ebx
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int16 v20; // ax
  __int64 v21; // rbx
  const void *Buffer; // rdi
  struct _KTHREAD *CurrentThread; // rax
  int v24; // r9d
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r8
  _BYTE *TransientPoolWithQuota; // rax
  int v30; // eax
  ULONG v31; // eax
  _BYTE *v32; // rcx
  void *v33; // rdx
  PVOID v35; // rax
  void *v36; // rdi
  KPROCESSOR_MODE PreviousMode; // r9
  ULONG v38; // edx
  char v39; // cl
  int ValueKey; // eax
  UNICODE_STRING *p_DestinationString; // rcx
  char v42; // [rsp+40h] [rbp-298h]
  char v43; // [rsp+41h] [rbp-297h]
  char v45; // [rsp+48h] [rbp-290h] BYREF
  char v46; // [rsp+49h] [rbp-28Fh]
  __int64 v47; // [rsp+50h] [rbp-288h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-278h] BYREF
  ULONG Size; // [rsp+70h] [rbp-268h] BYREF
  int Size_4; // [rsp+74h] [rbp-264h]
  PVOID Object; // [rsp+78h] [rbp-260h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+80h] [rbp-258h]
  KEY_VALUE_INFORMATION_CLASS v53; // [rsp+88h] [rbp-250h]
  PVOID v54[2]; // [rsp+90h] [rbp-248h] BYREF
  __int64 v55; // [rsp+A0h] [rbp-238h]
  PVOID v56; // [rsp+A8h] [rbp-230h] BYREF
  _QWORD v57[2]; // [rsp+B0h] [rbp-228h] BYREF
  __int64 v58; // [rsp+C0h] [rbp-218h] BYREF
  __int64 v59; // [rsp+C8h] [rbp-210h] BYREF
  __m128i v60; // [rsp+D0h] [rbp-208h]
  __int128 v61; // [rsp+E0h] [rbp-1F8h] BYREF
  PVOID v62; // [rsp+F0h] [rbp-1E8h] BYREF
  NTSTATUS v63; // [rsp+F8h] [rbp-1E0h]
  int v64; // [rsp+FCh] [rbp-1DCh]
  _QWORD *v65; // [rsp+100h] [rbp-1D8h]
  NTSTATUS v66; // [rsp+108h] [rbp-1D0h]
  __int128 v67; // [rsp+10Ch] [rbp-1CCh]
  __int64 v68; // [rsp+11Ch] [rbp-1BCh]
  int v69; // [rsp+124h] [rbp-1B4h]
  _QWORD v70[10]; // [rsp+130h] [rbp-1A8h] BYREF
  void *Src[2]; // [rsp+180h] [rbp-158h]
  char v72; // [rsp+190h] [rbp-148h]
  _BYTE v73[79]; // [rsp+191h] [rbp-147h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v74[2]; // [rsp+1E0h] [rbp-F8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v75; // [rsp+200h] [rbp-D8h] BYREF
  __int64 *v76; // [rsp+220h] [rbp-B8h]
  __int64 v77; // [rsp+228h] [rbp-B0h]
  char *v78; // [rsp+230h] [rbp-A8h]
  __int64 v79; // [rsp+238h] [rbp-A0h]
  __int64 *v80; // [rsp+240h] [rbp-98h]
  __int64 v81; // [rsp+248h] [rbp-90h]
  _BYTE v82[64]; // [rsp+250h] [rbp-88h] BYREF

  v7 = KeyValueInformationClass;
  v10 = Length;
  v53 = KeyValueInformationClass;
  v61 = 0LL;
  DestinationString = 0LL;
  LODWORD(v54[0]) = 0;
  memset(v73, 0, 0x47uLL);
  memset(v74, 0, sizeof(v74));
  v47 = 0LL;
  v55 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((__int64)v74, 0x20000LL);
  v42 = 0;
  v43 = 0;
  Object = 0LL;
  Size = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  Privileges = 0LL;
  memset(v70, 0, 0x48uLL);
  *(_OWORD *)Src = 0LL;
  v72 = 0;
  v57[1] = v57;
  v57[0] = v57;
  CmpInitializeThreadInfo((__int64)&v61);
  v56 = 0LL;
  v46 = CmpAcquireShutdownRundown(v12, v11, v13);
  if ( !v46 )
  {
    v17 = -1073741431;
    goto LABEL_72;
  }
  if ( (unsigned int)v7 > KeyValuePartialInformationAlign64 )
  {
    if ( CmpTraceRoutine )
    {
      if ( KeyHandle )
      {
        PreviousMode = KeGetCurrentThread()->PreviousMode;
        v54[0] = 0LL;
        if ( ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, v54, 0LL) >= 0 )
          ObfDereferenceObject(v54[0]);
      }
    }
    v17 = -1073741811;
  }
  else
  {
    v15 = KeGetCurrentThread()->PreviousMode;
    v17 = CmObReferenceObjectByHandle((_DWORD)KeyHandle, 1, v14, v15, (__int64)&Object, 0LL);
    Size_4 = v17;
    if ( v17 < 0 )
    {
      v7 = KeyValueInformationClass;
      goto LABEL_72;
    }
    if ( CmpTraceRoutine )
    {
      v16 = (__int64)Object;
      if ( Object )
      {
        v47 = *((_QWORD *)Object + 1);
        v55 = v47;
      }
    }
    if ( v15 == 1 )
    {
      v60 = 0LL;
      v18 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ValueName < 0x7FFFFFFF0000LL )
        v18 = (__int64)ValueName;
      v60.m128i_i32[0] = *(_DWORD *)v18;
      v19 = *(_QWORD *)(v18 + 8);
      v60.m128i_i64[1] = v19;
      DestinationString = (UNICODE_STRING)v60;
      v20 = _mm_cvtsi128_si32(v60);
      if ( v20 )
      {
        if ( (v19 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v19 + v20 > 0x7FFFFFFF0000LL || v19 + v20 < v19 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      if ( Length )
      {
        if ( ((unsigned __int8)KeyValueInformation & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)KeyValueInformation + Length > 0x7FFFFFFF0000LL
          || (char *)KeyValueInformation + Length < KeyValueInformation )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      v16 = (__int64)ResultLength;
      if ( (unsigned __int64)ResultLength >= 0x7FFFFFFF0000LL )
        v16 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v16 = *(_DWORD *)v16;
    }
    else
    {
      DestinationString = *ValueName;
    }
    v21 = DestinationString.Length;
    DestinationString.MaximumLength = DestinationString.Length;
    Buffer = DestinationString.Buffer;
    if ( v15
      || *((_QWORD *)&CmpRegistryProcess + 1) && !(unsigned __int8)CmpIsBufferGloballyVisible(DestinationString.Buffer) )
    {
      if ( (_WORD)v21 )
      {
        if ( (unsigned int)v21 > 0x40 )
        {
          Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithQuota(v16, v21, 1853246787LL);
          if ( !Privileges )
          {
            v17 = -1073741670;
            Size_4 = -1073741670;
            v7 = KeyValueInformationClass;
            goto LABEL_72;
          }
          Buffer = DestinationString.Buffer;
          LOWORD(v21) = DestinationString.Length;
        }
        else
        {
          Privileges = (PPRIVILEGE_SET)v82;
        }
        if ( Privileges )
        {
          memmove(Privileges, Buffer, (unsigned __int16)v21);
          LOWORD(v21) = DestinationString.Length;
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
      v17 = -1073741811;
      Size_4 = -1073741811;
      v7 = KeyValueInformationClass;
      goto LABEL_72;
    }
    while ( (_WORD)v21 && !*((_WORD *)Buffer + ((unsigned __int64)(unsigned __int16)v21 >> 1) - 1) )
    {
      LOWORD(v21) = v21 - 2;
      DestinationString.Length = v21;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v43 = 1;
    if ( !CmpCallBackCount || CmpIsRegistryLockAcquired() )
    {
LABEL_49:
      v17 = CmKeyBodyRemapToVirtualForEnum(&Object, v15, 1, &v56);
      if ( v17 < 0 )
        goto LABEL_128;
      Src[0] = KeyValueInformation;
      if ( !Length )
      {
        Src[1] = 0LL;
        goto LABEL_60;
      }
      if ( !*((_QWORD *)&CmpRegistryProcess + 1)
        || !v15 && (unsigned __int8)CmpIsBufferGloballyVisible(KeyValueInformation) )
      {
        Src[1] = KeyValueInformation;
        goto LABEL_60;
      }
      if ( (unsigned int)dword_140C04390 > 5 && (byte_140C043A0 & 4) != 0 && (qword_140C043A8 & 4) == qword_140C043A8 )
      {
        v58 = 1LL;
        v76 = &v58;
        v77 = 8LL;
        v45 = 3;
        v78 = &v45;
        v79 = 1LL;
        v38 = Length;
        if ( ((Length - 1) & Length) != 0 )
        {
          v39 = -1;
          do
          {
            ++v39;
            v38 >>= 1;
          }
          while ( v38 );
          v38 = 1 << (v39 + 1);
        }
        v59 = v38;
        v80 = &v59;
        v81 = 8LL;
        tlgWriteAgg((__int64)&dword_140C04390, (unsigned __int8 *)&byte_140036C69, v27, 5u, &v75);
      }
      if ( Length > 0x40uLL )
      {
        if ( Length <= 0x1000uLL )
        {
          v35 = ExAllocateFromLookasideListEx(&CmpBounceBufferLookaside);
          v36 = v35;
          if ( v35 )
          {
            memset(v35, 0, Length);
            v72 |= 1u;
            Src[1] = v36;
            goto LABEL_60;
          }
        }
        TransientPoolWithQuota = (_BYTE *)CmpAllocateTransientPoolWithQuota(v26, Length, 1111641411LL);
        if ( !TransientPoolWithQuota )
        {
          v17 = -1073741670;
LABEL_61:
          if ( v17 >= 0 )
          {
            v7 = KeyValueInformationClass;
            if ( v56 )
            {
              *(UNICODE_STRING *)v54 = DestinationString;
              ValueKey = CmQueryValueKey(
                           (__int64)v56,
                           (unsigned __int16 *)v54,
                           KeyValueInformationClass,
                           (size_t)Src[1],
                           Length,
                           (__int64)&Size);
              v17 = ValueKey;
              if ( ValueKey >= 0 || ValueKey == -1073741789 || ValueKey == -2147483643 )
              {
LABEL_67:
                v31 = Size;
                *ResultLength = Size;
                if ( v17 != -1073741789 )
                {
                  if ( v31 < Length )
                    v10 = v31;
                  if ( Src[0] != Src[1] )
                    memmove(Src[0], Src[1], v10);
                }
                goto LABEL_72;
              }
              if ( ValueKey != -1073741772 )
                goto LABEL_72;
            }
            *(UNICODE_STRING *)v54 = DestinationString;
            v30 = CmQueryValueKey(
                    (__int64)Object,
                    (unsigned __int16 *)v54,
                    KeyValueInformationClass,
                    (size_t)Src[1],
                    Length,
                    (__int64)&Size);
            v17 = v30;
            if ( v30 < 0 && v30 != -2147483643 && v30 != -1073741789 )
              goto LABEL_72;
            goto LABEL_67;
          }
LABEL_128:
          v7 = KeyValueInformationClass;
          goto LABEL_72;
        }
      }
      else
      {
        memset(v73, 0, Length);
        TransientPoolWithQuota = v73;
      }
      Src[1] = TransientPoolWithQuota;
LABEL_60:
      v17 = 0;
      goto LABEL_61;
    }
    v70[0] = Object;
    v70[1] = &DestinationString;
    LODWORD(v70[2]) = KeyValueInformationClass;
    v70[3] = KeyValueInformation;
    LODWORD(v70[4]) = Length;
    v70[5] = ResultLength;
    LOBYTE(v24) = 1;
    v25 = CmpCallCallBacksEx(8, (unsigned int)v70, 0, v24, 23, (__int64)Object, (__int64)v57);
    v17 = v25;
    if ( v25 >= 0 )
    {
      v42 = 1;
      goto LABEL_49;
    }
    v7 = KeyValueInformationClass;
    if ( v25 == -1073740541 )
      v17 = 0;
  }
LABEL_72:
  if ( v56 )
    ObfDereferenceObject(v56);
  if ( v42 && CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v57[0] != v57 )
  {
    v64 = 0;
    v67 = 0LL;
    v68 = 0LL;
    v69 = 0;
    v62 = Object;
    v63 = v17;
    v66 = v17;
    v65 = v70;
    CmpCallCallBacksEx(23, (unsigned int)&v62, 0, 0, 23, (__int64)Object, (__int64)v57);
    v17 = v66;
  }
  if ( v43 )
    KeLeaveCriticalRegion();
  v32 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
  v33 = Src[1];
  if ( Src[1] && Src[1] != Src[0] && Src[1] != v73 )
  {
    if ( (v72 & 1) != 0 )
      ExFreeToLookasideListEx(&CmpBounceBufferLookaside, Src[1]);
    else
      CmSiFreeMemory((PPRIVILEGE_SET)Src[1]);
  }
  if ( CmpTraceRoutine )
  {
    p_DestinationString = &DestinationString;
    LOBYTE(p_DestinationString) = 16;
    CmpTraceRoutine(p_DestinationString, v74, (unsigned int)v17, (unsigned int)v7);
  }
  if ( Privileges )
  {
    v32 = v82;
    if ( Privileges != (PPRIVILEGE_SET)v82 )
      CmSiFreeMemory(Privileges);
  }
  if ( v46 )
    CmpReleaseShutdownRundown(v32, v33);
  CmCleanupThreadInfo((__int64 *)&v61);
  return v17;
}
