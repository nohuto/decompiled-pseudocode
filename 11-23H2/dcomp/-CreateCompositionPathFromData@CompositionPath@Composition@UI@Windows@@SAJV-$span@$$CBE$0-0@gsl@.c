/*
 * XREFs of ?CreateCompositionPathFromData@CompositionPath@Composition@UI@Windows@@SAJV?$span@$$CBE$0?0@gsl@@PEAPEAV1234@@Z @ 0x18012FAD0
 * Callers:
 *     ?OnAnimatedPropertyChanged@CompositionPathGeometry@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x18016F8C0 (-OnAnimatedPropertyChanged@CompositionPathGeometry@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION.c)
 *     ?DeserializeExpressionType@PropertyValueHelper@Composition@UI@Windows@@SAJW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x18018B810 (-DeserializeExpressionType@PropertyValueHelper@Composition@UI@Windows@@SAJW4DCOMPOSITION_EXPRESS.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ??$MakeAndInitialize2@VCompositionPath@Composition@UI@Windows@@V1234@AEAV?$span@$$CBE$0?0@gsl@@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionPath@Composition@UI@Windows@@AEAV?$span@$$CBE$0?0@gsl@@@Z @ 0x18012F9F4 (--$MakeAndInitialize2@VCompositionPath@Composition@UI@Windows@@V1234@AEAV-$span@$$CBE$0-0@gsl@@@.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPath::CreateCompositionPathFromData(
        __int128 *a1,
        Microsoft::WRL2::NestableRuntimeClass **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  Microsoft::WRL2::NestableRuntimeClass *v5; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v3 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionPath,Windows::UI::Composition::CompositionPath,gsl::span<unsigned char const,-1> &>(
         &v8,
         a1);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = v8;
    v8 = 0LL;
    v4 = 0;
    *a2 = v5;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionpath.cpp",
      (const char *)(unsigned int)v3);
  }
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v8);
  return v4;
}
