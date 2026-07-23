/*
 * XREFs of RtlpHpLfhBucketUpdateAffinityMapping @ 0x180064FBC
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x18003E250 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhBucketAllocateSlot @ 0x180065158 (RtlpHpLfhBucketAllocateSlot.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     RtlGetCurrentProcessorNumber @ 0x1800A5D10 (RtlGetCurrentProcessorNumber.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

void __fastcall RtlpHpLfhBucketUpdateAffinityMapping(__int64 a1, __int64 a2)
{
  char CurrentProcessorNumber; // cl
  unsigned int v5; // eax
  __int64 v6; // rcx
  struct _TEB *v7; // rdx
  __int64 v8; // r15
  __int64 v9; // rbx
  unsigned __int8 *v10; // rcx
  unsigned __int8 *v11; // r10
  unsigned int v12; // edx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rbx
  unsigned int v16; // r8d
  _BYTE *v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // r8
  __int64 Slot; // rax
  signed __int32 v21[8]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+20h] [rbp-88h]
  _BYTE v23[64]; // [rsp+30h] [rbp-78h] BYREF

  CurrentProcessorNumber = RtlGetCurrentProcessorNumber();
  v5 = *(unsigned __int8 *)(a1 + 56);
  v6 = CurrentProcessorNumber & 0x3F;
  if ( (unsigned int)v6 >= v5 )
  {
    if ( (_DWORD)v6 == v5 || (_BYTE)v5 == 1 )
      v6 = 0LL;
    else
      v6 = *(unsigned __int8 *)((unsigned int)v6 - v5 - 1 + *(_QWORD *)(a1 + 48));
  }
  v7 = NtCurrentTeb();
  v8 = (unsigned int)v6;
  v9 = *(unsigned __int8 *)(v6 + *(_QWORD *)(a2 + 88));
  if ( BYTE1(v7->HeapData) != (_DWORD)v6 )
  {
    BYTE1(v7->HeapData) = v6;
    return;
  }
  memset_thunk_772440563353939046(v23, 0, 0x40uLL);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a2 + 80));
  v10 = *(unsigned __int8 **)(a2 + 88);
  v11 = &v10[v8];
  if ( (_BYTE)v9 != v10[v8] )
    goto LABEL_14;
  v12 = *(unsigned __int8 *)(a1 + 56);
  if ( (_BYTE)v12 )
  {
    v13 = *(unsigned __int8 *)(a1 + 56);
    do
    {
      v14 = *v10++;
      ++v23[v14];
      --v13;
    }
    while ( v13 );
  }
  if ( v23[v9] == 1 )
    goto LABEL_14;
  v15 = (unsigned int)(v9 + 1);
  v16 = v15;
  if ( (unsigned int)v15 < v12 )
  {
    v17 = &v23[(unsigned int)v15];
    do
    {
      if ( !*v17 )
        break;
      if ( *v17 < v23[v15] )
        v15 = v16;
      ++v16;
      ++v17;
    }
    while ( v16 < v12 );
  }
  if ( v23[v15] )
  {
    *v11 = v15;
    goto LABEL_14;
  }
  v18 = *(unsigned __int8 *)(a2 + 77);
  if ( v18 < RtlpHpLfhContentionLimit )
  {
    *(_BYTE *)(a2 + 77) = v18 + 1;
LABEL_14:
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 80));
    return;
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 80));
  v22 = 0LL;
  v19 = *(_QWORD *)(a2 + 96);
  LOWORD(v22) = 2;
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 8 * v15), 2LL, 0LL) )
  {
    Slot = RtlpHpLfhBucketAllocateSlot(a1, a2, (unsigned int)v15);
    *(_QWORD *)(*(_QWORD *)(a2 + 96) + 8 * v15) = Slot;
    if ( Slot )
    {
      _InterlockedOr(v21, 0);
      *(_BYTE *)(a2 + 2) = v15 + 1;
      *(_BYTE *)(v8 + *(_QWORD *)(a2 + 88)) = v15;
      *(_BYTE *)(a2 + 77) = 0;
    }
  }
}
