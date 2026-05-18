/*
 * XREFs of ?ResetToSize@ColorTransform@Engine@Spectre@@QEAAX_K@Z @ 0x180090F2C
 * Callers:
 *     ?CreateStandardLights@ViewerEngine@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180065C40 (-CreateStandardLights@ViewerEngine@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@.c)
 *     ??0ColorTransform@Engine@Spectre@@QEAA@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18008F4C8 (--0ColorTransform@Engine@Spectre@@QEAA@AEBV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     std::_Test_callable__lambda_b8abe43d8a0b55a507686fbec5567b70___ @ 0x18008F398 (std--_Test_callable__lambda_b8abe43d8a0b55a507686fbec5567b70___.c)
 *     ?Generate@ColorTransform@Engine@Spectre@@QEAAX_KV?$function@$$A6A?AUColor@Math@Utils@Spectre@@U1234@@Z@std@@@Z @ 0x18008FD48 (-Generate@ColorTransform@Engine@Spectre@@QEAAX_KV-$function@$$A6A-AUColor@Math@Utils@Spectre@@U1.c)
 */

void __fastcall Spectre::Engine::ColorTransform::ResetToSize(Spectre::Engine::ColorTransform *this)
{
  __int64 v1; // rdx
  Spectre::Engine::ColorTransform *v2; // rcx
  _QWORD v3[7]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v4; // [rsp+58h] [rbp-10h]

  v4 = 0LL;
  if ( std::_Test_callable__lambda_b8abe43d8a0b55a507686fbec5567b70___() )
  {
    v3[0] = &std::_Func_impl_no_alloc<_lambda_b8abe43d8a0b55a507686fbec5567b70_,Spectre::Utils::Math::Color,Spectre::Utils::Math::Color>::`vftable';
    v4 = v3;
  }
  Spectre::Engine::ColorTransform::Generate(v2, v1, (__int64)v3);
}
