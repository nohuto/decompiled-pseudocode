/*
 * XREFs of MiFreeNextAffinityWalker @ 0x1405B7F2C
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x1406C10A0 (SepAccessCheckAndAuditAlarm.c)
 *     MiZeroHugeRangeCore @ 0x140A2E1AC (MiZeroHugeRangeCore.c)
 *     MiFreeImageLoadConfig @ 0x140A4A594 (MiFreeImageLoadConfig.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeNextAffinityWalker(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
