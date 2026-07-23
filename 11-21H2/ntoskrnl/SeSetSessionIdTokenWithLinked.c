/*
 * XREFs of SeSetSessionIdTokenWithLinked @ 0x1409C6320
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1402D6A98 @ 0x1402D6A98 (sub_1402D6A98.c)
 *     sub_1402F8F70 @ 0x1402F8F70 (sub_1402F8F70.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14066B900 @ 0x14066B900 (sub_14066B900.c)
 *     sub_1407530D0 @ 0x1407530D0 (sub_1407530D0.c)
 */

__int64 __fastcall SeSetSessionIdTokenWithLinked(void *a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 v5; // rsi
  int v6; // ebx
  struct _KTHREAD *CurrentThread; // rax
  PVOID v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r14
  _QWORD *v14; // [rsp+40h] [rbp-20h] BYREF
  _QWORD *v15; // [rsp+48h] [rbp-18h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h] BYREF
  __int64 v17; // [rsp+A0h] [rbp+40h] BYREF
  PVOID Object; // [rsp+A8h] [rbp+48h] BYREF

  Object = 0LL;
  v5 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v6 = sub_1402F8F70(a1, 8u, *((_BYTE *)KeGetCurrentThread() + 562), a4, &Object, &v17, &v16);
  if ( v6 < 0 )
  {
    v8 = Object;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    v8 = Object;
    ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
    if ( *((_BYTE *)v8 + 204) )
    {
      v6 = -1073741525;
      goto LABEL_13;
    }
    v6 = sub_14066B900(
           (_DWORD *)(*((_QWORD *)v8 + 27) + 8LL),
           *(_QWORD *)(*((_QWORD *)v8 + 27) + 160LL),
           (__int64 *)&v14);
    if ( v6 >= 0 )
    {
      v11 = *((_QWORD *)v8 + 27);
      v12 = v14[6];
      v17 = *(_QWORD *)(v11 + 16);
      if ( v17 )
      {
        v6 = sub_14066B900(&v17, *(_QWORD *)(v11 + 160), (__int64 *)&v15);
        if ( v6 < 0 )
          goto LABEL_13;
        v5 = v15[6];
      }
      if ( !v12 || (v6 = sub_1407530D0(v12, a2, v9, v10), v6 >= 0) )
      {
        if ( v5 )
          v6 = sub_1407530D0(v5, a2, v9, v10);
      }
    }
  }
LABEL_13:
  if ( v8 )
  {
    ExReleaseResourceLite(*((PERESOURCE *)v8 + 6));
    sub_1402F9540((__int64)KeGetCurrentThread());
    ObfDereferenceObjectWithTag(Object, 0x74726853u);
  }
  if ( v14 )
    sub_1402D6A98(v14);
  if ( v15 )
    sub_1402D6A98(v15);
  return (unsigned int)v6;
}
