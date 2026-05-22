/*
 * XREFs of ??$UpdateAnimatedProperty@UPropertySetVector4Value@@UD2DVector4@@@CompositionPropertySet@Composition@UI@Windows@@AEAAXIPEBUD2DVector4@@_N1G@Z @ 0x180148B94
 * Callers:
 *     ?OnAnimatedPropertyChanged@CompositionPropertySet@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x180070840 (-OnAnimatedPropertyChanged@CompositionPropertySet@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_.c)
 * Callees:
 *     ??$CreatePropertySetValue@UPropertySetVector4Value@@UD2DVector4@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA?AUPropertySetVector4Value@@IPEBUD2DVector4@@@Z @ 0x18000A874 (--$CreatePropertySetValue@UPropertySetVector4Value@@UD2DVector4@@@-$PropertySetStorage@VDynArray.c)
 *     ??$UpdateAnimatedPropertyWorker@V?$PropertySetUpdater@UPropertySetVector4Value@@UD2DVector4@@@Composition@UI@Windows@@VPropertySetUpdaterInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAXAEAV?$PropertySetUpdater@UPropertySetVector4Value@@UD2DVector4@@@123@AEBVPropertySetUpdaterInfo@123@_N2G@Z @ 0x180094898 (--$UpdateAnimatedPropertyWorker@V-$PropertySetUpdater@UPropertySetVector4Value@@UD2DVector4@@@Co.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x180148F20 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 */

void __fastcall Windows::UI::Composition::CompositionPropertySet::UpdateAnimatedProperty<PropertySetVector4Value,D2DVector4>(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4,
        char a5,
        unsigned __int16 a6)
{
  __int64 v7; // rdi
  _QWORD *v8; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // r8d
  _QWORD v13[2]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v14[32]; // [rsp+40h] [rbp-48h] BYREF
  const void *retaddr; // [rsp+88h] [rbp+0h]

  v7 = a2;
  v8 = (_QWORD *)(a1 + 208);
  PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::CreatePropertySetValue<PropertySetVector4Value,D2DVector4>(
    a1 + 208,
    (__int64)v14,
    a2);
  if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                           v8,
                           (unsigned int)v7) )
    ModuleFailFastForHRESULT(-2147024809, retaddr);
  if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v11, v10) )
    ModuleFailFastForHRESULT(-2147024809, retaddr);
  v12 = *(_DWORD *)(*v8 + 8 * v7 + 4);
  v13[1] = v14;
  Windows::UI::Composition::ProxyObject::UpdateAnimatedPropertyWorker<Windows::UI::Composition::PropertySetUpdater<PropertySetVector4Value,D2DVector4>,Windows::UI::Composition::PropertySetUpdaterInfo>(
    a1,
    (__int64)v13,
    v8[4] + (v12 & 0x1FFFFFFF),
    a4,
    a5,
    a6);
}
