/*
 * XREFs of IsValidAcpiGenericAddress @ 0x1C001E7D8
 * Callers:
 *     ValidateAcpiCStates @ 0x1C002DB68 (ValidateAcpiCStates.c)
 *     ValidateLpiState @ 0x1C002E8DC (ValidateLpiState.c)
 *     InitAcpi1ThrottleStates @ 0x1C0034D88 (InitAcpi1ThrottleStates.c)
 *     InitAcpi1CStates @ 0x1C0035884 (InitAcpi1CStates.c)
 * Callees:
 *     <none>
 */

char __fastcall IsValidAcpiGenericAddress(unsigned __int8 *a1)
{
  unsigned __int8 v1; // al
  char v2; // r8
  int v3; // eax
  int v4; // eax

  v1 = *a1;
  v2 = 1;
  if ( *a1 )
  {
    if ( v1 != 1 )
    {
      if ( v1 > 1u && (v1 <= 4u || v1 == 10 || v1 == 127) )
        return v2;
      return 0;
    }
    if ( *((_DWORD *)a1 + 2) )
      return 0;
    v3 = *((_DWORD *)a1 + 1);
    if ( (v3 & 0xFFFF0000) != 0 || !v3 )
      return 0;
  }
  v4 = a1[1];
  if ( !(_BYTE)v4 || v4 + (unsigned int)a1[2] > a1[3] )
    return 0;
  return v2;
}
