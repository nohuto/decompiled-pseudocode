/*
 * XREFs of ??$UpdateAnimatedProperty@UPropertySetBooleanValue@@_N@CompositionPropertySet@Composition@UI@Windows@@AEAAXIPEB_N_N1G@Z @ 0x180148704
 * Callers:
 *     ?OnAnimatedPropertyChanged@CompositionPropertySet@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x180070840 (-OnAnimatedPropertyChanged@CompositionPropertySet@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_.c)
 * Callees:
 *     ??$CreatePropertySetValue@UPropertySetBooleanValue@@_N@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA?AUPropertySetBooleanValue@@IPEB_N@Z @ 0x180092E28 (--$CreatePropertySetValue@UPropertySetBooleanValue@@_N@-$PropertySetStorage@VDynArrayNoZero@@VPr.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ??$UpdateAnimatedPropertyWorker@V?$PropertySetUpdater@UPropertySetBooleanValue@@_N@Composition@UI@Windows@@VPropertySetUpdaterInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAXAEAV?$PropertySetUpdater@UPropertySetBooleanValue@@_N@123@AEBVPropertySetUpdaterInfo@123@_N2G@Z @ 0x180148C7C (--$UpdateAnimatedPropertyWorker@V-$PropertySetUpdater@UPropertySetBooleanValue@@_N@Composition@U.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x180148F20 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPropertySet::UpdateAnimatedProperty<PropertySetBooleanValue,bool>(
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
  _QWORD v15[2]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v16[16]; // [rsp+40h] [rbp-38h] BYREF
  const void *retaddr; // [rsp+78h] [rbp+0h]

  v7 = a2;
  v8 = a1 + 208;
  v9 = a1;
  PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::CreatePropertySetValue<PropertySetBooleanValue,bool>(
    a1 + 208,
    (__int64)v16,
    a2);
  if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                           v8,
                           (unsigned int)v7) )
    ModuleFailFastForHRESULT(-2147024809, retaddr);
  if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v11, v10) )
    ModuleFailFastForHRESULT(-2147024809, retaddr);
  LOBYTE(v12) = a4;
  v13 = *(_DWORD *)(*(_QWORD *)v8 + 8 * v7 + 4);
  v15[1] = v16;
  return Windows::UI::Composition::ProxyObject::UpdateAnimatedPropertyWorker<Windows::UI::Composition::PropertySetUpdater<PropertySetBooleanValue,bool>,Windows::UI::Composition::PropertySetUpdaterInfo>(
           v9,
           (unsigned int)v15,
           *(_DWORD *)(v8 + 32) + (v13 & 0x1FFFFFFFu),
           v12,
           a5,
           a6);
}
