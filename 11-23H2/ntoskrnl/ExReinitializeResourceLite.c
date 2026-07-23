/*
 * XREFs of ExReinitializeResourceLite @ 0x140318C30
 * Callers:
 *     <none>
 * Callees:
 *     PsBoostThreadIoEx @ 0x140230040 (PsBoostThreadIoEx.c)
 *     ExpOwnerEntryToThread @ 0x1402A8E18 (ExpOwnerEntryToThread.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8F70 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     PsBoostThreadIoQoS @ 0x14031A99C (PsBoostThreadIoQoS.c)
 *     ExpResourceEnforcesOwnershipTransfer @ 0x14031A9D4 (ExpResourceEnforcesOwnershipTransfer.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PerfLogExecutiveResourceInitialize @ 0x140600D1C (PerfLogExecutiveResourceInitialize.c)
 */

NTSTATUS __stdcall ExReinitializeResourceLite(PERESOURCE Resource)
{
  __int64 v1; // r8
  __int16 v3; // ax
  unsigned int v4; // r12d
  POWNER_ENTRY OwnerTable; // r13
  unsigned int TableSize; // r15d
  ULONG *p_TableSize; // rax
  unsigned int v8; // ebp
  __int64 *v9; // rbx
  struct _KTHREAD *v10; // rdi
  __int64 v11; // r8
  ERESOURCE_THREAD OwnerThread; // rbx
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 v13; // edx

  v3 = Resource->Flag & 1;
  if ( FeatureFastResource2 )
  {
    if ( !v3 )
      goto LABEL_3;
LABEL_42:
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  }
  if ( v3 )
    goto LABEL_42;
LABEL_3:
  v4 = 0;
  OwnerTable = Resource->OwnerTable;
  if ( OwnerTable )
  {
    TableSize = OwnerTable->TableSize;
    p_TableSize = &OwnerTable->TableSize;
    v8 = 1;
    if ( TableSize > 1 )
    {
      v9 = (__int64 *)&OwnerTable->0;
      do
      {
        v9 += 2;
        v10 = (struct _KTHREAD *)ExpOwnerEntryToThread(v9 - 1);
        if ( v10 )
        {
          ++v4;
          if ( (unsigned __int8)ExpResourceEnforcesOwnershipTransfer(Resource)
            && (*(_DWORD *)v9 & 2) == 0
            && v10 != KeGetCurrentThread() )
          {
            KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), (ULONG_PTR)v10, 3uLL);
          }
          if ( (*(_DWORD *)v9 & 1) != 0 )
            PsBoostThreadIoEx((__int64)v10, 1, 0, 0LL);
          if ( (*(_DWORD *)v9 & 4) != 0 )
            PsBoostThreadIoQoS(v10, 1LL, v11);
          if ( (*(_DWORD *)v9 & 2) != 0 )
            ObDereferenceObjectDeferDeleteWithTag(v10, 0x746C6644u);
        }
        ++v8;
      }
      while ( v8 < TableSize );
      p_TableSize = &OwnerTable->TableSize;
    }
    memset(&OwnerTable[1], 0, 16LL * (*p_TableSize - 1));
  }
  else
  {
    TableSize = 0;
  }
  OwnerThread = Resource->OwnerEntry.OwnerThread;
  if ( OwnerThread )
  {
    ++TableSize;
    if ( (OwnerThread & 3) == 0 )
      ++v4;
  }
  v13 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
  if ( (*(_BYTE *)&v13 & 2) != 0 )
  {
    OwnerThread &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (OwnerThread & 3) != 0 )
  {
    goto LABEL_39;
  }
  if ( OwnerThread )
  {
    if ( ((Resource->ReservedLowFlags & 1) != 0 || ExpResourceEnforceOwnerTransfer)
      && (Resource->OwnerEntry.TableSize & 2) == 0
      && (struct _KTHREAD *)OwnerThread != KeGetCurrentThread() )
    {
      KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), OwnerThread, 4uLL);
    }
    if ( (*(_BYTE *)&v13 & 1) != 0 )
      PsBoostThreadIoEx(OwnerThread, 1, 0, 0LL);
    if ( (Resource->OwnerEntry.TableSize & 4) != 0 )
      PsBoostThreadIoQoS(OwnerThread, 1LL, v1);
    if ( (Resource->OwnerEntry.TableSize & 2) != 0 )
      ObDereferenceObjectDeferDeleteWithTag((PVOID)OwnerThread, 0x746C6644u);
  }
LABEL_39:
  *(_DWORD *)&Resource->ActiveCount = 0;
  *(_QWORD *)&Resource->ActiveEntries = 0LL;
  *(_OWORD *)&Resource->SharedWaiters = 0LL;
  Resource->OwnerEntry = 0LL;
  *(_QWORD *)&Resource->NumberOfSharedWaiters = 0LL;
  __incgsdword(0x8A5Cu);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65560LL, Resource, TableSize, v4);
  return 0;
}
