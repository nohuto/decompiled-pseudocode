/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@EEAAXXZ @ 0x18000BA20
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000F4D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Ref_count_obj2<std::wstring>::_Destroy(_QWORD *a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax

  v1 = a1[5];
  if ( v1 >= 8 )
    std::_Deallocate<16,0>(a1[2], 2 * v1 + 2);
  result = 0LL;
  a1[5] = 7LL;
  a1[4] = 0LL;
  *((_WORD *)a1 + 8) = 0;
  return result;
}
