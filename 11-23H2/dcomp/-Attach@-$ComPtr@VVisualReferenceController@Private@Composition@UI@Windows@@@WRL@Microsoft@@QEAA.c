/*
 * XREFs of ?Attach@?$ComPtr@VVisualReferenceController@Private@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVVisualReferenceController@Private@Composition@UI@Windows@@@Z @ 0x180124B24
 * Callers:
 *     ??$MakeAndInitialize2@VVisualReferenceController@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVVisualReferenceController@Private@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x1801220A4 (--$MakeAndInitialize2@VVisualReferenceController@Private@Composition@UI@Windows@@V12345@PEAVComp.c)
 *     ??$MakeAndInitialize2@VVisualReferenceController@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@_N@Details@WRL2@Microsoft@@YAJPEAPEAVVisualReferenceController@Private@Composition@UI@Windows@@$$QEAPEAVCompositor@567@$$QEA_N@Z @ 0x180122168 (--$MakeAndInitialize2@VVisualReferenceController@Private@Composition@UI@Windows@@V1_ea_180122168.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::Private::VisualReferenceController>::Attach(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        Microsoft::WRL2::NestableRuntimeClass *a2)
{
  Microsoft::WRL2::NestableRuntimeClass *v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v4);
  *a1 = a2;
  return result;
}
