/*
 * XREFs of sub_1403C7DE0 @ 0x1403C7DE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14024D09C @ 0x14024D09C (sub_14024D09C.c)
 *     sub_14024EBCC @ 0x14024EBCC (sub_14024EBCC.c)
 *     sub_140275F94 @ 0x140275F94 (sub_140275F94.c)
 *     sub_140276728 @ 0x140276728 (sub_140276728.c)
 *     sub_1402768E4 @ 0x1402768E4 (sub_1402768E4.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_14029E260 @ 0x14029E260 (sub_14029E260.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_14039ED00 @ 0x14039ED00 (sub_14039ED00.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall sub_1403C7DE0(_QWORD *StartContext)
{
  _BYTE *v1; // r13
  unsigned int v2; // ebx
  char v4; // r12
  char v5; // si
  NTSTATUS v6; // eax
  int v7; // eax
  int v8; // eax
  signed __int64 v9; // rax
  unsigned __int64 i; // rcx
  signed __int64 v11; // rtt
  __int64 v12; // r14
  int v13; // edx
  _BYTE *v14; // rcx
  unsigned __int64 OldIrql; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rdx
  _QWORD *v20; // rdx
  int v21; // eax
  int v22; // eax
  unsigned __int64 v23; // rsi
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r10
  __int64 v26; // r9
  int v27; // eax
  bool v28; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v31; // r9
  int v32; // eax
  struct _KLOCK_QUEUE_HANDLE WaitBlockArray_8; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A8h] BYREF
  PVOID v35; // [rsp+68h] [rbp-A0h]
  PVOID Object[7]; // [rsp+70h] [rbp-98h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+A8h] [rbp-60h] BYREF

  v34 = 0LL;
  v35 = StartContext + 158;
  v1 = StartContext + 115;
  Object[2] = StartContext + 115;
  Object[0] = StartContext + 102;
  v2 = 0;
  Object[5] = StartContext + 158;
  Object[1] = StartContext + 105;
  Object[3] = StartContext + 108;
  v4 = 0;
  Object[4] = StartContext + 111;
  memset(&WaitBlockArray_8, 0, sizeof(WaitBlockArray_8));
  while ( 1 )
  {
    v5 = 0;
    if ( v4 )
      sub_140276728((__int64)StartContext);
    v6 = KeWaitForMultipleObjects(6u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray);
    if ( !v6 )
    {
      v2 = 1;
      v5 = 1;
      goto LABEL_8;
    }
    v7 = v6 - 1;
    if ( !v7 )
    {
      v2 = 2;
LABEL_23:
      v5 = 1;
      goto LABEL_8;
    }
    v8 = v7 - 1;
    if ( v8 )
      break;
    v2 = 4;
LABEL_8:
    _m_prefetchw(StartContext + 154);
    v9 = StartContext[154];
    for ( i = v9 + 1; ; i = v9 + 1 )
    {
      if ( i <= 1 )
      {
        if ( i != 1 )
          __fastfail(0xEu);
        KeWaitForSingleObject(v35, Executive, 0, 0, 0LL);
        return;
      }
      v11 = v9;
      v9 = _InterlockedCompareExchange64(StartContext + 154, i, v9);
      if ( v11 == v9 )
        break;
    }
    v12 = StartContext[10];
    v4 = 1;
    if ( !v12 )
      KeBugCheckEx(0x34u, 0x7A9uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( dword_140C49B00 )
    {
      if ( (__int64 *)qword_140C49BF0 != &qword_140C49BF0 )
      {
        v20 = (_QWORD *)*((_QWORD *)qword_140D06C40 + 1);
        if ( StartContext == v20 )
          sub_14039ED00(v2, (__int64)v20, 0LL);
      }
    }
    sub_14029E260((__int64)StartContext, v5);
    KeAcquireInStackQueuedSpinLock(StartContext + 88, &WaitBlockArray_8);
    if ( !sub_14024EBCC(v1, v2) )
    {
      sub_14024D09C(v14, v13, 1);
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
            v31 = *((_QWORD *)CurrentPrcb + 4375);
            v32 = ~(unsigned __int16)(-1LL << (WaitBlockArray_8.OldIrql + 1));
            v28 = (v32 & *(_DWORD *)(v31 + 20)) == 0;
            *(_DWORD *)(v31 + 20) &= v32;
            if ( v28 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      if ( (int)sub_1402768E4((__int64)StartContext, 0LL, v12, &v34) >= 0 )
      {
        v18 = v34;
        v19 = v12 + 72;
        *(_BYTE *)(v34 + 128) = 3;
        *(_DWORD *)(v18 + 16) = v2;
        if ( v2 != 8 )
          v19 = v12 + 104;
        sub_140275F94((_QWORD *)v18, v19, v16, v17);
        continue;
      }
      ++dword_140C49BDC;
      KeAcquireInStackQueuedSpinLock(StartContext + 88, &WaitBlockArray_8);
      *((_BYTE *)StartContext + 985) = 0;
      sub_14024D09C(v1, v2, 0);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&WaitBlockArray_8);
    v23 = WaitBlockArray_8.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v24 = KeGetCurrentIrql();
        if ( v24 <= 0xFu && WaitBlockArray_8.OldIrql <= 0xFu && v24 >= 2u )
        {
          v25 = KeGetCurrentPrcb();
          v26 = *((_QWORD *)v25 + 4375);
          v27 = ~(unsigned __int16)(-1LL << (WaitBlockArray_8.OldIrql + 1));
          v28 = (v27 & *(_DWORD *)(v26 + 20)) == 0;
          *(_DWORD *)(v26 + 20) &= v27;
          if ( v28 )
            sub_140418E4C(v25);
        }
      }
    }
    __writecr8(v23);
  }
  v21 = v8 - 1;
  if ( !v21 )
  {
    v2 = 8;
    goto LABEL_23;
  }
  v22 = v21 - 1;
  if ( !v22 )
  {
    v2 = 16;
    goto LABEL_23;
  }
  if ( v22 != 1 && v2 )
    goto LABEL_8;
}
