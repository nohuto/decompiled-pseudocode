/*
 * XREFs of sub_14027B0B8 @ 0x14027B0B8
 * Callers:
 *     sub_1402307A0 @ 0x1402307A0 (sub_1402307A0.c)
 *     sub_140279590 @ 0x140279590 (sub_140279590.c)
 *     sub_1405A7708 @ 0x1405A7708 (sub_1405A7708.c)
 * Callees:
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAH@Z @ 0x1402EA644 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHAEAV-$ist.c)
 *     sub_140333AA0 @ 0x140333AA0 (sub_140333AA0.c)
 */

__int64 __fastcall sub_14027B0B8(
        __int64 a1,
        volatile signed __int64 *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int v6; // ebx
  unsigned int v8; // edi
  int v9; // esi
  signed __int64 v10; // r10
  __int64 v12; // rcx

  v6 = 0;
  v8 = 0;
  v9 = 0;
  v10 = a6;
  if ( (a6 & 0x20) != 0 )
  {
    if ( ((a4 & 1) == 0 || *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL) != 5)
      && (dword_140D06880 & 0x100) == 0
      && (dword_140D06880 & 0x200) == 0 )
    {
      v8 = 1;
    }
  }
  else
  {
    v10 = a6 | 0x20;
    v9 = 1;
  }
  if ( (*(_QWORD *)(a1 + 8) & 2) == 0 )
    goto LABEL_10;
  if ( (v10 & 0x42) != 0 )
  {
    if ( (v10 & 0x42) == 0x40 )
    {
      v8 = 1;
      goto LABEL_8;
    }
LABEL_10:
    if ( !v9 )
      goto LABEL_14;
    goto LABEL_11;
  }
LABEL_8:
  v10 |= 0x62uLL;
LABEL_11:
  if ( (dword_140D06880 & 0x4000000) != 0 )
    _mm_lfence();
  if ( a6 != _InterlockedCompareExchange64(a2, v10, a6) )
    return 0LL;
LABEL_14:
  if ( v8 && (dword_140D06880 & 0x100) == 0 && (dword_140D06880 & 0x200) == 0 )
  {
    v12 = *(_QWORD *)(a1 + 56);
    if ( v12 )
      v6 = sub_140333AA0(v12);
    std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(a3, v6, a5);
  }
  return v8;
}
