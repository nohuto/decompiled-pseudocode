/*
 * XREFs of PnpiValidateSdevResources @ 0x1C00B3680
 * Callers:
 *     PnpBiosGetDeviceResourceList @ 0x1C0097DD0 (PnpBiosGetDeviceResourceList.c)
 * Callees:
 *     PnpiValidateSdevMemoryResourceEntry @ 0x1C00B35E4 (PnpiValidateSdevMemoryResourceEntry.c)
 */

__int64 __fastcall PnpiValidateSdevResources(__int64 a1, int a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned int v4; // edi
  unsigned __int64 v5; // r9
  int v7; // r10d
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // rsi
  unsigned int v11; // r14d
  __int64 v12; // rdx
  unsigned int v13; // ebp
  __int64 v14; // rdx

  v3 = a1 + 36;
  v4 = 0;
  v5 = a1 + *(unsigned int *)(a1 + 4);
  v7 = 0;
  if ( a1 + 36 >= v5 )
    return (unsigned int)-1073741275;
  do
  {
    v8 = v3;
    if ( v7 == a2 )
      break;
    ++v7;
    v3 += *(unsigned __int16 *)(v3 + 2);
  }
  while ( v3 < v5 );
  if ( v3 < v5 && v8 )
  {
    if ( *(_BYTE *)v8 )
    {
      return (unsigned int)-1072431094;
    }
    else if ( (*(_BYTE *)(v8 + 1) & 2) != 0 )
    {
      v9 = *(unsigned __int16 *)(v8 + 12);
      v10 = v3 + *(unsigned __int16 *)(v8 + 2);
      while ( 1 )
      {
        v3 += v9;
        if ( v3 >= v10 )
          break;
        if ( *(_BYTE *)v3 == 1 )
        {
          v11 = *(_DWORD *)(a3 + 28);
          v12 = a3 + 32;
          v13 = 0;
          if ( !v11 )
            return (unsigned int)-1073741823;
          while ( !PnpiValidateSdevMemoryResourceEntry(v3, v12) )
          {
            ++v13;
            v12 = 32LL * (unsigned int)(*(_DWORD *)(v14 + 4) - 1) + v14 + 40;
            if ( v13 >= v11 )
              return (unsigned int)-1073741823;
          }
        }
        v9 = *(unsigned __int16 *)(v3 + 2);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v4;
}
