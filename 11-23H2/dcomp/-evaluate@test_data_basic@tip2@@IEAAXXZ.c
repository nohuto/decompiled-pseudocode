/*
 * XREFs of ?evaluate@test_data_basic@tip2@@IEAAXXZ @ 0x18009DF54
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_CompositionTextureSurfaceBindingTest_attributes@CompositionTextureTip@@Vtest_data_basic@tip2@@@details@tip2@@EEAAXXZ @ 0x18009DF40 (-evaluate@-$merged_data@U_tip_CompositionTextureSurfaceBindingTest_attributes@CompositionTexture.c)
 * Callees:
 *     <none>
 */

void __fastcall tip2::test_data_basic::evaluate(tip2::test_data_basic *this)
{
  __int64 v1; // rax
  __int16 v2; // cx

  v1 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 56LL) & 0x200) != 0 )
  {
    if ( *(_BYTE *)(v1 + 152) )
      return;
    *(_BYTE *)(v1 + 152) = 1;
    v2 = 0x8000;
  }
  else
  {
    if ( *(_BYTE *)(v1 + 152) )
      return;
    *(_BYTE *)(v1 + 152) = 3;
    v2 = 16385;
  }
  *(_QWORD *)(v1 + 160) = 0LL;
  *(_WORD *)(v1 + 154) = v2;
}
