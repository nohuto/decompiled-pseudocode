/*
 * XREFs of ??$InsertProperty@UPropertySetBooleanValue@@_N@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEB_N@Z @ 0x180092B28
 * Callers:
 *     ?InsertBoolean@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@E@Z @ 0x180094920 (-InsertBoolean@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@E@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPropertyIdFromName@CompositionPropertySet@Composition@UI@Windows@@AEAA_NPEAUHSTRING__@@PEAI@Z @ 0x18006EDD4 (-GetPropertyIdFromName@CompositionPropertySet@Composition@UI@Windows@@AEAA_NPEAUHSTRING__@@PEAI@.c)
 *     ?IsAnimationNameValid@@YA_NPEAUHSTRING__@@_N@Z @ 0x18006F4E8 (-IsAnimationNameValid@@YA_NPEAUHSTRING__@@_N@Z.c)
 *     ??$AddProperty@UPropertySetBooleanValue@@_N@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z @ 0x180092CC8 (--$AddProperty@UPropertySetBooleanValue@@_N@CompositionPropertySet@Composition@UI@Windows@@AEAAJ.c)
 *     ??$CreatePropertySetValue@UPropertySetBooleanValue@@_N@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA?AUPropertySetBooleanValue@@IPEB_N@Z @ 0x180092E28 (--$CreatePropertySetValue@UPropertySetBooleanValue@@_N@-$PropertySetStorage@VDynArrayNoZero@@VPr.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertySetUpdater@UPropertySetBooleanValue@@_N@Composition@UI@Windows@@VPropertySetUpdaterInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertySetUpdater@UPropertySetBooleanValue@@_N@123@AEBVPropertySetUpdaterInfo@123@@Z @ 0x180092FF8 (--$SetAnimatablePropertyWorker@V-$PropertySetUpdater@UPropertySetBooleanValue@@_N@Composition@UI.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x180148F20 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPropertySet::InsertProperty<PropertySetBooleanValue,bool>(
        Windows::UI::Composition::CompositionObject *this,
        HSTRING a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v7; // rdi
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  PCWSTR StringRawBuffer; // rax
  __int64 v16; // r8
  int v17; // eax
  unsigned int v18; // ebx
  unsigned int v19; // [rsp+20h] [rbp-40h] BYREF
  PCWSTR v20; // [rsp+28h] [rbp-38h]
  int v21; // [rsp+30h] [rbp-30h]
  __int64 v22; // [rsp+38h] [rbp-28h]
  _BYTE *v23; // [rsp+40h] [rbp-20h]
  _BYTE v24[16]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  if ( Windows::UI::Composition::CompositionPropertySet::GetPropertyIdFromName(this, a2, &v19) )
  {
    v7 = v19;
    v8 = (_QWORD *)((char *)this + 208);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                             (char *)this + 208,
                             v19) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( *(_DWORD *)(*v8 + 8 * v7) != 17 )
    {
      v10 = 1226LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionpropertyset.cpp",
        (const char *)0x80070057LL);
      return 2147942487LL;
    }
    PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::CreatePropertySetValue<PropertySetBooleanValue,bool>(
      v9,
      v24,
      (unsigned int)v7,
      a5);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                             (char *)this + 208,
                             (unsigned int)v7) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v13, v12) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v14 = *(_DWORD *)(*v8 + 8 * v7 + 4) & 0x1FFFFFFF;
    v23 = v24;
    v22 = *((_QWORD *)this + 30) + v14;
    StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
    v21 = v7;
    v20 = StringRawBuffer;
    Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertySetUpdater<PropertySetBooleanValue,bool>,Windows::UI::Composition::PropertySetUpdaterInfo>(this);
    return 0LL;
  }
  if ( !IsAnimationNameValid(a2, 0) )
  {
    v10 = 1252LL;
    goto LABEL_5;
  }
  v17 = Windows::UI::Composition::CompositionPropertySet::AddProperty<PropertySetBooleanValue,bool>(this, a2, v16, a5);
  v18 = v17;
  if ( v17 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4EA,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionpropertyset.cpp",
    (const char *)(unsigned int)v17);
  return v18;
}
