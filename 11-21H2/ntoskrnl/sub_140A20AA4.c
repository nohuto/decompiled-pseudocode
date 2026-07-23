/*
 * XREFs of sub_140A20AA4 @ 0x140A20AA4
 * Callers:
 *     sub_140A1FB1C @ 0x140A1FB1C (sub_140A1FB1C.c)
 * Callees:
 *     ZwSetBootOptions @ 0x14041E9A0 (ZwSetBootOptions.c)
 *     sub_1408138F0 @ 0x1408138F0 (sub_1408138F0.c)
 *     sub_140813B50 @ 0x140813B50 (sub_140813B50.c)
 *     sub_140813BA8 @ 0x140813BA8 (sub_140813BA8.c)
 */

__int64 __fastcall sub_140A20AA4(PBOOT_OPTIONS BootOptions, ULONG FieldsToChange)
{
  int v4; // ebx
  NTSTATUS v5; // eax
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  v4 = sub_140813BA8(0x16u, (__int64)&v7);
  if ( v4 >= 0 )
  {
    v5 = ZwSetBootOptions(BootOptions, FieldsToChange);
    v4 = v5;
    if ( v5 < 0 )
      sub_1408138F0(4LL, L"Failed to set boot options. Status: %x", (unsigned int)v5);
    sub_140813B50((unsigned int *)&v7);
  }
  return (unsigned int)v4;
}
