/*
 * XREFs of sub_140A90530 @ 0x140A90530
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140240470 (ExAllocatePoolWithTagPriority.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A82F58 @ 0x140A82F58 (sub_140A82F58.c)
 */

__int64 __fastcall sub_140A90530(int PoolType, SIZE_T NumberOfBytes, ULONG Tag, EX_POOL_PRIORITY Priority)
{
  __int32 v5; // ebx
  __int64 result; // rax
  POOL_TYPE v10; // edi
  ULONG_PTR retaddr; // [rsp+68h] [rbp+0h]

  v5 = PoolType & 0x10;
  if ( (PoolType & 2) == 0
    && (qword_140D01450 & 0x40000) != 0
    && qword_140D57510
    && (unsigned __int8)sub_14042A5E0("ExAllocatePoolWithTagPriority", NumberOfBytes) )
  {
    if ( !v5 )
      return 0LL;
LABEL_18:
    RtlRaiseStatus(-1073741670);
  }
  v10 = PoolType & 0xFFFFFFEF;
  if ( !v5 )
    v10 = PoolType;
  if ( (dword_140C29FC0 & 0x2000000) != 0 )
    sub_140A82F58(PoolType, retaddr, 0);
  if ( (char *)sub_140A8FEC0 == (char *)off_140D4E010 || !off_140D4E010 )
    result = (__int64)ExAllocatePoolWithTagPriority(v10, NumberOfBytes, Tag, Priority);
  else
    result = sub_14042A5E0(v10 | 0x80u, 0LL);
  if ( !result && v5 )
    goto LABEL_18;
  return result;
}
