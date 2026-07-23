/*
 * XREFs of RtlNtStatusToDosErrorNoTeb @ 0x140225DA0
 * Callers:
 *     RtlNtStatusToDosError @ 0x14069E070 (RtlNtStatusToDosError.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlNtStatusToDosErrorNoTeb(NTSTATUS Status)
{
  ULONG result; // eax
  unsigned int v2; // r8d
  unsigned int v3; // r9d
  __int64 v4; // rdx
  unsigned int v5; // eax
  unsigned int v6; // r10d
  int v7; // eax

  if ( !Status )
    return 0;
  if ( Status == 259 )
    return 997;
  result = Status;
  if ( (Status & 0x20000000) == 0 )
  {
    if ( (Status & 0xFF0000) == 0x70000 && ((HIBYTE(Status) - 128) & 0xFFFFFFBF) == 0 )
      return (unsigned __int16)Status;
    if ( (Status & 0xF0000000) == 0xD0000000 )
      Status &= 0xCFFFFFFF;
    v2 = 0;
    v3 = 321;
    while ( 1 )
    {
      v4 = (v2 + v3) >> 1;
      v5 = dword_140019100[2 * v4];
      v6 = Status - v5;
      if ( Status < v5 )
      {
        v3 = v4 - 1;
      }
      else
      {
        if ( v6 < (unsigned __int8)byte_140019104[8 * v4] )
        {
          v7 = (unsigned __int16)word_140019106[4 * v4];
          if ( byte_140019105[8 * v4] == 1 )
            return (unsigned __int16)word_140019B20[v6 + v7];
          else
            return (unsigned __int16)word_140019B20[2 * v6 + v7] | ((unsigned __int16)word_140019B20[2 * v6 + 1 + v7] << 16);
        }
        v2 = v4 + 1;
      }
      if ( v2 > v3 )
      {
        if ( (Status & 0xFFFF0000) == 0xC0010000 )
          return (unsigned __int16)Status;
        else
          return 317;
      }
    }
  }
  return result;
}
