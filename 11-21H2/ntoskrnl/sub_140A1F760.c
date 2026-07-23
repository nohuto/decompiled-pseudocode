/*
 * XREFs of sub_140A1F760 @ 0x140A1F760
 * Callers:
 *     sub_140A1E590 @ 0x140A1E590 (sub_140A1E590.c)
 *     sub_140A1F9F4 @ 0x140A1F9F4 (sub_140A1F9F4.c)
 * Callees:
 *     ZwDeleteBootEntry @ 0x14041D220 (ZwDeleteBootEntry.c)
 *     sub_1408138F0 @ 0x1408138F0 (sub_1408138F0.c)
 *     sub_140813B50 @ 0x140813B50 (sub_140813B50.c)
 *     sub_140813BA8 @ 0x140813BA8 (sub_140813BA8.c)
 */

__int64 __fastcall sub_140A1F760(ULONG Id)
{
  int v2; // ebx
  NTSTATUS v3; // eax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  sub_1408138F0(2LL, L"Deleting boot entry 0x%x", Id);
  v2 = sub_140813BA8(0x16u, (__int64)&v5);
  if ( v2 >= 0 )
  {
    v3 = ZwDeleteBootEntry(Id);
    v2 = v3;
    if ( v3 < 0 )
      sub_1408138F0(4LL, L"Failed to delete boot entry 0x%x. Status: %x", Id, (unsigned int)v3);
    sub_140813B50((unsigned int *)&v5);
  }
  return (unsigned int)v2;
}
