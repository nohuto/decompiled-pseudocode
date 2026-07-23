/*
 * XREFs of sub_14069FD64 @ 0x14069FD64
 * Callers:
 *     sub_14069FD1C @ 0x14069FD1C (sub_14069FD1C.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 *     sub_14069FED8 @ 0x14069FED8 (sub_14069FED8.c)
 *     sub_140742300 @ 0x140742300 (sub_140742300.c)
 */

void __fastcall sub_14069FD64(__int64 *a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v5; // rdx
  _QWORD *v6; // rdx
  __int64 v7; // rax
  struct _KTHREAD *v8; // rax
  __int64 *v9; // rdx
  __int64 **v10; // rax
  __int64 v11; // rax
  void *v12; // rcx
  void *v13; // rcx
  __int64 *v14; // rax
  __int64 *v15; // r8
  __int64 **v16; // rax
  __int64 **v17; // rax
  _QWORD **v18; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v19; // [rsp+28h] [rbp-8h]

  if ( a1 && !*((_DWORD *)a1 + 16) )
  {
    v19 = (__int64 *)&v18;
    v18 = &v18;
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquireFastMutexUnsafe(&stru_140C49100);
    v5 = (__int64 *)qword_140C491C0;
    while ( v5 != &qword_140C491C0 )
    {
      v14 = v5;
      v15 = v5;
      v5 = (__int64 *)*v5;
      if ( (__int64 *)v14[4] == a1 )
      {
        if ( (__int64 *)v5[1] != v14 )
          goto LABEL_26;
        v16 = (__int64 **)v14[1];
        if ( *v16 != v15 )
          goto LABEL_26;
        *v16 = v5;
        v5[1] = (__int64)v16;
        v17 = (__int64 **)v19;
        if ( (_QWORD ***)*v19 != &v18 )
          goto LABEL_26;
        v15[1] = (__int64)v19;
        *v15 = (__int64)&v18;
        *v17 = v15;
        v19 = v15;
      }
    }
    ExReleaseFastMutexUnsafe(&stru_140C49100);
    KeLeaveCriticalRegion();
    while ( 1 )
    {
      v6 = v18;
      if ( v18[1] != &v18 )
        goto LABEL_26;
      v7 = (__int64)*v18;
      if ( (_QWORD **)(*v18)[1] != v18 )
        goto LABEL_26;
      v18 = (_QWORD **)*v18;
      *(_QWORD *)(v7 + 8) = &v18;
      if ( v6 == &v18 )
        break;
      sub_140742300(a1, v6 - 4, 4LL);
    }
    v8 = KeGetCurrentThread();
    --*((_WORD *)v8 + 242);
    ExAcquireFastMutexUnsafe(&dword_140C48F20);
    *((_DWORD *)a1 + 26) |= 8u;
    v9 = (__int64 *)*a1;
    if ( *(__int64 **)(*a1 + 8) != a1 || (v10 = (__int64 **)a1[1], *v10 != a1) )
LABEL_26:
      __fastfail(3u);
    *v10 = v9;
    v9[1] = (__int64)v10;
    v11 = a1[10];
    if ( v11 )
    {
      *(_QWORD *)(v11 + 4152) = 0LL;
      a1[10] = 0LL;
    }
    ExReleaseFastMutexUnsafe(&dword_140C48F20);
    sub_1402F9540((__int64)KeGetCurrentThread());
    v12 = (void *)a1[7];
    if ( v12 )
    {
      ObDereferenceObjectDeferDelete(v12);
      a1[7] = 0LL;
    }
    v13 = (void *)a1[5];
    if ( v13 )
    {
      ObDereferenceObjectDeferDelete(v13);
      a1[5] = 0LL;
    }
    if ( a2 == 1 )
      sub_14069FED8(a1);
  }
}
