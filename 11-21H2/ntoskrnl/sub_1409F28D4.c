/*
 * XREFs of sub_1409F28D4 @ 0x1409F28D4
 * Callers:
 *     sub_1409F3EC0 @ 0x1409F3EC0 (sub_1409F3EC0.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1409F28D4(__int64 a1)
{
  __int64 result; // rax

  memset((void *)a1, 0, 0x4C8uLL);
  *(_QWORD *)(a1 + 680) = 0LL;
  *(_DWORD *)(a1 + 1136) = 1;
  *(_QWORD *)(a1 + 736) = a1 + 728;
  *(_QWORD *)(a1 + 728) = a1 + 728;
  *(_QWORD *)(a1 + 696) = 0LL;
  *(_QWORD *)(a1 + 704) = 0LL;
  *(_QWORD *)(a1 + 712) = 0LL;
  *(_QWORD *)(a1 + 720) = 0LL;
  *(_OWORD *)(a1 + 752) = 0LL;
  *(_OWORD *)(a1 + 768) = 0LL;
  *(_OWORD *)(a1 + 784) = 0LL;
  *(_QWORD *)(a1 + 800) = 0LL;
  result = a1 + 1168;
  *(_QWORD *)(a1 + 760) = 0LL;
  *(_QWORD *)(a1 + 752) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1;
  *(_DWORD *)(a1 + 1212) = 1;
  *(_QWORD *)(a1 + 1176) = a1 + 1168;
  *(_QWORD *)(a1 + 1168) = a1 + 1168;
  return result;
}
