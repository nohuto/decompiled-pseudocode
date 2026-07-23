/*
 * XREFs of sub_140925DFC @ 0x140925DFC
 * Callers:
 *     sub_140925BD8 @ 0x140925BD8 (sub_140925BD8.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwSetSecurityObject @ 0x14041EDA0 (ZwSetSecurityObject.c)
 *     sub_140925ED0 @ 0x140925ED0 (sub_140925ED0.c)
 */

__int64 __fastcall sub_140925DFC(__int64 a1, __int64 a2)
{
  NTSTATUS v3; // ebx
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  Handle = 0LL;
  v3 = sub_140925ED0(a1, a2 + 32, 0x40000LL, &Handle);
  if ( v3 >= 0 )
  {
    v3 = ZwSetSecurityObject(Handle, 4u, *(PSECURITY_DESCRIPTOR *)(a2 + 56));
    ZwClose(Handle);
  }
  return (unsigned int)v3;
}
