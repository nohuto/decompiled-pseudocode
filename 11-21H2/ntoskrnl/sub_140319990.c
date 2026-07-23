/*
 * XREFs of sub_140319990 @ 0x140319990
 * Callers:
 *     sub_14028E238 @ 0x14028E238 (sub_14028E238.c)
 *     sub_14029F6FC @ 0x14029F6FC (sub_14029F6FC.c)
 *     sub_1402CE240 @ 0x1402CE240 (sub_1402CE240.c)
 *     sub_1402E5D90 @ 0x1402E5D90 (sub_1402E5D90.c)
 *     sub_14030B440 @ 0x14030B440 (sub_14030B440.c)
 *     sub_140318330 @ 0x140318330 (sub_140318330.c)
 *     sub_140319F70 @ 0x140319F70 (sub_140319F70.c)
 *     sub_14032C1B0 @ 0x14032C1B0 (sub_14032C1B0.c)
 *     sub_14033A030 @ 0x14033A030 (sub_14033A030.c)
 *     sub_140353230 @ 0x140353230 (sub_140353230.c)
 *     sub_1406A3E60 @ 0x1406A3E60 (sub_1406A3E60.c)
 *     sub_1407B92D0 @ 0x1407B92D0 (sub_1407B92D0.c)
 *     sub_1407BC8F0 @ 0x1407BC8F0 (sub_1407BC8F0.c)
 *     sub_1407BDB60 @ 0x1407BDB60 (sub_1407BDB60.c)
 *     sub_1409800F4 @ 0x1409800F4 (sub_1409800F4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140319990(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rax

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x200000) != 0 )
  {
    if ( (v1 & 0x70) == 0 && *(int *)(a1 + 52) >= 0 )
      return 1LL;
  }
  else if ( (*(_DWORD *)(a1 + 48) & 0xF80) == 0xC00 )
  {
    v3 = *(_QWORD *)(a1 + 72);
    if ( !*(_QWORD *)(*(_QWORD *)v3 + 64LL) && (*(_DWORD *)(*(_QWORD *)v3 + 56LL) & 0x1000) != 0 )
      return 1LL;
  }
  return 0LL;
}
