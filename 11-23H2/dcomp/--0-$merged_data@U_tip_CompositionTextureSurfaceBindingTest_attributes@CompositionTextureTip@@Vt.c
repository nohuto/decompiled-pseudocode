/*
 * XREFs of ??0?$merged_data@U_tip_CompositionTextureSurfaceBindingTest_attributes@CompositionTextureTip@@Vtest_data_basic@tip2@@@details@tip2@@QEAA@XZ @ 0x18009D604
 * Callers:
 *     ?start@?$tip_test@V?$merged_data@U_tip_CompositionTextureSurfaceBindingTest_attributes@CompositionTextureTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18009F714 (-start@-$tip_test@V-$merged_data@U_tip_CompositionTextureSurfaceBindingTest_attributes@Compositi.c)
 * Callees:
 *     ??0?$shared_data@$0A@$0A@$00@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x18009D6F8 (--0-$shared_data@$0A@$0A@$00@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 */

__int64 __fastcall tip2::details::merged_data<CompositionTextureTip::_tip_CompositionTextureSurfaceBindingTest_attributes,tip2::test_data_basic>::merged_data<CompositionTextureTip::_tip_CompositionTextureSurfaceBindingTest_attributes,tip2::test_data_basic>(
        __int64 a1)
{
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-60h]
  __int128 v4; // [rsp+30h] [rbp-50h]
  _OWORD v5[3]; // [rsp+50h] [rbp-30h] BYREF

  *(_QWORD *)a1 = &tip2::details::test_data_interface::`vftable';
  *((_QWORD *)&v4 + 1) = 0LL;
  *(_QWORD *)&v3 = 0x2C10002BB083FLL;
  *((_QWORD *)&v3 + 1) = "CompositionTextureSurfaceBindingTest";
  LOWORD(v4) = 1;
  v5[0] = v3;
  v5[1] = v4;
  v5[2] = 0uLL;
  tip2::details::shared_data<0,0,1>::shared_data<0,0,1>(a1 + 8, a1, v5);
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)(a1 + 312) = 0LL;
  *(_QWORD *)(a1 + 320) = 0LL;
  *(_QWORD *)a1 = &tip2::details::merged_data<CompositionTextureTip::_tip_CreateCompositionTextureTest_attributes,tip2::test_data_basic>::`vftable';
  *(_QWORD *)(a1 + 248) = a1 + 16;
  result = a1;
  *(_DWORD *)(a1 + 328) = 1;
  return result;
}
