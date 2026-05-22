/*
 * XREFs of ??0DebugReference@Private@Composition@UI@Windows@@QEAA@XZ @ 0x18016A5E4
 * Callers:
 *     ??$MakeAndInitialize2@VDebugReference@Private@Composition@UI@Windows@@V12345@AEAPEAVCompositor@345@AEAPEAVProxyObject@345@@Details@WRL2@Microsoft@@YAJPEAPEAVDebugReference@Private@Composition@UI@Windows@@AEAPEAVCompositor@567@AEAPEAVProxyObject@567@@Z @ 0x180169B10 (--$MakeAndInitialize2@VDebugReference@Private@Composition@UI@Windows@@V12345@AEAPEAVCompositor@3.c)
 *     ??$MakeAndInitialize2@VDebugReference@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@AEAPEAVProxyObject@345@@Details@WRL2@Microsoft@@YAJPEAPEAVDebugReference@Private@Composition@UI@Windows@@$$QEAPEAVCompositor@567@AEAPEAVProxyObject@567@@Z @ 0x180169BD0 (--$MakeAndInitialize2@VDebugReference@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@.c)
 * Callees:
 *     ??0NestableRuntimeClass@WRL2@Microsoft@@QEAA@XZ @ 0x180040E8C (--0NestableRuntimeClass@WRL2@Microsoft@@QEAA@XZ.c)
 */

Windows::UI::Composition::Private::DebugReference *__fastcall Windows::UI::Composition::Private::DebugReference::DebugReference(
        Windows::UI::Composition::Private::DebugReference *this)
{
  Microsoft::WRL2::NestableRuntimeClass::NestableRuntimeClass(this);
  *(_QWORD *)this = &Windows::UI::Composition::Private::DebugReference::`vftable';
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 5) = &Windows::UI::Composition::Private::DebugReference::Api::`vftable';
  return this;
}
