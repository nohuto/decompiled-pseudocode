/*
 * XREFs of sub_140A1E0A0 @ 0x140A1E0A0
 * Callers:
 *     sub_140A1F234 @ 0x140A1F234 (sub_140A1F234.c)
 * Callees:
 *     ZwAddBootEntry @ 0x14041C4A0 (ZwAddBootEntry.c)
 *     sub_1408138F0 @ 0x1408138F0 (sub_1408138F0.c)
 *     sub_140813B50 @ 0x140813B50 (sub_140813B50.c)
 *     sub_140813BA8 @ 0x140813BA8 (sub_140813BA8.c)
 */

__int64 __fastcall sub_140A1E0A0(PBOOT_ENTRY BootEntry, PULONG Id)
{
  int v4; // ebx
  NTSTATUS v5; // eax
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  v4 = sub_140813BA8(0x16u, (__int64)&v7);
  if ( v4 >= 0 )
  {
    v5 = ZwAddBootEntry(BootEntry, Id);
    v4 = v5;
    if ( v5 < 0 )
      sub_1408138F0(4LL, L"Failed to add boot entry. Status: %x", (unsigned int)v5);
    sub_140813B50((unsigned int *)&v7);
  }
  return (unsigned int)v4;
}
