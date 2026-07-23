/*
 * XREFs of ObInitSystem @ 0x140B4E9F8
 * Callers:
 *     Phase1InitializationDiscard @ 0x140B4FF9C (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 *     Phase1InitializationIoReady @ 0x140B532AC (Phase1InitializationIoReady.c)
 * Callees:
 *     RtlGetAce @ 0x140227A80 (RtlGetAce.c)
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     ExGenRandom @ 0x1403173F0 (ExGenRandom.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x1403C2C70 (ExInitializeNPagedLookasideListInternal.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     ObpLockDirectoryExclusive @ 0x140697B24 (ObpLockDirectoryExclusive.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406BD500 (RtlSetDaclSecurityDescriptor.c)
 *     ObpUnlockDirectory @ 0x1406C32F8 (ObpUnlockDirectory.c)
 *     NtClose @ 0x1406E4570 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     RtlCreateSecurityDescriptor @ 0x140736A80 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140736AB0 (RtlSetSaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140736B20 (RtlCreateAcl.c)
 *     ExCreateHandleTable @ 0x1407B0B78 (ExCreateHandleTable.c)
 *     ObpLookupDirectoryEntry @ 0x1407B72E8 (ObpLookupDirectoryEntry.c)
 *     ObpInsertDirectoryEntry @ 0x1407C0C7C (ObpInsertDirectoryEntry.c)
 *     NtCreateDirectoryObject @ 0x1407F1B70 (NtCreateDirectoryObject.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408034B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     ObpInitializeRootNamespace @ 0x14081E004 (ObpInitializeRootNamespace.c)
 *     ObCreateObjectType @ 0x140821750 (ObCreateObjectType.c)
 *     ObpInitObjectTypeSD @ 0x140821DA4 (ObpInitObjectTypeSD.c)
 *     ObInitializeProcessor @ 0x140821FA4 (ObInitializeProcessor.c)
 *     ObInitServerSilo @ 0x14085687C (ObInitServerSilo.c)
 *     RtlAddAuditAccessAce @ 0x1409BB150 (RtlAddAuditAccessAce.c)
 *     ExInitializeSystemLookasideList @ 0x140A8BD08 (ExInitializeSystemLookasideList.c)
 *     ObpInitInfoBlockOffsets @ 0x140B64918 (ObpInitInfoBlockOffsets.c)
 *     ObpInitStackTrace @ 0x140B725E0 (ObpInitStackTrace.c)
 */

char __fastcall ObInitSystem(int a1)
{
  __int16 v1; // di
  __int16 v2; // bx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rax
  int v7; // edi
  unsigned int v8; // edi
  char *v9; // rsi
  unsigned int v10; // eax
  _OWORD *v11; // rdi
  void *v12; // rdi
  NTSTATUS v13; // eax
  char *v14; // r14
  char *i; // rdi
  char *v16; // rax
  unsigned __int16 *v17; // rcx
  ULONG v18; // edx
  ULONG v19; // edx
  void *v20; // r9
  _BYTE *v21; // rax
  BOOLEAN Object; // [rsp+28h] [rbp-E0h]
  BOOLEAN HandleInformation; // [rsp+30h] [rbp-D8h]
  PVOID v24; // [rsp+48h] [rbp-C0h] BYREF
  PVOID Ace; // [rsp+50h] [rbp-B8h] BYREF
  __m256i DirectoryHandle; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v27[16]; // [rsp+78h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+F8h] [rbp-10h] BYREF
  UNICODE_STRING DestinationString; // [rsp+128h] [rbp+20h] BYREF
  UNICODE_STRING v30; // [rsp+138h] [rbp+30h] BYREF
  UNICODE_STRING v31; // [rsp+148h] [rbp+40h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+158h] [rbp+50h] BYREF
  __int64 v33; // [rsp+178h] [rbp+70h]
  ACL Acl; // [rsp+188h] [rbp+80h] BYREF

  Ace = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v33 = 0LL;
  v30 = 0LL;
  DirectoryHandle.m256i_i64[0] = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v31 = 0LL;
  DestinationString = 0LL;
  if ( (_BYTE)dword_140D1D1EC )
  {
    v1 = 64;
    v2 = 32;
  }
  else
  {
    v1 = 32;
    v2 = 16;
  }
  if ( a1 )
  {
    if ( a1 != 1 )
    {
      if ( a1 == 2 )
        TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140C02FD0, 0LL, 0LL);
      return 1;
    }
    if ( ObInitServerSilo(0LL) >= 0 )
    {
      v7 = 0;
      if ( (_DWORD)KeNumberProcessors_0 )
      {
        while ( (int)ObInitializeProcessor((_QWORD *)KiProcessorBlock[v7]) >= 0 )
        {
          if ( ++v7 >= (unsigned int)KeNumberProcessors_0 )
            goto LABEL_19;
        }
      }
      else
      {
LABEL_19:
        v8 = 0;
        v9 = (char *)&ObpWaitBlockLookaside;
        do
        {
          v10 = 14 * v8 + 24;
          if ( v10 >= 0x40 )
            v10 = 64;
          ExInitializeNPagedLookasideListInternal((__int64)v9, 0LL, 0LL, 512, 48 * v10, 1834443343, 0, 0);
          ++v8;
          v9 += 128;
        }
        while ( v8 < 4 );
        v11 = (_OWORD *)SePublicDefaultUnrestrictedSd;
        if ( !ObpAuditBaseDirectories && !ObpAuditBaseObjects )
          goto LABEL_28;
        v18 = 4 * *((unsigned __int8 *)SeWorldSid + 1) + 28;
        if ( v18 < 0xFA
          && RtlCreateAcl(&Acl, v18, 2u) >= 0
          && RtlAddAuditAccessAce(&Acl, v19, 0x60000000u, v20, Object, HandleInformation) >= 0
          && RtlGetAce(&Acl, 0, &Ace) >= 0 )
        {
          v21 = Ace;
          if ( ObpAuditBaseDirectories )
            *((_BYTE *)Ace + 1) |= 0xAu;
          if ( ObpAuditBaseObjects )
            v21[1] |= 9u;
          v11 = SecurityDescriptor;
          if ( RtlCreateSecurityDescriptor(SecurityDescriptor, 1u) >= 0
            && RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, SePublicDefaultUnrestrictedDacl, 0) >= 0
            && RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0) >= 0 )
          {
LABEL_28:
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpRootDirectoryName;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 80;
            ObjectAttributes.SecurityDescriptor = v11;
            ObjectAttributes.SecurityQualityOfService = 0LL;
            if ( NtCreateDirectoryObject((PHANDLE)&DirectoryHandle, 0xF000Fu, &ObjectAttributes) >= 0 )
            {
              v12 = (void *)DirectoryHandle.m256i_i64[0];
              v24 = 0LL;
              v13 = ObReferenceObjectByHandle(
                      (HANDLE)DirectoryHandle.m256i_i64[0],
                      0,
                      ObpDirectoryObjectType,
                      0,
                      &v24,
                      0LL);
              ObpRootDirectoryObject = v24;
              if ( v13 >= 0 && (int)ObpInitializeRootNamespace(0LL, v12, 0LL, 0LL) >= 0 && NtClose(v12) >= 0 )
              {
                memset(&DirectoryHandle.m256i_u64[1], 0, 24);
                ObpLockDirectoryExclusive((__int64)&DirectoryHandle.m256i_i64[1], (__int64)ObpTypeDirectoryObject);
                v14 = (char *)ObpTypeObjectType;
                for ( i = *(char **)ObpTypeObjectType; i != v14; i = *(char **)i )
                {
                  if ( (i[58] & 2) != 0 )
                  {
                    v16 = (char *)ObpInfoMaskToOffset[i[58] & 3];
                    v17 = (unsigned __int16 *)(i + 32 - v16);
                    if ( i + 32 != v16
                      && !*(_QWORD *)v17
                      && !ObpLookupDirectoryEntry(v17 + 4, 0x40u, &DirectoryHandle.m256i_i64[1])
                      && (!*((_QWORD *)i + 9) && (int)ObpInitObjectTypeSD((__int64)(i + 80), 0LL) < 0
                       || !ObpInsertDirectoryEntry(
                             (char *)ObpTypeDirectoryObject,
                             i + 80,
                             (__int64)&DirectoryHandle.m256i_i64[1])) )
                    {
                      return 0;
                    }
                  }
                }
                if ( DirectoryHandle.m256i_i64[1] )
                  ObpUnlockDirectory((__int64)&DirectoryHandle.m256i_i64[1]);
                v24 = &ObpLUIDDeviceMapsEnabled;
                return 1;
              }
            }
          }
        }
      }
    }
  }
  else
  {
    ObHeaderCookie = ExGenRandom(0);
    ExInitializeSystemLookasideList(
      (__int64)&ObpCreateInfoLookasideList,
      512,
      64,
      1766023759,
      v1,
      (__int64)&ExSystemLookasideListHead);
    ExInitializeSystemLookasideList(
      (__int64)&ObpNameBufferLookasideList,
      1,
      248,
      1833853519,
      v2,
      (__int64)&ExSystemLookasideListHead);
    CurrentPrcb = KeGetCurrentPrcb();
    v4 = 256LL;
    CurrentPrcb->PPLookasideList[4].L = (_GENERAL_LOOKASIDE *)&ObpCreateInfoLookasideList;
    CurrentPrcb->PPLookasideList[4].P = (_GENERAL_LOOKASIDE *)&ObpCreateInfoLookasideList;
    CurrentPrcb->PPLookasideList[5].L = (_GENERAL_LOOKASIDE *)&ObpNameBufferLookasideList;
    CurrentPrcb->PPLookasideList[5].P = (_GENERAL_LOOKASIDE *)&ObpNameBufferLookasideList;
    v5 = &unk_140D4B048;
    ObpRemoveObjectList = 0LL;
    ObpRemoveObjectWait = 0LL;
    do
    {
      *(v5 - 1) = 0LL;
      *v5 = 0LL;
      v5 += 2;
      --v4;
    }
    while ( v4 );
    ObpDefaultObject = 0;
    qword_140C40490 = (__int64)&qword_140C40488;
    qword_140C40488 = (__int64)&qword_140C40488;
    byte_140C40482 = 6;
    dword_140C40484 = 1;
    ObpKernelHandleTable = ExCreateHandleTable(0LL, 1LL);
    KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[28] = ObpKernelHandleTable;
    if ( ObpKernelHandleTable )
    {
      ObpRemoveObjectWorkItem.Parameter = 0LL;
      ObpRemoveObjectWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ObpProcessRemoveObjectQueue;
      qword_140C40418 = (__int64)ObpProcessRemoveObjectDpcWorker;
      ObpRemoveObjectWorkItem.List.Flink = 0LL;
      LODWORD(ObpRemoveObjectDpc) = 275;
      qword_140C40420 = 0LL;
      qword_140C40438 = 0LL;
      qword_140C40410 = 0LL;
      ObpInitInfoBlockOffsets();
      qword_140D1F678 = (__int64)MmBadPointer;
      memset(v27, 0, 0x78uLL);
      LOWORD(v27[0]) = 120;
      LODWORD(v27[1]) = 256;
      HIDWORD(v27[4]) = 512;
      RtlInitUnicodeString(&DestinationString, L"Type");
      BYTE2(v27[0]) |= 0x24u;
      HIDWORD(v27[3]) = 983041;
      HIDWORD(v27[5]) = 216;
      *(_OWORD *)((char *)&v27[1] + 4) = ObpTypeMapping;
      if ( (int)ObCreateObjectType(&DestinationString, (__int64)v27, 0LL, (__int64)&ObpTypeObjectType) >= 0 )
      {
        HIDWORD(v27[4]) = 1;
        RtlInitUnicodeString(&v30, L"Directory");
        HIDWORD(v27[5]) = 344;
        HIDWORD(v27[3]) = 983055;
        BYTE2(v27[0]) = BYTE2(v27[0]) & 0xD2 | 0xD;
        v27[8] = ObpCloseDirectoryObject;
        v27[9] = ObpDeleteDirectoryObject;
        *(_OWORD *)((char *)&v27[1] + 4) = ObpDirectoryMapping;
        if ( (int)ObCreateObjectType(&v30, (__int64)v27, 0LL, (__int64)&ObpDirectoryObjectType) >= 0 )
        {
          v27[8] = 0LL;
          ObpDirectoryObjectType->TypeInfo.ValidAccessMask &= ~0x100000u;
          RtlInitUnicodeString(&v31, L"SymbolicLink");
          BYTE3(v27[0]) |= 1u;
          v27[9] = ObpDeleteSymbolicLink;
          HIDWORD(v27[5]) = 40;
          v27[10] = ObpParseSymbolicLinkEx;
          HIDWORD(v27[4]) = 1;
          HIDWORD(v27[3]) = 0xFFFFF;
          BYTE2(v27[0]) = BYTE2(v27[0]) & 0xF6 | 1;
          *(_OWORD *)((char *)&v27[1] + 4) = ObpSymbolicLinkMapping;
          if ( (int)ObCreateObjectType(&v31, (__int64)v27, 0LL, (__int64)&ObpSymbolicLinkObjectType) >= 0 )
          {
            ObpSymbolicLinkObjectType->TypeInfo.ValidAccessMask &= ~0x100000u;
            ObpInitStackTrace();
            return 1;
          }
        }
      }
    }
  }
  return 0;
}
