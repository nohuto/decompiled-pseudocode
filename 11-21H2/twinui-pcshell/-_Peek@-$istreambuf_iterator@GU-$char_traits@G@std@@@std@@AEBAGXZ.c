/*
 * XREFs of ?_Peek@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEBAGXZ @ 0x1805DE2B8
 * Callers:
 *     ??$_Construct@V?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXV?$istreambuf_iterator@GU?$char_traits@G@std@@@1@V21@Uinput_iterator_tag@1@@Z @ 0x1805DCAFC (--$_Construct@V-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@-$basic_string@GU-$char_trait.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::istreambuf_iterator<unsigned short>::_Peek(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( !v2 || (result = std::basic_streambuf<unsigned short>::sgetc(v2), (_WORD)result == 0xFFFF) )
  {
    *a1 = 0LL;
    result = *((unsigned __int16 *)a1 + 5);
  }
  else
  {
    *((_WORD *)a1 + 5) = result;
  }
  *((_BYTE *)a1 + 8) = 1;
  return result;
}
