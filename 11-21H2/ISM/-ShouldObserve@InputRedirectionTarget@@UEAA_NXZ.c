/*
 * XREFs of ?ShouldObserve@InputRedirectionTarget@@UEAA_NXZ @ 0x180026DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall InputRedirectionTarget::ShouldObserve(InputRedirectionTarget *this)
{
  return *((_BYTE *)this + 52);
}
