/*
 * XREFs of WindowMargins::_anonymous_namespace_::GetDpiForWindowMargin @ 0x1C00B2CBC
 * Callers:
 *     WindowMargins::_anonymous_namespace_::GetWindowMargins @ 0x1C00B2AB0 (WindowMargins--_anonymous_namespace_--GetWindowMargins.c)
 *     WindowMargins::_anonymous_namespace_::CalculateWindowMargins @ 0x1C00B2B24 (WindowMargins--_anonymous_namespace_--CalculateWindowMargins.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowMargins::_anonymous_namespace_::GetDpiForWindowMargin(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 40);
  result = (*(_DWORD *)(v2 + 288) >> 8) & 0x1FF;
  if ( ((*(_DWORD *)(v2 + 288) >> 8) & 0x1FF) == 0 )
  {
    if ( (*(_BYTE *)(v2 + 233) & 4) != 0 )
    {
      result = a2;
      if ( !a2 )
        return *(unsigned __int16 *)(v2 + 284);
    }
    else
    {
      return *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 284LL);
    }
  }
  return result;
}
