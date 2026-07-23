/*
 * XREFs of sub_1406657C0 @ 0x1406657C0
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_140666BAC @ 0x140666BAC (sub_140666BAC.c)
 *     sub_1407292A0 @ 0x1407292A0 (sub_1407292A0.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1407A7628 @ 0x1407A7628 (sub_1407A7628.c)
 *     sub_1407ABD80 @ 0x1407ABD80 (sub_1407ABD80.c)
 */

__int64 __fastcall sub_1406657C0(_QWORD *a1, void *a2, __int128 *a3, unsigned int a4, int a5, __int128 *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE v10; // r14
  NTSTATUS v11; // ebx
  __int128 *v12; // r9
  __int64 v13; // rcx
  PVOID v14; // rdi
  ULONG_PTR v15; // rbx
  _QWORD *v16; // rsi
  __int64 v17; // rax
  _QWORD *v18; // rsi
  __int64 v20; // rsi
  signed __int64 *v21; // rbx
  PVOID v22; // rcx
  PVOID Object; // [rsp+30h] [rbp-98h] BYREF
  ULONG_PTR v24; // [rsp+38h] [rbp-90h] BYREF
  __int64 v25; // [rsp+40h] [rbp-88h] BYREF
  __int128 v26; // [rsp+48h] [rbp-80h] BYREF
  __int128 v27; // [rsp+58h] [rbp-70h]
  __int64 v28; // [rsp+68h] [rbp-60h]
  __int128 v29; // [rsp+70h] [rbp-58h] BYREF
  __int128 v30; // [rsp+80h] [rbp-48h]
  __int128 v31; // [rsp+90h] [rbp-38h]

  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  DWORD1(v29) = 0;
  v25 = 0LL;
  v24 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v10 = *((_BYTE *)KeGetCurrentThread() + 562);
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(a2, 0x20000u, qword_140D069D8, v10, &Object, 0LL);
  if ( v11 < 0 )
    goto LABEL_17;
  if ( v10 )
  {
    v13 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v13 = (__int64)a1;
    *(_QWORD *)v13 = *(_QWORD *)v13;
    sub_140666BAC(a3, &v26, a4);
    if ( a6 < v12 )
      v12 = a6;
    v29 = *v12;
    v30 = v12[1];
    v31 = v12[2];
  }
  else
  {
    v26 = *a3;
    v27 = a3[1];
    v28 = *((_QWORD *)a3 + 4);
    v29 = *a6;
    v30 = a6[1];
    v31 = a6[2];
  }
  v14 = Object;
  v11 = sub_1407ABD80((_DWORD)Object, DWORD2(v27), v28, (_DWORD)v12, (__int64)&v24);
  if ( v11 < 0 )
  {
    ObfDereferenceObject(v14);
    goto LABEL_17;
  }
  v15 = v24;
  if ( (*(_DWORD *)(v24 + 40) & 0x80u) != 0 )
  {
    sub_1407A7628(v24);
    ObfDereferenceObject(v14);
    v11 = -1073740029;
    goto LABEL_17;
  }
  v16 = *(_QWORD **)(v24 + 32);
  if ( v16 )
  {
    v17 = v16[153] - *((_QWORD *)&v26 + 1);
    if ( !v17 )
      v17 = v16[154] - v27;
    if ( v17 )
    {
      sub_1407A7628(v24);
      ObfDereferenceObject(v14);
      v11 = -1073741813;
      goto LABEL_17;
    }
    v18 = (_QWORD *)v16[68];
    ObfReferenceObjectWithTag(v18, 0x63706C41u);
    goto LABEL_15;
  }
  v20 = *(_QWORD *)(v24 + 24);
  if ( !v20 )
  {
    sub_1407A7628(v24);
    v22 = v14;
    goto LABEL_30;
  }
  v21 = (signed __int64 *)(v20 + 352);
  ExAcquirePushLockSharedEx(v20 + 352, 0LL);
  if ( (*(_DWORD *)(v20 + 416) & 0x40) == 0 )
  {
    v18 = *(_QWORD **)(v20 + 24);
    if ( v18[136] == *((_QWORD *)&v26 + 1) )
    {
      ObfReferenceObjectWithTag(v18, 0x63706C41u);
      if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v21);
      sub_1402AFC00((ULONG_PTR)v21);
      v15 = v24;
      v14 = Object;
LABEL_15:
      sub_1407A7628(v15);
      *(_QWORD *)&v27 = 0LL;
      v11 = sub_1407292A0((unsigned int)&v25, a5, (unsigned int)&v29, (unsigned int)&v26 + 8, 0, v10);
      ObfDereferenceObjectWithTag(v18, 0x63706C41u);
      ObfDereferenceObject(v14);
      if ( v11 >= 0 )
        *a1 = v25;
      goto LABEL_17;
    }
    if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v21);
    sub_1402AFC00((ULONG_PTR)v21);
    sub_1407A7628(v24);
    v22 = Object;
LABEL_30:
    ObfDereferenceObject(v22);
    v11 = -1073741790;
    goto LABEL_17;
  }
  if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v20 + 352));
  sub_1402AFC00(v20 + 352);
  sub_1407A7628(v24);
  ObfDereferenceObject(Object);
  v11 = -1073741769;
LABEL_17:
  sub_1402F9540((__int64)KeGetCurrentThread());
  return (unsigned int)v11;
}
