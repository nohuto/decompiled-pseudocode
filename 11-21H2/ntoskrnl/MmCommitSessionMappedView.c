/*
 * XREFs of MmCommitSessionMappedView @ 0x1406A3F90
 * Callers:
 *     <none>
 * Callees:
 *     sub_14026F0F0 @ 0x14026F0F0 (sub_14026F0F0.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1406A4140 @ 0x1406A4140 (sub_1406A4140.c)
 */

__int64 __fastcall MmCommitSessionMappedView(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // rbp
  _QWORD *i; // rdx
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  unsigned int *v11; // rcx
  unsigned int *v12; // rax
  unsigned int *v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // rcx
  int v17; // esi
  bool v18; // zf
  unsigned __int64 v20; // [rsp+60h] [rbp+8h] BYREF

  v3 = a2 + a1;
  if ( v3 <= a1 )
    return 3221225712LL;
  CurrentThread = KeGetCurrentThread();
  v5 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v6 = sub_140313C70((v3 - 1) | 0xFFF);
  v7 = ((v6 - sub_140313C70(v5)) >> 3) + 1;
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4F5E8, 0LL);
  for ( i = qword_140C4F5F0; ; i = (_QWORD *)*i )
  {
    while ( 1 )
    {
      if ( !i )
        KeBugCheckEx(0xD7u, v5, 2uLL, 0LL, 0LL);
      v9 = i[11] & 0xFFFFFFFFFFFFF000uLL;
      if ( v5 < v9 + i[4] )
        break;
      i = (_QWORD *)i[1];
    }
    if ( v5 >= v9 )
      break;
  }
  v10 = i[6];
  if ( !*(_QWORD *)(*(_QWORD *)v10 + 64LL) )
  {
    v11 = (unsigned int *)(*(_QWORD *)v10 + 128LL);
    v20 = i[3] + ((v5 - (i[11] & 0xFFFFFFFFFFFFF000uLL)) >> 12);
    v12 = sub_14026F0F0(v11, &v20);
    if ( v12 )
    {
      v13 = v12;
      v14 = v12[11];
      v15 = *((_QWORD *)v12 + 1) + 8 * v20;
      v16 = v7 + v20;
      v20 = v16;
      if ( v16 <= v14 )
      {
LABEL_12:
        v17 = sub_1406A4140(v12, v15, v7);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4F5E8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&qword_140C4F5E8);
        sub_1402AFC00((ULONG_PTR)&qword_140C4F5E8);
        v18 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
        if ( v18 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
          KiCheckForKernelApcDelivery();
        return v17 == 0 ? 0xC000012D : 0;
      }
      while ( 1 )
      {
        v13 = (unsigned int *)*((_QWORD *)v13 + 2);
        v16 -= (unsigned int)v14;
        v20 = v16;
        if ( !v13 )
          break;
        LODWORD(v14) = v13[11];
        if ( v16 <= (unsigned int)v14 )
          goto LABEL_12;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4F5E8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C4F5E8);
    sub_1402AFC00((ULONG_PTR)&qword_140C4F5E8);
    v18 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v18 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
    return 3221225712LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4F5E8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4F5E8);
  sub_1402AFC00((ULONG_PTR)&qword_140C4F5E8);
  v18 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v18 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
  return 3221225505LL;
}
