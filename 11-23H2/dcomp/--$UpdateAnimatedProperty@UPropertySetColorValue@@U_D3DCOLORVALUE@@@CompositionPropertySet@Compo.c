/*
 * XREFs of ??$UpdateAnimatedProperty@UPropertySetColorValue@@U_D3DCOLORVALUE@@@CompositionPropertySet@Composition@UI@Windows@@AEAAXIPEBU_D3DCOLORVALUE@@_N1G@Z @ 0x1800947B0
 * Callers:
 *     ?OnAnimatedPropertyChanged@CompositionPropertySet@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x180070840 (-OnAnimatedPropertyChanged@CompositionPropertySet@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_.c)
 * Callees:
 *     ??$CreatePropertySetValue@UPropertySetColorValue@@U_D3DCOLORVALUE@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA?AUPropertySetColorValue@@IPEBU_D3DCOLORVALUE@@@Z @ 0x18006F67C (--$CreatePropertySetValue@UPropertySetColorValue@@U_D3DCOLORVALUE@@@-$PropertySetStorage@VDynArr.c)
 *     ??$UpdateAnimatedPropertyWorker@V?$PropertySetUpdater@UPropertySetVector4Value@@UD2DVector4@@@Composition@UI@Windows@@VPropertySetUpdaterInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAXAEAV?$PropertySetUpdater@UPropertySetVector4Value@@UD2DVector4@@@123@AEBVPropertySetUpdaterInfo@123@_N2G@Z @ 0x180094898 (--$UpdateAnimatedPropertyWorker@V-$PropertySetUpdater@UPropertySetVector4Value@@UD2DVector4@@@Co.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x180148F20 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPropertySet::UpdateAnimatedProperty<PropertySetColorValue,_D3DCOLORVALUE>(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4,
        char a5,
        __int16 a6)
{
  __int64 v7; // rdi
  __int64 v8; // rbx
  int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // r9d
  int v13; // r8d
  _QWORD v15[2]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v16[32]; // [rsp+40h] [rbp-48h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]

  v7 = a2;
  v8 = a1 + 208;
  v9 = a1;
  PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::CreatePropertySetValue<PropertySetColorValue,_D3DCOLORVALUE>(
    a1 + 208,
    (__int64)v16,
    a2);
  if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                           v8,
                           (unsigned int)v7) )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v11, v10) )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  LOBYTE(v12) = a4;
  v13 = *(_DWORD *)(*(_QWORD *)v8 + 8 * v7 + 4);
  v15[1] = v16;
  return Windows::UI::Composition::ProxyObject::UpdateAnimatedPropertyWorker<Windows::UI::Composition::PropertySetUpdater<PropertySetVector4Value,D2DVector4>,Windows::UI::Composition::PropertySetUpdaterInfo>(
           v9,
           (unsigned int)v15,
           *(_DWORD *)(v8 + 32) + (v13 & 0x1FFFFFFFu),
           v12,
           a5,
           a6);
}
