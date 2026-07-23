/*
 * XREFs of sub_140965F28 @ 0x140965F28
 * Callers:
 *     LpcRequestWaitReplyPort @ 0x140881960 (LpcRequestWaitReplyPort.c)
 *     LpcRequestWaitReplyPortEx @ 0x140965BF0 (LpcRequestWaitReplyPortEx.c)
 * Callees:
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1407AD040 @ 0x1407AD040 (sub_1407AD040.c)
 */

__int64 __fastcall sub_140965F28(__int64 a1, __int128 *a2, unsigned __int64 a3, __int64 a4, char a5)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // edx
  unsigned int v8; // ebx

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v7 = 1179650;
  if ( a5 != 1 )
    v7 = 131074;
  v8 = sub_1407AD040(a1, v7, a2, 0LL, a3, 0LL, 0LL, 0LL, 0);
  sub_1402F9540((__int64)KeGetCurrentThread());
  if ( v8 == -1073740029 )
    v8 = -1073741769;
  if ( v8 == -1073740031 )
    return (unsigned int)-1073741229;
  return v8;
}
