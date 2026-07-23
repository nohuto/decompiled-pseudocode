/*
 * XREFs of sub_140B256D0 @ 0x140B256D0
 * Callers:
 *     sub_140B255E4 @ 0x140B255E4 (sub_140B255E4.c)
 * Callees:
 *     sub_1403D6F40 @ 0x1403D6F40 (sub_1403D6F40.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406EBC54 @ 0x1406EBC54 (sub_1406EBC54.c)
 *     sub_140B25808 @ 0x140B25808 (sub_140B25808.c)
 */

__int64 __fastcall sub_140B256D0(__int64 a1)
{
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  memset((void *)a1, 0, 0xB60uLL);
  *(_QWORD *)&v3 = 59LL;
  *((_QWORD *)&v3 + 1) = PsGetHostSilo;
  sub_1403D6F40(a1, &v3);
  *(_QWORD *)(a1 + 1952) = 0LL;
  qword_140D019A0 = PsInitialSystemProcess;
  *(_QWORD *)(a1 + 2016) = 0LL;
  *(_QWORD *)(a1 + 2024) = 0LL;
  *(_QWORD *)(a1 + 1992) = 0LL;
  *(_QWORD *)(a1 + 2000) = 0LL;
  *(_QWORD *)(a1 + 2008) = 0LL;
  *(_DWORD *)(a1 + 2032) = -1;
  *(_QWORD *)(a1 + 2040) = 0LL;
  *(_BYTE *)(a1 + 1960) = 5;
  sub_140B25808(a1 + 2048);
  sub_1406EBC54((_QWORD *)(a1 + 2608));
  *(_QWORD *)(a1 + 2624) = 0LL;
  *(_QWORD *)(a1 + 2632) = 0LL;
  *(_QWORD *)(a1 + 2616) = 0LL;
  memset((void *)(a1 + 2640), 0, 0x70uLL);
  *(_WORD *)(a1 + 2648) = 1;
  *(_BYTE *)(a1 + 2650) = 6;
  *(_DWORD *)(a1 + 2652) = 0;
  *(_QWORD *)(a1 + 2664) = a1 + 2656;
  *(_QWORD *)(a1 + 2656) = a1 + 2656;
  memset((void *)(a1 + 2752), 0, 0x70uLL);
  result = a1 + 2768;
  *(_DWORD *)(a1 + 2764) = 0;
  *(_WORD *)(a1 + 2760) = 1;
  *(_BYTE *)(a1 + 2762) = 6;
  *(_QWORD *)(a1 + 2776) = a1 + 2768;
  *(_QWORD *)(a1 + 2768) = a1 + 2768;
  *(_DWORD *)(a1 + 2896) = 3;
  return result;
}
