/*
 * XREFs of sub_1409ACD20 @ 0x1409ACD20
 * Callers:
 *     sub_1409ACC90 @ 0x1409ACC90 (sub_1409ACC90.c)
 * Callees:
 *     sub_14085DACC @ 0x14085DACC (sub_14085DACC.c)
 */

NTSTATUS __fastcall sub_1409ACD20(
        unsigned __int64 a1,
        int a2,
        __int64 a3,
        void *a4,
        int a5,
        void *a6,
        void *a7,
        void *a8)
{
  KPROCESSOR_MODE v11; // dl
  __int64 v12; // rcx

  if ( !a4 )
    return -1073741811;
  v11 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v11 )
  {
    v12 = 0x7FFFFFFF0000LL;
    if ( a1 < 0x7FFFFFFF0000LL )
      v12 = a1;
    *(_QWORD *)v12 = *(_QWORD *)v12;
  }
  return sub_14085DACC(a1, a2, a3, a4, v11, a5, a6, a7, a8);
}
