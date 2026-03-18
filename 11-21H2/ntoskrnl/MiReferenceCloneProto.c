/*
 * XREFs of MiReferenceCloneProto @ 0x1405BBB54
 * Callers:
 *     MiBuildForkPte @ 0x1405B88D8 (MiBuildForkPte.c)
 * Callees:
 *     MiLocateCloneAddress @ 0x140234F14 (MiLocateCloneAddress.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x14032A4B0 (MiChargeCommit.c)
 *     MiGetCrossPartitionCloneCharges @ 0x1405BAFB0 (MiGetCrossPartitionCloneCharges.c)
 *     MiReturnCrossPartitionCloneCharges @ 0x1405BBC9C (MiReturnCrossPartitionCloneCharges.c)
 */

__int64 __fastcall MiReferenceCloneProto(
        __int64 a1,
        volatile signed __int64 *a2,
        char a3,
        _QWORD *a4,
        volatile signed __int64 **a5)
{
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *CloneAddress; // rax
  __int64 v10; // r8
  int v11; // ebp
  __int64 v12; // rbx

  CurrentThread = KeGetCurrentThread();
  *a5 = 0LL;
  CloneAddress = MiLocateCloneAddress((__int64)CurrentThread->ApcState.Process, (unsigned __int64)a2);
  if ( CloneAddress )
  {
    v11 = 0;
    v12 = *(_QWORD *)(CloneAddress[7] + 24LL);
    if ( *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v10 + 174)) != v12 )
    {
      if ( (a3 & 1) != 0 )
      {
        if ( !(unsigned int)MiChargeCommit(v12, 1uLL, 0) )
          return 0LL;
        v11 = 1;
      }
      if ( !(unsigned int)MiGetCrossPartitionCloneCharges(v12) )
      {
        if ( v11 )
          MiReturnCommit(v12, 1LL);
        return 0LL;
      }
      if ( _InterlockedIncrement64(a2 + 1) != 1 )
        MiReturnCrossPartitionCloneCharges(v12);
    }
    _InterlockedAdd64(a2 + 3, 1uLL);
    if ( (a3 & 1) != 0 )
    {
      if ( (_InterlockedIncrement64(a2 + 2) & 0x7FFFFFFFFFFFFFFLL) == 1 )
      {
        if ( v11 )
          ++*a4;
        else
          ++a4[1];
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 17528), 1uLL);
      }
      else
      {
        ++*a4;
        if ( v11 )
          MiReturnCommit(v12, 1LL);
      }
      *a5 = a2;
    }
  }
  return 1LL;
}
