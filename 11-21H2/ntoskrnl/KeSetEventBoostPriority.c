/*
 * XREFs of KeSetEventBoostPriority @ 0x14056EA10
 * Callers:
 *     sub_1409FB810 @ 0x1409FB810 (sub_1409FB810.c)
 * Callees:
 *     sub_1403595B4 @ 0x1403595B4 (sub_1403595B4.c)
 */

char __fastcall KeSetEventBoostPriority(volatile signed __int32 *a1, char *a2)
{
  char *v2; // rax
  char v4; // [rsp+48h] [rbp+10h] BYREF

  v2 = &v4;
  if ( a2 )
    v2 = a2;
  return sub_1403595B4(a1, (__int64)v2, 0LL, 0LL, 1, 0);
}
