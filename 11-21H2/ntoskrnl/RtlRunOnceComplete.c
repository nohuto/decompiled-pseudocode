/*
 * XREFs of RtlRunOnceComplete @ 0x14075BF10
 * Callers:
 *     RtlRunOnceExecuteOnce @ 0x14075BD80 (RtlRunOnceExecuteOnce.c)
 * Callees:
 *     sub_1402F5FD0 @ 0x1402F5FD0 (sub_1402F5FD0.c)
 */

NTSTATUS __stdcall RtlRunOnceComplete(PRTL_RUN_ONCE RunOnce, ULONG Flags, PVOID Context)
{
  __int64 v3; // r9
  __int64 v5; // rdx
  PVOID Ptr; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // r8
  __int64 v10; // r8
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rbx
  __int64 v13; // rcx
  PVOID v14; // rtt

  LOBYTE(v3) = ((Flags - 1) & Flags) == 0;
  if ( ((unsigned __int8)v3 & ((Flags & 0xFFFFFFF9) == 0)) == 0 )
    return -1073741584;
  v5 = ~(unsigned __int8)(Flags >> 1) & 3;
  if ( Context && (((unsigned __int8)Context & 3) != 0 || (v5 & 2) == 0) )
    return -1073741583;
  _m_prefetchw(RunOnce);
  Ptr = RunOnce->Ptr;
  v8 = (__int64)RunOnce->Ptr & 3;
  v9 = (unsigned __int64)Context & 0xFFFFFFFFFFFFFFFCuLL | ((unsigned int)v5 >= 2 ? 2 : 0);
  if ( v8 == 1 )
  {
    if ( (v5 & 1) != 0 )
    {
      v10 = _InterlockedExchange64((volatile __int64 *)RunOnce, v9);
      if ( (v10 & 3) == 1 )
      {
        v11 = v10 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v11 )
        {
          do
          {
            v12 = *(_QWORD *)v11;
            v13 = *(_QWORD *)(v11 + 24);
            _interlockedbittestandset((volatile signed __int32 *)(v11 + 36), 2u);
            sub_1402F5FD0(v13, v5, v11, v3);
            v11 = v12;
          }
          while ( v12 );
        }
        return 0;
      }
      return -1073741734;
    }
    return -1073741584;
  }
  if ( v8 != 3 )
    return -1073741823;
  if ( (v5 & 1) != 0 )
    return -1073741584;
  v14 = RunOnce->Ptr;
  if ( v14 == (PVOID)_InterlockedCompareExchange64((volatile signed __int64 *)RunOnce, v9, (signed __int64)Ptr) )
    return 0;
  return -1073741771;
}
