/*
 * XREFs of MiFreeNextAffinityWalker @ 0x1405B79BC
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x1406C1070 (SepAccessCheckAndAuditAlarm.c)
 *     MiZeroHugeRangeCore @ 0x140A2DEFC (MiZeroHugeRangeCore.c)
 *     MiFreeImageLoadConfig @ 0x140A4A2E4 (MiFreeImageLoadConfig.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeNextAffinityWalker(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
