/*
 * XREFs of ?GetVisualReferenceId@CompositionIsland@Composition@UI@Windows@@UEAAJPEA_K@Z @ 0x18008D060
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AllocateVisualId@CompositionIsland@Composition@UI@Windows@@QEAAJXZ @ 0x18008D0B4 (-AllocateVisualId@CompositionIsland@Composition@UI@Windows@@QEAAJXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionIsland::GetVisualReferenceId(
        Windows::UI::Composition::CompositionIsland *this,
        unsigned __int64 *a2)
{
  int VisualId; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)this + 21)
    || (VisualId = Windows::UI::Composition::CompositionIsland::AllocateVisualId(this), v5 = VisualId, VisualId >= 0) )
  {
    *a2 = *((_QWORD *)this + 21);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x150,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionisland.cpp",
      (const char *)(unsigned int)VisualId);
    return v5;
  }
}
