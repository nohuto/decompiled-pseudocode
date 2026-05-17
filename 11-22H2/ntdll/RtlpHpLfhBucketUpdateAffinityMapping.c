/*
 * XREFs of RtlpHpLfhBucketUpdateAffinityMapping @ 0x1800650EC
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x18003E3B0 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhBucketAllocateSlot @ 0x180065288 (RtlpHpLfhBucketAllocateSlot.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     RtlGetCurrentProcessorNumber @ 0x1800A3C60 (RtlGetCurrentProcessorNumber.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpLfhBucketUpdateAffinityMapping(__int64 a1, __int64 a2)
{
  char CurrentProcessorNumber; // cl
  unsigned int v5; // eax
  __int64 v6; // rcx
  struct _TEB *v7; // rdx
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 result; // rax
  unsigned __int8 *v11; // rcx
  unsigned __int8 *v12; // r10
  unsigned int v13; // edx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rbx
  unsigned int v17; // r8d
  _BYTE *v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // r8
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
  result = BYTE1(v7->HeapData);
  if ( (_DWORD)result != (_DWORD)v6 )
  {
    BYTE1(v7->HeapData) = v6;
    return result;
  }
  memset_thunk_772440563353939046(v23, 0, 0x40uLL);
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
  v11 = *(unsigned __int8 **)(a2 + 88);
  v12 = &v11[v8];
  if ( (_BYTE)v9 != v11[v8] )
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
  v13 = *(unsigned __int8 *)(a1 + 56);
  if ( (_BYTE)v13 )
  {
    v14 = *(unsigned __int8 *)(a1 + 56);
    do
    {
      v15 = *v11++;
      ++v23[v15];
      --v14;
    }
    while ( v14 );
  }
  if ( v23[v9] == 1 )
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
  v16 = (unsigned int)(v9 + 1);
  v17 = v16;
  if ( (unsigned int)v16 < v13 )
  {
    v18 = &v23[(unsigned int)v16];
    do
    {
      if ( !*v18 )
        break;
      if ( *v18 < v23[v16] )
        v16 = v17;
      ++v17;
      ++v18;
    }
    while ( v17 < v13 );
  }
  if ( v23[v16] )
  {
    *v12 = v16;
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
  }
  v19 = *(unsigned __int8 *)(a2 + 77);
  if ( v19 < RtlpHpLfhContentionLimit )
  {
    *(_BYTE *)(a2 + 77) = v19 + 1;
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
  v22 = 0LL;
  v20 = *(_QWORD *)(a2 + 96);
  LOWORD(v22) = 2;
  result = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 8 * v16), 2LL, 0LL);
  if ( !result )
  {
    result = RtlpHpLfhBucketAllocateSlot(a1, a2, (unsigned int)v16);
    *(_QWORD *)(*(_QWORD *)(a2 + 96) + 8 * v16) = result;
    if ( result )
    {
      _InterlockedOr(v21, 0);
      *(_BYTE *)(a2 + 2) = v16 + 1;
      result = *(_QWORD *)(a2 + 88);
      *(_BYTE *)(v8 + result) = v16;
      *(_BYTE *)(a2 + 77) = 0;
    }
  }
  return result;
}
