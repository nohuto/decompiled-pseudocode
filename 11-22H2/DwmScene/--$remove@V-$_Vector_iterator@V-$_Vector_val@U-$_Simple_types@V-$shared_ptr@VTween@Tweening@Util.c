/*
 * XREFs of ??$remove@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@@std@@@std@@@std@@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@2@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@@std@@@std@@@0@V10@V10@AEBV?$shared_ptr@VTween@Tweening@Utils@Spectre@@@0@@Z @ 0x1800E0714
 * Callers:
 *     ?Update@TweenManager@Tweening@Utils@Spectre@@QEAAXXZ @ 0x1800E07B0 (-Update@TweenManager@Tweening@Utils@Spectre@@QEAAXXZ.c)
 * Callees:
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$?8VTween@Tweening@Utils@Spectre@@V0123@@std@@YA_NAEBV?$shared_ptr@VTween@Tweening@Utils@Spectre@@@0@0@Z @ 0x180015678 (--$-8VTween@Tweening@Utils@Spectre@@V0123@@std@@YA_NAEBV-$shared_ptr@VTween@Tweening@Utils@Spect.c)
 */

__int64 **__fastcall std::remove<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::shared_ptr<Spectre::Utils::Tweening::Tween>>>>,std::shared_ptr<Spectre::Utils::Tweening::Tween>>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3,
        _QWORD *a4)
{
  __int64 *i; // rdi
  __int64 *j; // rsi
  __int64 **result; // rax

  for ( i = a2; i != a3; i += 2 )
  {
    if ( std::operator==<Spectre::Utils::Tweening::Tween,Spectre::Utils::Tweening::Tween>(i, a4) )
      break;
  }
  if ( i != a3 )
  {
    for ( j = i + 2; j != a3; j += 2 )
    {
      if ( !std::operator==<Spectre::Utils::Tweening::Tween,Spectre::Utils::Tweening::Tween>(j, a4) )
      {
        std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(i, j);
        i += 2;
      }
    }
  }
  result = a1;
  *a1 = i;
  return result;
}
