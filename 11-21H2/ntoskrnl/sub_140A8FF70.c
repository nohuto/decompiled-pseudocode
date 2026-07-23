/*
 * XREFs of sub_140A8FF70 @ 0x140A8FF70
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool @ 0x14025D110 (ExAllocatePool.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A82F58 @ 0x140A82F58 (sub_140A82F58.c)
 */

__int64 __fastcall sub_140A8FF70(int PoolType, SIZE_T NumberOfBytes)
{
  __int32 v3; // ebx
  __int64 result; // rax
  POOL_TYPE v6; // edi
  ULONG_PTR retaddr; // [rsp+58h] [rbp+0h]

  v3 = PoolType & 0x10;
  if ( (PoolType & 2) == 0
    && (qword_140D01450 & 0x40000) != 0
    && qword_140D57510
    && (unsigned __int8)sub_14042A5E0("ExAllocatePool", NumberOfBytes) )
  {
    if ( !v3 )
      return 0LL;
LABEL_18:
    RtlRaiseStatus(-1073741670);
  }
  v6 = PoolType & 0xFFFFFFEF;
  if ( !v3 )
    v6 = PoolType;
  if ( (dword_140C29FC0 & 0x2000000) != 0 )
    sub_140A82F58(PoolType, retaddr, 0);
  if ( sub_140A8FEC0 == (__int64 (__fastcall *)(__int64, __int64))off_140D4E038[0] || !off_140D4E038[0] )
    result = (__int64)ExAllocatePool(v6, NumberOfBytes);
  else
    result = sub_14042A5E0(v6 | 0x80u, 0LL);
  if ( !result && v3 )
    goto LABEL_18;
  return result;
}
