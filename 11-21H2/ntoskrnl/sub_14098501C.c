/*
 * XREFs of sub_14098501C @ 0x14098501C
 * Callers:
 *     sub_1409848D4 @ 0x1409848D4 (sub_1409848D4.c)
 *     sub_140984994 @ 0x140984994 (sub_140984994.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x1402240B0 (ObReferenceObjectSafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

_DWORD *__fastcall sub_14098501C(_QWORD **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v3; // r15
  _QWORD *v4; // rax
  _DWORD *v5; // rsi
  unsigned int v6; // ebx
  __int64 v7; // rcx
  _DWORD *Pool2; // rax
  __int64 v9; // rbp
  _QWORD *v10; // rbx
  struct _KTHREAD *v11; // rax
  bool v12; // zf

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  v3 = (ULONG_PTR)(a1 + 23);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(a1 + 23), 0LL);
  v4 = *a1;
  v5 = 0LL;
  v6 = 0;
  if ( *a1 != a1 )
  {
    do
    {
      v4 = (_QWORD *)*v4;
      v7 = v6++;
    }
    while ( v4 != a1 );
    if ( v6 )
    {
      Pool2 = (_DWORD *)ExAllocatePool2(256LL, 8 * v7 + 16, 1916887631LL);
      v5 = Pool2;
      if ( Pool2 )
      {
        *Pool2 = v6;
        v9 = 0LL;
        v10 = *a1;
        while ( v10 != a1 )
        {
          *(_QWORD *)&v5[2 * v9 + 2] = v10;
          if ( !ObReferenceObjectSafe((__int64)(v10 + 10)) )
            *(_QWORD *)&v5[2 * v9 + 2] = 0LL;
          v10 = (_QWORD *)*v10;
          v9 = (unsigned int)(v9 + 1);
        }
      }
    }
  }
  ExReleasePushLockEx(v3, 0LL);
  v11 = KeGetCurrentThread();
  v12 = (*((_WORD *)v11 + 243))++ == 0xFFFF;
  if ( v12 && *((struct _KTHREAD **)v11 + 19) != (struct _KTHREAD *)((char *)v11 + 152) )
    KiCheckForKernelApcDelivery();
  return v5;
}
