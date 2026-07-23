/*
 * XREFs of sub_14053D400 @ 0x14053D400
 * Callers:
 *     <none>
 * Callees:
 *     sub_14024D09C @ 0x14024D09C (sub_14024D09C.c)
 *     sub_14024EBCC @ 0x14024EBCC (sub_14024EBCC.c)
 *     sub_140275F94 @ 0x140275F94 (sub_140275F94.c)
 *     sub_1402768E4 @ 0x1402768E4 (sub_1402768E4.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_14039ED00 @ 0x14039ED00 (sub_14039ED00.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140539A1C @ 0x140539A1C (sub_140539A1C.c)
 */

void __fastcall sub_14053D400(_QWORD *StartContext)
{
  __int64 v1; // r13
  _BYTE *v2; // r12
  unsigned int v4; // ebx
  NTSTATUS v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdi
  int v12; // edx
  _BYTE *v13; // rcx
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v17; // r9
  int v18; // eax
  bool v19; // zf
  unsigned __int64 v20; // r14
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  __int64 v23; // r9
  int v24; // eax
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rdx
  struct _KLOCK_QUEUE_HANDLE WaitBlockArray_8; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A8h] BYREF
  PVOID Object[8]; // [rsp+68h] [rbp-A0h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+A8h] [rbp-60h] BYREF

  v1 = StartContext[4];
  v2 = StartContext + 115;
  Object[2] = StartContext + 115;
  v30 = 0LL;
  Object[0] = StartContext + 102;
  v4 = 0;
  Object[1] = StartContext + 105;
  Object[3] = StartContext + 108;
  Object[4] = StartContext + 111;
  Object[5] = StartContext + 150;
  Object[6] = StartContext + 195;
  memset(&WaitBlockArray_8, 0, sizeof(WaitBlockArray_8));
  while ( 1 )
  {
    v5 = KeWaitForMultipleObjects(7u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray);
    if ( !v5 )
    {
      v4 = 1;
      goto LABEL_17;
    }
    v6 = v5 - 1;
    if ( !v6 )
    {
      v4 = 2;
      goto LABEL_17;
    }
    v7 = v6 - 1;
    if ( !v7 )
    {
      v4 = 4;
      goto LABEL_17;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      v4 = 8;
      goto LABEL_17;
    }
    v9 = v8 - 1;
    if ( !v9 )
    {
      v4 = 16;
      goto LABEL_17;
    }
    v10 = v9 - 1;
    if ( !v10 )
      return;
    if ( v10 == 1 )
    {
      v4 = 32;
      goto LABEL_17;
    }
    if ( !v4 )
      break;
LABEL_17:
    v11 = StartContext[8];
    if ( !v11 )
      KeBugCheckEx(0x34u, 0x563uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( dword_140C49B00 && (_QWORD *)StartContext[156] != StartContext + 156 )
      sub_14039ED00(v4, v1, (__int64)StartContext);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 704), &WaitBlockArray_8);
    if ( sub_14024EBCC(v2, v4) )
    {
LABEL_22:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&WaitBlockArray_8);
      OldIrql = WaitBlockArray_8.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && WaitBlockArray_8.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v17 = *((_QWORD *)CurrentPrcb + 4375);
            v18 = ~(unsigned __int16)(-1LL << (WaitBlockArray_8.OldIrql + 1));
            v19 = (v18 & *(_DWORD *)(v17 + 20)) == 0;
            *(_DWORD *)(v17 + 20) &= v18;
            if ( v19 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
    }
    else
    {
      sub_14024D09C(v13, v12, 1);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&WaitBlockArray_8);
      v20 = WaitBlockArray_8.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v21 = KeGetCurrentIrql();
          if ( v21 <= 0xFu && WaitBlockArray_8.OldIrql <= 0xFu && v21 >= 2u )
          {
            v22 = KeGetCurrentPrcb();
            v23 = *((_QWORD *)v22 + 4375);
            v24 = ~(unsigned __int16)(-1LL << (WaitBlockArray_8.OldIrql + 1));
            v19 = (v24 & *(_DWORD *)(v23 + 20)) == 0;
            *(_DWORD *)(v23 + 20) &= v24;
            if ( v19 )
              sub_140418E4C((__int64)v22);
          }
        }
      }
      __writecr8(v20);
      if ( (int)sub_1402768E4(v1, (__int64)StartContext, v11, &v30) < 0 )
      {
        ++dword_140C49BDC;
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 704), &WaitBlockArray_8);
        *(_BYTE *)(v1 + 985) = 0;
        sub_14024D09C(v2, v4, 0);
        goto LABEL_22;
      }
      v27 = v30;
      *(_BYTE *)(v30 + 128) = 3;
      *(_DWORD *)(v27 + 16) = v4;
      if ( v4 == 8 )
      {
        v28 = v11 + 72;
        goto LABEL_42;
      }
      v28 = v11 + 104;
      if ( v4 == 32 )
        sub_140539A1C(v27, v28);
      else
LABEL_42:
        sub_140275F94((_QWORD *)v27, v28, v25, v26);
    }
  }
}
