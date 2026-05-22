/*
 * XREFs of ?Attach@?$ComPtr@VSharedWriteCaptureController@Internal@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVSharedWriteCaptureController@Internal@Composition@UI@Windows@@@Z @ 0x180124ABC
 * Callers:
 *     ??$MakeAndInitialize2@VSharedWriteCaptureController@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVSharedWriteCaptureController@Internal@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x180121710 (--$MakeAndInitialize2@VSharedWriteCaptureController@Internal@Composition@UI@Windows@@V12345@PEAV.c)
 *     ??$MakeAndInitialize2@VSharedWriteCaptureController@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@345@AEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVSharedWriteCaptureController@Internal@Composition@UI@Windows@@$$QEAPEAVCompositor@567@AEAPEAX@Z @ 0x1801217D4 (--$MakeAndInitialize2@VSharedWriteCaptureController@Internal@Composition@UI@Windows_ea_1801217D4.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::Internal::SharedWriteCaptureController>::Attach(
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
