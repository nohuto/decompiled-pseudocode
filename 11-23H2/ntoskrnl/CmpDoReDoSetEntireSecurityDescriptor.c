/*
 * XREFs of CmpDoReDoSetEntireSecurityDescriptor @ 0x140680B2C
 * Callers:
 *     CmpDoReDoRecord @ 0x140A2A8DC (CmpDoReDoRecord.c)
 * Callees:
 *     ZwClose @ 0x14041AF40 (ZwClose.c)
 *     ZwSetSecurityObject @ 0x14041E420 (ZwSetSecurityObject.c)
 *     CmpDoReOpenTransKey @ 0x140A2ABD4 (CmpDoReOpenTransKey.c)
 */

__int64 __fastcall CmpDoReDoSetEntireSecurityDescriptor(__int64 a1, __int64 a2)
{
  NTSTATUS v3; // ebx
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  Handle = 0LL;
  v3 = CmpDoReOpenTransKey(a1, a2 + 32, 17563648LL, &Handle);
  if ( v3 >= 0 )
  {
    v3 = ZwSetSecurityObject(Handle, 0x10180u, *(PSECURITY_DESCRIPTOR *)(a2 + 56));
    ZwClose(Handle);
  }
  return (unsigned int)v3;
}
