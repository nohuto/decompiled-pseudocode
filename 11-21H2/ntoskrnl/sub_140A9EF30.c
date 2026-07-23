/*
 * XREFs of sub_140A9EF30 @ 0x140A9EF30
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

PVOID (__stdcall *__fastcall sub_140A9EF30(
        __int64 a1,
        __int64 a2))(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  PVOID (__stdcall *result)(POOL_TYPE, SIZE_T, ULONG); // rax
  void *v4; // rax

  sub_14042A5E0(a1, a2);
  result = (PVOID (__stdcall *)(POOL_TYPE, SIZE_T, ULONG))(unsigned int)qword_140D01450;
  if ( (qword_140D01450 & 1) != 0 )
  {
    result = (PVOID (__stdcall *)(POOL_TYPE, SIZE_T, ULONG))ExFreePoolWithTag;
    if ( *(void (__stdcall **)(PVOID, ULONG))(a1 + 56) == ExFreePoolWithTag )
    {
      result = *(PVOID (__stdcall **)(POOL_TYPE, SIZE_T, ULONG))(a1 + 48);
      if ( result == ExAllocatePoolWithTag )
      {
        v4 = sub_140A7EF40;
      }
      else
      {
        if ( result != ExAllocatePoolWithQuotaTag )
          return result;
        v4 = sub_140A90450;
      }
      *(_QWORD *)(a1 + 48) = v4;
      result = (PVOID (__stdcall *)(POOL_TYPE, SIZE_T, ULONG))sub_140A7F070;
      *(_QWORD *)(a1 + 56) = sub_140A7F070;
    }
  }
  return result;
}
