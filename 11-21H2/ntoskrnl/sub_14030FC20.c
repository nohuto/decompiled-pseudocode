/*
 * XREFs of sub_14030FC20 @ 0x14030FC20
 * Callers:
 *     sub_1407BC0B0 @ 0x1407BC0B0 (sub_1407BC0B0.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_1403106A4 @ 0x1403106A4 (sub_1403106A4.c)
 *     sub_1403106E0 @ 0x1403106E0 (sub_1403106E0.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall sub_14030FC20(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rbp
  ULONG_PTR v4; // rbp
  __int64 v5; // rdx
  unsigned __int8 v6; // di
  struct _KTHREAD *v7; // rdi
  __int64 v8; // r8
  char *v9; // rbx
  __int64 v10; // rdx
  int v11; // r8d
  _QWORD *v12; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = *((_QWORD *)CurrentThread + 23);
  --*((_WORD *)CurrentThread + 243);
  v4 = v3 + 1232;
  ExAcquirePushLockExclusiveEx(v4, 0LL);
  v6 = sub_1403106E0(a1, v5);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1680LL)
                                                     + 284LL));
  _InterlockedOr((volatile signed __int32 *)(a1 + 48), 4u);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1680LL)
                                                       + 284LL));
  sub_1403106A4(a1, v6);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v4);
  v7 = KeGetCurrentThread();
  if ( v4 - qword_140C50630 < 0x8000000000LL )
    v8 = (unsigned int)sub_140287F30(*((_QWORD *)v7 + 23));
  else
    v8 = 0xFFFFFFFFLL;
  _disable();
  v9 = (char *)v7 + 1696;
  v10 = 0LL;
  do
  {
    if ( (*(_QWORD *)v9 & 0x7FFFFFFFFFFFFFFCLL) == (v4 & 0x7FFFFFFFFFFFFFFCLL)
      && v9[18]
      && (*(_DWORD *)v9 & 1) == 0
      && *((_DWORD *)v9 + 2) == (_DWORD)v8 )
    {
      v9[18] = 0;
      if ( *(__int64 *)v9 < 0 )
      {
        *v9 |= 2u;
        _enable();
        sub_14034EE30(v9, v10, v8);
        _disable();
      }
      v11 = *((_DWORD *)v9 + 22);
      *((_DWORD *)v9 + 22) = 0;
      v9[17] = 0;
      *(_QWORD *)v9 = 0LL;
      LOBYTE(v12) = v9[16];
      *((_BYTE *)v7 + 792) |= 1 << (char)v12;
      _enable();
      if ( v11 )
        LOBYTE(v12) = sub_14022B568((ULONG_PTR)v7, v4, v11);
      goto LABEL_14;
    }
    v10 = (unsigned int)(v10 + 1);
    v9 += 96;
  }
  while ( (unsigned int)v10 < 6 );
  LODWORD(v12) = *((_DWORD *)v7 + 30);
  if ( ((unsigned int)v12 & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v7, v4, (unsigned int)v8, 0LL);
  _enable();
LABEL_14:
  if ( (*((_WORD *)CurrentThread + 243))++ == 0xFFFF )
  {
    v12 = (_QWORD *)((char *)CurrentThread + 152);
    if ( (_QWORD *)*v12 != v12 )
      LOBYTE(v12) = KiCheckForKernelApcDelivery();
  }
  return (char)v12;
}
