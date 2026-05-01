/*
 * XREFs of ?DisableTouchGestures@TouchGestureSettings@@AEAAXXZ @ 0x180067A3C
 * Callers:
 *     wistd::__function::__func__lambda_9780493e976c2d083521351cc76993ec__void___cdecl(unsigned_long_const_&)_::operator() @ 0x1800679F0 (wistd--__function--__func__lambda_9780493e976c2d083521351cc76993ec__void___cdecl(unsigned_long_c.c)
 *     ?SetEnabledTouchGestures@TouchGestureSettings@@UEAAIW4TouchGestureType@@@Z @ 0x18006CDD0 (-SetEnabledTouchGestures@TouchGestureSettings@@UEAAIW4TouchGestureType@@@Z.c)
 * Callees:
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x180067A6C (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 */

void __fastcall TouchGestureSettings::DisableTouchGestures(TouchGestureSettings *this)
{
  int v1; // eax
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_DWORD *)this + 28) + 1;
  *((_DWORD *)this + 28) = v1;
  if ( *((_QWORD *)this + 12) && v1 == 1 )
  {
    try
    {
      std::_Func_class<void,>::operator()();
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0xAF,
        (unsigned int)"pcshell\\twinui\\touchgestures\\lib\\touchgesturesettings.cpp",
        v2);
    }
  }
}
