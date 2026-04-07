/*
 * XREFs of ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009BC6C
 * Callers:
 *     ??$_Emplace_reallocate@AEBUCompTargetStats@CCompFrameStats@@@?$vector@UCompTargetStats@CCompFrameStats@@V?$allocator@UCompTargetStats@CCompFrameStats@@@std@@@std@@QEAAPEAUCompTargetStats@CCompFrameStats@@QEAU23@AEBU23@@Z @ 0x180003794 (--$_Emplace_reallocate@AEBUCompTargetStats@CCompFrameStats@@@-$vector@UCompTargetStats@CCompFram.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x18003800C (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1800431DC (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x1800440A4 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800441F4 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180044224 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x180069B5C (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180099604 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x1800C88C4 (--$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@-$basic_string@GU-$char_trai.c)
 *     ??$_Emplace_reallocate@AEBUFailureInfo@wil@@@?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@QEAAPEAVStoredFailureInfo@wil@@QEAV23@AEBUFailureInfo@3@@Z @ 0x1800F1E50 (--$_Emplace_reallocate@AEBUFailureInfo@wil@@@-$vector@VStoredFailureInfo@wil@@V-$allocator@VStor.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __noreturn std::_Throw_bad_array_new_length(void)
{
  void **v0; // rdx
  _QWORD v1[3]; // [rsp+30h] [rbp-18h] BYREF

  v1[1] = "bad array new length";
  v0 = &stdext::bad_alloc::`vftable';
  v1[0] = &stdext::bad_alloc::`vftable';
  if ( std::_Raise_handler )
  {
    std::_Raise_handler((const struct stdext::exception *)v1);
    v0 = (void **)v1[0];
  }
  ((void (__fastcall *)(_QWORD *))v0[2])(v1);
  _invoke_watson(0LL, 0LL, 0LL, 0, 0LL);
}
