/*
 * XREFs of ??$_Uninitialized_value_construct_n_unchecked1@PEAPEA_K_K@std@@YAPEAPEA_KPEAPEA_K_K@Z @ 0x1800A0904
 * Callers:
 *     ?_Growmap@?$deque@_KV?$allocator@_K@std@@@std@@AEAAX_K@Z @ 0x1800A18C0 (-_Growmap@-$deque@_KV-$allocator@_K@std@@@std@@AEAAX_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Uninitialized_value_construct_n_unchecked1<unsigned __int64 * *,unsigned __int64>(
        __int64 a1,
        __int64 a2)
{
  return std::_Zero_range<unsigned __int64 * *>(a1, a1 + 8 * a2);
}
