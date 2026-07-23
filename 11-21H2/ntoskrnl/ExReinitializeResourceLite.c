/*
 * XREFs of ExReinitializeResourceLite @ 0x14021A5F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14021A758 @ 0x14021A758 (sub_14021A758.c)
 *     sub_1402ACD80 @ 0x1402ACD80 (sub_1402ACD80.c)
 *     sub_1402AF060 @ 0x1402AF060 (sub_1402AF060.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140632710 @ 0x140632710 (sub_140632710.c)
 */

NTSTATUS __stdcall ExReinitializeResourceLite(PERESOURCE Resource)
{
  __int64 v1; // rdx
  POWNER_ENTRY OwnerTable; // rsi
  unsigned int v4; // r14d
  unsigned int TableSize; // ebp
  ERESOURCE_THREAD OwnerThread; // rsi
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 v7; // eax
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 v8; // ecx
  unsigned int v10; // r15d
  unsigned int v11; // eax
  ULONG *p_TableSize; // r13
  __int64 v13; // rdx
  ULONG_PTR v14; // r10
  ULONG v15; // eax
  __int64 v16; // [rsp+68h] [rbp+10h]

  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  OwnerTable = Resource->OwnerTable;
  v4 = 0;
  if ( OwnerTable )
  {
    TableSize = OwnerTable->TableSize;
    v10 = 1;
    v11 = TableSize;
    if ( TableSize > 1 )
    {
      p_TableSize = &OwnerTable->TableSize;
      do
      {
        p_TableSize += 4;
        v16 = sub_14021A758(p_TableSize - 2);
        if ( v16 )
        {
          ++v4;
          if ( (unsigned __int8)sub_1402AF060(Resource)
            && (*p_TableSize & 2) == 0
            && (struct _KTHREAD *)v14 != KeGetCurrentThread() )
          {
            KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), v14, 3uLL);
          }
          v15 = *p_TableSize;
          if ( (*p_TableSize & 1) != 0 )
          {
            LOBYTE(v13) = 1;
            sub_1402ACD80(v14, v13, 0LL, 0LL);
            v15 = *p_TableSize;
            v14 = v16;
          }
          if ( (v15 & 4) != 0 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v14 + 1444));
            v15 = *p_TableSize;
          }
          if ( (v15 & 2) != 0 )
            ObDereferenceObjectDeferDeleteWithTag((PVOID)v14, 0x746C6644u);
        }
        ++v10;
      }
      while ( v10 < TableSize );
      v11 = OwnerTable->TableSize;
    }
    memset(&OwnerTable[1], 0, 16LL * (v11 - 1));
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
  v7 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
  if ( (*(_BYTE *)&v7 & 2) != 0 )
  {
    OwnerThread &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (OwnerThread & 3) != 0 )
  {
    goto LABEL_19;
  }
  if ( OwnerThread )
  {
    if ( (Resource->ReservedLowFlags & 1) != 0 || dword_140C11740 )
    {
      *(_BYTE *)&v8 = Resource->OwnerEntry.TableSize;
      if ( (*(_BYTE *)&v7 & 2) == 0 && (struct _KTHREAD *)OwnerThread != KeGetCurrentThread() )
        KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), OwnerThread, 4uLL);
    }
    else
    {
      *(_BYTE *)&v8 = Resource->OwnerEntry.TableSize;
    }
    if ( (*(_BYTE *)&v8 & 1) != 0 )
    {
      LOBYTE(v1) = 1;
      sub_1402ACD80(OwnerThread, v1, 0LL, 0LL);
      v8 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
    }
    if ( (*(_BYTE *)&v8 & 4) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(OwnerThread + 1444));
      v8 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
    }
    if ( (*(_BYTE *)&v8 & 2) != 0 )
      ObDereferenceObjectDeferDeleteWithTag((PVOID)OwnerThread, 0x746C6644u);
  }
LABEL_19:
  *(_DWORD *)&Resource->ActiveCount = 0;
  *(_QWORD *)&Resource->ActiveEntries = 0LL;
  *(_OWORD *)&Resource->SharedWaiters = 0LL;
  Resource->OwnerEntry = 0LL;
  *(_QWORD *)&Resource->NumberOfSharedWaiters = 0LL;
  __incgsdword(0x8A5Cu);
  if ( (DWORD1(xmmword_140D06900) & 0x20000) != 0 )
    sub_140632710(65560LL, Resource, TableSize, v4);
  return 0;
}
