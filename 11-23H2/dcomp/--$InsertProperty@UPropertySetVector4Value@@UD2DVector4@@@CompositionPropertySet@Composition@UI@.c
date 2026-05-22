/*
 * XREFs of ??$InsertProperty@UPropertySetVector4Value@@UD2DVector4@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEBUD2DVector4@@@Z @ 0x18000A55C
 * Callers:
 *     ?InsertVector4@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UVector4@Numerics@Foundation@5@@Z @ 0x18000E720 (-InsertVector4@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UVector4@N.c)
 *     ?InitializePropertySet@CompositionEffectBrush@Composition@UI@Windows@@AEAAJXZ @ 0x18002E2FC (-InitializePropertySet@CompositionEffectBrush@Composition@UI@Windows@@AEAAJXZ.c)
 * Callees:
 *     ??$AddProperty@UPropertySetVector4Value@@UD2DVector4@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector4@@@Z @ 0x18000A714 (--$AddProperty@UPropertySetVector4Value@@UD2DVector4@@@CompositionPropertySet@Composition@UI@Win.c)
 *     ??$CreatePropertySetValue@UPropertySetVector4Value@@UD2DVector4@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA?AUPropertySetVector4Value@@IPEBUD2DVector4@@@Z @ 0x18000A874 (--$CreatePropertySetValue@UPropertySetVector4Value@@UD2DVector4@@@-$PropertySetStorage@VDynArray.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertySetUpdater@UPropertySetVector4Value@@UD2DVector4@@@Composition@UI@Windows@@VPropertySetUpdaterInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertySetUpdater@UPropertySetVector4Value@@UD2DVector4@@@123@AEBVPropertySetUpdaterInfo@123@@Z @ 0x18000AA4C (--$SetAnimatablePropertyWorker@V-$PropertySetUpdater@UPropertySetVector4Value@@UD2DVector4@@@Com.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPropertyIdFromName@CompositionPropertySet@Composition@UI@Windows@@AEAA_NPEAUHSTRING__@@PEAI@Z @ 0x18006EDD4 (-GetPropertyIdFromName@CompositionPropertySet@Composition@UI@Windows@@AEAA_NPEAUHSTRING__@@PEAI@.c)
 *     ?IsAnimationNameValid@@YA_NPEAUHSTRING__@@_N@Z @ 0x18006F4E8 (-IsAnimationNameValid@@YA_NPEAUHSTRING__@@_N@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x180148F20 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPropertySet::InsertProperty<PropertySetVector4Value,D2DVector4>(
        Windows::UI::Composition::CompositionObject *this,
        HSTRING a2,
        __int64 a3,
        bool a4,
        __int64 a5)
{
  __int64 v8; // rdi
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  PCWSTR StringRawBuffer; // rax
  __int64 v17; // r8
  int v18; // eax
  unsigned int v19; // ebx
  unsigned int v20; // [rsp+20h] [rbp-78h] BYREF
  PCWSTR v21; // [rsp+28h] [rbp-70h]
  int v22; // [rsp+30h] [rbp-68h]
  __int64 v23; // [rsp+38h] [rbp-60h]
  _BYTE *v24; // [rsp+40h] [rbp-58h]
  _BYTE v25[32]; // [rsp+48h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  if ( Windows::UI::Composition::CompositionPropertySet::GetPropertyIdFromName(this, a2, &v20) )
  {
    v8 = v20;
    v9 = (_QWORD *)((char *)this + 208);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                             (char *)this + 208,
                             v20) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( *(_DWORD *)(*v9 + 8 * v8) != 69 )
    {
      v11 = 1226LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionpropertyset.cpp",
        (const char *)0x80070057LL,
        v20);
      return 2147942487LL;
    }
    PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::CreatePropertySetValue<PropertySetVector4Value,D2DVector4>(
      v10,
      v25,
      (unsigned int)v8,
      a5);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                             (char *)this + 208,
                             (unsigned int)v8) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v14, v13) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v15 = *(_DWORD *)(*v9 + 8 * v8 + 4) & 0x1FFFFFFF;
    v24 = v25;
    v23 = *((_QWORD *)this + 30) + v15;
    StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
    v22 = v8;
    v21 = StringRawBuffer;
    Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertySetUpdater<PropertySetVector4Value,D2DVector4>,Windows::UI::Composition::PropertySetUpdaterInfo>(this);
    return 0LL;
  }
  if ( !IsAnimationNameValid(a2, a4) )
  {
    v11 = 1252LL;
    goto LABEL_5;
  }
  v18 = Windows::UI::Composition::CompositionPropertySet::AddProperty<PropertySetVector4Value,D2DVector4>(
          this,
          a2,
          v17,
          a5);
  v19 = v18;
  if ( v18 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4EA,
    (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionpropertyset.cpp",
    (const char *)(unsigned int)v18,
    v20);
  return v19;
}
