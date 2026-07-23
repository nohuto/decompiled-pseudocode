/*
 * XREFs of sub_14038AB60 @ 0x14038AB60
 * Callers:
 *     sub_1407FF440 @ 0x1407FF440 (sub_1407FF440.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_14036AAC4 @ 0x14036AAC4 (sub_14036AAC4.c)
 *     sub_14038AE58 @ 0x14038AE58 (sub_14038AE58.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 */

void sub_14038AB60()
{
  KIRQL v0; // al
  unsigned __int64 v1; // rbx
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v3; // rdi
  void *v4; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v7; // r9
  int v8; // eax
  bool v9; // zf

  if ( _InterlockedExchange(&dword_140C22090, 0) )
  {
    if ( byte_140C223A8 )
    {
      sub_1402D66A8((ULONG_PTR)&qword_140C22200);
      if ( HIBYTE(word_140C22211) )
      {
        HIBYTE(word_140C22211) = 0;
        ZwUpdateWnfStateData(&StateName, 0LL, 0, 0LL, 0LL, 0, 0);
      }
      sub_1402935D0((ULONG_PTR)&qword_140C22200);
      v0 = KeAcquireSpinLockRaiseToDpc(&qword_140C22160);
      dword_140C2216C = -1;
      v1 = v0;
      byte_140C22168 = 1;
      KeReleaseSpinLockFromDpcLevel(&qword_140C22160);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v1 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v7 = *((_QWORD *)CurrentPrcb + 4375);
            v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v1 + 1));
            v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
            *(_DWORD *)(v7 + 20) &= v8;
            if ( v9 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v1);
    }
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C222D0, 0LL);
    v3 = (PVOID *)qword_140C23140;
    if ( qword_140C23140 != &qword_140C23140 )
    {
      do
      {
        sub_1402D66A8((ULONG_PTR)(v3 + 54));
        v4 = (void *)MEMORY[0xFFFFF78000000008];
        v3[64] = (PVOID)MEMORY[0xFFFFF78000000008];
        v3[65] = v4;
        *((_BYTE *)v3 + 504) = 0;
        sub_1402935D0((ULONG_PTR)(v3 + 54));
        v3 = (PVOID *)*v3;
      }
      while ( v3 != &qword_140C23140 );
    }
    sub_1402935D0((ULONG_PTR)&qword_140C222D0);
    sub_14038AE58(0LL);
    sub_1402D66A8((ULONG_PTR)&qword_140C22200);
    byte_140C22210 = 1;
    if ( (_BYTE)word_140C22211 || byte_140C22213 )
      sub_14036AAC4((__int64)&unk_140C22220, DelayedWorkQueue);
    sub_1402935D0((ULONG_PTR)&qword_140C22200);
  }
}
