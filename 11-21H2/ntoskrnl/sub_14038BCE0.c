/*
 * XREFs of sub_14038BCE0 @ 0x14038BCE0
 * Callers:
 *     sub_140A4A768 @ 0x140A4A768 (sub_140A4A768.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_14038BF58 @ 0x14038BF58 (sub_14038BF58.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1409977F0 @ 0x1409977F0 (sub_1409977F0.c)
 *     sub_140A4ADB0 @ 0x140A4ADB0 (sub_140A4ADB0.c)
 */

int __fastcall sub_14038BCE0(__int64 a1, __int64 a2)
{
  int v2; // r15d
  _QWORD **v3; // r14
  _QWORD *v5; // rax
  int v6; // ebx
  int v7; // ecx
  _BYTE *v8; // rax
  _QWORD *v9; // rsi
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  unsigned __int64 OldIrql; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  int v16; // eax
  bool v17; // zf
  __int16 v19; // [rsp+48h] [rbp-49h] BYREF
  char v20; // [rsp+4Ah] [rbp-47h]
  char v21; // [rsp+4Bh] [rbp-46h]
  int v22; // [rsp+4Ch] [rbp-45h]
  _QWORD v23[2]; // [rsp+50h] [rbp-41h] BYREF
  _BYTE v24[4]; // [rsp+60h] [rbp-31h] BYREF
  int v25; // [rsp+64h] [rbp-2Dh]
  _QWORD v26[2]; // [rsp+68h] [rbp-29h] BYREF
  int v27; // [rsp+78h] [rbp-19h]
  int v28; // [rsp+7Ch] [rbp-15h]
  _BYTE v29[4]; // [rsp+80h] [rbp-11h] BYREF
  int v30; // [rsp+84h] [rbp-Dh]
  _QWORD v31[2]; // [rsp+88h] [rbp-9h] BYREF
  int v32; // [rsp+98h] [rbp+7h]
  int v33; // [rsp+9Ch] [rbp+Bh]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A0h] [rbp+Fh] BYREF
  PVOID Object[2]; // [rsp+B8h] [rbp+27h] BYREF

  v2 = *(_DWORD *)(a2 + 4);
  v3 = (_QWORD **)(a2 + 24);
  v21 = 0;
  v5 = *(_QWORD **)(a2 + 24);
  v6 = 0;
  v24[1] = 0;
  v7 = 0;
  v24[3] = 0;
  v28 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v29[1] = 0;
  v29[3] = 0;
  v33 = 0;
  while ( v5 != v3 )
  {
    v5 = (_QWORD *)*v5;
    ++v7;
  }
  v19 = 1;
  v23[1] = v23;
  v23[0] = v23;
  v31[1] = v31;
  v31[0] = v31;
  v26[1] = v26;
  v26[0] = v26;
  *(_QWORD *)(a1 + 24) = &v19;
  *(_QWORD *)(a1 + 32) = v29;
  *(_QWORD *)(a1 + 40) = v24;
  Object[0] = &v19;
  v8 = v29;
  Object[1] = v29;
  v20 = 6;
  v22 = 0;
  v29[0] = 5;
  v29[2] = 8;
  v30 = v7;
  v32 = v2;
  v24[0] = 5;
  v24[2] = 8;
  v25 = 0;
  v27 = v2;
  if ( v2 > 0 )
  {
    do
    {
      LODWORD(v8) = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
      if ( *(int *)(a1 + 448) < 0 )
        break;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)qword_140C22750 + 1, &LockHandle);
      v9 = *v3;
      v10 = (_QWORD *)**v3;
      if ( (_QWORD **)(*v3)[1] == v3 && (_QWORD *)v10[1] == v9 )
      {
        *v3 = v10;
        v10[1] = v3;
        v11 = *(_QWORD **)(a1 + 440);
        if ( *v11 == a1 + 432 )
          continue;
      }
      __fastfail(3u);
      v9[1] = v11;
      *v9 = a1 + 432;
      *v11 = v9;
      *(_QWORD *)(a1 + 440) = v9;
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
            v15 = *((_QWORD *)CurrentPrcb + 4375);
            v16 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
            *(_DWORD *)(v15 + 20) &= v16;
            if ( v17 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      --v2;
      ++v6;
      LODWORD(v8) = (unsigned __int8)sub_14038BF58(v9) ? sub_1409977F0(a1, v9) : (unsigned int)sub_140A4ADB0(a1, v9);
      if ( (dword_140C22278 & 0x80000) != 0 )
      {
        while ( v6 > 0 )
        {
          LODWORD(v8) = KeWaitForSingleObject(v24, Executive, 0, 0, 0LL);
          --v6;
        }
      }
    }
    while ( v2 > 0 );
    while ( v6 > 0 )
    {
      LODWORD(v8) = KeWaitForSingleObject(v24, Executive, 0, 0, 0LL);
      --v6;
    }
  }
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  return (int)v8;
}
