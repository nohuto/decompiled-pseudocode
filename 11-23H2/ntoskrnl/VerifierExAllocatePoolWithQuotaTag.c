/*
 * XREFs of VerifierExAllocatePoolWithQuotaTag @ 0x140AD0DC0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1402080C0 (ExAllocatePoolWithQuotaTag.c)
 *     RtlRaiseStatus @ 0x140321A40 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     VfCheckPoolType @ 0x140AC3910 (VfCheckPoolType.c)
 */

PVOID __fastcall VerifierExAllocatePoolWithQuotaTag(int PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  POOL_TYPE v3; // ebx
  __int32 v5; // edi
  PVOID result; // rax
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v3 = PoolType & 0xFFFFFFF7;
  v5 = PoolType & 8;
  if ( (PoolType & 8) == 0 )
    v3 = PoolType;
  if ( (MmVerifierData & 0x2000000) != 0 )
    VfCheckPoolType(PoolType, retaddr, 0);
  if ( VfExAllocPoolInternal == pXdvExAllocatePoolWithQuotaTag || !pXdvExAllocatePoolWithQuotaTag )
    result = ExAllocatePoolWithQuotaTag(v3, NumberOfBytes, Tag);
  else
    result = (PVOID)pXdvExAllocatePoolWithQuotaTag(
                      v3 | 0x80u,
                      0LL,
                      NumberOfBytes,
                      Tag,
                      32,
                      0LL,
                      0,
                      retaddr,
                      (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))VfHandlePoolAlloc);
  if ( !result && !v5 )
    RtlRaiseStatus(-1073741670);
  return result;
}
