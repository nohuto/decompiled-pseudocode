/*
 * XREFs of RtlValidateCorrelationVector @ 0x180109C10
 * Callers:
 *     RtlIncrementCorrelationVector @ 0x180109A90 (RtlIncrementCorrelationVector.c)
 * Callees:
 *     strncmp @ 0x1800943F0 (strncmp.c)
 *     RtlpGetCorrelationVectorBufferLength @ 0x180109DDC (RtlpGetCorrelationVectorBufferLength.c)
 *     RtlpGetCorrelationVectorEndPosition @ 0x180109E00 (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlpGetLastContiguosBase64Position @ 0x180109E90 (RtlpGetLastContiguosBase64Position.c)
 */

__int64 __fastcall RtlValidateCorrelationVector(_BYTE *a1)
{
  int LastContiguosBase64Position; // esi
  int CorrelationVectorEndPosition; // eax
  bool v4; // zf
  int v5; // esi
  __int64 v6; // rbx
  __int64 v7; // rbp
  int v8; // ecx
  __int64 v9; // r8
  _BYTE *v10; // rdx

  if ( !a1 )
    return 3221225485LL;
  if ( (int)RtlpGetCorrelationVectorBufferLength() < 0 )
    return 3221225485LL;
  LastContiguosBase64Position = RtlpGetLastContiguosBase64Position();
  CorrelationVectorEndPosition = RtlpGetCorrelationVectorEndPosition(a1);
  if ( CorrelationVectorEndPosition < 0 )
    return 3221225485LL;
  if ( *a1 == 1 )
  {
    v4 = LastContiguosBase64Position == 15;
  }
  else
  {
    if ( *a1 != 2 )
      goto LABEL_9;
    v4 = LastContiguosBase64Position == 21;
  }
  if ( !v4 )
    return 3221225485LL;
LABEL_9:
  v5 = LastContiguosBase64Position + 1;
  v6 = v5;
  if ( a1[v5 + 1] != 46 )
    return 3221225485LL;
  v7 = CorrelationVectorEndPosition;
  while ( v6 < v7 )
  {
    if ( a1[v6 + 1] == 46 )
    {
      ++v5;
      ++v6;
      v8 = 0;
      v9 = v5;
      if ( v6 < v7 )
      {
        v10 = &a1[v6 + 1];
        do
        {
          if ( (unsigned __int8)(*v10 - 48) > 9u )
            break;
          ++v5;
          ++v6;
          ++v10;
          ++v8;
        }
        while ( v6 < v7 );
        if ( v8 && v8 <= 10 && (v8 != 10 || strncmp(&a1[v9 + 1], "2147483647", 0xAuLL) <= 0) )
          continue;
      }
    }
    return 3221225485LL;
  }
  return 0LL;
}
