/*
 * XREFs of ??1?$_Temporary_owner@VTween@Tweening@Utils@Spectre@@@std@@QEAA@XZ @ 0x180091E48
 * Callers:
 *     ??$?0VTween@Tweening@Utils@Spectre@@$0A@@?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@QEAA@PEAVTween@Tweening@Utils@Spectre@@@Z @ 0x1800914E4 (--$-0VTween@Tweening@Utils@Spectre@@$0A@@-$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@QEAA@.c)
 * Callees:
 *     ??_GTween@Tweening@Utils@Spectre@@QEAAPEAXI@Z @ 0x18009201C (--_GTween@Tweening@Utils@Spectre@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::_Temporary_owner<Spectre::Utils::Tweening::Tween>::~_Temporary_owner<Spectre::Utils::Tweening::Tween>(
        Spectre::Utils::Tweening::Tween **a1,
        unsigned int a2)
{
  Spectre::Utils::Tweening::Tween *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return Spectre::Utils::Tweening::Tween::`scalar deleting destructor'(v2, a2);
  return result;
}
