/*
 * XREFs of ValidatePStateCapability @ 0x1C00332C0
 * Callers:
 *     <none>
 * Callees:
 *     IsProcGV3Capable @ 0x1C0005E3C (IsProcGV3Capable.c)
 *     IsProcGV3Enabled @ 0x1C0005E88 (IsProcGV3Enabled.c)
 *     IsProcSpeedStepCapable @ 0x1C0033170 (IsProcSpeedStepCapable.c)
 */

__int64 __fastcall ValidatePStateCapability(_BYTE *a1, __int64 a2, _DWORD *a3)
{
  unsigned int v5; // ebx

  v5 = -1073741637;
  if ( !IsProcGV3Capable() || !IsProcGV3Enabled() )
  {
    if ( *a1 != 1 || !IsProcSpeedStepCapable() )
      goto LABEL_5;
    return 0;
  }
  if ( *a1 == 1 || *a1 == 127 )
    return 0;
LABEL_5:
  *a3 |= 0x20u;
  return v5;
}
