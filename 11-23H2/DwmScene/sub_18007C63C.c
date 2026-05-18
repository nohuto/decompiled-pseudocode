/*
 * XREFs of sub_18007C63C @ 0x18007C63C
 * Callers:
 *     sub_180030980 @ 0x180030980 (sub_180030980.c)
 * Callees:
 *     memset @ 0x18000C0BC (memset.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 */

_BYTE *__fastcall sub_18007C63C(_BYTE *a1)
{
  __int64 v2; // rax
  _BYTE *result; // rax

  memset(a1, 0, 0x78uLL);
  *((_QWORD *)a1 + 1) = 0LL;
  *a1 = 0;
  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  v2 = sub_18001C190();
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  *((_QWORD *)a1 + 2) = v2;
  result = a1;
  *((_DWORD *)a1 + 28) = 0;
  *((_DWORD *)a1 + 29) = 0;
  return result;
}
