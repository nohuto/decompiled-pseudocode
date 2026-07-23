/*
 * XREFs of PopFxUpdateAccountingActiveTime @ 0x140313400
 * Callers:
 *     PopFxIdleWorkerTail @ 0x140312F48 (PopFxIdleWorkerTail.c)
 *     PopFxUpdateComponentAccountingEnhanced @ 0x14035E0D0 (PopFxUpdateComponentAccountingEnhanced.c)
 *     PopFxPauseDeviceAccounting @ 0x14058B514 (PopFxPauseDeviceAccounting.c)
 *     PopFxUpdateDeviceAccountingEnhanced @ 0x14058C6C8 (PopFxUpdateDeviceAccountingEnhanced.c)
 * Callees:
 *     <none>
 */

void __fastcall PopFxUpdateAccountingActiveTime(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // r9d
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 *i; // r10
  __int64 v7; // r8

  v3 = 0;
  if ( *(_BYTE *)(a1 + 8) )
  {
    v4 = *(_QWORD *)(a1 + 24);
    if ( a2 > v4 )
    {
      v5 = a2 - v4;
      *(_QWORD *)(a1 + 128) += v5;
      if ( v5 < a3 )
      {
        *(_QWORD *)(a1 + 136) += v5;
      }
      else
      {
        for ( i = PopFxAccountingBucketLimits; ; ++i )
        {
          v7 = v3 + 1;
          if ( v5 >= *i && v5 < PopFxAccountingBucketLimits[v7] )
            break;
          ++v3;
          if ( (unsigned int)v7 >= 5 )
            return;
        }
        ++*(_QWORD *)(a1 + 8LL * v3 + 144);
        *(_QWORD *)(a1 + 8LL * v3 + 184) += v5;
      }
    }
  }
}
