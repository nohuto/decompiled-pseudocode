/*
 * XREFs of sub_14069B8FC @ 0x14069B8FC
 * Callers:
 *     sub_14069CC40 @ 0x14069CC40 (sub_14069CC40.c)
 *     sub_14082C6E0 @ 0x14082C6E0 (sub_14082C6E0.c)
 *     sub_140986CD4 @ 0x140986CD4 (sub_140986CD4.c)
 * Callees:
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14069C07C @ 0x14069C07C (sub_14069C07C.c)
 *     sub_14069C9C0 @ 0x14069C9C0 (sub_14069C9C0.c)
 *     ObOpenObjectByPointer @ 0x1407277A0 (ObOpenObjectByPointer.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall sub_14069B8FC(PVOID Object, __int64 a2, void *a3, KPROCESSOR_MODE a4, char a5, __int64 *a6)
{
  __int64 v6; // rbx
  NTSTATUS result; // eax
  PVOID v10; // rsi
  __int64 Pool2; // rax
  __int64 v12; // rdi
  NTSTATUS v13; // r15d
  _QWORD *v14; // rsi
  char *v15; // rax
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *v17; // r15
  volatile signed __int64 *v18; // rbp
  PVOID v19; // rcx
  __int64 *v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  struct _KTHREAD *v23; // rax
  bool v24; // zf
  int v25; // ebx
  PVOID Objecta; // [rsp+40h] [rbp-28h] BYREF

  v6 = 0LL;
  Objecta = 0LL;
  result = ObReferenceObjectByHandle(a3, 2u, qword_140C24FB8, a4, &Objecta, 0LL);
  if ( result < 0 )
    return result;
  v10 = Objecta;
  if ( (a5 & 4) == 0 && (*((_DWORD *)Objecta + 84) & 4) != 0 )
  {
    v25 = -1073741811;
LABEL_37:
    ObfDereferenceObject(v10);
    return v25;
  }
  Pool2 = ExAllocatePool2(256LL, 296LL, 1833198159LL);
  v12 = Pool2;
  if ( !Pool2 )
  {
    v25 = -1073741670;
    goto LABEL_37;
  }
  *(_QWORD *)(Pool2 + 240) = 1LL;
  *(_QWORD *)Pool2 = v10;
  v13 = ObOpenObjectByPointer(v10, 0x200u, 0LL, 0xF000Fu, qword_140C24FB8, 0, (PHANDLE)(Pool2 + 248));
  if ( v13 < 0 )
  {
    ObfDereferenceObject(v10);
    ExFreePoolWithTag((PVOID)v12, 0x6D44624Fu);
    return v13;
  }
  else
  {
    if ( Object )
    {
      ObfReferenceObjectWithTag(Object, 0x6D44624Fu);
      *(_QWORD *)(v12 + 16) = Object;
    }
    v14 = 0LL;
    v15 = (char *)sub_140204738((__int64)Object);
    CurrentThread = KeGetCurrentThread();
    v17 = v15;
    --*((_WORD *)CurrentThread + 243);
    v18 = (volatile signed __int64 *)(v15 + 120);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v15 + 120), 0LL);
    v19 = Objecta;
    v20 = (__int64 *)((char *)Objecta + 304);
    v21 = *((_QWORD *)Objecta + 38);
    if ( v21 )
    {
      v14 = (_QWORD *)v12;
      v12 = *((_QWORD *)Objecta + 38);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 240), 1uLL) <= 0 )
        __fastfail(0xEu);
    }
    else
    {
      if ( (a5 & 1) != 0 )
      {
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 240), 0x10uLL) <= 0 )
          __fastfail(0xEu);
        v19 = Objecta;
        *v17 = v12 + 15;
      }
      *v20 = v12;
      if ( (a5 & 2) != 0 )
      {
        v22 = *v17 & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v19 != *(PVOID *)v22 )
        {
          *(_QWORD *)(v12 + 8) = *(_QWORD *)v22;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 240), 1uLL) <= 0 )
            __fastfail(0xEu);
          *(_QWORD *)(v12 + 24) = v22;
        }
      }
    }
    if ( a2 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 240), 0x10uLL) <= 0 )
        __fastfail(0xEu);
      v6 = _InterlockedExchange64((volatile __int64 *)(a2 + 1416), (v12 | 0xF) & -(__int64)(v12 != 0));
    }
    if ( (_InterlockedExchangeAdd64(v18, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v17 + 15);
    sub_1402AFC00((ULONG_PTR)(v17 + 15));
    v23 = KeGetCurrentThread();
    v24 = (*((_WORD *)v23 + 243))++ == 0xFFFF;
    if ( v24 && *((struct _KTHREAD **)v23 + 19) != (struct _KTHREAD *)((char *)v23 + 152) )
      KiCheckForKernelApcDelivery();
    if ( v14 )
    {
      --v14[30];
      sub_14069C07C(v14);
    }
    if ( v6 )
      sub_14069C9C0((PVOID)(v6 & 0xFFFFFFFFFFFFFFF0uLL));
    if ( a6 )
      *a6 = v12;
    else
      sub_14069C9C0((PVOID)v12);
    return 0;
  }
}
