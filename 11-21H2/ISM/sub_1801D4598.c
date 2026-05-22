/*
 * XREFs of sub_1801D4598 @ 0x1801D4598
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall sub_1801D4598()
{
  char v0; // of

  if ( !v0 )
    JUMPOUT(0x1801D45AALL);
  return ((__int64 (*)(void))HotKeyProcessor::RegisterHotKeyClient)();
}
