/*
 * XREFs of ??$_AllocArray@GVCTCoAllocPolicy@@@@YAJPEAXK_KPEAPEAG@Z @ 0x18004F490
 * Callers:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18004F4CC (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 * Callees:
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x180041AE4 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x180054EF4 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 */

int __fastcall _AllocArray<unsigned short,CTCoAllocPolicy>(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        _QWORD *a4)
{
  int result; // eax
  unsigned int v5; // edx
  void *v6; // rcx
  void **v7; // r9
  unsigned __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  *a4 = 0LL;
  result = ULongLongMult(a3, 2uLL, &v8);
  if ( result >= 0 )
    return CTCoAllocPolicy::Alloc(v6, v5, v8, v7);
  return result;
}
