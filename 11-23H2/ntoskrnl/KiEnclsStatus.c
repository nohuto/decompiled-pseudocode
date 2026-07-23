/*
 * XREFs of KiEnclsStatus @ 0x140570C58
 * Callers:
 *     KeBlockEnclavePage @ 0x1405708D8 (KeBlockEnclavePage.c)
 *     KeCanChangeEnclavePageProtection @ 0x140570920 (KeCanChangeEnclavePageProtection.c)
 *     KeChangeEnclavePageProtection @ 0x1405709E0 (KeChangeEnclavePageProtection.c)
 *     KeOutPageEnclavePage @ 0x140570B1C (KeOutPageEnclavePage.c)
 *     KeRemoveEnclavePage @ 0x140570BE0 (KeRemoveEnclavePage.c)
 *     KeTrackEnclaveTbFlush @ 0x140570C1C (KeTrackEnclaveTbFlush.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiEnclsStatus(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  if ( !a1 )
    return 0LL;
  v1 = a1 - 7;
  if ( !v1 )
    return 3221225539LL;
  v2 = v1 - 5;
  if ( !v2 )
    return 304LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 3221225539LL;
  v4 = v3 - 1;
  if ( !v4 )
    return 3221225539LL;
  v5 = v4 - 3;
  if ( !v5 )
    return 3221225539LL;
  if ( v5 == 3 )
    return 3221225496LL;
  return 3221225473LL;
}
