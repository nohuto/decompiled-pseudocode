/*
 * XREFs of sub_140088458 @ 0x140088458
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140088458(CCrossProcessBaseClientEndpoint *_RCX, int a2)
{
  char v2; // cf
  char v3; // of

  if ( !v3 )
    JUMPOUT(0x14008842BLL);
  __asm { rcr     dword ptr [rax+rax*4+36h], cl }
  return CCrossProcessBaseClientEndpoint::GetCurrentPadding(_RCX, (unsigned int *)(a2 + (unsigned int)v2 + a2));
}
