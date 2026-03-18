/*
 * XREFs of ?GetDisplayId@CD2DBitmap@@$4PPPPPPPM@BAI@EBA?AVDisplayId@@XZ @ 0x180120420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CD2DBitmap::GetDisplayId(__int64 a1, _DWORD *a2)
{
  return CD2DBitmap::GetDisplayId(a1 - *(int *)(a1 - 4) - 264, a2);
}
