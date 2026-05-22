/*
 * XREFs of ?SetRoot@CompositionTarget@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z @ 0x180196E18
 * Callers:
 *     ?SetRoot@Partner@CompositionTarget@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z @ 0x180196EE0 (-SetRoot@Partner@CompositionTarget@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z.c)
 *     ?put_Root@SystemOnly@CompositionTarget@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z @ 0x1801972B0 (-put_Root@SystemOnly@CompositionTarget@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InsertChild@Visual@Composition@UI@Windows@@QEAAJPEAV1234@_N0@Z @ 0x180061E08 (-InsertChild@Visual@Composition@UI@Windows@@QEAAJPEAV1234@_N0@Z.c)
 *     ??4?$RefPtr@VVisual@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVVisual@Composition@UI@Windows@@@Z @ 0x1800632FC (--4-$RefPtr@VVisual@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVVisual@Composition@.c)
 *     ?RemoveChild@Visual@Composition@UI@Windows@@QEAAJPEAV1234@@Z @ 0x18006A86C (-RemoveChild@Visual@Composition@UI@Windows@@QEAAJPEAV1234@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionTarget::SetRoot(
        Windows::UI::Composition::CompositionTarget *this,
        struct Windows::UI::Composition::Visual *a2)
{
  Microsoft::WRL2::NestableRuntimeClass **v2; // r14
  struct Windows::UI::Composition::Visual *v4; // rdx
  Windows::UI::Composition::Visual **v5; // rbx
  int v6; // eax
  unsigned int v7; // esi
  int inserted; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (Microsoft::WRL2::NestableRuntimeClass **)((char *)this + 192);
  v4 = (struct Windows::UI::Composition::Visual *)*((_QWORD *)this + 24);
  v5 = (Windows::UI::Composition::Visual **)((char *)this + 184);
  if ( v4 && (v6 = Windows::UI::Composition::Visual::RemoveChild(*v5, v4), v7 = v6, v6 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC4,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositiontarget.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  else if ( a2
         && (inserted = Windows::UI::Composition::Visual::InsertChild(*v5, a2, 0, 0LL), v10 = inserted, inserted < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC9,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositiontarget.cpp",
      (const char *)(unsigned int)inserted);
    return v10;
  }
  else
  {
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Visual>::operator=(v2, (volatile signed __int32 *)a2);
    return 0LL;
  }
}
