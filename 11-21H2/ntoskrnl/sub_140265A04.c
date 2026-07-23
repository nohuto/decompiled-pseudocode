/*
 * XREFs of sub_140265A04 @ 0x140265A04
 * Callers:
 *     sub_140266644 @ 0x140266644 (sub_140266644.c)
 *     sub_140596B14 @ 0x140596B14 (sub_140596B14.c)
 * Callees:
 *     sub_140265B80 @ 0x140265B80 (sub_140265B80.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140265A04(__int64 a1, int a2)
{
  _QWORD *v4; // rdi
  _QWORD **v5; // rsi
  _QWORD *i; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  unsigned __int64 OldIrql; // rsi
  unsigned int v11; // edx
  int v12; // ecx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v18; // r9
  int v19; // eax
  bool v20; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-78h] BYREF
  _BYTE Src[64]; // [rsp+40h] [rbp-58h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(Src, 0, sizeof(Src));
  v4 = *(_QWORD **)(a1 + 16600);
  if ( a2 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140C53340, &LockHandle);
    v5 = (_QWORD **)(a1 + 16608);
    for ( i = *v5; i != v5; i = (_QWORD *)*i )
      sub_140265B80(i - 3, Src);
    memmove(v4 + 302, Src, 0x40uLL);
    v7 = v4 + 308;
    v8 = 2LL;
    v9 = 0LL;
    do
    {
      v9 += *v7++;
      --v8;
    }
    while ( v8 );
    v4[301] = v9;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v18 = *((_QWORD *)CurrentPrcb + 4375);
          v19 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v20 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
          *(_DWORD *)(v18 + 20) &= v19;
          if ( v20 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
  else
  {
    v9 = v4[301];
  }
  v11 = 5;
  v12 = 0;
  while ( v9 < 4LL * v4[298] )
  {
    ++v12;
    v9 += v4[v11 + 302];
    if ( v11 == 1 )
      break;
    --v11;
  }
  v13 = v4[294];
  if ( v13 )
  {
    v14 = (unsigned int)(1000 * v12) / v13;
    if ( (unsigned __int16)v14 > 0x3E8u )
      LOWORD(v14) = 1000;
    return (unsigned __int16)v14;
  }
  else if ( v12 )
  {
    return 1000LL;
  }
  else
  {
    return 0LL;
  }
}
