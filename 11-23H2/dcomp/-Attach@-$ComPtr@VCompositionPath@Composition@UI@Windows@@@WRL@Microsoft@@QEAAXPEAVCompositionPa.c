/*
 * XREFs of ?Attach@?$ComPtr@VCompositionPath@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVCompositionPath@Composition@UI@Windows@@@Z @ 0x180040C0C
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionPath@Composition@UI@Windows@@V1234@PEAUID2D1Geometry@@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionPath@Composition@UI@Windows@@$$QEAPEAUID2D1Geometry@@@Z @ 0x180040D74 (--$MakeAndInitialize2@VCompositionPath@Composition@UI@Windows@@V1234@PEAUID2D1Geometry@@@Details.c)
 *     ??$MakeAndInitialize2@VCompositionPath@Composition@UI@Windows@@V1234@AEAV?$span@$$CBE$0?0@gsl@@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionPath@Composition@UI@Windows@@AEAV?$span@$$CBE$0?0@gsl@@@Z @ 0x18012F9F4 (--$MakeAndInitialize2@VCompositionPath@Composition@UI@Windows@@V1234@AEAV-$span@$$CBE$0-0@gsl@@@.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

unsigned int __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::CompositionPath>::Attach(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        Microsoft::WRL2::NestableRuntimeClass *a2)
{
  Microsoft::WRL2::NestableRuntimeClass *v4; // rcx
  unsigned int result; // eax

  v4 = *a1;
  if ( v4 )
    result = Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v4);
  *a1 = a2;
  return result;
}
