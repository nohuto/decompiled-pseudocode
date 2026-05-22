/*
 * XREFs of ?SetRoot@CompositionIslandTarget@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z @ 0x18015A164
 * Callers:
 *     ?SetRoot@Partner@CompositionIslandTarget@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z @ 0x18015A230 (-SetRoot@Partner@CompositionIslandTarget@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z.c)
 *     ?put_Root@SystemOnly@CompositionIslandTarget@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z @ 0x18015A3A0 (-put_Root@SystemOnly@CompositionIslandTarget@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAllChildren@Visual@Composition@UI@Windows@@QEAAJXZ @ 0x18000F4C8 (-RemoveAllChildren@Visual@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?InsertChild@Visual@Composition@UI@Windows@@QEAAJPEAV1234@_N0@Z @ 0x180061E08 (-InsertChild@Visual@Composition@UI@Windows@@QEAAJPEAV1234@_N0@Z.c)
 *     ??4?$RefPtr@VVisual@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVVisual@Composition@UI@Windows@@@Z @ 0x1800632FC (--4-$RefPtr@VVisual@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVVisual@Composition@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionIslandTarget::SetRoot(
        Windows::UI::Composition::CompositionIslandTarget *this,
        struct Windows::UI::Composition::Visual *a2)
{
  Microsoft::WRL2::NestableRuntimeClass **v2; // rbp
  Windows::UI::Composition::Visual *v4; // rax
  Windows::UI::Composition::Visual *v5; // rsi
  int inserted; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (Microsoft::WRL2::NestableRuntimeClass **)((char *)this + 168);
  v4 = (Windows::UI::Composition::Visual *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 296LL))(*((_QWORD *)this + 20));
  v5 = v4;
  if ( *v2 )
  {
    inserted = Windows::UI::Composition::Visual::RemoveAllChildren(v4);
    if ( inserted < 0 )
    {
      v7 = 144LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionislandtarget.cpp",
        (const char *)(unsigned int)inserted);
      return (unsigned int)inserted;
    }
  }
  inserted = Windows::UI::Composition::Visual::InsertChild(v5, a2, 0, 0LL);
  if ( inserted < 0 )
  {
    v7 = 148LL;
    goto LABEL_4;
  }
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Visual>::operator=(v2, (volatile signed __int32 *)a2);
  return 0LL;
}
