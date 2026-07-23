/*
 * XREFs of sub_140935790 @ 0x140935790
 * Callers:
 *     NtSetInformationFile @ 0x1402F72B0 (NtSetInformationFile.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     sub_1402A3A14 @ 0x1402A3A14 (sub_1402A3A14.c)
 *     sub_1402A3A60 @ 0x1402A3A60 (sub_1402A3A60.c)
 *     sub_1402A3F70 @ 0x1402A3F70 (sub_1402A3F70.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1402DECF0 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x1402DEF50 (RtlInsertElementGenericTableAvl.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     MmProbeAndLockPages @ 0x140319E90 (MmProbeAndLockPages.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140935790(__int64 a1, __int64 a2)
{
  _QWORD *i; // rdi
  _QWORD *v3; // r15
  int v4; // r14d
  __int64 v5; // rsi
  __int64 v6; // r12
  __int64 v7; // r13
  unsigned __int64 v9; // r12
  _QWORD *inserted; // rax
  PMDL Mdl; // rsi
  char v12; // r12
  __int16 v13; // ax
  char v14; // al
  PVOID MappedSystemVa; // rax
  _QWORD *Pool2; // rax
  int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rdx
  signed __int64 v21; // rax
  signed __int64 v22; // rax
  PMDL MemoryDescriptorList; // [rsp+38h] [rbp-A0h]
  PVOID BaseAddress; // [rsp+40h] [rbp-98h]
  _QWORD *v25; // [rsp+50h] [rbp-88h]
  PVOID Object; // [rsp+58h] [rbp-80h]
  __int64 v27[6]; // [rsp+60h] [rbp-78h] BYREF
  _QWORD Buffer[9]; // [rsp+90h] [rbp-48h] BYREF
  char v31; // [rsp+F0h] [rbp+18h]
  BOOLEAN NewElement; // [rsp+F8h] [rbp+20h] BYREF

  v27[0] = 0LL;
  v31 = 0;
  NewElement = 0;
  i = 0LL;
  Buffer[1] = 0LL;
  v3 = 0LL;
  v27[2] = 0LL;
  MemoryDescriptorList = 0LL;
  BaseAddress = 0LL;
  v4 = 0;
  v5 = *((_QWORD *)KeGetCurrentThread() + 23);
  Object = (PVOID)v5;
  v27[5] = v5;
  v6 = *(_QWORD *)(a2 + 24);
  v7 = *(unsigned int *)(v6 + 8);
  if ( !(_DWORD)v7 )
    return 3221225485LL;
  v9 = *(_QWORD *)v6;
  v27[3] = v9;
  ExAcquireFastMutex(&stru_140C473E0);
  Buffer[0] = v5;
  inserted = RtlInsertElementGenericTableAvl(&stru_140C47360, Buffer, 0x10u, &NewElement);
  v25 = inserted;
  if ( !inserted )
  {
    v4 = -1073741670;
    Mdl = 0LL;
    v12 = 0;
LABEL_60:
    if ( Mdl )
    {
      if ( BaseAddress )
        MmUnmapLockedPages(BaseAddress, Mdl);
      MmUnlockPages(Mdl);
      IoFreeMdl(Mdl);
    }
    if ( v3 )
    {
      ObfDereferenceObjectWithTag(Object, 0x70436F49u);
      ExFreePoolWithTag(v3, 0);
    }
    if ( NewElement == 1 )
      RtlDeleteElementGenericTableAvl(&stru_140C47360, Buffer);
    if ( v12 == 1 )
      ExFreePoolWithTag(i, 0);
    goto LABEL_70;
  }
  if ( !NewElement )
  {
    for ( i = (_QWORD *)inserted[1]; i && (i[1] != v9 || i[2] != v9 + v7); i = (_QWORD *)i[5] )
      ;
  }
  if ( i )
  {
    Mdl = 0LL;
  }
  else
  {
    i = (_QWORD *)ExAllocatePool2(256LL, 48LL, 1700032329LL);
    v27[1] = (__int64)i;
    if ( !i )
    {
      v4 = -1073741670;
      Mdl = 0LL;
      v12 = 0;
      goto LABEL_60;
    }
    v31 = 1;
    if ( *(_QWORD *)(v5 + 1408)
      && ((v13 = *(_WORD *)(v5 + 2412), v13 == 332) || v13 == 452 ? (v14 = 1) : (v14 = 0), v14) )
    {
      if ( (v9 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    else if ( (v9 & 7) != 0 )
    {
      ExRaiseDatatypeMisalignment();
    }
    if ( v9 + v7 > 0x7FFFFFFF0000LL || v9 + v7 < v9 )
      MEMORY[0x7FFFFFFF0000] = 0;
    Mdl = IoAllocateMdl((PVOID)v9, v7, 0, 1u, 0LL);
    MemoryDescriptorList = Mdl;
    if ( !Mdl )
      RtlRaiseStatus(-1073741670);
    MmProbeAndLockPages(Mdl, *(_BYTE *)(a2 + 64), IoWriteAccess);
    if ( (Mdl->MdlFlags & 5) != 0 )
      MappedSystemVa = Mdl->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(Mdl, 0, MmCached, 0LL, 0, 0x40000010u);
    BaseAddress = MappedSystemVa;
    if ( MappedSystemVa )
    {
      i[3] = Mdl;
      i[1] = v9;
      i[2] = v9 + (unsigned int)v7;
      *(_DWORD *)i = 1;
      i[5] = 0LL;
      i[4] = MappedSystemVa;
    }
    else
    {
      v4 = -1073741670;
    }
  }
  if ( v4 < 0 )
    goto LABEL_58;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 48LL, 1700032329LL);
  v3 = Pool2;
  if ( !Pool2 )
  {
    v4 = -1073741670;
    v12 = v31;
    goto LABEL_60;
  }
  *Pool2 = v9;
  Pool2[1] = v9 + (unsigned int)v7;
  Pool2[3] = v9 + i[4] - i[1];
  Pool2[2] = i[3];
  Pool2[5] = 0LL;
  ObfReferenceObjectWithTag(Object, 0x70436F49u);
  v3[4] = Object;
  v4 = sub_1402A3A60(a1, v27);
  if ( v4 < 0 )
  {
LABEL_58:
    v12 = v31;
  }
  else
  {
    v4 = sub_1402A3F70(v27[0], 2u, (signed __int64)v3);
    if ( v4 == -1073741823 )
    {
      v18 = sub_1402A3A14(a1, v17, 0LL);
      v19 = v18;
      if ( (PVOID)v3[4] == Object )
      {
        v20 = (_QWORD *)v18;
        if ( v18 )
        {
          while ( *v3 != *v20 || v3[1] != v20[1] )
          {
            v20 = (_QWORD *)v20[5];
            if ( !v20 )
              goto LABEL_46;
          }
          ObfDereferenceObjectWithTag(Object, 0x70436F49u);
          ExFreePoolWithTag(v3, 0);
          v4 = 0;
          goto LABEL_70;
        }
LABEL_46:
        v21 = *(_QWORD *)(v18 + 40);
        v3[5] = v21;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 40), (signed __int64)v3, v21) != v3[5] )
        {
          _m_prefetchw((const void *)(v19 + 40));
          do
          {
            v22 = *(_QWORD *)(v19 + 40);
            v3[5] = v22;
          }
          while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 40), (signed __int64)v3, v22) != v3[5] );
        }
        v4 = 0;
        Mdl = MemoryDescriptorList;
      }
    }
    v12 = v31;
    if ( v4 < 0 )
      goto LABEL_60;
    if ( v31 == 1 )
    {
      if ( NewElement == 1 )
        *v25 = Object;
      else
        i[5] = v25[1];
      v25[1] = i;
    }
    else
    {
      ++*(_DWORD *)i;
    }
  }
  if ( v4 < 0 )
    goto LABEL_60;
LABEL_70:
  KeReleaseGuardedMutex(&stru_140C473E0);
  return (unsigned int)v4;
}
