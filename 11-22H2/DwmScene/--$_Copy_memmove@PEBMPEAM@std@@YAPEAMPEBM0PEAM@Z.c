/*
 * XREFs of ??$_Copy_memmove@PEBMPEAM@std@@YAPEAMPEBM0PEAM@Z @ 0x180044CE0
 * Callers:
 *     ??$_Construct_n@PEBMPEBM@?$vector@MV?$allocator@M@std@@@std@@AEAAX_K$$QEAPEBM1@Z @ 0x180044C64 (--$_Construct_n@PEBMPEBM@-$vector@MV-$allocator@M@std@@@std@@AEAAX_K$$QEAPEBM1@Z.c)
 * Callees:
 *     memmove_0 @ 0x18000CA85 (memmove_0.c)
 */

__int64 __fastcall std::_Copy_memmove<float const *,float *>(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove_0(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
