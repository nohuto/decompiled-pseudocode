/*
 * XREFs of ?RemoveAll@CompositionAnimationGroup@Composition@UI@Windows@@QEAAXXZ @ 0x1801520C4
 * Callers:
 *     ?Destroy@CompositionAnimationGroup@Composition@UI@Windows@@UEAAXXZ @ 0x1801518F0 (-Destroy@CompositionAnimationGroup@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?RemoveAll@Api@CompositionAnimationGroup@Composition@UI@Windows@@UEAAJXZ @ 0x180152060 (-RemoveAll@Api@CompositionAnimationGroup@Composition@UI@Windows@@UEAAJXZ.c)
 * Callees:
 *     ??_GCompositionAnimationGroupEntry@Composition@UI@Windows@@QEAAPEAXI@Z @ 0x1801516B4 (--_GCompositionAnimationGroupEntry@Composition@UI@Windows@@QEAAPEAXI@Z.c)
 *     ?Unlink@?$ListT@UCompositionAnimationGroupEntry@Composition@UI@Windows@@@Composition@UI@Windows@@QEAAXPEAU?$ListNodeT@UCompositionAnimationGroupEntry@Composition@UI@Windows@@@234@@Z @ 0x180152914 (-Unlink@-$ListT@UCompositionAnimationGroupEntry@Composition@UI@Windows@@@Composition@UI@Windows@.c)
 */

void __fastcall Windows::UI::Composition::CompositionAnimationGroup::RemoveAll(
        Windows::UI::Composition::CompositionAnimationGroup *this)
{
  _QWORD *v1; // rdi
  Microsoft::WRL2::NestableRuntimeClass **v3; // rdx

  v1 = (_QWORD *)((char *)this + 168);
  if ( *((_QWORD *)this + 21) )
  {
    do
    {
      Windows::UI::Composition::ListT<Windows::UI::Composition::CompositionAnimationGroupEntry>::Unlink(v1);
      Windows::UI::Composition::CompositionAnimationGroupEntry::`scalar deleting destructor'(v3);
    }
    while ( *v1 );
    ++*((_DWORD *)this + 46);
  }
}
