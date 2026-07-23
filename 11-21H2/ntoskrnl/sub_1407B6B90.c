/*
 * XREFs of sub_1407B6B90 @ 0x1407B6B90
 * Callers:
 *     sub_140302930 @ 0x140302930 (sub_140302930.c)
 *     sub_140375ED0 @ 0x140375ED0 (sub_140375ED0.c)
 *     sub_140573740 @ 0x140573740 (sub_140573740.c)
 *     sub_1406BF0AC @ 0x1406BF0AC (sub_1406BF0AC.c)
 *     sub_1406D2920 @ 0x1406D2920 (sub_1406D2920.c)
 *     sub_14081C05C @ 0x14081C05C (sub_14081C05C.c)
 *     sub_1409276D0 @ 0x1409276D0 (sub_1409276D0.c)
 *     sub_140939830 @ 0x140939830 (sub_140939830.c)
 *     sub_140946508 @ 0x140946508 (sub_140946508.c)
 *     sub_140973630 @ 0x140973630 (sub_140973630.c)
 *     sub_140975748 @ 0x140975748 (sub_140975748.c)
 *     sub_140983B80 @ 0x140983B80 (sub_140983B80.c)
 *     sub_140988C68 @ 0x140988C68 (sub_140988C68.c)
 *     sub_1409AD870 @ 0x1409AD870 (sub_1409AD870.c)
 *     sub_1409B1074 @ 0x1409B1074 (sub_1409B1074.c)
 *     sub_1409B1468 @ 0x1409B1468 (sub_1409B1468.c)
 *     sub_1409B17B0 @ 0x1409B17B0 (sub_1409B17B0.c)
 *     sub_1409E2E90 @ 0x1409E2E90 (sub_1409E2E90.c)
 *     sub_1409F39DC @ 0x1409F39DC (sub_1409F39DC.c)
 *     sub_140A70F90 @ 0x140A70F90 (sub_140A70F90.c)
 *     sub_140B27E7C @ 0x140B27E7C (sub_140B27E7C.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

__int64 *__fastcall sub_1407B6B90(_QWORD *Object)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v2; // rbx
  __int64 *v4; // r14
  int v5; // ebp
  __int64 *v6; // r15
  bool v7; // zf

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  v4 = 0LL;
  v5 = 0;
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140D3CAC8, 0LL);
  if ( Object )
    v6 = (__int64 *)Object[137];
  else
    v6 = (__int64 *)qword_140C1BF80;
  if ( v6 != &qword_140C1BF80 )
  {
    while ( 1 )
    {
      v4 = v6 - 137;
      if ( ObReferenceObjectSafeWithTag((__int64)(v6 - 137)) )
        break;
      v6 = (__int64 *)*v6;
      if ( v6 == &qword_140C1BF80 )
        goto LABEL_6;
    }
    v5 = 1;
  }
LABEL_6:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140D3CAC8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140D3CAC8);
  sub_1402AFC00((ULONG_PTR)&qword_140D3CAC8);
  v7 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v7 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457350u);
  if ( v5 )
    return v4;
  return (__int64 *)v2;
}
