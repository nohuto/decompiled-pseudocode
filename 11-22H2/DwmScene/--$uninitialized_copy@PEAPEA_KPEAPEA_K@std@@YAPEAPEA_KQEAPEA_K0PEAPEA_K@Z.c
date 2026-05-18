/*
 * XREFs of ??$uninitialized_copy@PEAPEA_KPEAPEA_K@std@@YAPEAPEA_KQEAPEA_K0PEAPEA_K@Z @ 0x1800A0970
 * Callers:
 *     ?_Growmap@?$deque@_KV?$allocator@_K@std@@@std@@AEAAX_K@Z @ 0x1800A18C0 (-_Growmap@-$deque@_KV-$allocator@_K@std@@@std@@AEAAX_K@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::uninitialized_copy<unsigned __int64 * *,unsigned __int64 * *>(void *Src, __int64 a2, void *a3)
{
  return std::_Copy_memmove<unsigned __int64 * *,unsigned __int64 * *>(Src, a2, a3);
}
