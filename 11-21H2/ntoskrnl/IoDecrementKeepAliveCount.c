/*
 * XREFs of IoDecrementKeepAliveCount @ 0x140558640
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAlertThread @ 0x1402ECB90 (KeAlertThread.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140558AE0 @ 0x140558AE0 (sub_140558AE0.c)
 */

__int64 __fastcall IoDecrementKeepAliveCount(int a1, int a2)
{
  int v2; // edi
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 *v5; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v8; // eax
  __int64 v9; // r8
  bool v10; // zf
  int v12; // [rsp+50h] [rbp+18h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0;
  v13 = 0LL;
  v2 = sub_140558AE0(a1, a2, 0, (unsigned int)&v12, (__int64)&v13);
  if ( v2 >= 0 && !v12 )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C47230);
    v4 = v13;
    *(_QWORD *)(v13 + 48) = MEMORY[0xFFFFF78000000014] + 50000000LL;
    --*(_DWORD *)(v4 + 32);
    if ( *(_BYTE *)(v4 + 16) )
    {
      if ( qword_140C47260 )
        KeAlertThread(qword_140C47260, 0);
    }
    else
    {
      v5 = (__int64 *)qword_140C47228;
      if ( *(PVOID **)qword_140C47228 != &qword_140C47220 )
        __fastfail(3u);
      *(_QWORD *)v4 = &qword_140C47220;
      *(_QWORD *)(v4 + 8) = v5;
      *v5 = v4;
      qword_140C47228 = v4;
      *(_BYTE *)(v4 + 16) = 1;
      if ( !byte_140C47258 )
      {
        byte_140C47258 = 1;
        ExQueueWorkItem(&stru_140C47200, DelayedWorkQueue);
      }
    }
    KeReleaseSpinLockFromDpcLevel(&qword_140C47230);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v9 = *((_QWORD *)CurrentPrcb + 4375);
          v10 = (v8 & *(_DWORD *)(v9 + 20)) == 0;
          *(_DWORD *)(v9 + 20) &= v8;
          if ( v10 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v3);
  }
  return (unsigned int)v2;
}
