/*
 * XREFs of ?DereferenceStaticOneShot@SchedulerBase@details@Concurrency@@SAJXZ @ 0x180009D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 Concurrency::details::SchedulerBase::DereferenceStaticOneShot(void)
{
  return (unsigned int)_InterlockedDecrement(&dword_180032BB8);
}
