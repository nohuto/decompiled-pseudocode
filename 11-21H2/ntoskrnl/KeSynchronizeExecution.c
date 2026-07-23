/*
 * XREFs of KeSynchronizeExecution @ 0x140420B90
 * Callers:
 *     sub_140615A70 @ 0x140615A70 (sub_140615A70.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405765B0 @ 0x1405765B0 (sub_1405765B0.c)
 */

BOOLEAN __stdcall KeSynchronizeExecution(
        PKINTERRUPT Interrupt,
        PKSYNCHRONIZE_ROUTINE SynchronizeRoutine,
        PVOID SynchronizeContext)
{
  KSPIN_LOCK *v3; // rsi
  unsigned __int64 v4; // rcx
  unsigned int CurrentIrql; // eax
  BOOLEAN v6; // al
  KSPIN_LOCK *v7; // rcx
  BOOLEAN v8; // si
  unsigned int v10; // [rsp+20h] [rbp-18h]

  v3 = (KSPIN_LOCK *)*((_QWORD *)Interrupt + 9);
  v4 = *((unsigned __int8 *)Interrupt + 93);
  if ( !(_BYTE)v4 )
    return sub_1405765B0(Interrupt, SynchronizeRoutine, SynchronizeContext);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(v4);
  v10 = CurrentIrql;
  KeAcquireSpinLockAtDpcLevel(v3);
  v6 = sub_14042A5E0(SynchronizeContext, SynchronizeRoutine);
  v7 = v3;
  v8 = v6;
  KeReleaseSpinLockFromDpcLevel(v7);
  __writecr8(v10);
  return v8;
}
