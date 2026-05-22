/*
 * XREFs of ?Remove@CompositionAnimationGroup@Composition@UI@Windows@@QEAAXPEAVCompositionAnimation@234@@Z @ 0x180151FD8
 * Callers:
 *     ?Remove@Api@CompositionAnimationGroup@Composition@UI@Windows@@UEAAJPEAUICompositionAnimation@345@@Z @ 0x180151F00 (-Remove@Api@CompositionAnimationGroup@Composition@UI@Windows@@UEAAJPEAUICompositionAnimation@345.c)
 * Callees:
 *     ??_GCompositionAnimationGroupEntry@Composition@UI@Windows@@QEAAPEAXI@Z @ 0x1801516B4 (--_GCompositionAnimationGroupEntry@Composition@UI@Windows@@QEAAPEAXI@Z.c)
 *     ?Unlink@?$ListT@UCompositionAnimationGroupEntry@Composition@UI@Windows@@@Composition@UI@Windows@@QEAAXPEAU?$ListNodeT@UCompositionAnimationGroupEntry@Composition@UI@Windows@@@234@@Z @ 0x180152914 (-Unlink@-$ListT@UCompositionAnimationGroupEntry@Composition@UI@Windows@@@Composition@UI@Windows@.c)
 */

void __fastcall Windows::UI::Composition::CompositionAnimationGroup::Remove(
        Windows::UI::Composition::CompositionAnimationGroup *this,
        struct Windows::UI::Composition::CompositionAnimation *a2)
{
  char *v2; // r14
  __int64 **v4; // rdx
  char v5; // si
  __int64 *v7; // rdi
  Microsoft::WRL2::NestableRuntimeClass **v8; // rdx

  v2 = (char *)this + 168;
  v4 = (__int64 **)*((_QWORD *)this + 21);
  v5 = 0;
  if ( v4 )
  {
    do
    {
      v7 = *v4;
      if ( v4[2] == (__int64 *)a2 )
      {
        v5 = 1;
        Windows::UI::Composition::ListT<Windows::UI::Composition::CompositionAnimationGroupEntry>::Unlink(v2);
        Windows::UI::Composition::CompositionAnimationGroupEntry::`scalar deleting destructor'(v8);
      }
      v4 = (__int64 **)v7;
    }
    while ( v7 );
    if ( v5 )
      ++*((_DWORD *)this + 46);
  }
}
