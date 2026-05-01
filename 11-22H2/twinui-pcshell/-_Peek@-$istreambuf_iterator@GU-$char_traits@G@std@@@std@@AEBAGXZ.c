/*
 * XREFs of ?_Peek@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEBAGXZ @ 0x1806E3F40
 * Callers:
 *     ??$_Construct@V?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXV?$istreambuf_iterator@GU?$char_traits@G@std@@@1@V21@Uinput_iterator_tag@1@@Z @ 0x1806E0744 (--$_Construct@V-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@-$basic_string@GU-$char_trait.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::istreambuf_iterator<unsigned short>::_Peek(__int64 *a1)
{
  __int64 v2; // rcx
  __int16 v3; // ax
  __int64 result; // rax

  v2 = *a1;
  if ( !v2 || (v3 = std::basic_streambuf<unsigned short>::sgetc(v2), v3 == -1) )
    *a1 = 0LL;
  else
    *((_WORD *)a1 + 5) = v3;
  result = *((unsigned __int16 *)a1 + 5);
  *((_BYTE *)a1 + 8) = 1;
  return result;
}
