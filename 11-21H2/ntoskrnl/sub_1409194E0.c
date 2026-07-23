/*
 * XREFs of sub_1409194E0 @ 0x1409194E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     sub_14068934C @ 0x14068934C (sub_14068934C.c)
 *     sub_1406893EC @ 0x1406893EC (sub_1406893EC.c)
 *     sub_140742300 @ 0x140742300 (sub_140742300.c)
 *     sub_1407426B8 @ 0x1407426B8 (sub_1407426B8.c)
 *     sub_140AB4138 @ 0x140AB4138 (sub_140AB4138.c)
 *     sub_140AB4178 @ 0x140AB4178 (sub_140AB4178.c)
 */

__int64 sub_1409194E0()
{
  char v0; // di
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 **v5; // rax
  struct _KTHREAD *v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rcx
  _QWORD **v11; // [rsp+30h] [rbp-20h] BYREF
  __int64 *v12; // [rsp+38h] [rbp-18h]
  __int128 v13; // [rsp+40h] [rbp-10h] BYREF
  int v14; // [rsp+78h] [rbp+28h] BYREF

  v14 = 0;
  v0 = 1;
  v13 = 0LL;
  sub_140347770((__int64)&v13);
  v11 = &v11;
  v12 = (__int64 *)&v11;
  if ( (unsigned __int8)sub_140AB4138() )
  {
    sub_1406893EC();
    while ( 1 )
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      ExAcquireFastMutexUnsafe(&stru_140C49100);
      v2 = (__int64 *)qword_140C491C0;
      if ( *(__int64 **)(qword_140C491C0 + 8) != &qword_140C491C0
        || (v3 = *(_QWORD *)qword_140C491C0, *(_QWORD *)(*(_QWORD *)qword_140C491C0 + 8LL) != qword_140C491C0) )
      {
LABEL_20:
        __fastfail(3u);
      }
      qword_140C491C0 = *(_QWORD *)qword_140C491C0;
      *(_QWORD *)(v3 + 8) = &qword_140C491C0;
      if ( v2 == &qword_140C491C0 )
        break;
      ExReleaseFastMutexUnsafe(&stru_140C49100);
      KeLeaveCriticalRegion();
      if ( (int)sub_1407426B8(v4, (__int64)(v2 - 4), &v14) < 0 )
      {
        v5 = (__int64 **)v12;
        if ( (_QWORD ***)*v12 != &v11 )
          goto LABEL_20;
        v2[1] = (__int64)v12;
        *v2 = (__int64)&v11;
        v0 = 0;
        *v5 = v2;
        v12 = v2;
      }
      else
      {
        sub_140742300(v2[4], v2 - 4, 4, 0);
      }
    }
    byte_140D01828 = v0 == 0;
    ExReleaseFastMutexUnsafe(&stru_140C49100);
    KeLeaveCriticalRegion();
    if ( !v0 )
    {
      v6 = KeGetCurrentThread();
      --*((_WORD *)v6 + 242);
      ExAcquireFastMutexUnsafe(&stru_140C49100);
      while ( 1 )
      {
        v7 = v11;
        if ( v11[1] != &v11 )
          goto LABEL_20;
        v8 = (__int64)*v11;
        if ( (_QWORD **)(*v11)[1] != v11 )
          goto LABEL_20;
        v11 = (_QWORD **)*v11;
        *(_QWORD *)(v8 + 8) = &v11;
        if ( v7 == &v11 )
          break;
        v9 = (_QWORD *)qword_140C491C8;
        if ( *(__int64 **)qword_140C491C8 != &qword_140C491C0 )
          goto LABEL_20;
        *v7 = &qword_140C491C0;
        v7[1] = v9;
        *v9 = v7;
        qword_140C491C8 = (__int64)v7;
      }
      ExReleaseFastMutexUnsafe(&stru_140C49100);
      KeLeaveCriticalRegion();
      sub_1402E2D20((unsigned __int64)&qword_140C49180, -300000000LL, 0, 0, (__int64)&dword_140C491E0);
    }
    sub_14068934C();
    sub_140AB4178();
  }
  return sub_14022EA30((__int64 *)&v13);
}
