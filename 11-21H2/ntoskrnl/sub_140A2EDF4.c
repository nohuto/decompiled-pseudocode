/*
 * XREFs of sub_140A2EDF4 @ 0x140A2EDF4
 * Callers:
 *     sub_1407886D0 @ 0x1407886D0 (sub_1407886D0.c)
 *     sub_140A2EAB8 @ 0x140A2EAB8 (sub_140A2EAB8.c)
 *     sub_140A2FD74 @ 0x140A2FD74 (sub_140A2FD74.c)
 * Callees:
 *     sub_1407886D0 @ 0x1407886D0 (sub_1407886D0.c)
 */

__int64 __fastcall sub_140A2EDF4(__int64 *a1, _WORD *a2, void *a3, void *a4)
{
  __int64 result; // rax
  __int64 (*v5[3])[3]; // [rsp+40h] [rbp-18h] BYREF

  v5[0] = 0LL;
  result = sub_1407886D0(a1, a2, a3, (__int64)&qword_14000FD78, v5, a4, 4u, (unsigned int *)v5 + 1);
  if ( (int)result >= 0 && v5[0] != (__int64 (*)[3])0x400000007LL )
    return 3221225473LL;
  return result;
}
