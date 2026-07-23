/*
 * XREFs of sub_14071CD2C @ 0x14071CD2C
 * Callers:
 *     sub_14072B630 @ 0x14072B630 (sub_14072B630.c)
 * Callees:
 *     sub_1402A3610 @ 0x1402A3610 (sub_1402A3610.c)
 *     sub_1402A3984 @ 0x1402A3984 (sub_1402A3984.c)
 *     ExCleanupAutoExpandPushLock @ 0x1402A3D50 (ExCleanupAutoExpandPushLock.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14071CD2C(__int64 a1)
{
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  P = 0LL;
  sub_1402A3610(a1, &P, 0);
  if ( P )
  {
    sub_1402A3984(a1);
    ExCleanupAutoExpandPushLock((__int64)P);
    ExFreePoolWithTag(P, 0);
  }
}
