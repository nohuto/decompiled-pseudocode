/*
 * XREFs of sub_1408072C0 @ 0x1408072C0
 * Callers:
 *     sub_140802068 @ 0x140802068 (sub_140802068.c)
 *     sub_140811F10 @ 0x140811F10 (sub_140811F10.c)
 * Callees:
 *     sub_1403A7864 @ 0x1403A7864 (sub_1403A7864.c)
 *     sub_1403A78AC @ 0x1403A78AC (sub_1403A78AC.c)
 *     sub_140807354 @ 0x140807354 (sub_140807354.c)
 *     sub_1408074F4 @ 0x1408074F4 (sub_1408074F4.c)
 *     sub_1408127B8 @ 0x1408127B8 (sub_1408127B8.c)
 *     sub_1408134D8 @ 0x1408134D8 (sub_1408134D8.c)
 *     sub_14081369C @ 0x14081369C (sub_14081369C.c)
 *     sub_1408138F0 @ 0x1408138F0 (sub_1408138F0.c)
 */

__int64 __fastcall sub_1408072C0(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // si
  int v4; // eax
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v11; // r8d

  LOBYTE(v2) = sub_1403A7864(a1);
  v3 = v2;
  v4 = sub_14081369C(v2);
  if ( v4 < 0 )
  {
    sub_1408138F0(4LL, L"BcdForciblyUnloadStore: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v4);
    return v11;
  }
  else
  {
    v6 = 0;
    if ( (unsigned __int8)sub_1408127B8(a1, v5, (unsigned int)v4) && sub_1403A78AC(a1) )
    {
      sub_1408138F0(2LL, L"Exporting forcible unload to firmware");
      v6 = sub_1408074F4(a1);
    }
    LOBYTE(v7) = 1;
    v8 = sub_140807354(a1, v7);
    if ( v6 < 0 )
      sub_1408138F0(4LL, L"Failed to export unload alterations to firmware. Status: %x", (unsigned int)v6);
    else
      v6 = v8;
    LOBYTE(v9) = v3;
    sub_1408134D8(v9);
    return (unsigned int)v6;
  }
}
