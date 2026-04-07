/*
 * XREFs of ?Release@CCubicBezierChopper@CThemeAnimationScheduleHelper@@UEAAKXZ @ 0x1800AB8E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAA@XZ @ 0x1800AACCC (--1CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAA@XZ.c)
 */

__int64 __fastcall CThemeAnimationScheduleHelper::CCubicBezierChopper::Release(
        CThemeAnimationScheduleHelper::CCubicBezierChopper *this)
{
  __int64 result; // rax

  result = (unsigned int)(*((_DWORD *)this + 2) - 1);
  *((_DWORD *)this + 2) = result;
  if ( !(_DWORD)result )
  {
    CThemeAnimationScheduleHelper::CCubicBezierChopper::~CCubicBezierChopper(this);
    (*(void (__fastcall **)(WPF::HeapBase *, CThemeAnimationScheduleHelper::CCubicBezierChopper *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                  + 32LL))(
      WPF::g_pProcessHeap,
      this);
    return 0LL;
  }
  return result;
}
