/*
 * XREFs of sub_140252344 @ 0x140252344
 * Callers:
 *     sub_140251DC0 @ 0x140251DC0 (sub_140251DC0.c)
 *     sub_140252258 @ 0x140252258 (sub_140252258.c)
 *     sub_140376F58 @ 0x140376F58 (sub_140376F58.c)
 *     sub_140389F90 @ 0x140389F90 (sub_140389F90.c)
 *     sub_1403916B0 @ 0x1403916B0 (sub_1403916B0.c)
 *     HalDisableInterrupt @ 0x140396C30 (HalDisableInterrupt.c)
 *     sub_140397D10 @ 0x140397D10 (sub_140397D10.c)
 *     sub_1403AEA08 @ 0x1403AEA08 (sub_1403AEA08.c)
 *     HalEnableInterrupt @ 0x1403B02C0 (HalEnableInterrupt.c)
 *     sub_1403B043C @ 0x1403B043C (sub_1403B043C.c)
 *     sub_1403B0670 @ 0x1403B0670 (sub_1403B0670.c)
 *     sub_1403B5BB0 @ 0x1403B5BB0 (sub_1403B5BB0.c)
 *     sub_1403B6180 @ 0x1403B6180 (sub_1403B6180.c)
 *     sub_1403B9214 @ 0x1403B9214 (sub_1403B9214.c)
 *     sub_140507CF0 @ 0x140507CF0 (sub_140507CF0.c)
 *     sub_140508364 @ 0x140508364 (sub_140508364.c)
 *     sub_1405091D0 @ 0x1405091D0 (sub_1405091D0.c)
 *     sub_140509344 @ 0x140509344 (sub_140509344.c)
 *     sub_14050A60C @ 0x14050A60C (sub_14050A60C.c)
 *     sub_14050B88C @ 0x14050B88C (sub_14050B88C.c)
 *     sub_14050D1D0 @ 0x14050D1D0 (sub_14050D1D0.c)
 *     sub_14050D380 @ 0x14050D380 (sub_14050D380.c)
 *     sub_14050D564 @ 0x14050D564 (sub_14050D564.c)
 *     sub_14050D650 @ 0x14050D650 (sub_14050D650.c)
 *     sub_14051CE3C @ 0x14051CE3C (sub_14051CE3C.c)
 *     sub_14051CFB0 @ 0x14051CFB0 (sub_14051CFB0.c)
 *     sub_14051D24C @ 0x14051D24C (sub_14051D24C.c)
 *     sub_14051D320 @ 0x14051D320 (sub_14051D320.c)
 *     sub_14051D4F4 @ 0x14051D4F4 (sub_14051D4F4.c)
 *     sub_14051D5E4 @ 0x14051D5E4 (sub_14051D5E4.c)
 *     sub_14051D870 @ 0x14051D870 (sub_14051D870.c)
 *     sub_14051FB70 @ 0x14051FB70 (sub_14051FB70.c)
 *     sub_140520330 @ 0x140520330 (sub_140520330.c)
 *     sub_140521670 @ 0x140521670 (sub_140521670.c)
 *     sub_14052AF40 @ 0x14052AF40 (sub_14052AF40.c)
 *     sub_14052B860 @ 0x14052B860 (sub_14052B860.c)
 *     sub_14052C660 @ 0x14052C660 (sub_14052C660.c)
 *     sub_14052C880 @ 0x14052C880 (sub_14052C880.c)
 *     sub_140530DE0 @ 0x140530DE0 (sub_140530DE0.c)
 *     sub_140532200 @ 0x140532200 (sub_140532200.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 */

unsigned __int8 __fastcall sub_140252344(PKSPIN_LOCK SpinLock)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v3; // r9

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v3 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v3 + 20) |= ~((unsigned __int16)(1LL << (CurrentIrql + 1)) - 1) & 0xFFFC;
  }
  KeAcquireSpinLockAtDpcLevel(SpinLock);
  return CurrentIrql;
}
