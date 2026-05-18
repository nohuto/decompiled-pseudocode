/*
 * XREFs of sub_18007B150 @ 0x18007B150
 * Callers:
 *     sub_180104660 @ 0x180104660 (sub_180104660.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18007AD28 @ 0x18007AD28 (sub_18007AD28.c)
 */

__int64 __fastcall sub_18007B150(__int64 a1)
{
  char *v2; // rcx
  __int64 result; // rax

  v2 = *(char **)a1;
  if ( v2 )
  {
    sub_18007AD28((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_180010884(*(char **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFF80uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
