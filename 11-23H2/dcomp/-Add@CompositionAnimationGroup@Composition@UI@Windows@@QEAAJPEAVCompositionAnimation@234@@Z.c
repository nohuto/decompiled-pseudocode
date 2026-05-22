/*
 * XREFs of ?Add@CompositionAnimationGroup@Composition@UI@Windows@@QEAAJPEAVCompositionAnimation@234@@Z @ 0x180151838
 * Callers:
 *     ?Add@Api@CompositionAnimationGroup@Composition@UI@Windows@@UEAAJPEAUICompositionAnimation@345@@Z @ 0x180151750 (-Add@Api@CompositionAnimationGroup@Composition@UI@Windows@@UEAAJPEAUICompositionAnimation@345@@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??4?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVCompositionAnimation@Composition@UI@Windows@@@Z @ 0x1800B7560 (--4-$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVCompo.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionAnimationGroup::Add(
        Windows::UI::Composition::CompositionAnimationGroup *this,
        struct Windows::UI::Composition::CompositionAnimation *a2)
{
  LPVOID v4; // rax
  unsigned int v5; // esi
  _QWORD *v6; // rbx
  _QWORD *v7; // rax

  v4 = DefaultHeap::Alloc(0x18uLL);
  v5 = 0;
  v6 = v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = 0LL;
    *((_QWORD *)v4 + 1) = 0LL;
    *((_QWORD *)v4 + 2) = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>::operator=(
      (Microsoft::WRL2::NestableRuntimeClass **)v4 + 2,
      a2);
    v6[1] = *((_QWORD *)this + 22);
    *v6 = 0LL;
    v7 = (_QWORD *)*((_QWORD *)this + 22);
    if ( v7 )
      *v7 = v6;
    else
      *((_QWORD *)this + 21) = v6;
    *((_QWORD *)this + 22) = v6;
    ++*((_DWORD *)this + 46);
  }
  else
  {
    v5 = -2147024882;
    DoStackCaptureDirect(-2147024882, 0x4Cu);
  }
  return v5;
}
