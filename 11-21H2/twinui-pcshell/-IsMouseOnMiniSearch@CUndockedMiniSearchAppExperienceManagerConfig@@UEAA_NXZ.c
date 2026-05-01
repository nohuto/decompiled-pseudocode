/*
 * XREFs of ?IsMouseOnMiniSearch@CUndockedMiniSearchAppExperienceManagerConfig@@UEAA_NXZ @ 0x1803A1EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CUndockedMiniSearchAppExperienceManagerConfig::IsMouseOnMiniSearch(HWND *this)
{
  HWND v2; // rax
  bool result; // al
  struct tagPOINT Point; // [rsp+30h] [rbp+8h] BYREF

  GetCursorPos(&Point);
  v2 = WindowFromPoint(Point);
  result = GetAncestor(v2, 3u) == this[2];
  *((_BYTE *)this + 96) = result;
  return result;
}
