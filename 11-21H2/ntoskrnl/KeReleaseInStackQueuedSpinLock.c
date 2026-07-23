/*
 * XREFs of KeReleaseInStackQueuedSpinLock @ 0x1402B0DF0
 * Callers:
 *     sub_140203950 @ 0x140203950 (sub_140203950.c)
 *     CcSetFileSizesEx @ 0x1402823F0 (CcSetFileSizesEx.c)
 *     sub_140283030 @ 0x140283030 (sub_140283030.c)
 *     sub_1402BD970 @ 0x1402BD970 (sub_1402BD970.c)
 *     sub_140310AD0 @ 0x140310AD0 (sub_140310AD0.c)
 *     sub_140389670 @ 0x140389670 (sub_140389670.c)
 *     sub_1403A3F0C @ 0x1403A3F0C (sub_1403A3F0C.c)
 *     sub_1403A4DCC @ 0x1403A4DCC (sub_1403A4DCC.c)
 *     sub_140A68338 @ 0x140A68338 (sub_140A68338.c)
 *     sub_140A69EB4 @ 0x140A69EB4 (sub_140A69EB4.c)
 * Callees:
 *     sub_140282C20 @ 0x140282C20 (sub_140282C20.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14056E6FC @ 0x14056E6FC (sub_14056E6FC.c)
 */

void __stdcall KeReleaseInStackQueuedSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  __int64 Next; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v4; // rdx
  unsigned __int64 OldIrql; // rbx
  int v6; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v8; // r10
  __int64 v9; // r9
  int v10; // eax
  bool v11; // zf
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
  {
    sub_14056E6FC(LockHandle, retaddr);
    goto LABEL_4;
  }
  _m_prefetchw(LockHandle);
  Next = (__int64)LockHandle->LockQueue.Next;
  if ( LockHandle->LockQueue.Next )
    goto LABEL_8;
  if ( LockHandle != (PKLOCK_QUEUE_HANDLE)_InterlockedCompareExchange64(
                                            (volatile signed __int64 *)LockHandle->LockQueue.Lock,
                                            0LL,
                                            (signed __int64)LockHandle) )
  {
    Next = sub_140282C20((__int64 *)LockHandle);
LABEL_8:
    LockHandle->LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
  }
LABEL_4:
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v4 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v6 = *(_DWORD *)(v4 + 24) - 1;
      *(_DWORD *)(v4 + 24) = v6;
      if ( !v6 )
        sub_140418E4C(CurrentPrcb);
    }
  }
  OldIrql = LockHandle->OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        v8 = KeGetCurrentPrcb();
        v9 = *((_QWORD *)v8 + 4375);
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)OldIrql + 1));
        v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
        *(_DWORD *)(v9 + 20) &= v10;
        if ( v11 )
          sub_140418E4C(v8);
      }
    }
  }
  __writecr8(OldIrql);
}
