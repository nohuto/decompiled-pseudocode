/*
 * XREFs of IsValidPowerCurve @ 0x1C0048A00
 * Callers:
 *     PopulateEnergyEstimationModel @ 0x1C0048B64 (PopulateEnergyEstimationModel.c)
 * Callees:
 *     <none>
 */

char __fastcall IsValidPowerCurve(_DWORD *a1)
{
  char v1; // r11
  unsigned int v2; // r8d
  int v3; // edx
  _DWORD *i; // rbx
  unsigned int v5; // edi
  unsigned int v6; // r10d

  v1 = 0;
  v2 = (a1[1] >> 1) & 0x7F;
  if ( v2 >= 2 && (unsigned __int8)a1[v2 + 1] <= 0x64u && (a1[2] & 0xFFFFFF00) <= 0x3E8000 )
  {
    v3 = 1;
    for ( i = a1 + 3; ; ++i )
    {
      v5 = a1[v3 - 1 + 2];
      if ( (unsigned __int8)*i <= (unsigned __int8)v5 )
        break;
      v6 = *i >> 8;
      if ( v6 < v5 >> 8 || v6 > 0x3E80 )
        break;
      if ( ++v3 >= v2 )
        return 1;
    }
  }
  return v1;
}
