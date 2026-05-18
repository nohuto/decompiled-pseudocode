/*
 * XREFs of ??$_Copy_memmove@PEB_KPEA_K@std@@YAPEA_KPEB_K0PEA_K@Z @ 0x18007C948
 * Callers:
 *     ??$_Construct_n@PEB_KPEB_K@?$vector@_KV?$allocator@_K@std@@@std@@AEAAX_K$$QEAPEB_K1@Z @ 0x18007C8CC (--$_Construct_n@PEB_KPEB_K@-$vector@_KV-$allocator@_K@std@@@std@@AEAAX_K$$QEAPEB_K1@Z.c)
 * Callees:
 *     memmove_0 @ 0x18000CA85 (memmove_0.c)
 */

__int64 __fastcall std::_Copy_memmove<unsigned __int64 const *,unsigned __int64 *>(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove_0(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
