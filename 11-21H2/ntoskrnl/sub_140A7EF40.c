/*
 * XREFs of sub_140A7EF40 @ 0x140A7EF40
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     sub_140A82F58 @ 0x140A82F58 (sub_140A82F58.c)
 */

__int64 __fastcall sub_140A7EF40(unsigned int PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  __int32 v4; // ebx
  __int64 result; // rax
  POOL_TYPE v8; // edi
  void *retaddr; // [rsp+58h] [rbp+0h]

  v4 = PoolType & 0x10;
  if ( (PoolType & 2) == 0
    && (qword_140D01450 & 0x40000) != 0
    && qword_140D57510
    && (unsigned __int8)sub_14042A5E0("ExAllocatePoolWithTag", NumberOfBytes) )
  {
    if ( !v4 )
      return 0LL;
LABEL_18:
    RtlRaiseStatus(-1073741670);
  }
  v8 = PoolType & 0xFFFFFFEF;
  if ( !v4 )
    v8 = PoolType;
  if ( (dword_140C29FC0 & 0x2000000) != 0 )
    sub_140A82F58(PoolType, retaddr, 0LL);
  if ( sub_140A8FEC0 == off_140D4E040[0] || !off_140D4E040[0] )
    result = (__int64)ExAllocatePoolWithTag(v8, NumberOfBytes, Tag);
  else
    result = sub_14042A5E0(v8 | 0x80u, 0LL);
  if ( !result && v4 )
    goto LABEL_18;
  return result;
}
