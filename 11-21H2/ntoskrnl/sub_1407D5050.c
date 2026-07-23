/*
 * XREFs of sub_1407D5050 @ 0x1407D5050
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402F0D90 @ 0x1402F0D90 (sub_1402F0D90.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     sub_140358868 @ 0x140358868 (sub_140358868.c)
 *     KeInitializeTimer2 @ 0x1403588D0 (KeInitializeTimer2.c)
 *     sub_14035B5F8 @ 0x14035B5F8 (sub_14035B5F8.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObOpenObjectByPointer @ 0x1407277A0 (ObOpenObjectByPointer.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     sub_14074F700 @ 0x14074F700 (sub_14074F700.c)
 *     IoAllocateMiniCompletionPacket @ 0x1407D56C0 (IoAllocateMiniCompletionPacket.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1407D5050(
        __int64 *a1,
        int a2,
        int a3,
        void *a4,
        ULONG_PTR BugCheckParameter1,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10)
{
  char v14; // di
  __int64 v15; // rcx
  _QWORD *PoolWithQuotaTag; // rax
  PVOID v17; // rsi
  int v18; // ebx
  volatile signed __int32 *v19; // rcx
  PVOID v20; // r14
  __int64 MiniCompletionPacket; // rax
  _QWORD *v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rcx
  PVOID v25; // rcx
  __int64 result; // rax
  __int64 v27; // rcx
  PVOID *Object; // [rsp+20h] [rbp-98h]
  HANDLE Handle; // [rsp+58h] [rbp-60h] BYREF
  PVOID v30; // [rsp+60h] [rbp-58h] BYREF
  PVOID v31; // [rsp+68h] [rbp-50h] BYREF
  PVOID v32; // [rsp+70h] [rbp-48h] BYREF
  __int64 v33; // [rsp+78h] [rbp-40h] BYREF
  _QWORD v34[3]; // [rsp+88h] [rbp-30h] BYREF

  Handle = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v31 = 0LL;
  v14 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v14 )
  {
    v15 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v15 = (__int64)a1;
    *(_QWORD *)v15 = *(_QWORD *)v15;
  }
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x28uLL, 0x63577054u);
  v17 = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return (unsigned int)-1073741801;
  *PoolWithQuotaTag = 0LL;
  PoolWithQuotaTag[3] = 0LL;
  *((_WORD *)PoolWithQuotaTag + 16) = 0;
  *((_BYTE *)PoolWithQuotaTag + 34) = 0;
  v30 = 0LL;
  v18 = ObReferenceObjectByHandle(a4, 2u, IoCompletionObjectType, v14, &v30, 0LL);
  v19 = (volatile signed __int32 *)v30;
  *((_QWORD *)v17 + 1) = v30;
  if ( v18 < 0 )
  {
LABEL_26:
    ExFreePoolWithTag(v17, 0);
    return (unsigned int)v18;
  }
  sub_14035B5F8(v19);
  v18 = sub_140732D40(BugCheckParameter1, 42, (__int64)PsProcessType, v14, 0x66577845u, &v31, 0LL, 0LL);
  if ( v18 < 0 )
  {
LABEL_25:
    ObfDereferenceObject(*((PVOID *)v17 + 1));
    goto LABEL_26;
  }
  v20 = v31;
  if ( *((PVOID *)KeGetCurrentThread() + 23) != v31 )
  {
    v18 = -1073741811;
    goto LABEL_24;
  }
  v18 = ObOpenObjectByPointer(v31, 0x200u, 0LL, 0x2Au, (POBJECT_TYPE)PsProcessType, 0, &Handle);
  if ( v18 < 0 )
  {
LABEL_24:
    ObfDereferenceObjectWithTag(v20, 0x66577845u);
    goto LABEL_25;
  }
  MiniCompletionPacket = IoAllocateMiniCompletionPacket(sub_140224210, v17);
  *((_QWORD *)v17 + 2) = MiniCompletionPacket;
  if ( !MiniCompletionPacket )
  {
    v18 = -1073741801;
LABEL_23:
    ObCloseHandle(Handle, 0);
    goto LABEL_24;
  }
  v18 = sub_14072B3B0(v14, qword_140D051A0, a3, v14, (__int64)Object, 672, 0, 0, &v32, 0LL);
  if ( v18 < 0 )
  {
    v27 = *((_QWORD *)v17 + 2);
    *(_QWORD *)(v27 + 56) = 0LL;
    sub_14074F700((_SLIST_ENTRY *)v27);
    goto LABEL_23;
  }
  v22 = v32;
  *((_QWORD *)v32 + 2) = v17;
  v22[14] = -10000000LL * dword_140C0C65C;
  *((_DWORD *)v22 + 94) = 0;
  *((_DWORD *)v22 + 95) = a8;
  *((_DWORD *)v22 + 99) = 0;
  v22[48] = 0LL;
  v23 = 0x10000LL;
  if ( a9 )
    v23 = a9;
  v22[7] = v23;
  memset(v22 + 15, 0, 0x100uLL);
  v22[51] = 0LL;
  v24 = 4096LL;
  if ( a10 )
    v24 = a10;
  v22[8] = v24;
  v22[3] = a6;
  v22[4] = a7;
  v22[50] = 0LL;
  *((_DWORD *)v22 + 104) = 0;
  v22[5] = Handle;
  v22[6] = v20;
  *((_DWORD *)v22 + 98) = 0;
  *((_DWORD *)v22 + 166) = 0;
  *((_DWORD *)v22 + 152) = 1;
  KeInitializeTimer2((__int64)(v22 + 53), 0LL, 0LL, 8LL);
  sub_140358868((__int64)v22);
  v22[13] = 0LL;
  ObfReferenceObject(v25);
  sub_1402F0D90((__int64)(v22 + 53), (__int64)&Queue, (__int64)(v22 + 70));
  v34[0] = 0LL;
  v34[1] = -1LL;
  KeSetTimer2((__int64)(v22 + 53), v22[14], -v22[14], (__int64)v34);
  result = sub_140729C30((char *)v22, 0LL, a2, 0, 0, 0LL, &v33);
  if ( (int)result >= 0 )
    *a1 = v33;
  return result;
}
