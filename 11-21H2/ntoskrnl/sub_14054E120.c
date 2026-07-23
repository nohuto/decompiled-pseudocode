/*
 * XREFs of sub_14054E120 @ 0x14054E120
 * Callers:
 *     sub_1402F391C @ 0x1402F391C (sub_1402F391C.c)
 *     sub_14039D79C @ 0x14039D79C (sub_14039D79C.c)
 *     sub_14054CFC4 @ 0x14054CFC4 (sub_14054CFC4.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 sub_14054E120()
{
  _QWORD v1[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v1, 0, 0x68uLL);
  if ( KeGetCurrentIrql() > 2u )
    return 255LL;
  v1[1] = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 992LL);
  return sub_140358A20(2u, 240, 0, (__int64)v1);
}
