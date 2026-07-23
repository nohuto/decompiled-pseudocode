/*
 * XREFs of sub_14026D048 @ 0x14026D048
 * Callers:
 *     sub_14026D460 @ 0x14026D460 (sub_14026D460.c)
 *     MmUnmapViewInSystemSpace @ 0x1406DF130 (MmUnmapViewInSystemSpace.c)
 *     sub_1406E09F8 @ 0x1406E09F8 (sub_1406E09F8.c)
 *     sub_1406F39F8 @ 0x1406F39F8 (sub_1406F39F8.c)
 *     sub_1406F6A30 @ 0x1406F6A30 (sub_1406F6A30.c)
 *     sub_140700A40 @ 0x140700A40 (sub_140700A40.c)
 *     sub_1407ECCD0 @ 0x1407ECCD0 (sub_1407ECCD0.c)
 *     sub_140832B54 @ 0x140832B54 (sub_140832B54.c)
 *     sub_140832C50 @ 0x140832C50 (sub_140832C50.c)
 *     sub_140857D34 @ 0x140857D34 (sub_140857D34.c)
 *     sub_14085A124 @ 0x14085A124 (sub_14085A124.c)
 *     sub_140922DB4 @ 0x140922DB4 (sub_140922DB4.c)
 *     sub_14092317C @ 0x14092317C (sub_14092317C.c)
 *     sub_140938040 @ 0x140938040 (sub_140938040.c)
 *     sub_1409ABFB0 @ 0x1409ABFB0 (sub_1409ABFB0.c)
 *     sub_1409B6808 @ 0x1409B6808 (sub_1409B6808.c)
 *     sub_1409F26E8 @ 0x1409F26E8 (sub_1409F26E8.c)
 *     sub_1409F352C @ 0x1409F352C (sub_1409F352C.c)
 *     sub_1409FA6E0 @ 0x1409FA6E0 (sub_1409FA6E0.c)
 *     sub_140A05860 @ 0x140A05860 (sub_140A05860.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_140274860 @ 0x140274860 (sub_140274860.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_140285FE0 @ 0x140285FE0 (sub_140285FE0.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1403A111C @ 0x1403A111C (sub_1403A111C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406DDA18 @ 0x1406DDA18 (sub_1406DDA18.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14026D048(ULONG_PTR BugCheckParameter1, int a2)
{
  struct _KTHREAD *CurrentThread; // r13
  ULONG_PTR v4; // r12
  __int64 v5; // rbp
  unsigned int v6; // r15d
  __int64 v7; // rbx
  KIRQL v8; // al
  KIRQL v9; // di
  _QWORD *i; // rbx
  unsigned __int64 v11; // r8
  __int64 v12; // rdx
  void *v13; // r14
  __int64 v14; // rbp
  struct _KTHREAD *v15; // rsi
  unsigned __int64 v16; // rdx
  char *v17; // rdi
  unsigned int v18; // ecx
  int v19; // r8d
  bool v20; // zf
  unsigned __int64 v21; // rdx
  volatile LONG *v22; // rdi
  KIRQL v23; // al
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v28; // r9
  int v29; // eax
  _QWORD v30[27]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v31; // [rsp+110h] [rbp+8h]

  memset(v30, 0, 0x98uLL);
  CurrentThread = KeGetCurrentThread();
  v4 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = sub_14026DFC0(1LL);
  v31 = v5;
  v6 = -1;
  if ( (BugCheckParameter1 & 0x3FFFFFFF) == 0 )
  {
    v22 = (volatile LONG *)((char *)&unk_140C4F618 + 16 * (unsigned __int8)(BugCheckParameter1 >> 30));
    v23 = ExAcquireSpinLockExclusive(v22 + 3);
    i = *(_QWORD **)v22;
    v24 = v23;
    while ( i )
    {
      v25 = i[11] & 0xFFFFFFFFFFFFF000uLL;
      if ( BugCheckParameter1 >= v25 + i[4] )
      {
        i = (_QWORD *)i[1];
      }
      else
      {
        if ( BugCheckParameter1 >= v25 )
        {
          RtlAvlRemoveNode(v22, i);
          --*((_DWORD *)v22 + 2);
          break;
        }
        i = (_QWORD *)*i;
      }
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v22 + 3);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v24 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v28 = *((_QWORD *)CurrentPrcb + 4375);
          v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v24 + 1));
          v20 = (v29 & *(_DWORD *)(v28 + 20)) == 0;
          *(_DWORD *)(v28 + 20) &= v29;
          if ( v20 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v24);
    if ( i )
    {
      v13 = (void *)i[8];
      v14 = *(_QWORD *)i[6];
      goto LABEL_23;
    }
    v5 = v31;
  }
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4F5E8, 0LL);
  v7 = sub_140282AD0(v5);
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v7);
  *(_DWORD *)(v7 + 4) = 0;
  v9 = v8;
  for ( i = qword_140C4F5F0; ; i = (_QWORD *)*i )
  {
    while ( 1 )
    {
      if ( !i )
        KeBugCheckEx(0xD7u, BugCheckParameter1, 1uLL, 0LL, 0LL);
      v11 = i[11] & 0xFFFFFFFFFFFFF000uLL;
      if ( BugCheckParameter1 < v11 + i[4] )
        break;
      i = (_QWORD *)i[1];
    }
    if ( BugCheckParameter1 >= v11 )
      break;
  }
  --dword_140C4F5F8;
  RtlAvlRemoveNode(&qword_140C4F5F0, i);
  LOBYTE(v12) = v9;
  sub_14030FA80(v5, v12);
  v13 = (void *)i[8];
  v14 = *(_QWORD *)i[6];
  v30[0] = v14;
  sub_140285FE0(v30, i + 9, 4LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4F5E8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4F5E8);
  v15 = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140C4F5E8 - qword_140C50630 < 0x8000000000LL )
    v6 = sub_140287F30(*((_QWORD *)v15 + 23));
  _disable();
  v16 = (unsigned __int64)&qword_140C4F5E8 & 0x7FFFFFFFFFFFFFFCLL;
  v17 = (char *)v15 + 1696;
  v18 = 0;
  while ( (*(_QWORD *)v17 & 0x7FFFFFFFFFFFFFFCLL) != v16
       || !v17[18]
       || (*(_DWORD *)v17 & 1) != 0
       || *((_DWORD *)v17 + 2) != v6 )
  {
    ++v18;
    v17 += 96;
    if ( v18 >= 6 )
      goto LABEL_38;
  }
  v17[18] = 0;
  if ( v17 )
  {
    if ( *(__int64 *)v17 < 0 )
    {
      *v17 |= 2u;
      _enable();
      sub_14034EE30(v17, v16, 0x7FFFFFFFFFFFFFFCLL);
      _disable();
    }
    v19 = *((_DWORD *)v17 + 22);
    *((_DWORD *)v17 + 22) = 0;
    v17[17] = 0;
    *(_QWORD *)v17 = 0LL;
    *((_BYTE *)v15 + 792) |= 1 << v17[16];
    _enable();
    if ( v19 )
      sub_14022B568((ULONG_PTR)v15, (__int64)&qword_140C4F5E8, v19);
    goto LABEL_20;
  }
LABEL_38:
  if ( (*((_DWORD *)v15 + 30) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v15, (ULONG_PTR)&qword_140C4F5E8, v6, 0LL);
  _enable();
LABEL_20:
  v20 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v20 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
LABEL_23:
  if ( v13 )
    ObfDereferenceObject(v13);
  if ( (i[7] & 1) != 0 )
    _InterlockedAdd((volatile signed __int32 *)(v14 + 92), 0xFFFFFFFF);
  if ( a2 )
    sub_140274860(i, v31);
  if ( *((_DWORD *)i + 24) != 0x7FFFF )
    sub_1406DDA18(v14);
  v21 = ((i[4] >> 12) + 15LL) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (i[7] & 0x18) == 0x18 )
    sub_1402BB6D0(&unk_140C52F40, v4, (unsigned int)v21);
  else
    sub_1403A111C(i[11] & 0xFFFFFFFFFFFFF000uLL, v21 << 12, 9LL);
  ExFreePoolWithTag(i, 0);
}
