/*
 * XREFs of sub_14051314C @ 0x14051314C
 * Callers:
 *     sub_140909214 @ 0x140909214 (sub_140909214.c)
 *     sub_1409095FC @ 0x1409095FC (sub_1409095FC.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_1403CE07C @ 0x1403CE07C (sub_1403CE07C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140457720 @ 0x140457720 (sub_140457720.c)
 */

__int64 __fastcall sub_14051314C(__int64 a1, __int64 a2, __int64 a3, int a4, _DWORD *a5)
{
  __int64 *v8; // r14
  unsigned __int64 v9; // rbx
  __int64 result; // rax
  __int64 v11; // rbp
  char v12; // r15
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v22; // r9
  int v23; // eax
  bool v24; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a5 )
  {
    v8 = (__int64 *)(a5 + 12);
    v9 = (((a5[8] + a5[11]) & 0xFFF) + (unsigned __int64)(unsigned int)a5[10] + 4095) >> 12;
  }
  else
  {
    LODWORD(v9) = a4;
    v8 = 0LL;
  }
  result = sub_1403CE07C(a1, 1, v9);
  v11 = result;
  if ( result )
  {
    v12 = *(_BYTE *)(a1 + 144);
    v13 = result;
    if ( (_DWORD)v9 )
    {
      v14 = (unsigned int)v9;
      do
      {
        v15 = a3;
        if ( a5 )
        {
          v16 = *v8++;
          v15 = v16 << 12;
        }
        else
        {
          a3 += 4096LL;
        }
        *(_QWORD *)v13 = v15;
        if ( a2 )
        {
          v17 = a2 | *(_DWORD *)(v13 + 48) & 0xFFF;
          a2 += 4096LL;
        }
        else
        {
          v17 = *(_QWORD *)(v13 + 48);
        }
        *(_QWORD *)(v13 + 48) = (4LL * (v12 & 1)) | v17 & 0xFFFFFFFFFFFFFFFAuLL | v12 & 1 | 0xA;
        v13 = *(_QWORD *)(v13 + 8);
        --v14;
      }
      while ( v14 );
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 120), &LockHandle);
    v18 = sub_140457720(v11, v9, *(_QWORD *)(a1 + 24));
    *(_DWORD *)(a1 + 32) += v9;
    *(_QWORD *)(a1 + 24) = v18;
    if ( v12 )
      *(_DWORD *)(a1 + 208) += v9;
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
          v22 = *((_QWORD *)CurrentPrcb + 4375);
          v23 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v24 = (v23 & *(_DWORD *)(v22 + 20)) == 0;
          *(_DWORD *)(v22 + 20) &= v23;
          if ( v24 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    return v11;
  }
  return result;
}
