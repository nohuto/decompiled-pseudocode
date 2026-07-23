/*
 * XREFs of MmInitializeHandBuiltProcess2 @ 0x14086104C
 * Callers:
 *     PspAllocateProcess @ 0x1406B45D8 (PspAllocateProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1403B1724 (MiGetWsAndMakePageTablesNx.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     MiInsertProcessVads @ 0x1406B3098 (MiInsertProcessVads.c)
 *     MiAllocateProcessVads @ 0x1407CFE00 (MiAllocateProcessVads.c)
 *     MiInitializeLockedPagesTracking @ 0x140A2B5F0 (MiInitializeLockedPagesTracking.c)
 */

__int64 __fastcall MmInitializeHandBuiltProcess2(_KPROCESS *BugCheckParameter1)
{
  int inserted; // ebx
  _QWORD *ProcessVads; // [rsp+20h] [rbp-48h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v5; // [rsp+28h] [rbp-40h] BYREF

  memset(&v5, 0, sizeof(v5));
  MiGetWsAndMakePageTablesNx();
  BugCheckParameter1[1].ActiveProcessors.StaticBitmap[28] = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28];
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)&v5);
  ProcessVads = MiAllocateProcessVads((__int64)BugCheckParameter1, 0LL);
  if ( ProcessVads )
    inserted = MiInsertProcessVads((__int64)BugCheckParameter1, &ProcessVads);
  else
    inserted = -1073741801;
  KiUnstackDetachProcess(&v5);
  if ( inserted >= 0 && (MmTrackLockedPages & 1) != 0 && (MmTrackLockedPages & 0x10000000) == 0 )
    MiInitializeLockedPagesTracking(BugCheckParameter1);
  return (unsigned int)inserted;
}
