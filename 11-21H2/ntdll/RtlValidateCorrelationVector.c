/*
 * XREFs of RtlValidateCorrelationVector @ 0x1801088F0
 * Callers:
 *     RtlIncrementCorrelationVector @ 0x18008C3C0 (RtlIncrementCorrelationVector.c)
 * Callees:
 *     RtlpGetCorrelationVectorEndPosition @ 0x18008C374 (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlpGetCorrelationVectorBufferLength @ 0x18008C4F0 (RtlpGetCorrelationVectorBufferLength.c)
 *     strncmp @ 0x180098B70 (strncmp.c)
 *     RtlpGetLastContiguosBase64Position @ 0x1801089DC (RtlpGetLastContiguosBase64Position.c)
 */

DWORD __cdecl RtlValidateCorrelationVector(PCORRELATION_VECTOR Vector)
{
  int LastContiguosBase64Position; // esi
  __int64 v3; // rdx
  int CorrelationVectorEndPosition; // eax
  int v6; // esi
  __int64 v7; // rbx
  __int64 v8; // rbp
  int v9; // ecx
  __int64 v10; // r8
  CHAR *v11; // rdx

  if ( !Vector )
    return -1073741811;
  if ( (int)RtlpGetCorrelationVectorBufferLength(Vector) < 0 )
    return -1073741811;
  LastContiguosBase64Position = RtlpGetLastContiguosBase64Position();
  CorrelationVectorEndPosition = RtlpGetCorrelationVectorEndPosition((__int64)Vector, v3);
  if ( CorrelationVectorEndPosition < 0 )
    return -1073741811;
  if ( Vector->Version == 1 )
  {
    if ( LastContiguosBase64Position != 15 )
      return -1073741811;
  }
  else if ( Vector->Version == 2 && LastContiguosBase64Position != 21 )
  {
    return -1073741811;
  }
  v6 = LastContiguosBase64Position + 1;
  v7 = v6;
  if ( Vector->Vector[v6] != 46 )
    return -1073741811;
  v8 = CorrelationVectorEndPosition;
  while ( v7 < v8 )
  {
    if ( Vector->Vector[v7] == 46 )
    {
      ++v6;
      ++v7;
      v9 = 0;
      v10 = v6;
      if ( v7 < v8 )
      {
        v11 = &Vector->Vector[v7];
        do
        {
          if ( (unsigned __int8)(*v11 - 48) > 9u )
            break;
          ++v6;
          ++v7;
          ++v11;
          ++v9;
        }
        while ( v7 < v8 );
        if ( v9 && v9 <= 10 && (v9 != 10 || strncmp(&Vector->Vector[v10], "2147483647", 0xAuLL) <= 0) )
          continue;
      }
    }
    return -1073741811;
  }
  return 0;
}
