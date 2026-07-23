/*
 * XREFs of WbGetWarbirdEncryptionSegment @ 0x1407D26E0
 * Callers:
 *     WbGetInitializedEncryptionSegment @ 0x1407D2550 (WbGetInitializedEncryptionSegment.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     sub_1407D2374 @ 0x1407D2374 (sub_1407D2374.c)
 *     WbAddWarbirdEncryptionSegment @ 0x1407D2408 (WbAddWarbirdEncryptionSegment.c)
 *     sub_1407D2850 @ 0x1407D2850 (sub_1407D2850.c)
 *     sub_1407D2884 @ 0x1407D2884 (sub_1407D2884.c)
 */

__int64 __fastcall WbGetWarbirdEncryptionSegment(__int64 a1, __int64 a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v4; // rbx
  unsigned __int64 v8; // rdi
  int v9; // edi
  struct _KTHREAD *v10; // rax
  bool v11; // zf
  int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v16; // [rsp+20h] [rbp-10h] BYREF
  char v17; // [rsp+70h] [rbp+40h] BYREF
  __int64 v18; // [rsp+88h] [rbp+58h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = (signed __int64 *)(a1 + 176);
  v18 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v16 = 0LL;
  v8 = KeAbPreAcquire(a1 + 176, 0LL);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0LL, v8, (__int64)v4);
  if ( v8 )
    *(_BYTE *)(v8 + 18) = 1;
  v9 = sub_1407D2884(a1, a2, &v18, &v17);
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  v10 = KeGetCurrentThread();
  v11 = v10->SpecialApcDisable++ == -1;
  if ( v11 && ($C71981A45BEB2B45F82C232A7085991E *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
    KiCheckForKernelApcDelivery();
  if ( v9 == -1073741198 )
  {
    v12 = sub_1407D2374(a2, &v18);
    v13 = v18;
    v9 = v12;
    if ( v12 < 0 )
      goto LABEL_17;
    v9 = WbAddWarbirdEncryptionSegment(a1, v18, &v16);
    if ( v9 < 0 )
      goto LABEL_17;
    v14 = v16;
    if ( v16 )
    {
      sub_1407D2850(v13);
      v13 = v14;
    }
  }
  else
  {
    v13 = v18;
    if ( v9 < 0 )
      goto LABEL_17;
  }
  if ( a3 )
  {
    *a3 = v13;
    v13 = 0LL;
  }
LABEL_17:
  sub_1407D2850(v13);
  sub_1407D2850(v16);
  return (unsigned int)v9;
}
