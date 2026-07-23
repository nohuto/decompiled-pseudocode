/*
 * XREFs of sub_1409B0400 @ 0x1409B0400
 * Callers:
 *     sub_140684450 @ 0x140684450 (sub_140684450.c)
 * Callees:
 *     sub_1406FF880 @ 0x1406FF880 (sub_1406FF880.c)
 *     sub_1406FFE90 @ 0x1406FFE90 (sub_1406FFE90.c)
 *     sub_1406FFEFC @ 0x1406FFEFC (sub_1406FFEFC.c)
 */

__int64 __fastcall sub_1409B0400(_QWORD *Object, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  int v5; // esi
  __int64 v7[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  sub_1406FFEFC((__int64)Object, (__int64)CurrentThread);
  v8 = 0LL;
  v7[0] = (__int64)&v8;
  v7[1] = (__int64)Object;
  v5 = sub_1406FF880(Object, 0, 0, (int)sub_1409B04E0, (__int64)v7, 1);
  sub_1406FFE90((__int64)Object, (__int64)CurrentThread);
  if ( v5 >= 0 )
    *a2 = v8;
  return (unsigned int)v5;
}
