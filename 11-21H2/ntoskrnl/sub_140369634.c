/*
 * XREFs of sub_140369634 @ 0x140369634
 * Callers:
 *     sub_140208958 @ 0x140208958 (sub_140208958.c)
 *     ExUnblockPushLockEx @ 0x140208D60 (ExUnblockPushLockEx.c)
 *     sub_140208D94 @ 0x140208D94 (sub_140208D94.c)
 *     sub_14023DD4C @ 0x14023DD4C (sub_14023DD4C.c)
 *     sub_1402F3584 @ 0x1402F3584 (sub_1402F3584.c)
 *     sub_140369180 @ 0x140369180 (sub_140369180.c)
 *     ExBlockOnAddressPushLock @ 0x140369460 (ExBlockOnAddressPushLock.c)
 *     ExTimedWaitForUnblockPushLock @ 0x140369540 (ExTimedWaitForUnblockPushLock.c)
 *     ExUnblockOnAddressPushLockEx @ 0x1403A02D0 (ExUnblockOnAddressPushLockEx.c)
 *     sub_1403C7918 @ 0x1403C7918 (sub_1403C7918.c)
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 *     sub_140558D40 @ 0x140558D40 (sub_140558D40.c)
 *     sub_1405E07A0 @ 0x1405E07A0 (sub_1405E07A0.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExTimedWaitForUnblockPushLock @ 0x140369540 (ExTimedWaitForUnblockPushLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

int __fastcall sub_140369634(volatile __int64 *a1, void *a2, char a3)
{
  char v3; // si
  __int64 v4; // r10
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int8 CurrentIrql; // bl
  __int64 v10; // rbp
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r9
  __int64 v13; // r8
  int v14; // eax
  bool v15; // zf

  v3 = 0;
  v4 = _InterlockedExchange64(a1, 0LL);
  LODWORD(CurrentPrcb) = 2;
  CurrentIrql = 2;
  if ( v4 )
  {
    if ( *(_QWORD *)(v4 + 24) )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      LODWORD(CurrentPrcb) = dword_140D06B08;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          *(_DWORD *)(*((_QWORD *)CurrentPrcb + 4375) + 20LL) |= (-1 << (CurrentIrql + 1)) & 4;
        }
      }
    }
    do
    {
      v10 = *(_QWORD *)(v4 + 24);
      if ( (void *)v4 == a2 )
        v3 = 1;
      if ( !_interlockedbittestandreset((volatile signed __int32 *)(v4 + 52), 1u) )
        LODWORD(CurrentPrcb) = KeSetEvent((PRKEVENT)v4, 1, 0);
      v4 = v10;
    }
    while ( v10 );
    if ( CurrentIrql != 2 )
    {
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v11 = KeGetCurrentIrql();
          if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
          {
            v12 = KeGetCurrentPrcb();
            v13 = *((_QWORD *)v12 + 4375);
            v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
            *(_DWORD *)(v13 + 20) &= v14;
            if ( v15 )
              sub_140418E4C(v12);
          }
        }
      }
      LODWORD(CurrentPrcb) = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  if ( a2 && !v3 )
  {
    if ( a3 )
      LODWORD(CurrentPrcb) = KeWaitForSingleObject(a2, WrPushLock, 0, 0, 0LL);
    else
      LODWORD(CurrentPrcb) = ExTimedWaitForUnblockPushLock((__int64)a1, (char *)a2, 0LL);
  }
  return (int)CurrentPrcb;
}
