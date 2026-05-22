/*
 * XREFs of ?CalculateMaximumSize@RayStabilizer@@AEAAXXZ @ 0x180051D50
 * Callers:
 *     ??0MPCMouseProcessor@@QEAA@XZ @ 0x1800380C8 (--0MPCMouseProcessor@@QEAA@XZ.c)
 *     ??0MPCInputProviderBase@@QEAA@XZ @ 0x180051BF4 (--0MPCInputProviderBase@@QEAA@XZ.c)
 *     ??0MPCHandProcessor@@QEAA@XZ @ 0x1800CE6F4 (--0MPCHandProcessor@@QEAA@XZ.c)
 *     ??0MPCGamepadProcessor@@QEAA@XZ @ 0x1801F0058 (--0MPCGamepadProcessor@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall RayStabilizer::CalculateMaximumSize(RayStabilizer *this)
{
  unsigned int v1; // eax
  int v2; // edx

  v1 = 0;
  *((_DWORD *)this + 10) = 0;
  v2 = 1;
  if ( (*((_BYTE *)this + 44) & 1) != 0 )
  {
    v1 = 3;
    *((_DWORD *)this + 10) = 3;
  }
  if ( (*((_BYTE *)this + 44) & 2) != 0 )
  {
    v1 = 90;
    *((_DWORD *)this + 10) = 90;
  }
  if ( (*((_BYTE *)this + 44) & 4) != 0 )
  {
    if ( v1 > 1 )
      v2 = v1;
    *((_DWORD *)this + 10) = v2;
  }
}
