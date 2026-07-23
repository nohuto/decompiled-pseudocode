/*
 * XREFs of sub_140366814 @ 0x140366814
 * Callers:
 *     sub_140243EC4 @ 0x140243EC4 (sub_140243EC4.c)
 *     sub_1402535D8 @ 0x1402535D8 (sub_1402535D8.c)
 *     sub_14025AFF0 @ 0x14025AFF0 (sub_14025AFF0.c)
 *     CcUninitializeCacheMap @ 0x1402761B0 (CcUninitializeCacheMap.c)
 *     sub_14028B330 @ 0x14028B330 (sub_14028B330.c)
 *     sub_14028F324 @ 0x14028F324 (sub_14028F324.c)
 *     sub_1402BD970 @ 0x1402BD970 (sub_1402BD970.c)
 *     sub_140329730 @ 0x140329730 (sub_140329730.c)
 *     CcCopyReadEx @ 0x14032A8C0 (CcCopyReadEx.c)
 *     sub_14035E3C4 @ 0x14035E3C4 (sub_14035E3C4.c)
 *     sub_140360E3C @ 0x140360E3C (sub_140360E3C.c)
 *     sub_140363850 @ 0x140363850 (sub_140363850.c)
 *     sub_1403639F0 @ 0x1403639F0 (sub_1403639F0.c)
 *     IoRecordIoAttribution @ 0x140365D40 (IoRecordIoAttribution.c)
 *     sub_140366814 @ 0x140366814 (sub_140366814.c)
 *     sub_1406D4CBC @ 0x1406D4CBC (sub_1406D4CBC.c)
 *     sub_1406D4DF0 @ 0x1406D4DF0 (sub_1406D4DF0.c)
 *     sub_1406D4EFC @ 0x1406D4EFC (sub_1406D4EFC.c)
 *     sub_1406F4904 @ 0x1406F4904 (sub_1406F4904.c)
 * Callees:
 *     sub_140366814 @ 0x140366814 (sub_140366814.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140366814(__int64 a1)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax
  __int64 v5; // rcx

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 32), 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    v5 = *(_QWORD *)(a1 + 176);
    if ( v5 )
      sub_140366814(v5);
    ExFreePoolWithTag((PVOID)a1, 0);
  }
}
