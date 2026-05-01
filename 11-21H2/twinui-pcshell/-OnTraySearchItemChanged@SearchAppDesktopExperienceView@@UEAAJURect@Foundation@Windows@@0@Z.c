/*
 * XREFs of ?OnTraySearchItemChanged@SearchAppDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z @ 0x180183110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SearchAppDesktopExperienceView::OnTraySearchItemChanged(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)(a1 + 172) = *a2;
  return result;
}
