/*
 * XREFs of sub_140456F16 @ 0x140456F16
 * Callers:
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x1403B58F0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     sub_140457ED8 @ 0x140457ED8 (sub_140457ED8.c)
 *     sub_1404584D6 @ 0x1404584D6 (sub_1404584D6.c)
 *     sub_1404585B4 @ 0x1404585B4 (sub_1404585B4.c)
 *     sub_140517830 @ 0x140517830 (sub_140517830.c)
 *     sub_140908B50 @ 0x140908B50 (sub_140908B50.c)
 * Callees:
 *     MmFreeContiguousMemory @ 0x140213DA0 (MmFreeContiguousMemory.c)
 *     sub_140221A30 @ 0x140221A30 (sub_140221A30.c)
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     sub_1403CDDB0 @ 0x1403CDDB0 (sub_1403CDDB0.c)
 *     sub_1403CE07C @ 0x1403CE07C (sub_1403CE07C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140456892 @ 0x140456892 (sub_140456892.c)
 *     sub_1404568E6 @ 0x1404568E6 (sub_1404568E6.c)
 *     sub_140457720 @ 0x140457720 (sub_140457720.c)
 *     sub_140457800 @ 0x140457800 (sub_140457800.c)
 *     sub_140505560 @ 0x140505560 (sub_140505560.c)
 *     sub_140512B00 @ 0x140512B00 (sub_140512B00.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140456F16(__int64 a1, unsigned int a2)
{
  __int64 v2; // r15
  unsigned int v3; // ebx
  __int64 v6; // rdi
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // eax
  PVOID v15; // rdi
  PMDL v16; // rbx
  unsigned int v17; // r14d
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r12
  _QWORD *v22; // r13
  void *v23; // rax
  __int64 v24; // rax
  __int64 *v25; // r14
  __int64 v26; // r14
  __int64 v27; // rbx
  __int64 v28; // r15
  _QWORD *v29; // rdi
  PVOID *v30; // rbx
  __int64 v31; // rcx
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v38; // r9
  int v39; // eax
  bool v40; // zf
  PVOID BaseAddress; // [rsp+30h] [rbp-30h] BYREF
  PMDL MemoryDescriptorList; // [rsp+38h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v44; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v45; // [rsp+B0h] [rbp+50h] BYREF
  unsigned __int64 v46; // [rsp+B8h] [rbp+58h] BYREF

  LODWORD(v2) = 0;
  v3 = 0;
  v44 = 0;
  v45 = 0;
  v6 = 0LL;
  BaseAddress = 0LL;
  v46 = 0LL;
  MemoryDescriptorList = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !*(_BYTE *)(a1 + 337) )
  {
    if ( *(_BYTE *)(a1 + 434) )
    {
      result = sub_1404568E6(a1, a1, a2, 0LL, 0, (__int64)&v44);
      v3 = v44;
      v6 = result;
      if ( v44 == a2 )
        return result;
    }
    else
    {
      result = sub_140456892(a1);
      v6 = result;
      if ( result )
        return result;
      v3 = v44;
    }
  }
  if ( *(_BYTE *)(a1 + 434) )
  {
    v9 = sub_1404568E6(a1, *(_QWORD *)(a1 + 152), a2 - v3, 0LL, 0, (__int64)&v45);
    if ( v9 )
    {
      v11 = sub_140457720(v9, v45, v6);
      v3 += v45;
      v6 = v11;
      v44 = v3;
    }
    if ( v3 == a2 )
      return v6;
    v12 = sub_140505560(v10, *(_QWORD *)(a1 + 152), a2 - v3, 0, 0, (__int64)&v45);
    if ( v12 )
    {
      v13 = sub_140457720(v12, v45, v6);
      v3 += v45;
      v6 = v13;
      v44 = v3;
    }
    if ( v3 == a2 )
      return v6;
  }
  else
  {
    result = sub_140456892(a1);
    v6 = result;
    if ( result )
      return result;
    v3 = v44;
  }
  if ( !*(_BYTE *)(a1 + 434) )
  {
    v14 = sub_140512B00(a1, a2, (unsigned int)&BaseAddress, (unsigned int)&v46, (__int64)&MemoryDescriptorList);
    v44 = v14;
    if ( v14 )
    {
      v15 = BaseAddress;
      if ( sub_1403CDDB0(*(_QWORD *)(a1 + 152), (__int64)BaseAddress, v46, v14) )
      {
        result = sub_140456892(a1);
        if ( result )
          return result;
      }
      else
      {
        v16 = MemoryDescriptorList;
        if ( MemoryDescriptorList )
        {
          if ( v15 )
            MmUnmapLockedPages(v15, MemoryDescriptorList);
          sub_140221A30((ULONG_PTR)v16, 0);
          ExFreePoolWithTag(v16, 0);
        }
        else
        {
          MmFreeContiguousMemory(v15);
        }
      }
    }
    return 0LL;
  }
  v17 = a2 - v3;
  v18 = v17;
  v19 = sub_1403B1F04(v8, 8LL * v17);
  v21 = v19;
  if ( !v19 )
  {
LABEL_38:
    if ( v3 )
    {
      v26 = v3;
      do
      {
        v27 = *(_QWORD *)(v6 + 8);
        sub_140457800(a1, *(_QWORD *)(a1 + 152), v6);
        v6 = v27;
        --v26;
      }
      while ( v26 );
    }
    return 0LL;
  }
  if ( v17 )
  {
    v22 = (_QWORD *)v19;
    while ( 1 )
    {
      v23 = (void *)sub_1403B1F04(v20, 4096LL);
      *v22 = v23;
      if ( !v23 || MmGetPhysicalAddress(v23).HighPart )
        goto LABEL_34;
      LODWORD(v2) = v2 + 1;
      ++v22;
      if ( (unsigned int)v2 >= v17 )
      {
        v18 = v17;
        break;
      }
    }
  }
  v24 = sub_1403CE07C(*(_QWORD *)(a1 + 152), 1, v17);
  if ( !v24 )
  {
LABEL_34:
    if ( (_DWORD)v2 )
    {
      v25 = (__int64 *)v21;
      v2 = (unsigned int)v2;
      do
      {
        sub_1403B1B5C(v20, *v25++);
        --v2;
      }
      while ( v2 );
    }
    sub_1403B1B5C(v20, v21);
    goto LABEL_38;
  }
  v28 = sub_140457720(v24, v17, v6);
  v29 = (_QWORD *)v28;
  if ( v17 )
  {
    v30 = (PVOID *)v21;
    do
    {
      *v29 = MmGetPhysicalAddress(*v30).LowPart;
      v31 = 1LL;
      v32 = (unsigned __int64)*v30;
      v33 = 2LL;
      do
      {
        v32 |= v31++;
        --v33;
      }
      while ( v33 );
      ++v30;
      v29[6] = v32 | 0xC;
      v29 = (_QWORD *)v29[1];
      --v18;
    }
    while ( v18 );
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 152) + 120LL), &LockHandle);
  *(_DWORD *)(*(_QWORD *)(a1 + 152) + 208LL) += v17;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v38 = *((_QWORD *)CurrentPrcb + 4375);
        v34 = (unsigned int)LockHandle.OldIrql + 1;
        v39 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v40 = (v39 & *(_DWORD *)(v38 + 20)) == 0;
        *(_DWORD *)(v38 + 20) &= v39;
        if ( v40 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  sub_1403B1B5C(v34, v21);
  return v28;
}
