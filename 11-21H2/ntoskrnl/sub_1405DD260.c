/*
 * XREFs of sub_1405DD260 @ 0x1405DD260
 * Callers:
 *     sub_140343B00 @ 0x140343B00 (sub_140343B00.c)
 * Callees:
 *     KeCheckProcessorAffinityEx @ 0x140345D30 (KeCheckProcessorAffinityEx.c)
 *     KeInterlockedClearProcessorAffinityEx @ 0x1403B49A0 (KeInterlockedClearProcessorAffinityEx.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x1403C1A20 (KeInterlockedSetProcessorAffinityEx.c)
 *     sub_14057C888 @ 0x14057C888 (sub_14057C888.c)
 *     sub_1405D9510 @ 0x1405D9510 (sub_1405D9510.c)
 */

char __fastcall sub_1405DD260(__int64 a1)
{
  int v2; // ebx
  char v3; // si
  int v4; // edx

  v2 = KeCheckProcessorAffinityEx((unsigned __int16 *)&dword_140C0D330, *(_DWORD *)(a1 + 36));
  v3 = v2 != 0;
  sub_14057C888(a1, (v2 != 0) + 1);
  v4 = *(_DWORD *)(a1 + 36);
  if ( v2 )
    KeInterlockedSetProcessorAffinityEx((__int64)asc_140C0D220, v4);
  else
    KeInterlockedClearProcessorAffinityEx((__int64)asc_140C0D220, v4);
  *(_BYTE *)(a1 + 33659) = v3;
  return sub_1405D9510(a1, v3);
}
