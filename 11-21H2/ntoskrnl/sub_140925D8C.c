/*
 * XREFs of sub_140925D8C @ 0x140925D8C
 * Callers:
 *     sub_140925BD8 @ 0x140925BD8 (sub_140925BD8.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwSetInformationKey @ 0x14041EBC0 (ZwSetInformationKey.c)
 *     sub_140925ED0 @ 0x140925ED0 (sub_140925ED0.c)
 */

__int64 __fastcall sub_140925D8C(__int64 a1, __int64 a2)
{
  NTSTATUS v3; // ebx
  HANDLE KeyHandle; // [rsp+38h] [rbp+10h] BYREF
  __int64 KeySetInformation; // [rsp+40h] [rbp+18h] BYREF

  KeyHandle = 0LL;
  v3 = sub_140925ED0(a1, a2 + 32, 2LL, &KeyHandle);
  if ( v3 >= 0 )
  {
    KeySetInformation = *(_QWORD *)(a2 + 48);
    v3 = ZwSetInformationKey(KeyHandle, KeyWriteTimeInformation, &KeySetInformation, 8u);
    ZwClose(KeyHandle);
  }
  return (unsigned int)v3;
}
