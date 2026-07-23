/*
 * XREFs of sub_1409193DC @ 0x1409193DC
 * Callers:
 *     sub_140208D94 @ 0x140208D94 (sub_140208D94.c)
 *     sub_14069E98C @ 0x14069E98C (sub_14069E98C.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_140742300 @ 0x140742300 (sub_140742300.c)
 */

_QWORD ***__fastcall sub_1409193DC(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v3; // rdx
  __int64 *v4; // rax
  __int64 *v5; // r8
  __int64 **v6; // rax
  __int64 **v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // rax
  _QWORD ***result; // rax
  _QWORD **v11; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v12; // [rsp+28h] [rbp-8h]

  v12 = (__int64 *)&v11;
  v11 = &v11;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireFastMutexUnsafe(&stru_140C49100);
  v3 = (__int64 *)qword_140C491C0;
  while ( v3 != &qword_140C491C0 )
  {
    v4 = v3;
    v5 = v3;
    v3 = (__int64 *)*v3;
    if ( v4[4] == a1 )
    {
      if ( (__int64 *)v3[1] != v4
        || (v6 = (__int64 **)v4[1], *v6 != v5)
        || (*v6 = v3, v3[1] = (__int64)v6, v7 = (__int64 **)v12, (_QWORD ***)*v12 != &v11) )
      {
LABEL_13:
        __fastfail(3u);
      }
      v5[1] = (__int64)v12;
      *v5 = (__int64)&v11;
      *v7 = v5;
      v12 = v5;
    }
  }
  ExReleaseFastMutexUnsafe(&stru_140C49100);
  KeLeaveCriticalRegion();
  while ( 1 )
  {
    v8 = v11;
    if ( v11[1] != &v11 )
      goto LABEL_13;
    v9 = (__int64)*v11;
    if ( (_QWORD **)(*v11)[1] != v11 )
      goto LABEL_13;
    v11 = (_QWORD **)*v11;
    *(_QWORD *)(v9 + 8) = &v11;
    result = &v11;
    if ( v8 == &v11 )
      return result;
    sub_140742300(a1, v8 - 4, 8, 0);
  }
}
