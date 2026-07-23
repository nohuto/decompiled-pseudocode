/*
 * XREFs of sub_1402287C8 @ 0x1402287C8
 * Callers:
 *     sub_140227ED0 @ 0x140227ED0 (sub_140227ED0.c)
 *     sub_140284A20 @ 0x140284A20 (sub_140284A20.c)
 *     sub_140352D04 @ 0x140352D04 (sub_140352D04.c)
 *     sub_1403C3290 @ 0x1403C3290 (sub_1403C3290.c)
 * Callees:
 *     sub_140228AA0 @ 0x140228AA0 (sub_140228AA0.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1402287C8(volatile signed __int32 *a1, unsigned int a2)
{
  volatile signed __int32 *v2; // r13
  char v3; // r14
  volatile signed __int32 *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rdi
  int v7; // r10d
  __int64 v8; // rbx
  volatile signed __int32 *v9; // r11
  unsigned __int8 CurrentIrql; // r15
  volatile signed __int32 *v11; // r14
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  _QWORD *v15; // rbx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v19; // r9
  int v20; // eax
  bool v21; // zf
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // [rsp+20h] [rbp-69h]
  unsigned int v27; // [rsp+28h] [rbp-61h]
  volatile signed __int32 *v28; // [rsp+30h] [rbp-59h]
  volatile signed __int32 *v29; // [rsp+40h] [rbp-49h]
  volatile signed __int32 *v30; // [rsp+48h] [rbp-41h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-39h] BYREF
  _OWORD v32[2]; // [rsp+68h] [rbp-21h] BYREF
  __int128 v33; // [rsp+88h] [rbp-1h]
  __int64 v34; // [rsp+98h] [rbp+Fh]
  int v35; // [rsp+F0h] [rbp+67h]
  int v37; // [rsp+100h] [rbp+77h] BYREF
  int v38; // [rsp+108h] [rbp+7Fh]

  v34 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v28 = 0LL;
  v2 = 0LL;
  memset(v32, 0, sizeof(v32));
  v26 = 0LL;
  v3 = a2;
  v4 = a1;
  v33 = 0LL;
  v27 = *(_DWORD *)(sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x88000000000LL) >> 4)) + 8);
  v6 = sub_1402CCC50(128LL, v5);
  v7 = v3 & 1;
  v38 = v3 & 2;
  v35 = v7;
  v8 = 0LL;
  do
  {
    v9 = v2;
    v30 = *(volatile signed __int32 **)v4;
    v29 = v2;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v13 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v13 + 20) |= (-1LL << (CurrentIrql + 1)) & 4;
    }
    v37 = 0;
    if ( _interlockedbittestandset64(v4 + 6, 0x3FuLL) )
    {
      do
      {
        do
          sub_1402F32E0(&v37);
        while ( *((__int64 *)v4 + 3) < 0 );
      }
      while ( _interlockedbittestandset64(v4 + 6, 0x3FuLL) );
      v8 = v26;
      v9 = v2;
      v7 = v35;
    }
    if ( !v38 )
    {
      v14 = *((_QWORD *)v4 + 3) & 0xC000000000000000uLL | 1;
      *((_WORD *)v4 + 16) = 1;
      *((_QWORD *)v4 + 3) = v14;
    }
    if ( !v7 && (*((_BYTE *)v4 + 35) & 0x10) != 0 )
    {
      v26 = ++v8;
      v2 = v4;
      *((_BYTE *)v4 + 34) = *((_BYTE *)v4 + 34) & 0xF8 | 5;
      v11 = v4;
      *((_WORD *)v4 + 16) = 0;
      *((_QWORD *)v4 + 3) &= 0xC000000000000000uLL;
      *((_QWORD *)v4 + 1) = -8LL;
      if ( v9 )
        v2 = v29;
      *((_QWORD *)v4 + 2) = v6;
      *(_QWORD *)v4 = v28;
      v28 = v4;
    }
    else
    {
      *((_WORD *)v4 + 16) = 0;
      *((_QWORD *)v4 + 3) &= 0xC000000000000000uLL;
      sub_1402C6EB0(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v4 + 0x88000000000LL) >> 4));
      v11 = v28;
      ++*(_QWORD *)&v32[0];
      *(_QWORD *)&v33 = v33 + 1;
    }
    _InterlockedAnd64((volatile signed __int64 *)v4 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v17 = KeGetCurrentIrql();
        if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v19 = *((_QWORD *)CurrentPrcb + 4375);
          v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v21 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
          *(_DWORD *)(v19 + 20) &= v20;
          if ( v21 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    v7 = v35;
    v4 = v30;
  }
  while ( v30 );
  if ( v8 )
  {
    v15 = (_QWORD *)(qword_140C506E0 + 120LL * v27);
    KeAcquireInStackQueuedSpinLock(v15 + 10, &LockHandle);
    *(_QWORD *)v2 = v15[11];
    v15[9] += v26;
    v15[11] = v11;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v22 = KeGetCurrentIrql();
        if ( v22 <= 0xFu && LockHandle.OldIrql <= 0xFu && v22 >= 2u )
        {
          v23 = KeGetCurrentPrcb();
          v24 = *((_QWORD *)v23 + 4375);
          v25 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v21 = (v25 & *(_DWORD *)(v24 + 20)) == 0;
          *(_DWORD *)(v24 + 20) &= v25;
          if ( v21 )
            sub_140418E4C(v23);
        }
      }
    }
    __writecr8(OldIrql);
  }
  return sub_140228AA0(v32, (unsigned int)(2 * v35), a2);
}
