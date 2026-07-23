/*
 * XREFs of sub_14069CAE8 @ 0x14069CAE8
 * Callers:
 *     sub_14069C820 @ 0x14069C820 (sub_14069C820.c)
 *     sub_1407CB6C0 @ 0x1407CB6C0 (sub_1407CB6C0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14069C9C0 @ 0x14069C9C0 (sub_14069C9C0.c)
 *     sub_14069CC40 @ 0x14069CC40 (sub_14069CC40.c)
 *     sub_14069CE84 @ 0x14069CE84 (sub_14069CE84.c)
 */

__int64 sub_14069CAE8()
{
  __int64 v0; // rsi
  __int64 v1; // r15
  unsigned __int64 v2; // rax
  void *v3; // rbp
  char *v4; // rax
  char *v5; // r14
  int v6; // edx
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v8; // r14
  __int64 v9; // rdi
  struct _KTHREAD *v10; // rax
  bool v11; // zf
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+58h] [rbp+10h]

  v0 = 0LL;
  v1 = *((_QWORD *)KeGetCurrentThread() + 23);
  v2 = sub_140347920(v1, 0x746C6644u);
  v3 = (void *)v2;
  if ( v2 )
  {
    v14 = *(_QWORD *)(v2 + 24);
    v4 = (char *)sub_140347DB0();
    v5 = v4;
    if ( v6 != 999 || HIDWORD(v14) )
    {
      v13 = 0LL;
      if ( (int)sub_14069CC40(v3, &v13) < 0 )
      {
LABEL_14:
        ObfDereferenceObject(v3);
        return v0;
      }
      v0 = v13;
    }
    else
    {
      v0 = sub_14069CE84(v4);
    }
    if ( v0 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v0 + 240), 0x10uLL) <= 0 )
        __fastfail(0xEu);
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 243);
      v8 = (volatile signed __int64 *)(v5 + 120);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v8, 0LL);
      v9 = _InterlockedExchange64((volatile __int64 *)(v1 + 1416), v0 | 0xF);
      if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v8);
      sub_1402AFC00((ULONG_PTR)v8);
      v10 = KeGetCurrentThread();
      v11 = (*((_WORD *)v10 + 243))++ == 0xFFFF;
      if ( v11 && *((struct _KTHREAD **)v10 + 19) != (struct _KTHREAD *)((char *)v10 + 152) )
        KiCheckForKernelApcDelivery();
      if ( v9 )
        sub_14069C9C0((volatile signed __int64 *)(v9 & 0xFFFFFFFFFFFFFFF0uLL), (v9 & 0xF) + 1);
    }
    goto LABEL_14;
  }
  return v0;
}
