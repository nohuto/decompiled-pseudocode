/*
 * XREFs of ??$_Resize@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18069BC8C
 * Callers:
 *     _anonymous_namespace_::TryGetFilePublisher @ 0x1806A740C (_anonymous_namespace_--TryGetFilePublisher.c)
 * Callees:
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18069BD04 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 */

void __fastcall std::vector<unsigned char>::_Resize<std::_Value_init_tag>(__int64 *a1, unsigned __int64 a2)
{
  char *v2; // rsi
  __int64 v4; // rdx
  char *v6; // rcx
  char *v7; // rax
  size_t v8; // rbx

  v2 = (char *)a1[1];
  v4 = *a1;
  v6 = &v2[-*a1];
  if ( a2 >= (unsigned __int64)v6 )
  {
    if ( a2 <= (unsigned __int64)v6 )
      return;
    if ( a2 > a1[2] - v4 )
    {
      std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(a1, a2);
      return;
    }
    v8 = a2 - (_QWORD)v6;
    memset_0(v2, 0, v8);
    v7 = &v2[v8];
  }
  else
  {
    v7 = (char *)(v4 + a2);
  }
  a1[1] = (__int64)v7;
}
