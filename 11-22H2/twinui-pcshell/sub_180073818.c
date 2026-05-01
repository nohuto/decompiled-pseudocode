/*
 * XREFs of sub_180073818 @ 0x180073818
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void __fastcall sub_180073818(CCharmsWindowManager *a1, HWND a2)
{
  char v2; // of

  if ( !v2 )
    JUMPOUT(0x180073862LL);
  LOBYTE(a1) = -106;
  CCharmsWindowManager::HandleActivation(a1, a2);
}
