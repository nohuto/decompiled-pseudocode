/*
 * XREFs of sub_14030EA70 @ 0x14030EA70
 * Callers:
 *     sub_140201E8C @ 0x140201E8C (sub_140201E8C.c)
 *     sub_14024CB6C @ 0x14024CB6C (sub_14024CB6C.c)
 *     sub_1402E67E8 @ 0x1402E67E8 (sub_1402E67E8.c)
 *     sub_14030E7C0 @ 0x14030E7C0 (sub_14030E7C0.c)
 *     sub_140594C08 @ 0x140594C08 (sub_140594C08.c)
 *     sub_1405AA214 @ 0x1405AA214 (sub_1405AA214.c)
 *     sub_1405B4EA0 @ 0x1405B4EA0 (sub_1405B4EA0.c)
 *     sub_1406B42F4 @ 0x1406B42F4 (sub_1406B42F4.c)
 *     sub_1407BA750 @ 0x1407BA750 (sub_1407BA750.c)
 *     sub_1407BB560 @ 0x1407BB560 (sub_1407BB560.c)
 *     sub_1407F0478 @ 0x1407F0478 (sub_1407F0478.c)
 *     sub_1407FAEE0 @ 0x1407FAEE0 (sub_1407FAEE0.c)
 *     sub_140881A9A @ 0x140881A9A (sub_140881A9A.c)
 *     sub_1409736EC @ 0x1409736EC (sub_1409736EC.c)
 *     sub_140978430 @ 0x140978430 (sub_140978430.c)
 *     sub_140978EDC @ 0x140978EDC (sub_140978EDC.c)
 *     sub_14097EF10 @ 0x14097EF10 (sub_14097EF10.c)
 * Callees:
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14030EA70(char *P)
{
  signed __int32 v2; // eax
  BOOL v3; // esi
  struct _KTHREAD *CurrentThread; // rdi
  bool v5; // zf

  v2 = _InterlockedDecrement((volatile signed __int32 *)P + 9);
  if ( v2 == -1 )
    __fastfail(0xEu);
  v3 = !v2 && (*((_DWORD *)P + 12) & 4) != 0;
  CurrentThread = KeGetCurrentThread();
  *((_BYTE *)CurrentThread + 1385) &= ~0x40u;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)P + 5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(P + 40);
  sub_1402AFC00((ULONG_PTR)(P + 40));
  v5 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v5 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
  if ( v3 )
    ExFreePoolWithTag(P, 0);
}
