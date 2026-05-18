/*
 * XREFs of ?_Destroy@?$_Ref_count@VTween@Tweening@Utils@Spectre@@@std@@EEAAXXZ @ 0x180093920
 * Callers:
 *     <none>
 * Callees:
 *     ??_GTween@Tweening@Utils@Spectre@@QEAAPEAXI@Z @ 0x18009201C (--_GTween@Tweening@Utils@Spectre@@QEAAPEAXI@Z.c)
 */

Spectre::Utils::Tweening::Tween *__fastcall std::_Ref_count<Spectre::Utils::Tweening::Tween>::_Destroy(
        __int64 a1,
        __int64 a2)
{
  Spectre::Utils::Tweening::Tween *v2; // rcx
  Spectre::Utils::Tweening::Tween *result; // rax

  v2 = *(Spectre::Utils::Tweening::Tween **)(a1 + 16);
  if ( v2 )
    return Spectre::Utils::Tweening::Tween::`scalar deleting destructor'(v2, a2);
  return result;
}
