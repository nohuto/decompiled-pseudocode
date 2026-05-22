/*
 * XREFs of ?Attach@?$ComPtr@VDebugReference@Private@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVDebugReference@Private@Composition@UI@Windows@@@Z @ 0x18016B520
 * Callers:
 *     ??$MakeAndInitialize2@VDebugReference@Private@Composition@UI@Windows@@V12345@AEAPEAVCompositor@345@AEAPEAVProxyObject@345@@Details@WRL2@Microsoft@@YAJPEAPEAVDebugReference@Private@Composition@UI@Windows@@AEAPEAVCompositor@567@AEAPEAVProxyObject@567@@Z @ 0x180169B10 (--$MakeAndInitialize2@VDebugReference@Private@Composition@UI@Windows@@V12345@AEAPEAVCompositor@3.c)
 *     ??$MakeAndInitialize2@VDebugReference@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@AEAPEAVProxyObject@345@@Details@WRL2@Microsoft@@YAJPEAPEAVDebugReference@Private@Composition@UI@Windows@@$$QEAPEAVCompositor@567@AEAPEAVProxyObject@567@@Z @ 0x180169BD0 (--$MakeAndInitialize2@VDebugReference@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::Private::DebugReference>::Attach(
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
