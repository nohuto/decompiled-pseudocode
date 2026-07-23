/*
 * XREFs of sub_140A20758 @ 0x140A20758
 * Callers:
 *     sub_140A210D4 @ 0x140A210D4 (sub_140A210D4.c)
 * Callees:
 *     ZwModifyBootEntry @ 0x14041DAE0 (ZwModifyBootEntry.c)
 *     sub_1408138F0 @ 0x1408138F0 (sub_1408138F0.c)
 *     sub_140813B50 @ 0x140813B50 (sub_140813B50.c)
 *     sub_140813BA8 @ 0x140813BA8 (sub_140813BA8.c)
 */

__int64 __fastcall sub_140A20758(PBOOT_ENTRY BootEntry)
{
  int v2; // ebx
  NTSTATUS v3; // eax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  v2 = sub_140813BA8(0x16u, (__int64)&v5);
  if ( v2 >= 0 )
  {
    v3 = ZwModifyBootEntry(BootEntry);
    v2 = v3;
    if ( v3 < 0 )
      sub_1408138F0(4LL, L"Failed to modify boot entry 0x%x. Status: %x", BootEntry->Id, (unsigned int)v3);
    sub_140813B50((unsigned int *)&v5);
  }
  return (unsigned int)v2;
}
