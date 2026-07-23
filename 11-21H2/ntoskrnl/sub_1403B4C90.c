/*
 * XREFs of sub_1403B4C90 @ 0x1403B4C90
 * Callers:
 *     sub_1403B3F5C @ 0x1403B3F5C (sub_1403B3F5C.c)
 *     sub_1403B4C70 @ 0x1403B4C70 (sub_1403B4C70.c)
 *     sub_1403C1E30 @ 0x1403C1E30 (sub_1403C1E30.c)
 *     sub_140419B58 @ 0x140419B58 (sub_140419B58.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_1403051E0 @ 0x1403051E0 (sub_1403051E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405DC4F8 @ 0x1405DC4F8 (sub_1405DC4F8.c)
 */

void __fastcall sub_1403B4C90(__int64 a1)
{
  __int64 v1; // rbx
  _OWORD *v2; // rsi
  _DWORD *v3; // rbp
  LARGE_INTEGER *v4; // rdi
  __int64 v5; // rdx

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
  {
    v2 = (_OWORD *)(v1 + 32);
    v3 = *(_DWORD **)(v1 + 88);
    if ( *(_BYTE *)(a1 + 64) )
    {
      v4 = (LARGE_INTEGER *)(a1 - 33968);
      if ( _bittest64((const signed __int64 *)(a1 - 33968 + 35232), 0x27u) )
        v4[4225].QuadPart = __readmsr(0xDB2u);
      v4[4211].QuadPart = __rdtsc();
      v4[4215] = KeQueryPerformanceCounter(0LL);
      LOBYTE(v5) = 1;
      sub_1403051E0((__int64)v4, v5, 0, 0, v1 + 32, v3);
    }
    else
    {
      sub_1405DC4F8(a1, 1, 0, v1 + 32, *(_QWORD *)(v1 + 88));
    }
    *(_OWORD *)(v1 + 160) = *v2;
    *(_OWORD *)(v1 + 176) = *(_OWORD *)(v1 + 48);
    *(_OWORD *)(v1 + 192) = *(_OWORD *)(v1 + 64);
    *(_QWORD *)(v1 + 208) = *(_QWORD *)(v1 + 80);
    memmove(*(void **)(v1 + 216), v3, 96 * v3[12] + 56);
    *(_QWORD *)(v1 + 8) = *(_QWORD *)v2;
    *(_QWORD *)v1 = *(_QWORD *)(v1 + 40);
    *(_QWORD *)(v1 + 16) = *(_QWORD *)(v1 + 48);
    *(_DWORD *)(v1 + 24) = *(_DWORD *)(v1 + 80);
  }
}
