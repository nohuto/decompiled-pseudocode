/*
 * XREFs of sub_1800BA5C8 @ 0x1800BA5C8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800BA5C8(CDisplayDuplicateToExtendAnimatedVisual *_RCX)
{
  char v1; // of

  if ( !v1 )
    JUMPOUT(0x1800BA5D4LL);
  __asm { rcl     dword ptr [rsi+47h], cl }
  return CDisplayDuplicateToExtendAnimatedVisual::StartImpl(_RCX);
}
