/*
 * XREFs of ??0CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHDC__@@@Z @ 0x1802EC2A4
 * Callers:
 *     s_OnDrawItemHelper @ 0x18028640C (s_OnDrawItemHelper.c)
 *     s_DrawThemeTextPPIAware @ 0x18074C5CC (s_DrawThemeTextPPIAware.c)
 * Callees:
 *     <none>
 */

Microsoft::WRL::Wrappers::CompatibleDC *__fastcall Microsoft::WRL::Wrappers::CompatibleDC::CompatibleDC(
        Microsoft::WRL::Wrappers::CompatibleDC *this,
        HDC a2)
{
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &Microsoft::WRL::Wrappers::CompatibleDC::`vftable';
  *((_QWORD *)this + 1) = CreateCompatibleDC(a2);
  return this;
}
