/*
 * XREFs of ?GetProcessHandle@CProcess@@UEAAPEAXXZ @ 0x1800177F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CProcess::GetProcessHandle(CProcess *this)
{
  return (void *)*((_QWORD *)this + 19);
}
