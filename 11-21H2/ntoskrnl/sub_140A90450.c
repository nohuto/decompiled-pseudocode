/*
 * XREFs of sub_140A90450 @ 0x140A90450
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A82F58 @ 0x140A82F58 (sub_140A82F58.c)
 */

__int64 __fastcall sub_140A90450(int PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  POOL_TYPE v3; // ebx
  __int32 v5; // edi
  __int64 result; // rax
  ULONG_PTR retaddr; // [rsp+58h] [rbp+0h]

  v3 = PoolType & 0xFFFFFFF7;
  v5 = PoolType & 8;
  if ( (PoolType & 8) == 0 )
    v3 = PoolType;
  if ( (dword_140C29FC0 & 0x2000000) != 0 )
    sub_140A82F58(PoolType, retaddr, 0);
  if ( sub_140A8FEC0 == (__int64 (__fastcall *)(__int64, __int64))off_140D4E048[0] || !off_140D4E048[0] )
    result = (__int64)ExAllocatePoolWithQuotaTag(v3, NumberOfBytes, Tag);
  else
    result = sub_14042A5E0(v3 | 0x80u, 0LL);
  if ( !result && !v5 )
    RtlRaiseStatus(-1073741670);
  return result;
}
