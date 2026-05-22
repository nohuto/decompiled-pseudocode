/*
 * XREFs of ?EnsureVersionMatches@CompositionAnimationIterator@Composition@UI@Windows@@QEAAJXZ @ 0x1801954CC
 * Callers:
 *     ?MoveNext@Api@CompositionAnimationIterator@Composition@UI@Windows@@UEAAJPEAE@Z @ 0x180195520 (-MoveNext@Api@CompositionAnimationIterator@Composition@UI@Windows@@UEAAJPEAE@Z.c)
 *     ?get_Current@Api@CompositionAnimationIterator@Composition@UI@Windows@@UEAAJPEAPEAUICompositionAnimation@345@@Z @ 0x180195680 (-get_Current@Api@CompositionAnimationIterator@Composition@UI@Windows@@UEAAJPEAPEAUICompositionAn.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionAnimationIterator::EnsureVersionMatches(
        Windows::UI::Composition::CompositionAnimationIterator *this)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 18) == *(_DWORD *)(*((_QWORD *)this + 7) + 184LL) )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4F,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionanimationiterator.cpp",
    (const char *)0x8000000CLL);
  return 2147483660LL;
}
