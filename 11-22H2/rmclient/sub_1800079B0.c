/*
 * XREFs of sub_1800079B0 @ 0x1800079B0
 * Callers:
 *     sub_180007760 @ 0x180007760 (sub_180007760.c)
 * Callees:
 *     sub_180007A50 @ 0x180007A50 (sub_180007A50.c)
 *     memset @ 0x180016A5E (memset.c)
 */

__int64 __fastcall sub_1800079B0(__int64 a1, void *a2, int a3, int a4, __int64 a5, char *a6)
{
  __int64 result; // rax

  memset(a6, 0, 0x228uLL);
  sub_180007A50(a6, 232LL, a1);
  RtlCopySid(0x44u, a6 + 464, a2);
  result = a5;
  *((_DWORD *)a6 + 133) = a3;
  *((_QWORD *)a6 + 68) = a5;
  *((_DWORD *)a6 + 134) = a4;
  return result;
}
