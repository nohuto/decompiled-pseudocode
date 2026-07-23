/*
 * XREFs of EtwpAcquireGuidEntryExclusive @ 0x18005EE50
 * Callers:
 *     EtwpEventApiCallback @ 0x180030844 (EtwpEventApiCallback.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180031F78 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwDeliverDataBlock @ 0x18005E7E0 (EtwDeliverDataBlock.c)
 *     EtwpDereferenceUmGuidEntry @ 0x18005EE80 (EtwpDereferenceUmGuidEntry.c)
 *     EtwpRegisterGuidsApiCallback @ 0x180082458 (EtwpRegisterGuidsApiCallback.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 */

struct _TEB *__fastcall EtwpAcquireGuidEntryExclusive(__int64 a1)
{
  struct _TEB *result; // rax

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
  result = NtCurrentTeb();
  *(_DWORD *)(a1 + 48) = result->ClientId.UniqueThread;
  return result;
}
