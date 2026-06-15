/*
 * XREFs of sub_180097A6C @ 0x180097A6C
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall sub_180097A6C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, std::_Ref_count_base *a6)
{
  if ( a6 )
    std::_Ref_count_base::_Decref(a6);
  JUMPOUT(0x180030A95LL);
}
