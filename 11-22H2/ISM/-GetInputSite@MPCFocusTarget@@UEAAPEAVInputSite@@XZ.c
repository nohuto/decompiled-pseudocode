/*
 * XREFs of ?GetInputSite@MPCFocusTarget@@UEAAPEAVInputSite@@XZ @ 0x18002D9C0
 * Callers:
 *     ?GetInputSite@MPCFocusTarget@@WFA@EAAPEAVInputSite@@XZ @ 0x18007AA90 (-GetInputSite@MPCFocusTarget@@WFA@EAAPEAVInputSite@@XZ.c)
 * Callees:
 *     <none>
 */

struct InputSite *__fastcall MPCFocusTarget::GetInputSite(MPCFocusTarget *this)
{
  return (struct InputSite *)*((_QWORD *)this + 3);
}
