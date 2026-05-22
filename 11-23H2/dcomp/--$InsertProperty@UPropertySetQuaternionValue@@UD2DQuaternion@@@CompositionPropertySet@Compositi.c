/*
 * XREFs of ??$InsertProperty@UPropertySetQuaternionValue@@UD2DQuaternion@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEBUD2DQuaternion@@@Z @ 0x180147C80
 * Callers:
 *     ?InsertQuaternion@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UQuaternion@Numerics@Foundation@5@@Z @ 0x180148E80 (-InsertQuaternion@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UQuater.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPropertyIdFromName@CompositionPropertySet@Composition@UI@Windows@@AEAA_NPEAUHSTRING__@@PEAI@Z @ 0x18006EDD4 (-GetPropertyIdFromName@CompositionPropertySet@Composition@UI@Windows@@AEAA_NPEAUHSTRING__@@PEAI@.c)
 *     ?IsAnimationNameValid@@YA_NPEAUHSTRING__@@_N@Z @ 0x18006F4E8 (-IsAnimationNameValid@@YA_NPEAUHSTRING__@@_N@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ??$AddProperty@UPropertySetQuaternionValue@@UD2DQuaternion@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQuaternion@@@Z @ 0x1801479F8 (--$AddProperty@UPropertySetQuaternionValue@@UD2DQuaternion@@@CompositionPropertySet@Composition@.c)
 *     ??$CreatePropertySetValue@UPropertySetQuaternionValue@@UD2DQuaternion@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA?AUPropertySetQuaternionValue@@IPEBUD2DQuaternion@@@Z @ 0x180147BBC (--$CreatePropertySetValue@UPropertySetQuaternionValue@@UD2DQuaternion@@@-$PropertySetStorage@VDy.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertySetUpdater@UPropertySetQuaternionValue@@UD2DQuaternion@@@Composition@UI@Windows@@VPropertySetUpdaterInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertySetUpdater@UPropertySetQuaternionValue@@UD2DQuaternion@@@123@AEBVPropertySetUpdaterInfo@123@@Z @ 0x180147E20 (--$SetAnimatablePropertyWorker@V-$PropertySetUpdater@UPropertySetQuaternionValue@@UD2DQuaternion.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x180148F20 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPropertySet::InsertProperty<PropertySetQuaternionValue,D2DQuaternion>(
        Windows::UI::Composition::CompositionObject *this,
        HSTRING a2,
        __int64 a3,
        __int64 a4,
        __int128 *a5)
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
  unsigned int v19; // [rsp+20h] [rbp-50h] BYREF
  PCWSTR v20; // [rsp+28h] [rbp-48h]
  int v21; // [rsp+30h] [rbp-40h]
  __int64 v22; // [rsp+38h] [rbp-38h]
  _BYTE *v23; // [rsp+40h] [rbp-30h]
  _BYTE v24[32]; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  if ( Windows::UI::Composition::CompositionPropertySet::GetPropertyIdFromName(this, a2, &v19) )
  {
    v7 = v19;
    v8 = (_QWORD *)((char *)this + 208);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                             (char *)this + 208,
                             v19) )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
    if ( *(_DWORD *)(*v8 + 8 * v7) != 71 )
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
    PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::CreatePropertySetValue<PropertySetQuaternionValue,D2DQuaternion>(
      v9,
      (__int64)v24,
      v7);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                             (char *)this + 208,
                             (unsigned int)v7) )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v13, v12) )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
    v14 = *(_DWORD *)(*v8 + 8 * v7 + 4) & 0x1FFFFFFF;
    v23 = v24;
    v22 = *((_QWORD *)this + 30) + v14;
    StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
    v21 = v7;
    v20 = StringRawBuffer;
    Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertySetUpdater<PropertySetQuaternionValue,D2DQuaternion>,Windows::UI::Composition::PropertySetUpdaterInfo>(this);
    return 0LL;
  }
  if ( !IsAnimationNameValid(a2, 0) )
  {
    v10 = 1252LL;
    goto LABEL_5;
  }
  v17 = Windows::UI::Composition::CompositionPropertySet::AddProperty<PropertySetQuaternionValue,D2DQuaternion>(
          (__int64)this,
          a2,
          v16,
          a5);
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
