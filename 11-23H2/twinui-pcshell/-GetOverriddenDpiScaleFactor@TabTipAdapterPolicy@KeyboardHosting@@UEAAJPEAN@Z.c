/*
 * XREFs of ?GetOverriddenDpiScaleFactor@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAN@Z @ 0x1801C2510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::GetOverriddenDpiScaleFactor(
        KeyboardHosting::TabTipAdapterPolicy *this,
        double *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(double *)(*((_QWORD *)this + 25) + 280LL);
  return result;
}
