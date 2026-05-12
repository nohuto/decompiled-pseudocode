/*
 * XREFs of sub_1C00346C4 @ 0x1C00346C4
 * Callers:
 *     sub_1C0009130 @ 0x1C0009130 (sub_1C0009130.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C0035F2C @ 0x1C0035F2C (sub_1C0035F2C.c)
 */

__int64 __fastcall sub_1C00346C4(__int64 a1, struct _SLIST_ENTRY *a2)
{
  struct _SLIST_ENTRY *Next; // rax
  unsigned int AdapterCryptoEngineExtension; // ebx
  struct _SLIST_ENTRY *v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // r8
  unsigned int v11; // eax
  unsigned int v12; // ecx
  unsigned int i; // ebp
  struct _IO_WORKITEM *WorkItem; // r13
  __int64 v15; // rax
  void *v16; // r12
  unsigned __int64 v17; // rbx
  int v18; // ecx
  struct _SLIST_ENTRY *v19; // rdx
  __int64 v20; // r9
  unsigned __int64 v21; // r8
  struct _SLIST_ENTRY *v22; // rdx
  int v23; // ecx
  bool v24; // zf
  unsigned __int64 v25; // r8
  struct _SLIST_ENTRY *v26; // rdx
  int v27; // ecx
  struct _SLIST_ENTRY **v29; // [rsp+50h] [rbp+8h] BYREF

  Next = a2[49].Next;
  v29 = 0LL;
  *Next = 0LL;
  Next[1].Next = 0LL;
  AdapterCryptoEngineExtension = IoGetAdapterCryptoEngineExtension(a2[10].Next, &v29);
  if ( (AdapterCryptoEngineExtension & 0x80000000) != 0 )
    return 0;
  if ( !v29 )
    return 0;
  v6 = v29[1];
  if ( !v6 )
    return 0;
  if ( LODWORD(v6->Next) == 1
    && HIDWORD(v6->Next) >= 0x48
    && (v7 = *(_QWORD *)(a1 + 5544),
        v8 = *((unsigned int *)&v6->Next + 2),
        (unsigned int)v8 < *(unsigned __int16 *)(v7 + 10))
    && *((_DWORD *)&v6->Next + 3) == *(_DWORD *)(v7 + 20 * v8 + 24) )
  {
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 5568));
    v9 = sub_1C0035F2C(a1, &v6[1].Next + 1, 0LL);
    if ( v9 != *(_DWORD *)(a1 + 5552) )
    {
      v25 = *(_QWORD *)(a1 + 5560) + ((unsigned __int64)v9 << 6);
      v26 = *v29;
      v27 = *(_DWORD *)v25;
      LODWORD(a2[49].Next->Next) = 1;
      HIDWORD(a2[49].Next->Next) = 24;
      *((_DWORD *)&a2[49].Next->Next + 2) = v27;
      a2[49].Next[1].Next = v26;
      _InterlockedAdd((volatile signed __int32 *)(v25 + 40), 1u);
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 5568));
      return AdapterCryptoEngineExtension;
    }
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 5568));
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 5568));
    LOBYTE(v10) = 1;
    v11 = sub_1C0035F2C(a1, &v6[1].Next + 1, v10);
    v12 = *(_DWORD *)(a1 + 5552);
    if ( v11 != v12 )
    {
      v20 = *(_QWORD *)(a1 + 5560);
      v21 = (unsigned __int64)v11 << 6;
      v22 = *v29;
      v23 = *(_DWORD *)(v21 + v20);
      v24 = *(_DWORD *)(v21 + v20 + 44) == 1;
      LODWORD(a2[49].Next->Next) = 1;
      HIDWORD(a2[49].Next->Next) = 24;
      *((_DWORD *)&a2[49].Next->Next + 2) = v23;
      a2[49].Next[1].Next = v22;
      if ( !v24 )
      {
        _InterlockedAdd((volatile signed __int32 *)(v21 + v20 + 40), 1u);
        goto LABEL_21;
      }
      _InterlockedAdd((volatile signed __int32 *)(v21 + v20 + 40), 1u);
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(v21 + v20 + 48), a2 + 2);
LABEL_25:
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 5568));
      return 259;
    }
    if ( *(_BYTE *)(a1 + 5556) )
      goto LABEL_16;
    for ( i = 0; i < v12; ++i )
    {
      if ( !*(_DWORD *)(((unsigned __int64)i << 6) + *(_QWORD *)(a1 + 5560) + 44) )
        break;
    }
    if ( i == v12 )
    {
LABEL_16:
      *(_BYTE *)(a1 + 5556) = 1;
      i = 0;
      if ( v12 )
      {
        do
        {
          if ( !*(_DWORD *)(((unsigned __int64)i << 6) + *(_QWORD *)(a1 + 5560) + 40) )
            break;
          ++i;
        }
        while ( i < *(_DWORD *)(a1 + 5552) );
      }
    }
    if ( i == *(_DWORD *)(a1 + 5552) )
    {
      AdapterCryptoEngineExtension = -1073741823;
LABEL_21:
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 5568));
      return AdapterCryptoEngineExtension;
    }
    WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
    v15 = sub_1C0007CF4(64LL, 56LL, 1917018450LL, *(_QWORD *)(a1 + 8));
    v16 = (void *)v15;
    if ( WorkItem && v15 )
    {
      v17 = *(_QWORD *)(a1 + 5560) + ((unsigned __int64)i << 6);
      *(_DWORD *)(v17 + 36) = *((_DWORD *)&v6->Next + 2);
      *(struct _SLIST_ENTRY *)(v17 + 4) = *(struct _SLIST_ENTRY *)((char *)v6 + 24);
      *(struct _SLIST_ENTRY *)(v17 + 20) = *(struct _SLIST_ENTRY *)((char *)v6 + 40);
      *(_DWORD *)(v17 + 44) = 1;
      *(_QWORD *)v15 = a1;
      *(_DWORD *)(v15 + 8) = i;
      *(_WORD *)(v15 + 16) = 1;
      *(_WORD *)(v15 + 18) = 40;
      *(_DWORD *)(v15 + 20) = i;
      *(_DWORD *)(v15 + 24) = *((_DWORD *)&v6->Next + 2);
      *(_DWORD *)(v15 + 28) = v6[1].Next;
      *(_DWORD *)(v15 + 32) = HIDWORD(v6[1].Next);
      *(_QWORD *)(v15 + 40) = *((_QWORD *)&v6[3].Next + 1);
      *(_QWORD *)(v15 + 48) = v6[4].Next;
      v18 = *(_DWORD *)v17;
      v19 = *v29;
      LODWORD(a2[49].Next->Next) = 1;
      HIDWORD(a2[49].Next->Next) = 24;
      *((_DWORD *)&a2[49].Next->Next + 2) = v18;
      a2[49].Next[1].Next = v19;
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(v17 + 48), a2 + 2);
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 40));
      IoQueueWorkItemEx(WorkItem, sub_1C0037120, CriticalWorkQueue, v16);
      goto LABEL_25;
    }
    AdapterCryptoEngineExtension = -1073741670;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 5568));
    if ( v16 )
      ExFreePoolWithTag(v16, 0x72436152u);
    if ( WorkItem )
      IoFreeWorkItem(WorkItem);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return AdapterCryptoEngineExtension;
}
