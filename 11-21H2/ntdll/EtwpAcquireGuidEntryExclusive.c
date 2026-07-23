/*
 * XREFs of EtwpAcquireGuidEntryExclusive @ 0x180007BA4
 * Callers:
 *     EtwDeliverDataBlock @ 0x180007500 (EtwDeliverDataBlock.c)
 *     EtwpDereferenceUmGuidEntry @ 0x180007B1C (EtwpDereferenceUmGuidEntry.c)
 *     EtwpEventApiCallback @ 0x180015800 (EtwpEventApiCallback.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180015ED4 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwpRegisterGuidsApiCallback @ 0x180088038 (EtwpRegisterGuidsApiCallback.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 */

struct _TEB *__fastcall EtwpAcquireGuidEntryExclusive(__int64 a1)
{
  struct _TEB *result; // rax

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
  result = NtCurrentTeb();
  *(_DWORD *)(a1 + 48) = result->ClientId.UniqueThread;
  return result;
}
