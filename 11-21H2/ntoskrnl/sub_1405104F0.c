/*
 * XREFs of sub_1405104F0 @ 0x1405104F0
 * Callers:
 *     <none>
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x14036FA30 (HalQueryMaximumProcessorCount.c)
 */

void __fastcall sub_1405104F0(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _QWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  unsigned int *v5; // rsi
  unsigned int i; // edi
  unsigned int MaximumProcessorCount; // eax
  unsigned int v8; // r8d
  unsigned int v9; // r10d
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // r9
  int v13; // eax

  ReasonSpecificData[3] = 0LL;
  *((_DWORD *)ReasonSpecificData + 2) = 0;
  if ( byte_140C4BFC8 && qword_140C4BEE0 )
  {
    v5 = (unsigned int *)*ReasonSpecificData;
    if ( !*ReasonSpecificData )
    {
      *ReasonSpecificData = &dword_140C4BF60;
      dword_140C4BF60 = 0;
      v5 = (unsigned int *)*ReasonSpecificData;
    }
    for ( i = *v5; i < 9; ++i )
    {
      ++*v5;
      MaximumProcessorCount = HalQueryMaximumProcessorCount();
      v8 = 0;
      v9 = MaximumProcessorCount;
      if ( MaximumProcessorCount )
      {
        v10 = 0LL;
        while ( 1 )
        {
          v11 = *(_QWORD *)(v10 + qword_140C4BEE0);
          if ( v11 )
          {
            v12 = v11 + 192;
            if ( v12 )
            {
              v13 = *(_DWORD *)(v12 + 32);
              if ( _bittest(&v13, i) )
              {
                if ( qword_140E01870[0] )
                  break;
              }
            }
          }
          ++v8;
          v10 += 8LL;
          if ( v8 >= v9 )
            goto LABEL_13;
        }
        *((_DWORD *)ReasonSpecificData + 2) = -2147483647;
        ReasonSpecificData[2] = qword_140E01870[i];
        ReasonSpecificData[3] = 1LL;
        return;
      }
LABEL_13:
      ;
    }
  }
}
