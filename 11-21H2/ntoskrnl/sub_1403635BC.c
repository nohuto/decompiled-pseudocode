/*
 * XREFs of sub_1403635BC @ 0x1403635BC
 * Callers:
 *     sub_14023D4C8 @ 0x14023D4C8 (sub_14023D4C8.c)
 *     sub_14023DD4C @ 0x14023DD4C (sub_14023DD4C.c)
 *     sub_140363490 @ 0x140363490 (sub_140363490.c)
 *     sub_140363A64 @ 0x140363A64 (sub_140363A64.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall sub_1403635BC(int *a1)
{
  __int64 v1; // rax
  int v2; // edx
  ULONG_PTR v3; // rdi
  unsigned __int64 v4; // rbx
  volatile LONG *v5; // rcx
  __int64 v6; // rax
  struct _KTHREAD *v7; // rcx
  bool v8; // zf
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v10; // ecx
  __int64 v11; // rbx
  unsigned int v12; // edx
  int v13; // r8d
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  int v16; // edx

  v1 = *((_QWORD *)a1 + 1);
  v2 = *a1;
  v3 = v1 + 24;
  if ( *(_BYTE *)(v1 + 48) )
  {
    v4 = *((unsigned __int8 *)a1 + 4);
    v5 = (volatile LONG *)(v1 + 24);
    if ( v2 == 1 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    else
      ExReleaseSpinLockSharedFromDpcLevel(v5);
    LOBYTE(v6) = dword_140D06B08;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        LOBYTE(v6) = KeGetCurrentIrql();
        if ( (unsigned __int8)v6 <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)v6 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v6 = -1LL << ((unsigned __int8)v4 + 1);
          v15 = *((_QWORD *)CurrentPrcb + 4375);
          v16 = ~(unsigned __int16)v6;
          v8 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
          *(_DWORD *)(v15 + 20) &= v16;
          if ( v8 )
            LOBYTE(v6) = sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v4);
  }
  else
  {
    if ( v2 == 1 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v3);
      CurrentThread = KeGetCurrentThread();
      if ( v3 - qword_140C50630 >= 0x8000000000LL )
        v10 = -1;
      else
        v10 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
      _disable();
      v11 = (__int64)CurrentThread + 1696;
      v12 = 0;
      while ( (*(_QWORD *)v11 & 0x7FFFFFFFFFFFFFFCLL) != (v3 & 0x7FFFFFFFFFFFFFFCLL)
           || !*(_BYTE *)(v11 + 18)
           || (*(_DWORD *)v11 & 1) != 0
           || *(_DWORD *)(v11 + 8) != v10 )
      {
        ++v12;
        v11 += 96LL;
        if ( v12 >= 6 )
          goto LABEL_25;
      }
      *(_BYTE *)(v11 + 18) = 0;
      if ( !v11 )
      {
LABEL_25:
        LODWORD(v6) = *((_DWORD *)CurrentThread + 30);
        if ( (v6 & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v3, v10, 0LL);
        _enable();
        goto LABEL_11;
      }
      if ( *(__int64 *)v11 < 0 )
      {
        *(_BYTE *)v11 |= 2u;
        _enable();
        sub_14034EE30(v11);
        _disable();
      }
      v13 = *(_DWORD *)(v11 + 88);
      *(_DWORD *)(v11 + 88) = 0;
      *(_BYTE *)(v11 + 17) = 0;
      *(_QWORD *)v11 = 0LL;
      LOBYTE(v6) = *(_BYTE *)(v11 + 16);
      *((_BYTE *)CurrentThread + 792) |= 1 << v6;
      _enable();
      if ( v13 )
        LOBYTE(v6) = sub_14022B568((ULONG_PTR)CurrentThread, v3, v13);
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v3, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v3);
      LOBYTE(v6) = sub_1402AFC00(v3);
    }
LABEL_11:
    v7 = KeGetCurrentThread();
    v8 = (*((_WORD *)v7 + 243))++ == 0xFFFF;
    if ( v8 )
    {
      v6 = (__int64)v7 + 152;
      if ( *(_QWORD *)v6 != v6 )
        LOBYTE(v6) = KiCheckForKernelApcDelivery();
    }
  }
  return v6;
}
