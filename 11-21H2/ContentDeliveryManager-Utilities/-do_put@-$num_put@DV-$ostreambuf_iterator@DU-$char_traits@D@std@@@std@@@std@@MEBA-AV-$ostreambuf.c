/*
 * XREFs of ?do_put@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DJ@Z @ 0x18000A4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Ifmt@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAPEADPEADPEBDH@Z @ 0x1800085E4 (-_Ifmt@-$num_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAPEADPEADPEBDH.c)
 *     ?_Iput@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEAD_K@Z @ 0x180008804 (-_Iput@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$ostreambuf_.c)
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     sprintf_s_0 @ 0x1800222D8 (sprintf_s_0.c)
 */

_OWORD *__fastcall std::num_put<char,std::ostreambuf_iterator<char>>::do_put(
        __int64 a1,
        _OWORD *a2,
        _OWORD *a3,
        __int64 a4,
        char a5,
        unsigned int a6)
{
  const char *v10; // rax
  int v11; // eax
  int v13[4]; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v14[16]; // [rsp+50h] [rbp-88h] BYREF
  char Buffer[64]; // [rsp+60h] [rbp-78h] BYREF

  v10 = std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Ifmt(a1, v14, "ld", *(_DWORD *)(a4 + 24));
  v11 = sprintf_s_0(Buffer, 0x40uLL, v10, a6);
  *(_OWORD *)v13 = *a3;
  std::num_put<char,std::ostreambuf_iterator<char>>::_Iput(a1, a2, (__int128 *)v13, a4, a5, Buffer, v11);
  return a2;
}
