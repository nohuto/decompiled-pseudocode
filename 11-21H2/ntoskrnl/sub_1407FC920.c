/*
 * XREFs of sub_1407FC920 @ 0x1407FC920
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 *     sub_1406930D4 @ 0x1406930D4 (sub_1406930D4.c)
 *     sub_140693158 @ 0x140693158 (sub_140693158.c)
 */

__int64 __fastcall sub_1407FC920(__int64 **a1)
{
  __int64 *v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdi
  signed __int32 v7[8]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v8[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v8 = 0LL;
  sub_140347770((__int64)v8);
  sub_140693158();
  v2 = &qword_140C497F0;
  if ( *a1 )
    v2 = *a1;
  v3 = (unsigned __int64)*a1 & -(__int64)(*a1 != 0LL);
  v4 = *v2;
  v5 = 0LL;
  while ( (__int64 *)v4 != &qword_140C497F0 )
  {
    if ( *(int *)(v4 + 16) >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 16));
      v5 = *(_QWORD *)(v4 + 40);
      *a1 = (__int64 *)v4;
      break;
    }
    v4 = *(_QWORD *)v4;
  }
  sub_1406930D4();
  if ( v3 )
  {
    if ( _InterlockedDecrement((volatile signed __int32 *)(v3 + 16)) == 0x80000000 )
    {
      _InterlockedOr(v7, 0);
      if ( qword_140C49800 )
        ExfUnblockPushLock(&qword_140C49800, 0LL);
    }
  }
  sub_14022EA30(v8);
  return v5;
}
