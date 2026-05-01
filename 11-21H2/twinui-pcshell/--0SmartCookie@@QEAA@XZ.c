/*
 * XREFs of ??0SmartCookie@@QEAA@XZ @ 0x1802DB274
 * Callers:
 *     ??0CActionCenterExperienceManager@@QEAA@XZ @ 0x1800FF8FC (--0CActionCenterExperienceManager@@QEAA@XZ.c)
 *     ??0CControlCenterExperienceManager@@QEAA@XZ @ 0x180100A9C (--0CControlCenterExperienceManager@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

SmartCookie *__fastcall SmartCookie::SmartCookie(SmartCookie *this)
{
  SmartCookie *result; // rax

  *((_QWORD *)this + 14) = 0LL;
  result = this;
  *((_DWORD *)this + 30) = 0;
  return result;
}
