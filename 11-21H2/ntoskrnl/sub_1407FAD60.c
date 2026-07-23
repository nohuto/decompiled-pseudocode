/*
 * XREFs of sub_1407FAD60 @ 0x1407FAD60
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 */

unsigned __int64 __fastcall sub_1407FAD60(_QWORD *Object)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v2; // ebp
  __int64 *v3; // r14
  __int64 *v5; // rbx
  bool v6; // zf

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  v3 = 0LL;
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C15890, 0LL);
  v5 = (__int64 *)qword_140C15880;
  if ( Object )
    v5 = (__int64 *)Object[5];
  while ( v5 != &qword_140C15880 )
  {
    v3 = v5 - 5;
    if ( ObReferenceObjectSafeWithTag((__int64)(v5 - 5)) )
    {
      v2 = 1;
      break;
    }
    v5 = (__int64 *)*v5;
  }
  ExReleasePushLockEx((ULONG_PTR)&qword_140C15890, 0LL);
  v6 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v6 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457845u);
  return (unsigned __int64)v3 & -(__int64)(v2 != 0);
}
