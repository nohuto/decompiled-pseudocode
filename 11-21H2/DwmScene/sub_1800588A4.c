/*
 * XREFs of sub_1800588A4 @ 0x1800588A4
 * Callers:
 *     sub_18009FB44 @ 0x18009FB44 (sub_18009FB44.c)
 *     sub_18009FCC0 @ 0x18009FCC0 (sub_18009FCC0.c)
 *     sub_1800A0210 @ 0x1800A0210 (sub_1800A0210.c)
 * Callees:
 *     memcpy @ 0x18000CA6D (memcpy.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800588A4(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rsi
  int v5; // eax
  char *v6; // rbx

  *(_QWORD *)a1 = &unk_180133D08;
  std::ios::ios(a1 + 144);
  std::istream::istream(a1, a1 + 16, 0LL, 0LL);
  *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1) = &std::istringstream::`vftable';
  *(_DWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 - 4) = *(_DWORD *)(*(_QWORD *)a1 + 4LL) - 144;
  std::streambuf::streambuf(a1 + 16);
  *(_QWORD *)(a1 + 16) = &std::stringbuf::`vftable';
  v4 = a2[2];
  if ( a2[3] >= 0x10uLL )
    a2 = (_QWORD *)*a2;
  v5 = 2;
  if ( v4 > 0x7FFFFFFF )
  {
    std::_Xbad_alloc();
    __debugbreak();
  }
  if ( v4 )
  {
    v6 = (char *)sub_180011088(v4);
    memcpy(v6, a2, v4);
    *(_QWORD *)(a1 + 120) = &v6[v4];
    **(_QWORD **)(a1 + 40) = v6;
    **(_QWORD **)(a1 + 72) = v6;
    **(_DWORD **)(a1 + 96) = v4;
    v5 = 3;
  }
  else
  {
    *(_QWORD *)(a1 + 120) = 0LL;
  }
  *(_DWORD *)(a1 + 128) = v5;
  return a1;
}
