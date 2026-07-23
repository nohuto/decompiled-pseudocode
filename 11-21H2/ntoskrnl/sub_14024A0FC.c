/*
 * XREFs of sub_14024A0FC @ 0x14024A0FC
 * Callers:
 *     sub_1402003C0 @ 0x1402003C0 (sub_1402003C0.c)
 *     sub_140249930 @ 0x140249930 (sub_140249930.c)
 * Callees:
 *     sub_140239060 @ 0x140239060 (sub_140239060.c)
 *     sub_1402E7D60 @ 0x1402E7D60 (sub_1402E7D60.c)
 *     sub_1402E8154 @ 0x1402E8154 (sub_1402E8154.c)
 *     sub_1402E89B0 @ 0x1402E89B0 (sub_1402E89B0.c)
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAH@Z @ 0x1402EA644 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHAEAV-$ist.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14033C300 @ 0x14033C300 (sub_14033C300.c)
 */

__int64 __fastcall sub_14024A0FC(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rbx
  signed __int64 v9; // rax
  unsigned __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  signed __int64 v13; // rbx
  char v14; // al

  v3 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((a3 + 0x220000000000LL) >> 4);
  v9 = sub_140317A10(v3);
  v10 = v9 & 0xFFFFFFFFFFFFFFDFuLL;
  if ( (dword_140D06880 & 0x4000000) != 0 )
    _mm_lfence();
  if ( v9 == _InterlockedCompareExchange64((volatile signed __int64 *)v3, v10, v9) )
  {
    std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint((__int64)(v3 << 25) >> 16, 0LL, 2LL);
    sub_140239060(a3);
    sub_1402E8154(a3, a2);
    sub_1402E7D60(v8, v7, a1, 68LL);
    v13 = v10 ^ (v10 ^ (v8 << 12)) & 0xFFFFFFFFFF000LL | 0x20;
    if ( (dword_140D06880 & 0x4000000) != 0 )
      _mm_lfence();
    if ( v10 == _InterlockedCompareExchange64((volatile signed __int64 *)v3, v13, v10) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(a2 + 34) = *(_BYTE *)(a2 + 34) & 0xF8 | 5;
      sub_14033C300(a2, 0LL);
      v14 = *(_BYTE *)(a2 + 34);
      *(_QWORD *)(a2 + 40) &= ~0x8000000000000000uLL;
      *(_BYTE *)(a2 + 34) = v14 & 0xC7;
      *(_BYTE *)(a2 + 35) &= ~0x20u;
      *(_QWORD *)(a2 + 24) &= 0xC000000000000000uLL;
      return 1LL;
    }
    *(_BYTE *)(a3 + 34) = *(_BYTE *)(a3 + 34) & 0xF8 | 5;
    sub_1402E89B0(a3 + 16, v11, v12);
    sub_14033C300(a3, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return 0LL;
}
