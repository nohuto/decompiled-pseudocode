/*
 * XREFs of PpmPerfGetCurrentState @ 0x14032A848
 * Callers:
 *     PoGetPerfStateAndParkingInfo @ 0x14032A700 (PoGetPerfStateAndParkingInfo.c)
 *     PpmTracePerfIdleRundown @ 0x140598370 (PpmTracePerfIdleRundown.c)
 *     PopProcessorInformation @ 0x1407A5B54 (PopProcessorInformation.c)
 *     PpmWmiGetAllData @ 0x1409963AC (PpmWmiGetAllData.c)
 * Callees:
 *     PpmPerfGetCurrentFrequency @ 0x1402B2D30 (PpmPerfGetCurrentFrequency.c)
 */

__int64 __fastcall PpmPerfGetCurrentState(__int64 a1, _DWORD *a2, unsigned int *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  _DWORD *v6; // rbx
  _DWORD *v8; // r10
  unsigned int v10; // r9d
  __int64 result; // rax
  unsigned int v12; // ecx

  v6 = *(_DWORD **)(a1 + 33968);
  v8 = *(_DWORD **)(a1 + 33976);
  if ( v6 && v8 )
  {
    v10 = v8[18];
    result = (unsigned int)v6[129];
    if ( v10 >= (unsigned int)result )
      v10 = v6[129];
    if ( a2 )
    {
      result = (unsigned int)v8[19];
      *a2 = result;
    }
    if ( a3 )
    {
      v12 = v6[129] * v6[110];
      result = 1374389535 * v12;
      *a3 = v12 / 0x64;
    }
    if ( a5 )
    {
      result = (unsigned int)(v10 < v6[112]) + 1;
      *a5 = result;
    }
    if ( a6 )
    {
      result = (unsigned int)v8[8];
      *a6 = result;
      if ( v8[7] < 0x64u )
      {
        result = (unsigned int)result | 4;
        *a6 = result;
      }
    }
  }
  else
  {
    if ( a2 )
      *a2 = *(_DWORD *)(a1 + 68);
    if ( a3 )
      *a3 = *(_DWORD *)(a1 + 68);
    if ( a5 )
      *a5 = 0;
    result = (__int64)a6;
    if ( a6 )
      *a6 = 0;
  }
  if ( a4 )
  {
    result = PpmPerfGetCurrentFrequency(a1, 1);
    *a4 = result;
  }
  return result;
}
