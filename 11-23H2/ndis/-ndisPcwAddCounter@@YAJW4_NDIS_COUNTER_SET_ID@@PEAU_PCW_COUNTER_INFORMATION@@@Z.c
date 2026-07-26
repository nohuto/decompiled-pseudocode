/*
 * XREFs of ?ndisPcwAddCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z @ 0x1C01180D8
 * Callers:
 *     ndisCounterSetProviderCallback @ 0x1C0117BF0 (ndisCounterSetProviderCallback.c)
 * Callees:
 *     ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C002866C (-ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B50 (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C0117BAC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 */

__int64 __fastcall ndisPcwAddCounter(unsigned int a1, __int64 a2)
{
  unsigned int v4; // ebp
  __int64 Pool2; // rax
  _QWORD *v6; // rdi
  int ReferencesForConsumer; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  KLockHolder v11; // [rsp+20h] [rbp-28h] BYREF

  v4 = **(unsigned __int16 **)(a2 + 8);
  Pool2 = ExAllocatePool2(256LL, v4 + 56, 2002994254);
  v6 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    ReferencesForConsumer = ndisPcwGetReferencesForConsumer(a1, a2, Pool2);
    if ( ReferencesForConsumer < 0 )
    {
      ExFreePoolWithTag(v6, 0);
    }
    else
    {
      v8 = *(_QWORD *)(a2 + 8);
      v6[4] = v6 + 7;
      *((_WORD *)v6 + 13) = v4;
      *((_WORD *)v6 + 12) = v4;
      memmove(v6 + 7, *(const void **)(v8 + 8), v4);
      v9 = *(_QWORD *)a2;
      v11.m_State = Unlocked;
      v6[2] = v9;
      *((_DWORD *)v6 + 2) = a1;
      v11.m_Lock = (KPushLockBase *)&ndisPcwMutex;
      v11.m_Region.m_Entered = 0;
      KLockHolder::AcquireExclusive(&v11);
      *v6 = ndisPcwConsumerList;
      ndisPcwConsumerList = v6;
      KLockHolder::~KLockHolder(&v11);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)ReferencesForConsumer;
}
