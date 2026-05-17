/*
 * XREFs of RtlValidateCorrelationVector @ 0x1801087D0
 * Callers:
 *     <none>
 * Callees:
 *     strncmp @ 0x180093BF0 (strncmp.c)
 *     RtlpGetCorrelationVectorBufferLength @ 0x180108994 (RtlpGetCorrelationVectorBufferLength.c)
 *     RtlpGetCorrelationVectorEndPosition @ 0x1801089B8 (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlpGetLastContiguosBase64Position @ 0x1801089FC (RtlpGetLastContiguosBase64Position.c)
 */

__int64 __fastcall RtlValidateCorrelationVector(_BYTE *a1, __int64 a2, __int64 a3)
{
  int LastContiguosBase64Position; // esi
  int CorrelationVectorEndPosition; // eax
  bool v6; // zf
  int v7; // esi
  __int64 v8; // rbx
  __int64 v9; // rbp
  int v10; // ecx
  __int64 v11; // r8
  _BYTE *v12; // rdx

  if ( !a1 || (int)RtlpGetCorrelationVectorBufferLength(a1, a2, a3) < 0 )
    return 3221225485LL;
  LastContiguosBase64Position = RtlpGetLastContiguosBase64Position();
  CorrelationVectorEndPosition = RtlpGetCorrelationVectorEndPosition(a1);
  if ( *a1 == 1 )
  {
    v6 = LastContiguosBase64Position == 15;
  }
  else
  {
    if ( *a1 != 2 )
      goto LABEL_8;
    v6 = LastContiguosBase64Position == 21;
  }
  if ( !v6 )
    return 3221225485LL;
LABEL_8:
  v7 = LastContiguosBase64Position + 1;
  v8 = v7;
  if ( a1[v7 + 1] != 46 )
    return 3221225485LL;
  v9 = CorrelationVectorEndPosition;
  while ( v8 < v9 )
  {
    if ( a1[v8 + 1] == 46 )
    {
      ++v7;
      ++v8;
      v10 = 0;
      v11 = v7;
      if ( v8 < v9 )
      {
        v12 = &a1[v8 + 1];
        do
        {
          if ( (unsigned __int8)(*v12 - 48) > 9u )
            break;
          ++v7;
          ++v8;
          ++v12;
          ++v10;
        }
        while ( v8 < v9 );
        if ( v10 && v10 <= 10 && (v10 != 10 || strncmp(&a1[v11 + 1], "2147483647", 0xAuLL) <= 0) )
          continue;
      }
    }
    return 3221225485LL;
  }
  return 0LL;
}
