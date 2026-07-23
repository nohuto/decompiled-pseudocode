/*
 * XREFs of sub_14053DDB8 @ 0x14053DDB8
 * Callers:
 *     sub_14053D880 @ 0x14053D880 (sub_14053D880.c)
 *     sub_14053E098 @ 0x14053E098 (sub_14053E098.c)
 * Callees:
 *     sub_140275338 @ 0x140275338 (sub_140275338.c)
 *     sub_140276758 @ 0x140276758 (sub_140276758.c)
 *     sub_14027FC48 @ 0x14027FC48 (sub_14027FC48.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_14053DDB8(_QWORD **a1, __int64 a2)
{
  _QWORD *i; // rcx
  _QWORD *v5; // rbx
  __int64 v6; // r8
  int v7; // eax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  int v12; // eax
  bool v13; // zf
  __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  __int64 v18; // r9
  int v19; // eax
  __int64 result; // rax
  unsigned __int64 v21; // rbx
  struct _KPRCB *v22; // r9
  __int64 v23; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-40h] BYREF
  __int128 Object; // [rsp+48h] [rbp-28h] BYREF
  __int128 v26; // [rsp+58h] [rbp-18h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Object = 0LL;
  v26 = 0LL;
LABEL_2:
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 704), &LockHandle);
  for ( i = *a1; i != a1; i = (_QWORD *)*i )
  {
    v5 = i - 17;
    if ( (i[2] & 0x800) == 0 )
    {
      if ( sub_14027FC48(*(_QWORD *)((v5[12] & 0xFFFFFFFFFFFFFFF0uLL) + 0x28)) != *(_QWORD *)(a2 + 8) )
        KeBugCheckEx(0x34u, 0x30CuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      if ( (_QWORD *)v5[28] != v5 + 28 )
        goto LABEL_10;
      v7 = *((_DWORD *)v5 + 38);
      if ( (v7 & 0x8000) != 0 )
      {
        *((_DWORD *)v5 + 38) = v7 & 0xFFFF7FFF;
LABEL_10:
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
              v11 = *((_QWORD *)CurrentPrcb + 4375);
              v12 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
              *(_DWORD *)(v11 + 20) &= v12;
              if ( v13 )
                sub_140418E4C((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(OldIrql);
        KeDelayExecutionThread(0, 0, &stru_140C0CAC0);
        goto LABEL_2;
      }
      if ( (v7 & 0x20) != 0 || *((_DWORD *)v5 + 1) || *((_DWORD *)v5 + 28) )
      {
        *((_DWORD *)v5 + 38) = v7 | 0x10000;
        WORD4(Object) = 0;
        HIDWORD(Object) = 0;
        *((_QWORD *)&v26 + 1) = &v26;
        *(_QWORD *)&v26 = &v26;
        BYTE10(Object) = 6;
        *(_QWORD *)&Object = v5[34];
        if ( byte_140C54C58 == 1 )
          v14 = v5[74];
        else
          v14 = 0LL;
        LOBYTE(v6) = 1;
        v5[34] = (char *)&Object + 1;
        sub_140276758((_BYTE *)a2, v14, v6, 1);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v15 = LockHandle.OldIrql;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v16 = KeGetCurrentIrql();
            if ( v16 <= 0xFu && LockHandle.OldIrql <= 0xFu && v16 >= 2u )
            {
              v17 = KeGetCurrentPrcb();
              v18 = *((_QWORD *)v17 + 4375);
              v19 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v13 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
              *(_DWORD *)(v18 + 20) &= v19;
              if ( v13 )
                sub_140418E4C((__int64)v17);
            }
          }
        }
        __writecr8(v15);
        KeWaitForSingleObject((char *)&Object + 8, Executive, 0, 0, 0LL);
      }
      else
      {
        sub_140275338(v5, 0LL, &LockHandle, 0, 0LL);
      }
      goto LABEL_2;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)dword_140D06B08;
  v21 = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v22 = KeGetCurrentPrcb();
        v23 = *((_QWORD *)v22 + 4375);
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v13 = ((unsigned int)result & *(_DWORD *)(v23 + 20)) == 0;
        *(_DWORD *)(v23 + 20) &= result;
        if ( v13 )
          result = sub_140418E4C((__int64)v22);
      }
    }
  }
  __writecr8(v21);
  return result;
}
