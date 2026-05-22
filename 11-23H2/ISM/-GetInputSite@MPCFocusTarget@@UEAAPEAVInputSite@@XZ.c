/*
 * XREFs of ?GetInputSite@MPCFocusTarget@@UEAAPEAVInputSite@@XZ @ 0x18002C080
 * Callers:
 *     ?GetInputSite@MPCFocusTarget@@WFA@EAAPEAVInputSite@@XZ @ 0x180066F50 (-GetInputSite@MPCFocusTarget@@WFA@EAAPEAVInputSite@@XZ.c)
 * Callees:
 *     <none>
 */

struct InputSite *__fastcall MPCFocusTarget::GetInputSite(MPCFocusTarget *this)
{
  return (struct InputSite *)*((_QWORD *)this + 3);
}
