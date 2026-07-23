/*
 * XREFs of sub_140A90380 @ 0x140A90380
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExAllocatePoolWithQuota @ 0x14063A580 (ExAllocatePoolWithQuota.c)
 *     sub_140A82F58 @ 0x140A82F58 (sub_140A82F58.c)
 */

__int64 __fastcall sub_140A90380(int PoolType, SIZE_T NumberOfBytes)
{
  POOL_TYPE v2; // ebx
  __int32 v4; // edi
  __int64 result; // rax
  ULONG_PTR retaddr; // [rsp+58h] [rbp+0h]

  v2 = PoolType & 0xFFFFFFF7;
  v4 = PoolType & 8;
  if ( (PoolType & 8) == 0 )
    v2 = PoolType;
  if ( (dword_140C29FC0 & 0x2000000) != 0 )
    sub_140A82F58(PoolType, retaddr, 0);
  if ( (char *)sub_140A8FEC0 == (char *)off_140D4E010 || !off_140D4E010 )
    result = (__int64)ExAllocatePoolWithQuota(v2, NumberOfBytes);
  else
    result = sub_14042A5E0(v2 | 0x80u, 0LL);
  if ( !result && !v4 )
    RtlRaiseStatus(-1073741670);
  return result;
}
