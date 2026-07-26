/*
 * XREFs of ?ndisPcwRemoveCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z @ 0x1C010CD08
 * Callers:
 *     ndisCounterSetProviderCallback @ 0x1C010C800 (ndisCounterSetProviderCallback.c)
 * Callees:
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C010C60C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C010C668 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?ndisPcwDeleteConsumer@@YAXPEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C010CDCC (-ndisPcwDeleteConsumer@@YAXPEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisPcwRemoveCounter(int a1, __int64 a2)
{
  _QWORD *v2; // rdi
  char *v5; // rbx
  KLockHolder v7; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  v7.m_State = Unlocked;
  v7.m_Lock = (KPushLockBase *)&ndisPcwMutex;
  v7.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v7);
  v5 = (char *)ndisPcwConsumerList;
  if ( ndisPcwConsumerList )
  {
    while ( *((_DWORD *)v5 + 2) != a1
         || *((_QWORD *)v5 + 2) != *(_QWORD *)a2
         || !RtlEqualUnicodeString((PCUNICODE_STRING)(v5 + 24), *(PCUNICODE_STRING *)(a2 + 8), 0) )
    {
      v2 = v5;
      v5 = *(char **)v5;
      if ( !v5 )
        goto LABEL_10;
    }
    if ( v2 )
      *v2 = *(_QWORD *)v5;
    else
      ndisPcwConsumerList = *(PVOID *)v5;
    ndisPcwDeleteConsumer(v5);
  }
LABEL_10:
  KLockHolder::~KLockHolder(&v7);
  return 0LL;
}
