/*
 * XREFs of ComputePowerEnvelopeFromCurve @ 0x1C000CAE4
 * Callers:
 *     ComputeProcessorEnergy @ 0x1C000CB90 (ComputeProcessorEnergy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComputePowerEnvelopeFromCurve(__int64 a1, unsigned int a2)
{
  unsigned int v3; // r8d
  unsigned int v4; // ecx
  unsigned int *v5; // r9
  unsigned int v6; // eax
  int v7; // r9d
  unsigned int v9; // r11d
  unsigned int v10; // eax

  v3 = 0;
  v4 = (*(_DWORD *)(a1 + 4) >> 1) & 0x7F;
  if ( v4 )
  {
    v5 = (unsigned int *)(a1 + 8);
    do
    {
      v6 = *v5;
      if ( a2 == (unsigned __int8)*v5 )
        return v6 >> 8;
      if ( a2 < (unsigned __int8)v6 )
        break;
      ++v3;
      ++v5;
    }
    while ( v3 < v4 );
    if ( !v3 )
      goto LABEL_10;
    v7 = *(_DWORD *)(a1 + 4LL * (v3 - 1) + 8) >> 8;
    if ( v3 == v4 )
      --v3;
  }
  else
  {
LABEL_10:
    v3 = 1;
    v7 = *(_DWORD *)(a1 + 8) >> 8;
  }
  v9 = *(_DWORD *)(a1 + 4LL * (v3 - 1) + 8);
  v10 = *(_DWORD *)(a1 + 4LL * v3 + 8);
  if ( (unsigned __int8)v9 < (unsigned int)(unsigned __int8)v10 )
    return (unsigned int)(v7
                        + (int)((a2 - (unsigned __int8)v9) * ((v10 >> 8) - (v9 >> 8)))
                        / ((unsigned __int8)v10 - (unsigned __int8)v9));
  else
    return 0LL;
}
