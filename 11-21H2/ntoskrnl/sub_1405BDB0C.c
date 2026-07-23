/*
 * XREFs of sub_1405BDB0C @ 0x1405BDB0C
 * Callers:
 *     sub_1405BE81C @ 0x1405BE81C (sub_1405BE81C.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405BCBC4 @ 0x1405BCBC4 (sub_1405BCBC4.c)
 *     sub_1405BDF64 @ 0x1405BDF64 (sub_1405BDF64.c)
 *     sub_140981F58 @ 0x140981F58 (sub_140981F58.c)
 */

char __fastcall sub_1405BDB0C(__int64 a1, _QWORD **a2)
{
  struct _KTHREAD *CurrentThread; // r15
  volatile signed __int64 *v5; // rbp
  KIRQL v6; // al
  _QWORD *v7; // rcx
  _QWORD *v8; // rsi
  unsigned __int64 v9; // r12
  _QWORD *v10; // rax
  __int64 v11; // r10
  _QWORD *v12; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  int v16; // eax
  bool v17; // zf
  struct _KTHREAD *v18; // rdi
  unsigned int v19; // ecx
  __int64 v20; // rbx
  unsigned int v21; // edx
  _QWORD *v22; // rax
  int v23; // r8d
  __int16 *v25[8]; // [rsp+30h] [rbp-68h] BYREF

  memset(v25, 0, sizeof(v25));
  v25[4] = 0LL;
  v25[0] = (__int16 *)a1;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  v5 = (volatile signed __int64 *)(a1 + 192);
  ExAcquirePushLockExclusiveEx(a1 + 192, 0LL);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 200));
  v7 = *a2;
  v8 = 0LL;
  v9 = v6;
  while ( v7 )
  {
    v8 = v7;
    v7 = (_QWORD *)*v7;
  }
  while ( v8 )
  {
    v10 = (_QWORD *)v8[1];
    v11 = (__int64)v8;
    v12 = v8;
    if ( v10 )
    {
      do
      {
        v8 = v10;
        v10 = (_QWORD *)*v10;
      }
      while ( v10 );
    }
    else
    {
      while ( 1 )
      {
        v8 = (_QWORD *)(v8[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v8 || (_QWORD *)*v8 == v12 )
          break;
        v12 = v8;
      }
    }
    sub_1405BCBC4(v11, 9uLL, 0LL, v25);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 200));
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = *((_QWORD *)CurrentPrcb + 4375);
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
        *(_DWORD *)(v15 + 20) &= v16;
        if ( v17 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  sub_1405BDF64(&v25[4]);
  if ( (ULONG_PTR *)a1 != &StartContext )
    sub_140981F58(a1);
  if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 192);
  v18 = KeGetCurrentThread();
  if ( (unsigned __int64)v5 - qword_140C50630 >= 0x8000000000LL )
    v19 = -1;
  else
    v19 = sub_140287F30(*((_QWORD *)v18 + 23));
  _disable();
  v20 = (__int64)v18 + 1696;
  v21 = 0;
  while ( (*(_QWORD *)v20 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)v5 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v20 + 18)
       || (*(_DWORD *)v20 & 1) != 0
       || *(_DWORD *)(v20 + 8) != v19 )
  {
    ++v21;
    v20 += 96LL;
    if ( v21 >= 6 )
      goto LABEL_33;
  }
  *(_BYTE *)(v20 + 18) = 0;
  if ( !v20 )
  {
LABEL_33:
    LODWORD(v22) = *((_DWORD *)v18 + 30);
    if ( ((unsigned int)v22 & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v18, a1 + 192, v19, 0LL);
    _enable();
    goto LABEL_41;
  }
  if ( *(__int64 *)v20 < 0 )
  {
    *(_BYTE *)v20 |= 2u;
    _enable();
    sub_14034EE30(v20);
    _disable();
  }
  v23 = *(_DWORD *)(v20 + 88);
  *(_DWORD *)(v20 + 88) = 0;
  *(_BYTE *)(v20 + 17) = 0;
  *(_QWORD *)v20 = 0LL;
  LOBYTE(v22) = *(_BYTE *)(v20 + 16);
  *((_BYTE *)v18 + 792) |= 1 << (char)v22;
  _enable();
  if ( v23 )
    LOBYTE(v22) = sub_14022B568((ULONG_PTR)v18, a1 + 192, v23);
LABEL_41:
  v17 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v17 )
  {
    v22 = (_QWORD *)((char *)CurrentThread + 152);
    if ( (_QWORD *)*v22 != v22 )
      LOBYTE(v22) = KiCheckForKernelApcDelivery();
  }
  return (char)v22;
}
