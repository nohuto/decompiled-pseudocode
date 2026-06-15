/*
 * XREFs of ?GetParentPidList@CProcess@@UEAAPEBKPEAK@Z @ 0x180027070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const unsigned int *__fastcall CProcess::GetParentPidList(CProcess *this, unsigned int *a2)
{
  *a2 = (__int64)(*((_QWORD *)this + 17) - *((_QWORD *)this + 16)) >> 2;
  return (const unsigned int *)*((_QWORD *)this + 16);
}
