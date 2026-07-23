/*
 * XREFs of sub_14097323C @ 0x14097323C
 * Callers:
 *     sub_1409777B4 @ 0x1409777B4 (sub_1409777B4.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14066A374 @ 0x14066A374 (sub_14066A374.c)
 *     sub_1409730F0 @ 0x1409730F0 (sub_1409730F0.c)
 *     sub_14097339C @ 0x14097339C (sub_14097339C.c)
 */

__int64 __fastcall sub_14097323C(__int64 a1, int a2, int a3, UNICODE_STRING *a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  void *v9; // rdi
  __int64 v10; // rax
  unsigned int v11; // esi
  bool v12; // zf
  _BYTE v14[80]; // [rsp+40h] [rbp-A8h] BYREF

  memset(v14, 0, 0x44uLL);
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C533C0, 0LL);
  if ( !qword_140C533A8
    || (v9 = (void *)sub_140347920(a1, 0x746C6644u),
        sub_14066A374((__int64)v9, v14, 0x44u, 0LL),
        (v10 = sub_14097339C(v14)) == 0)
    || (v11 = sub_1409730F0((__int64 *)(v10 + 24), 1uLL, a2, a3, a4), v11 == -1073741275) )
  {
    v11 = sub_1409730F0((__int64 *)&qword_140C533B0, 1uLL, a2, a3, a4);
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C533C0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C533C0);
  sub_1402AFC00((ULONG_PTR)&qword_140C533C0);
  v12 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v12 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
  if ( v9 )
    ObfDereferenceObject(v9);
  return v11;
}
