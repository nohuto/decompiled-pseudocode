/*
 * XREFs of ??$_Emplace_reallocate@AEAK@?$vector@KV?$allocator@K@std@@@std@@QEAAPEAKQEAKAEAK@Z @ 0x18003331C
 * Callers:
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x180039784 (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 * Callees:
 *     ?_Calculate_growth@?$vector@KV?$allocator@K@std@@@std@@AEBA_K_K@Z @ 0x18002B048 (-_Calculate_growth@-$vector@KV-$allocator@K@std@@@std@@AEBA_K_K@Z.c)
 *     ?_Change_array@?$vector@KV?$allocator@K@std@@@std@@AEAAXQEAK_K1@Z @ 0x18002B084 (-_Change_array@-$vector@KV-$allocator@K@std@@@std@@AEAAXQEAK_K1@Z.c)
 *     ?allocate@?$allocator@K@std@@QEAAPEAK_K@Z @ 0x18002B934 (-allocate@-$allocator@K@std@@QEAAPEAK_K@Z.c)
 *     memmove_0 @ 0x180048B28 (memmove_0.c)
 */

_DWORD *__fastcall std::vector<unsigned long>::_Emplace_reallocate<unsigned long &>(
        const void **a1,
        _BYTE *a2,
        _DWORD *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // rcx
  _QWORD *v11; // rdi
  _DWORD *v12; // rsi
  _BYTE *v13; // r8
  _BYTE *v14; // rdx
  void *v15; // rcx
  size_t v16; // r8

  v6 = (a2 - (_BYTE *)*a1) >> 2;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2;
  if ( v7 == 0x3FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = std::vector<unsigned long>::_Calculate_growth(a1, v7 + 1);
  v11 = std::allocator<unsigned long>::allocate(v10, v9);
  v12 = (_DWORD *)v11 + v6;
  *v12 = *a3;
  v13 = a1[1];
  v14 = *a1;
  v15 = v11;
  if ( a2 == v13 )
  {
    v16 = v13 - v14;
  }
  else
  {
    memmove_0(v11, v14, a2 - (_BYTE *)*a1);
    v15 = v12 + 1;
    v16 = (_BYTE *)a1[1] - a2;
    v14 = a2;
  }
  memmove_0(v15, v14, v16);
  std::vector<unsigned long>::_Change_array((__int64)a1, (__int64)v11, v8, v9);
  return v12;
}
