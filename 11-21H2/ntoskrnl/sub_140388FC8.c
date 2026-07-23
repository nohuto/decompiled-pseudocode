/*
 * XREFs of sub_140388FC8 @ 0x140388FC8
 * Callers:
 *     sub_140275338 @ 0x140275338 (sub_140275338.c)
 *     CcSetFileSizesEx @ 0x1402823F0 (CcSetFileSizesEx.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_14028A78C @ 0x14028A78C (sub_14028A78C.c)
 *     sub_14028AD10 @ 0x14028AD10 (sub_14028AD10.c)
 *     sub_14028D878 @ 0x14028D878 (sub_14028D878.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall sub_140388FC8(__int64 a1)
{
  __int64 v1; // r15
  _QWORD *v2; // r14
  _QWORD *v3; // rsi
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  __int64 v8; // rbp
  struct _KEVENT *v9; // rcx
  unsigned __int64 OldIrql; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v13; // r9
  int v14; // eax
  bool v15; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 528);
  v2 = (_QWORD *)(a1 + 16);
  v3 = *(_QWORD **)(a1 + 16);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v3 != (_QWORD *)(a1 + 16) )
  {
    do
    {
      v5 = v3 - 2;
      v6 = v3;
      v3 = (_QWORD *)*v3;
      if ( *(_WORD *)v5 == 765 )
      {
        if ( *((_DWORD *)v5 + 16) )
          KeBugCheckEx(0x34u, 0xEA3uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        v7 = (_QWORD *)v6[1];
        if ( (_QWORD *)v3[1] != v6 || (_QWORD *)*v7 != v6 )
          __fastfail(3u);
        *v7 = v3;
        v3[1] = v7;
        if ( *(__int64 *)(a1 + 32) > 0x2000000 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
          sub_14028D878(a1, v5[1], -1);
        if ( v5[23] )
        {
          v8 = *(_QWORD *)(v5[7] + 8LL);
          if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v5[7] + 16LL)) )
          {
            v9 = *(struct _KEVENT **)(v8 + 184);
            if ( v9 )
              KeSetEvent(v9, 0, 0);
            _InterlockedDecrement((volatile signed __int32 *)(v8 + 544));
          }
        }
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 704), &LockHandle);
        if ( *((_BYTE *)v5 + 2) )
          sub_14028AD10(a1, *((_DWORD *)v5 + 1) >> 12);
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
              v13 = *((_QWORD *)CurrentPrcb + 4375);
              v14 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
              *(_DWORD *)(v13 + 20) &= v14;
              if ( v15 )
                sub_140418E4C(CurrentPrcb);
            }
          }
        }
        __writecr8(OldIrql);
        sub_14028A78C((char *)v5);
      }
    }
    while ( v3 != v2 );
  }
}
