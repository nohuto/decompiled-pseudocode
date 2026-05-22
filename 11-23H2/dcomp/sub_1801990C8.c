/*
 * XREFs of sub_1801990C8 @ 0x1801990C8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall sub_1801990C8()
{
  char v0; // of

  if ( !v0 )
    JUMPOUT(0x180199113LL);
  __asm { icebp }
  return ((__int64 (*)(void))Windows::UI::Composition::InteropCursorVisual::Api::SetBorderMode)();
}
