/*
 * XREFs of sub_14099BD28 @ 0x14099BD28
 * Callers:
 *     sub_140806090 @ 0x140806090 (sub_140806090.c)
 * Callees:
 *     sub_140387A68 @ 0x140387A68 (sub_140387A68.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1408062D4 @ 0x1408062D4 (sub_1408062D4.c)
 *     sub_14099B8FC @ 0x14099B8FC (sub_14099B8FC.c)
 */

__int64 __fastcall sub_14099BD28(__int64 a1, _DWORD *a2)
{
  unsigned __int16 v4; // cx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 result; // rax

  memset(a2, 0, 0x318uLL);
  *a2 = *(_DWORD *)a1;
  a2[1] = *(_DWORD *)(a1 + 412);
  a2[3] = *(_DWORD *)(a1 + 408);
  a2[2] = *(_DWORD *)(a1 + 416);
  *((_QWORD *)a2 + 2) = sub_140387A68(*(_QWORD *)(a1 + 424), 0xF4240uLL);
  *((_QWORD *)a2 + 3) = sub_140387A68(*(_QWORD *)(a1 + 432), 0xF4240uLL);
  *((_QWORD *)a2 + 4) = sub_140387A68(*(_QWORD *)(a1 + 440), 0xF4240uLL);
  v4 = 0;
  *(_OWORD *)(a2 + 10) = *(_OWORD *)(a1 + 448);
  *(_OWORD *)(a2 + 14) = *(_OWORD *)(a1 + 464);
  a2[18] = *(_DWORD *)(a1 + 480);
  *(_OWORD *)(a2 + 19) = *(_OWORD *)(a1 + 484);
  *(_OWORD *)(a2 + 23) = *(_OWORD *)(a1 + 500);
  *(_QWORD *)(a2 + 27) = *(_QWORD *)(a1 + 516);
  a2[29] = *(_DWORD *)(a1 + 524);
  do
  {
    v5 = *((unsigned __int16 *)a2 + 232);
    *((_WORD *)a2 + 5 * v5 + 233) = v4;
    if ( v4 >= *(_WORD *)(a1 + 144) )
      v6 = 0LL;
    else
      v6 = *(_QWORD *)(a1 + 8LL * v4 + 152);
    *(_QWORD *)((char *)a2 + 10 * v5 + 468) = v6;
    if ( v6 )
      ++*((_WORD *)a2 + 232);
    ++v4;
  }
  while ( v4 < 0x20u );
  *((_QWORD *)a2 + 15) = sub_140387A68(*(_QWORD *)(a1 + 536), 0xF4240uLL);
  *((_OWORD *)a2 + 8) = *(_OWORD *)(a1 + 544);
  a2[36] = *(_DWORD *)(a1 + 560);
  sub_1408062D4(5u, a1 + 568, (unsigned __int64 *)a2 + 19, 0xF4240uLL);
  *((_QWORD *)a2 + 24) = sub_140387A68(*(_QWORD *)(a1 + 608), 0xF4240uLL);
  *(_OWORD *)(a2 + 50) = *(_OWORD *)(a1 + 616);
  a2[54] = *(_DWORD *)(a1 + 632);
  sub_1408062D4(5u, a1 + 640, (unsigned __int64 *)a2 + 28, 0xF4240uLL);
  *((_QWORD *)a2 + 33) = sub_140387A68(*(_QWORD *)(a1 + 680), 0xF4240uLL);
  *((_OWORD *)a2 + 17) = *(_OWORD *)(a1 + 688);
  a2[72] = *(_DWORD *)(a1 + 704);
  sub_1408062D4(5u, a1 + 712, (unsigned __int64 *)a2 + 37, 0xF4240uLL);
  *((_QWORD *)a2 + 42) = sub_140387A68(*(_QWORD *)(a1 + 752), 0xF4240uLL);
  *((_QWORD *)a2 + 43) = *(_QWORD *)(a1 + 760);
  a2[88] = *(_DWORD *)(a1 + 768);
  sub_1408062D4(3u, a1 + 776, (unsigned __int64 *)a2 + 45, 0xF4240uLL);
  result = sub_14099B8FC((int *)a1, (__int64)a2);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
