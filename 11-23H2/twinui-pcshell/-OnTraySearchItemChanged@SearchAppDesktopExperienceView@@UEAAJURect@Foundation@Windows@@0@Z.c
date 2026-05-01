/*
 * XREFs of ?OnTraySearchItemChanged@SearchAppDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z @ 0x1801C1000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SearchAppDesktopExperienceView::OnTraySearchItemChanged(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)(a1 + 164) = *a2;
  return result;
}
