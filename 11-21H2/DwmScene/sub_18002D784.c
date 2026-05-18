/*
 * XREFs of sub_18002D784 @ 0x18002D784
 * Callers:
 *     sub_1801005F6 @ 0x1801005F6 (sub_1801005F6.c)
 *     sub_1801006C8 @ 0x1801006C8 (sub_1801006C8.c)
 *     sub_180104904 @ 0x180104904 (sub_180104904.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18002CC9C @ 0x18002CC9C (sub_18002CC9C.c)
 */

__int64 __fastcall sub_18002D784(__int64 a1)
{
  char *v2; // rcx
  __int64 result; // rax

  v2 = *(char **)a1;
  if ( v2 )
  {
    sub_18002CC9C((char **)v2, *(char ***)(a1 + 8));
    result = sub_180010884(*(char **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
