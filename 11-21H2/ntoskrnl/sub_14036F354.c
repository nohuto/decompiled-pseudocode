/*
 * XREFs of sub_14036F354 @ 0x14036F354
 * Callers:
 *     sub_14036F04C @ 0x14036F04C (sub_14036F04C.c)
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
 */

char __fastcall sub_14036F354(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char v4; // bl
  struct _KTHREAD *v5; // rsi
  unsigned int v6; // ecx
  __int64 v7; // rbx
  unsigned int v8; // edx
  int v9; // r8d
  _QWORD *v10; // rax
  struct _KTHREAD *v11; // rcx
  bool v12; // zf
  unsigned __int64 v13; // rsi
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v15; // r8

  if ( (_DWORD)a2 )
  {
    v13 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)BugCheckParameter2);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)BugCheckParameter2);
    LOBYTE(v10) = dword_140D06B08;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        LOBYTE(v10) = KeGetCurrentIrql();
        if ( (unsigned __int8)v10 <= 0xFu && (unsigned __int8)v13 <= 0xFu && (unsigned __int8)v10 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v15 = *((_QWORD *)CurrentPrcb + 4375);
          LODWORD(v10) = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v12 = ((unsigned int)v10 & *(_DWORD *)(v15 + 20)) == 0;
          *(_DWORD *)(v15 + 20) &= (unsigned int)v10;
          if ( v12 )
            LOBYTE(v10) = sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v13);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 243);
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, a2);
    v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v4 & 2) != 0 && (v4 & 4) == 0 )
      ExfTryToWakePushLock(BugCheckParameter2);
    v5 = KeGetCurrentThread();
    if ( BugCheckParameter2 - qword_140C50630 < 0x8000000000LL )
      v6 = sub_140287F30(*((_QWORD *)v5 + 23));
    else
      v6 = -1;
    _disable();
    v7 = (__int64)v5 + 1696;
    v8 = 0;
    while ( (*(_QWORD *)v7 & 0x7FFFFFFFFFFFFFFCLL) != (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v7 + 18)
         || (*(_DWORD *)v7 & 1) != 0
         || *(_DWORD *)(v7 + 8) != v6 )
    {
      ++v8;
      v7 += 96LL;
      if ( v8 >= 6 )
        goto LABEL_19;
    }
    *(_BYTE *)(v7 + 18) = 0;
    if ( v7 )
    {
      if ( *(__int64 *)v7 < 0 )
      {
        *(_BYTE *)v7 |= 2u;
        _enable();
        sub_14034EE30(v7);
        _disable();
      }
      v9 = *(_DWORD *)(v7 + 88);
      *(_DWORD *)(v7 + 88) = 0;
      *(_BYTE *)(v7 + 17) = 0;
      *(_QWORD *)v7 = 0LL;
      LOBYTE(v10) = *(_BYTE *)(v7 + 16);
      *((_BYTE *)v5 + 792) |= 1 << (char)v10;
      _enable();
      if ( v9 )
        LOBYTE(v10) = sub_14022B568((ULONG_PTR)v5, BugCheckParameter2, v9);
      goto LABEL_15;
    }
LABEL_19:
    LODWORD(v10) = *((_DWORD *)v5 + 30);
    if ( ((unsigned int)v10 & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v5, BugCheckParameter2, v6, 0LL);
    _enable();
LABEL_15:
    v11 = KeGetCurrentThread();
    v12 = (*((_WORD *)v11 + 243))++ == 0xFFFF;
    if ( v12 )
    {
      v10 = (_QWORD *)((char *)v11 + 152);
      if ( (_QWORD *)*v10 != v10 )
        LOBYTE(v10) = KiCheckForKernelApcDelivery();
    }
  }
  return (char)v10;
}
