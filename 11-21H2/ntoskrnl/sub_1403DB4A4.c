/*
 * XREFs of sub_1403DB4A4 @ 0x1403DB4A4
 * Callers:
 *     sub_14085EFD0 @ 0x14085EFD0 (sub_14085EFD0.c)
 *     sub_1409A15B0 @ 0x1409A15B0 (sub_1409A15B0.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14036B2A4 @ 0x14036B2A4 (sub_14036B2A4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14071F674 @ 0x14071F674 (sub_14071F674.c)
 */

__int64 __fastcall sub_1403DB4A4(ULONG_PTR BugCheckParameter2, char a2)
{
  unsigned __int64 v4; // r13
  _QWORD *i; // r14
  __int64 v6; // rsi
  KIRQL v7; // al
  int v8; // ecx
  unsigned __int64 v9; // r12
  int v10; // ecx
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v12; // ecx
  __int64 v13; // rbx
  unsigned int v14; // edx
  __int64 result; // rax
  int v16; // r8d
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v19; // r9
  int v20; // eax
  bool v21; // zf

  sub_14071F674();
  if ( *(_BYTE *)(BugCheckParameter2 + 8) != a2 )
  {
    v4 = MEMORY[0xFFFFF78000000008];
    for ( i = *(_QWORD **)(BugCheckParameter2 + 16); i != (_QWORD *)(BugCheckParameter2 + 16); i = (_QWORD *)*i )
    {
      v6 = i[13];
      v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6);
      v8 = *(_DWORD *)(v6 + 8);
      v9 = v7;
      if ( a2 )
      {
        v10 = v8 | 2;
        *(_DWORD *)(v6 + 8) = v10;
        if ( (v10 & 1) == 0 )
          ++*(_DWORD *)(v6 + 120);
        *(_QWORD *)(v6 + 24) = v4;
      }
      else if ( (v8 & 2) != 0 )
      {
        sub_14036B2A4(v6, v4, 1);
        *(_DWORD *)(v6 + 8) &= ~2u;
      }
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v6);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v19 = *((_QWORD *)CurrentPrcb + 4375);
            v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
            v21 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
            *(_DWORD *)(v19 + 20) &= v20;
            if ( v21 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v9);
    }
    *(_BYTE *)(BugCheckParameter2 + 8) = a2;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  CurrentThread = KeGetCurrentThread();
  if ( BugCheckParameter2 - qword_140C50630 >= 0x8000000000LL )
    v12 = -1;
  else
    v12 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
  _disable();
  v13 = (__int64)CurrentThread + 1696;
  v14 = 0;
  while ( (*(_QWORD *)v13 & 0x7FFFFFFFFFFFFFFCLL) != (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v13 + 18)
       || (*(_DWORD *)v13 & 1) != 0
       || *(_DWORD *)(v13 + 8) != v12 )
  {
    ++v14;
    v13 += 96LL;
    if ( v14 >= 6 )
      goto LABEL_21;
  }
  *(_BYTE *)(v13 + 18) = 0;
  if ( !v13 )
  {
LABEL_21:
    result = *((unsigned int *)CurrentThread + 30);
    if ( (result & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, v12, 0LL);
    _enable();
    return result;
  }
  if ( *(__int64 *)v13 < 0 )
  {
    *(_BYTE *)v13 |= 2u;
    _enable();
    sub_14034EE30(v13);
    _disable();
  }
  v16 = *(_DWORD *)(v13 + 88);
  *(_DWORD *)(v13 + 88) = 0;
  *(_BYTE *)(v13 + 17) = 0;
  *(_QWORD *)v13 = 0LL;
  result = *(unsigned __int8 *)(v13 + 16);
  *((_BYTE *)CurrentThread + 792) |= 1 << result;
  _enable();
  if ( v16 )
    return sub_14022B568((ULONG_PTR)CurrentThread, BugCheckParameter2, v16);
  return result;
}
