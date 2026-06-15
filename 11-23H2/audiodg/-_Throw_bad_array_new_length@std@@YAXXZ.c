/*
 * XREFs of ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x140065F64
 * Callers:
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x140064314 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x140064498 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x1400647CC (--$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@-$basic_string@GU-$char_trai.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x14006AB30 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x140029240 (_CxxThrowException_0.c)
 */

void __noreturn std::_Throw_bad_array_new_length(void)
{
  _QWORD pExceptionObject[5]; // [rsp+20h] [rbp-28h] BYREF

  pExceptionObject[2] = 0LL;
  pExceptionObject[1] = "bad array new length";
  pExceptionObject[0] = &std::bad_array_new_length::`vftable';
  throw (std::bad_array_new_length *)pExceptionObject;
}
