/*
 * XREFs of sub_140A20A2C @ 0x140A20A2C
 * Callers:
 *     sub_140A1E268 @ 0x140A1E268 (sub_140A1E268.c)
 *     sub_140A1FB1C @ 0x140A1FB1C (sub_140A1FB1C.c)
 *     sub_140A20978 @ 0x140A20978 (sub_140A20978.c)
 * Callees:
 *     ZwSetBootEntryOrder @ 0x14041E980 (ZwSetBootEntryOrder.c)
 *     sub_1408138F0 @ 0x1408138F0 (sub_1408138F0.c)
 *     sub_140813B50 @ 0x140813B50 (sub_140813B50.c)
 *     sub_140813BA8 @ 0x140813BA8 (sub_140813BA8.c)
 */

__int64 __fastcall sub_140A20A2C(PULONG Ids, ULONG Count)
{
  int v4; // ebx
  NTSTATUS v5; // eax
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  v4 = sub_140813BA8(0x16u, (__int64)&v7);
  if ( v4 >= 0 )
  {
    v5 = ZwSetBootEntryOrder(Ids, Count);
    v4 = v5;
    if ( v5 < 0 )
      sub_1408138F0(4LL, L"Failed to set boot entry order. Status: %x", (unsigned int)v5);
    sub_140813B50((unsigned int *)&v7);
  }
  return (unsigned int)v4;
}
