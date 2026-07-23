/*
 * XREFs of sub_1402433D0 @ 0x1402433D0
 * Callers:
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z @ 0x14024D7F4 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z.c)
 *     sub_1402CD9C0 @ 0x1402CD9C0 (sub_1402CD9C0.c)
 *     sub_1402E67E8 @ 0x1402E67E8 (sub_1402E67E8.c)
 *     sub_1402EACBC @ 0x1402EACBC (sub_1402EACBC.c)
 *     sub_140319160 @ 0x140319160 (sub_140319160.c)
 *     sub_14032E130 @ 0x14032E130 (sub_14032E130.c)
 *     sub_14032EA60 @ 0x14032EA60 (sub_14032EA60.c)
 *     sub_140330730 @ 0x140330730 (sub_140330730.c)
 *     sub_14033E970 @ 0x14033E970 (sub_14033E970.c)
 *     sub_14057FA8C @ 0x14057FA8C (sub_14057FA8C.c)
 * Callees:
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 */

_BOOL8 __fastcall sub_1402433D0(unsigned __int64 a1)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rsi
  _BOOL8 result; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = sub_140317A10(a1);
  result = 0;
  if ( (v7 & 1) != 0 )
  {
    v2 = ((unsigned __int64)sub_140317A10(&v7) >> 12) & 0xFFFFFFFFFFLL;
    v3 = 6 * v2;
    if ( v2 > qword_140C50840 || ((*(_QWORD *)(48 * v2 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
      return 1;
    v4 = *(_QWORD *)(48 * v2 - 0x220000000000LL + 8);
    if ( (v4 | 0x8000000000000000uLL) != a1
      || ((*(_QWORD *)(48 * v2 - 0x220000000000LL + 40) ^ ((unsigned __int64)sub_140317A10(
                                                                               ((a1 >> 9) & 0x7FFFFFFFF8LL)
                                                                             - 0x98000000000LL) >> 12)) & 0xFFFFFFFFFFLL) != 0 )
    {
      v6 = *(_QWORD *)(8 * v3 - 0x220000000000LL + 40);
      if ( v6 >= 0 || (v6 & 0x10000000000LL) != 0 || v4 < 0 || !v4 )
        return 1;
    }
  }
  return result;
}
