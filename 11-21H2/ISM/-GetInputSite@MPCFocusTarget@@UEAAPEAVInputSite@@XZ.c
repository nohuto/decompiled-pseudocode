/*
 * XREFs of ?GetInputSite@MPCFocusTarget@@UEAAPEAVInputSite@@XZ @ 0x1800233E0
 * Callers:
 *     ?GetInputSite@MPCFocusTarget@@WEA@EAAPEAVInputSite@@XZ @ 0x18004FF40 (-GetInputSite@MPCFocusTarget@@WEA@EAAPEAVInputSite@@XZ.c)
 * Callees:
 *     <none>
 */

struct InputSite *__fastcall MPCFocusTarget::GetInputSite(MPCFocusTarget *this)
{
  return (struct InputSite *)*((_QWORD *)this + 3);
}
