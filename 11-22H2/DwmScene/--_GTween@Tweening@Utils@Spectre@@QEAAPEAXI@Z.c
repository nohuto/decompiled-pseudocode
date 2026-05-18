/*
 * XREFs of ??_GTween@Tweening@Utils@Spectre@@QEAAPEAXI@Z @ 0x18009201C
 * Callers:
 *     ??1?$_Temporary_owner@VTween@Tweening@Utils@Spectre@@@std@@QEAA@XZ @ 0x180091E48 (--1-$_Temporary_owner@VTween@Tweening@Utils@Spectre@@@std@@QEAA@XZ.c)
 *     ?_Destroy@?$_Ref_count@VTween@Tweening@Utils@Spectre@@@std@@EEAAXXZ @ 0x180093920 (-_Destroy@-$_Ref_count@VTween@Tweening@Utils@Spectre@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1Tween@Tweening@Utils@Spectre@@QEAA@XZ @ 0x180091EF0 (--1Tween@Tweening@Utils@Spectre@@QEAA@XZ.c)
 */

Spectre::Utils::Tweening::Tween *__fastcall Spectre::Utils::Tweening::Tween::`scalar deleting destructor'(
        Spectre::Utils::Tweening::Tween *this,
        __int64 a2)
{
  Spectre::Utils::Tweening::Tween::~Tween(this, a2);
  operator delete(this);
  return this;
}
