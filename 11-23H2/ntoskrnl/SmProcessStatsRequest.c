/*
 * XREFs of SmProcessStatsRequest @ 0x1409D7578
 * Callers:
 *     SmQueryStoreInformation @ 0x14084134C (SmQueryStoreInformation.c)
 * Callees:
 *     MmSizeOfMdl @ 0x140206EA0 (MmSizeOfMdl.c)
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     MmProbeAndLockPages @ 0x140238860 (MmProbeAndLockPages.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1402AFB00 (KeInitializeEvent.c)
 *     MmUnlockPages @ 0x1402CADA0 (MmUnlockPages.c)
 *     PsDereferencePartition @ 0x1402F9EDC (PsDereferencePartition.c)
 *     SSHSupportAllocateNonPaged @ 0x14032D5E4 (SSHSupportAllocateNonPaged.c)
 *     SmpGetProcessPartition @ 0x140344D10 (SmpGetProcessPartition.c)
 *     ?SmStoreRequest@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x1405C3164 (-SmStoreRequest@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_I.c)
 *     SeSinglePrivilegeCheck @ 0x140737CF0 (SeSinglePrivilegeCheck.c)
 *     PsReferencePartitionByHandle @ 0x14076022C (PsReferencePartitionByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessStatsRequest(__int64 a1, int a2, _DWORD *a3, char a4)
{
  struct _MDL *NonPaged; // r14
  __int64 v8; // rsi
  int v9; // r12d
  int v10; // ebx
  __int64 ProcessPartition; // r15
  __int64 v12; // rbx
  unsigned int v13; // eax
  __int16 v14; // dx
  int v16; // [rsp+30h] [rbp-88h]
  __int64 v17; // [rsp+48h] [rbp-70h] BYREF
  PVOID Base[2]; // [rsp+50h] [rbp-68h]
  ULONG_PTR v19; // [rsp+60h] [rbp-58h]
  __int128 v20; // [rsp+68h] [rbp-50h] BYREF
  struct _KEVENT Object; // [rsp+78h] [rbp-40h] BYREF

  memset(&Object, 0, sizeof(Object));
  v20 = 0LL;
  v17 = 0LL;
  NonPaged = 0LL;
  v8 = 0LL;
  v9 = 0;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  if ( a2 != 24 )
  {
    v10 = -1073741306;
    goto LABEL_25;
  }
  if ( a4 && (a1 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  *(_OWORD *)Base = *(_OWORD *)a1;
  v19 = *(_QWORD *)(a1 + 16);
  if ( LOBYTE(Base[0]) == 3 && (unsigned __int64)((__int64)Base[0] & 0xFF00) < 0x400 )
  {
    if ( v19 )
    {
      v10 = PsReferencePartitionByHandle(v19, 1, a4, 0x53516D53u, &v17);
      if ( v10 < 0 )
        goto LABEL_25;
      ProcessPartition = *(_QWORD *)(v17 + 24);
      if ( !ProcessPartition )
      {
        v10 = -1073741399;
        goto LABEL_25;
      }
    }
    else
    {
      ProcessPartition = SmpGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
    }
    v16 = BYTE1(Base[0]);
    if ( BYTE1(Base[0]) <= 1u || SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a4) )
    {
      v12 = HIDWORD(Base[0]);
      if ( (!HIDWORD(Base[0])
         || (v13 = MmSizeOfMdl(Base[1], HIDWORD(Base[0])),
             (NonPaged = (struct _MDL *)SSHSupportAllocateNonPaged(v13, 0x444D6D73u)) != 0LL))
        && (v8 = SSHSupportAllocateNonPaged(40LL, 0x69576D73u)) != 0 )
      {
        *(_OWORD *)v8 = 0LL;
        *(_OWORD *)(v8 + 16) = 0LL;
        *(_QWORD *)(v8 + 32) = 0LL;
        if ( (_DWORD)v12 )
        {
          NonPaged->Next = 0LL;
          v14 = (__int16)Base[1];
          NonPaged->Size = 8 * ((((unsigned __int64)((__int64)Base[1] & 0xFFF) + v12 + 4095) >> 12) + 6);
          NonPaged->MdlFlags = 0;
          NonPaged->StartVa = (PVOID)((unsigned __int64)Base[1] & 0xFFFFFFFFFFFFF000uLL);
          NonPaged->ByteOffset = v14 & 0xFFF;
          NonPaged->ByteCount = v12;
          MmProbeAndLockPages(NonPaged, a4, IoWriteAccess);
          v9 = 1;
        }
        *(_DWORD *)v8 = *(_DWORD *)v8 & 0xFFFFFFF8 | 3;
        *(_DWORD *)(v8 + 8) = v16;
        *(_DWORD *)(v8 + 12) = v12;
        *(_QWORD *)(v8 + 16) = NonPaged;
        v10 = SMKM_STORE_MGR<SM_TRAITS>::SmStoreRequest(
                ProcessPartition,
                HIWORD(LODWORD(Base[0])),
                v8,
                (__int64)&Object,
                (__int64)&v20);
        if ( v10 >= 0 )
        {
          v8 = 0LL;
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
          v10 = v20;
          *a3 = DWORD2(v20);
        }
      }
      else
      {
        v10 = -1073741670;
      }
    }
    else
    {
      v10 = -1073741790;
    }
  }
  else
  {
    v10 = -1073741811;
  }
LABEL_25:
  if ( v8 )
    CmSiFreeMemory((PPRIVILEGE_SET)v8);
  if ( v9 )
    MmUnlockPages(NonPaged);
  if ( NonPaged )
    CmSiFreeMemory((PPRIVILEGE_SET)NonPaged);
  if ( v17 )
    PsDereferencePartition(v17);
  return (unsigned int)v10;
}
