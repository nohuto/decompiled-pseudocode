/*
 * XREFs of sub_1406A1AE0 @ 0x1406A1AE0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     IoRemoveIoCompletion @ 0x1402B7BD0 (IoRemoveIoCompletion.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406A1AE0(
        HANDLE Handle,
        volatile void *Address,
        unsigned int a3,
        _DWORD *a4,
        unsigned __int64 a5,
        BOOLEAN a6)
{
  __int64 v7; // rdi
  __int64 v10; // r15
  KPROCESSOR_MODE v11; // si
  PLIST_ENTRY *Pool2; // r14
  int v13; // ebx
  __int64 v15; // rcx
  ULONG v16; // [rsp+44h] [rbp-F4h] BYREF
  LARGE_INTEGER *v17; // [rsp+48h] [rbp-F0h]
  LARGE_INTEGER v18; // [rsp+50h] [rbp-E8h] BYREF
  PVOID Object; // [rsp+58h] [rbp-E0h] BYREF
  _BYTE P[128]; // [rsp+70h] [rbp-C8h] BYREF

  v7 = a3;
  v10 = a5;
  memset(P, 0, sizeof(P));
  v18.QuadPart = 0LL;
  v16 = 0;
  if ( (unsigned int)(v7 - 1) > 0x7FFFFFE )
    return 3221225485LL;
  v17 = 0LL;
  v11 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v11 )
  {
    ProbeForWrite(Address, 32 * v7, 8u);
    v15 = (__int64)a4;
    if ( (unsigned __int64)a4 >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v15 = *(_DWORD *)v15;
    if ( a5 )
    {
      v17 = &v18;
      if ( a5 >= 0x7FFFFFFF0000LL )
        v10 = 0x7FFFFFFF0000LL;
      v18 = *(LARGE_INTEGER *)v10;
    }
    v10 = (__int64)v17;
  }
  else if ( !a5 )
  {
    v10 = (__int64)v17;
  }
  if ( (unsigned int)v7 > 0x10 )
  {
    Pool2 = (PLIST_ENTRY *)ExAllocatePool2(64LL, 8 * v7, 538996553LL);
    if ( Pool2 )
      goto LABEL_7;
    LODWORD(v7) = 16;
  }
  Pool2 = (PLIST_ENTRY *)P;
LABEL_7:
  Object = 0LL;
  v13 = ObReferenceObjectByHandle(Handle, 2u, IoCompletionObjectType, v11, &Object, 0LL);
  if ( v13 >= 0 )
  {
    v13 = IoRemoveIoCompletion(
            (struct _KQUEUE *)Object,
            (__int64)Address,
            Pool2,
            v7,
            &v16,
            v11,
            (LARGE_INTEGER *)v10,
            a6);
    ObfDereferenceObject(Object);
  }
  if ( Pool2 != (PLIST_ENTRY *)P )
    ExFreePoolWithTag(Pool2, 0);
  if ( v13 >= 0 )
    *a4 = v16;
  return (unsigned int)v13;
}
