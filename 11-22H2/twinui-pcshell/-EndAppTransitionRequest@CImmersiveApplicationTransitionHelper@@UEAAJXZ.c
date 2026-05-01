/*
 * XREFs of ?EndAppTransitionRequest@CImmersiveApplicationTransitionHelper@@UEAAJXZ @ 0x1801974B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApplicationTransitionHelper::EndAppTransitionRequest(
        CImmersiveApplicationTransitionHelper *this)
{
  __int64 v2; // rcx

  v2 = *((unsigned int *)this + 8);
  if ( (_DWORD)v2 )
  {
    DwmpEndTransitionRequest(v2);
    *((_DWORD *)this + 8) = 0;
  }
  return 0LL;
}
