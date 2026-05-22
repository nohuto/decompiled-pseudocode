/*
 * XREFs of ??0DebugAnimationPropertyInfo@Private@Composition@UI@Windows@@QEAA@XZ @ 0x18019C6F8
 * Callers:
 *     ??$MakeAndInitialize2@VDebugAnimationPropertyInfo@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@PEAVDebugReference@2345@AEA_KPEAUHSTRING__@@AEAIPEAUIPropertyValue@Foundation@5@@Details@WRL2@Microsoft@@YAJPEAPEAVDebugAnimationPropertyInfo@Private@Composition@UI@Windows@@$$QEAPEAVCompositor@567@$$QEAPEAVDebugReference@4567@AEA_K$$QEAPEAUHSTRING__@@AEAI$$QEAPEAUIPropertyValue@Foundation@7@@Z @ 0x18019BDEC (--$MakeAndInitialize2@VDebugAnimationPropertyInfo@Private@Composition@UI@Windows@@V12345@PEAVCom.c)
 *     ??$MakeAndInitialize2@VDebugAnimationPropertyInfo@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@PEAVDebugReference@2345@AEA_KPEAUHSTRING__@@HPEAUIPropertyValue@Foundation@5@@Details@WRL2@Microsoft@@YAJPEAPEAVDebugAnimationPropertyInfo@Private@Composition@UI@Windows@@$$QEAPEAVCompositor@567@$$QEAPEAVDebugReference@4567@AEA_K$$QEAPEAUHSTRING__@@$$QEAH$$QEAPEAUIPropertyValue@Foundation@7@@Z @ 0x18019BEF4 (--$MakeAndInitialize2@VDebugAnimationPropertyInfo@Private@Composition@UI@Windows@@V_ea_18019BEF4.c)
 *     ??$MakeAndInitialize2@VDebugAnimationPropertyInfo@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@PEAVDebugReference@2345@HPEAUHSTRING__@@HPEAUIPropertyValue@Foundation@5@@Details@WRL2@Microsoft@@YAJPEAPEAVDebugAnimationPropertyInfo@Private@Composition@UI@Windows@@$$QEAPEAVCompositor@567@$$QEAPEAVDebugReference@4567@$$QEAH$$QEAPEAUHSTRING__@@3$$QEAPEAUIPropertyValue@Foundation@7@@Z @ 0x18019BFFC (--$MakeAndInitialize2@VDebugAnimationPropertyInfo@Private@Composition@UI@Windows@@V_ea_18019BFFC.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::Private::DebugAnimationPropertyInfo *__fastcall Windows::UI::Composition::Private::DebugAnimationPropertyInfo::DebugAnimationPropertyInfo(
        Windows::UI::Composition::Private::DebugAnimationPropertyInfo *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *(_QWORD *)this = &Windows::UI::Composition::Private::DebugAnimationPropertyInfo::`vftable';
  *((_QWORD *)this + 16) = &Windows::UI::Composition::Private::DebugAnimationPropertyInfo::Api::`vftable';
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  return this;
}
