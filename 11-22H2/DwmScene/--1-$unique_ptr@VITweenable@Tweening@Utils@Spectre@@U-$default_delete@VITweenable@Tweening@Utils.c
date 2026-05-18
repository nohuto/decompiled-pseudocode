/*
 * XREFs of ??1?$unique_ptr@VITweenable@Tweening@Utils@Spectre@@U?$default_delete@VITweenable@Tweening@Utils@Spectre@@@std@@@std@@QEAA@XZ @ 0x180091ED0
 * Callers:
 *     ??1Tween@Tweening@Utils@Spectre@@QEAA@XZ @ 0x180091EF0 (--1Tween@Tweening@Utils@Spectre@@QEAA@XZ.c)
 *     _Spectre::Utils::Tweening::Tween::Tween_float__::_1_::dtor$3 @ 0x1800EA986 (_Spectre--Utils--Tweening--Tween--Tween_float__--_1_--dtor$3.c)
 * Callees:
 *     ??R?$default_delete@VITweenable@Tweening@Utils@Spectre@@@std@@QEBAXPEAVITweenable@Tweening@Utils@Spectre@@@Z @ 0x180091FA0 (--R-$default_delete@VITweenable@Tweening@Utils@Spectre@@@std@@QEBAXPEAVITweenable@Tweening@Utils.c)
 */

__int64 __fastcall std::unique_ptr<Spectre::Utils::Tweening::ITweenable>::~unique_ptr<Spectre::Utils::Tweening::ITweenable>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<Spectre::Utils::Tweening::ITweenable>::operator()();
  return result;
}
