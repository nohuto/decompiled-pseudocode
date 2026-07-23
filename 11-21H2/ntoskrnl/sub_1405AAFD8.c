/*
 * XREFs of sub_1405AAFD8 @ 0x1405AAFD8
 * Callers:
 *     sub_140318330 @ 0x140318330 (sub_140318330.c)
 *     sub_1407BA750 @ 0x1407BA750 (sub_1407BA750.c)
 * Callees:
 *     sub_1402EE0E0 @ 0x1402EE0E0 (sub_1402EE0E0.c)
 *     sub_1405AAEC8 @ 0x1405AAEC8 (sub_1405AAEC8.c)
 */

__int64 __fastcall sub_1405AAFD8(__int64 a1)
{
  unsigned __int64 v2; // rax

  if ( (*(_DWORD *)(a1 + 48) & 0x6200000) == 0x4200000 )
    return *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1838LL));
  v2 = sub_1402EE0E0(a1, 256);
  return sub_1405AAEC8(*(_QWORD *)(v2 + 40));
}
