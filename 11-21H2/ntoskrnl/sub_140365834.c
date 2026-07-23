/*
 * XREFs of sub_140365834 @ 0x140365834
 * Callers:
 *     sub_14034A490 @ 0x14034A490 (sub_14034A490.c)
 *     sub_140364860 @ 0x140364860 (sub_140364860.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140365AF4 @ 0x140365AF4 (sub_140365AF4.c)
 *     sub_140365B78 @ 0x140365B78 (sub_140365B78.c)
 *     sub_140365BA0 @ 0x140365BA0 (sub_140365BA0.c)
 *     sub_14036EB14 @ 0x14036EB14 (sub_14036EB14.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall sub_140365834(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rax
  __int64 v6; // rbp
  volatile signed __int64 *v9; // rdi
  unsigned __int64 v10; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v12; // ecx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  int v15; // edx
  bool v16; // zf
  __int64 v17; // rbx
  unsigned int v18; // edx
  int v19; // r8d
  struct _KTHREAD *v20; // rcx

  LOWORD(v4) = *(_WORD *)(a3 + 34);
  v6 = a3;
  if ( *(_WORD *)(a3 + 32) != (_WORD)v4 )
  {
    v9 = (volatile signed __int64 *)(a2 + 16);
    v10 = (unsigned __int8)sub_140365AF4(a2 + 16, *(unsigned __int8 *)(a1 + 57));
    sub_140365B78(v6, a2);
    if ( *(_WORD *)(v6 + 32) == *(_WORD *)(v6 + 34) )
      *(_QWORD *)(v6 + 16) = 0LL;
    else
      v6 = sub_140365BA0(a2, v6, 0LL);
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 16));
      LOBYTE(v4) = dword_140D06B08;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          LOBYTE(v4) = KeGetCurrentIrql();
          if ( (unsigned __int8)v4 <= 0xFu && (unsigned __int8)v10 <= 0xFu && (unsigned __int8)v4 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v4 = -1LL << ((unsigned __int8)v10 + 1);
            v14 = *((_QWORD *)CurrentPrcb + 4375);
            v15 = ~(unsigned __int16)v4;
            v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
            *(_DWORD *)(v14 + 20) &= v15;
            if ( v16 )
              LOBYTE(v4) = sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v10);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a2 + 16);
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned __int64)v9 - qword_140C50630 < 0x8000000000LL )
        v12 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
      else
        v12 = -1;
      _disable();
      v17 = (__int64)CurrentThread + 1696;
      v18 = 0;
      while ( (*(_QWORD *)v17 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)v9 & 0x7FFFFFFFFFFFFFFCLL)
           || !*(_BYTE *)(v17 + 18)
           || (*(_DWORD *)v17 & 1) != 0
           || *(_DWORD *)(v17 + 8) != v12 )
      {
        ++v18;
        v17 += 96LL;
        if ( v18 >= 6 )
          goto LABEL_29;
      }
      *(_BYTE *)(v17 + 18) = 0;
      if ( !v17 )
      {
LABEL_29:
        LODWORD(v4) = *((_DWORD *)CurrentThread + 30);
        if ( (v4 & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a2 + 16, v12, 0LL);
        _enable();
        goto LABEL_35;
      }
      if ( *(__int64 *)v17 < 0 )
      {
        *(_BYTE *)v17 |= 2u;
        _enable();
        sub_14034EE30(v17);
        _disable();
      }
      v19 = *(_DWORD *)(v17 + 88);
      *(_DWORD *)(v17 + 88) = 0;
      *(_BYTE *)(v17 + 17) = 0;
      *(_QWORD *)v17 = 0LL;
      LOBYTE(v4) = *(_BYTE *)(v17 + 16);
      *((_BYTE *)CurrentThread + 792) |= 1 << v4;
      _enable();
      if ( v19 )
        LOBYTE(v4) = sub_14022B568((ULONG_PTR)CurrentThread, a2 + 16, v19);
LABEL_35:
      v20 = KeGetCurrentThread();
      v16 = (*((_WORD *)v20 + 243))++ == 0xFFFF;
      if ( v16 )
      {
        v4 = (__int64)v20 + 152;
        if ( *(_QWORD *)v4 != v4 )
          LOBYTE(v4) = KiCheckForKernelApcDelivery();
      }
    }
  }
  if ( v6 )
    LOBYTE(v4) = sub_14036EB14(a1, v6, a2, a4 & 1);
  return v4;
}
