/*
 * XREFs of sub_140237E94 @ 0x140237E94
 * Callers:
 *     sub_140237ABC @ 0x140237ABC (sub_140237ABC.c)
 *     sub_14038FC10 @ 0x14038FC10 (sub_14038FC10.c)
 *     sub_14039423C @ 0x14039423C (sub_14039423C.c)
 * Callees:
 *     sub_140237ED8 @ 0x140237ED8 (sub_140237ED8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140237E94(__int64 a1, __int64 a2, int a3)
{
  sub_140237ED8(a1, a2);
  if ( *(_DWORD *)(a2 + 24) != -1 && *(_QWORD *)a2 && !a3 )
    ExFreePoolWithTag(*(PVOID *)a2, 0);
}
