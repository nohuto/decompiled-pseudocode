/*
 * XREFs of ?ndisSSUpdateOidCacheValue@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00ADC54
 * Callers:
 *     ?ndisOidPostStatistics@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0005DE0 (-ndisOidPostStatistics@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 *     ?ndisSSGetOidCacheEntry@@YAPEAU_NDIS_OID_CACHE_ENTRY@@PEAU_NDIS_SELECTIVE_SUSPEND@@K@Z @ 0x1C003F638 (-ndisSSGetOidCacheEntry@@YAPEAU_NDIS_OID_CACHE_ENTRY@@PEAU_NDIS_SELECTIVE_SUSPEND@@K@Z.c)
 */

void __fastcall ndisSSUpdateOidCacheValue(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  struct _NDIS_OID_CACHE_ENTRY *v3; // rax
  __int64 v4; // r9
  struct _NDIS_OID_CACHE_ENTRY *v5; // rbx
  unsigned int v6; // ecx
  void *Pool2; // rax

  v1 = *((_QWORD *)a1 + 4);
  v2 = *(_QWORD *)a1;
  v3 = ndisSSGetOidCacheEntry(*(struct _NDIS_SELECTIVE_SUSPEND **)(*(_QWORD *)a1 + 4448LL), *(_DWORD *)(v1 + 32));
  v5 = v3;
  if ( v3 )
  {
    *((_DWORD *)v3 + 4) = *(_DWORD *)(v4 + 40);
    *((_BYTE *)v3 + 20) = 0;
    if ( !*(_DWORD *)(v4 + 40) )
    {
      v6 = *((_DWORD *)v3 + 1);
      if ( *(_DWORD *)(v1 + 48) >= v6 )
      {
        Pool2 = (void *)*((_QWORD *)v3 + 1);
        if ( Pool2 || (Pool2 = (void *)ExAllocatePool2(66LL, v6, 1936933966), (*((_QWORD *)v5 + 1) = Pool2) != 0LL) )
        {
          memmove(Pool2, *(const void **)(v1 + 40), *((unsigned int *)v5 + 1));
          *((_BYTE *)v5 + 20) = 1;
        }
        else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xFu,
            0x26u,
            (struct _GUID *)&WPP_64b9953f987037c4a892513bd407e9c6_Traceguids,
            v2);
        }
      }
    }
  }
}
