/*
 * XREFs of ?GetRectInternal@CAppLayoutItem@@UEAAXW4APP_LAYOUT_RECT_TYPE@@PEAUtagRECT@@@Z @ 0x180797AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall CAppLayoutItem::GetRectInternal(__int64 a1, int a2, struct tagRECT *a3)
{
  const RECT *v3; // rdx
  BOOL result; // eax

  if ( a2 )
  {
    if ( a2 != 1 )
      return result;
    v3 = (const RECT *)(a1 + 72);
  }
  else
  {
    v3 = (const RECT *)(a1 + 56);
  }
  return CopyRect(a3, v3);
}
