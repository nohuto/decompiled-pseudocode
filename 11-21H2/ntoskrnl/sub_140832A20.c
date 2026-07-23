/*
 * XREFs of sub_140832A20 @ 0x140832A20
 * Callers:
 *     KeRegisterBoundCallback @ 0x14056A800 (KeRegisterBoundCallback.c)
 *     DbgkLkmdRegisterCallback @ 0x1408324C0 (DbgkLkmdRegisterCallback.c)
 *     PsEstablishWin32Callouts @ 0x140832590 (PsEstablishWin32Callouts.c)
 *     PsSetLoadImageNotifyRoutineEx @ 0x140832640 (PsSetLoadImageNotifyRoutineEx.c)
 *     sub_140832884 @ 0x140832884 (sub_140832884.c)
 *     sub_140832928 @ 0x140832928 (sub_140832928.c)
 * Callees:
 *     ExInitializeRundownProtection @ 0x1402A0840 (ExInitializeRundownProtection.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

struct _EX_RUNDOWN_REF *__fastcall sub_140832A20(ULONG_PTR a1, ULONG_PTR a2)
{
  struct _EX_RUNDOWN_REF *PoolWithTag; // rax
  struct _EX_RUNDOWN_REF *v5; // rbx

  PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x62726243u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[1].Count = a1;
    PoolWithTag[2].Count = a2;
    ExInitializeRundownProtection(PoolWithTag);
  }
  return v5;
}
