/*
 * XREFs of ?EnableTouchGestures@TouchGestureSettings@@AEAAXXZ @ 0x18003AC88
 * Callers:
 *     ?ResetEnabledTouchGestures@TouchGestureSettings@@UEAAXI@Z @ 0x180039340 (-ResetEnabledTouchGestures@TouchGestureSettings@@UEAAXI@Z.c)
 *     wistd::__function::__func__lambda_9780493e976c2d083521351cc76993ec__void___cdecl(unsigned_long_const_&)_::operator() @ 0x18003AC70 (wistd--__function--__func__lambda_9780493e976c2d083521351cc76993ec__void___cdecl(unsigned_long_c.c)
 * Callees:
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x18003ACEC (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 */

void __fastcall TouchGestureSettings::EnableTouchGestures(TouchGestureSettings *this)
{
  int v1; // eax
  int v2; // eax
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_DWORD *)this + 28);
  if ( v1 )
  {
    v2 = v1 - 1;
    *((_DWORD *)this + 28) = v2;
    if ( *((_QWORD *)this + 12) )
    {
      if ( !v2 )
      {
        try
        {
          std::_Func_class<void,>::operator()();
        }
        catch ( ... )
        {
          wil::details::in1diag3::Log_CaughtException(
            retaddr,
            (void *)0xA2,
            (unsigned int)"pcshell\\twinui\\touchgestures\\lib\\touchgesturesettings.cpp",
            v3);
        }
      }
    }
  }
}
