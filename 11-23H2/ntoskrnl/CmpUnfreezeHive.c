/*
 * XREFs of CmpUnfreezeHive @ 0x140A17058
 * Callers:
 *     CmpPerformUnloadKey @ 0x140699394 (CmpPerformUnloadKey.c)
 *     CmpIsHiveAlreadyLoaded @ 0x140A16B54 (CmpIsHiveAlreadyLoaded.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x14022D600 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140231594 (CmpInitializeDelayDerefContext.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x14073E698 (CmpDereferenceKeyControlBlockWithLock.c)
 */

void __fastcall CmpUnfreezeHive(__int64 a1)
{
  ULONG_PTR v2; // rcx
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0LL;
  CmpInitializeDelayDerefContext(&v3);
  v2 = *(_QWORD *)(a1 + 2936);
  *(_BYTE *)(a1 + 2944) = 0;
  if ( v2 )
  {
    CmpDereferenceKeyControlBlockWithLock(v2, (__int64)&v3, 0);
    *(_QWORD *)(a1 + 2936) = 0LL;
  }
  CmpDrainDelayDerefContext((_QWORD **)&v3);
}
