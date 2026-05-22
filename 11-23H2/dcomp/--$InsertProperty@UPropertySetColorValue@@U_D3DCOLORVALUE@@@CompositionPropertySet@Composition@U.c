/*
 * XREFs of ??$InsertProperty@UPropertySetColorValue@@U_D3DCOLORVALUE@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEBU_D3DCOLORVALUE@@@Z @ 0x18006F034
 * Callers:
 *     ?InitializePropertySet@CompositionEffectBrush@Composition@UI@Windows@@AEAAJXZ @ 0x18002E2FC (-InitializePropertySet@CompositionEffectBrush@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?InsertColor@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UColor@45@@Z @ 0x1800843A0 (-InsertColor@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UColor@45@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CompareAnimationNames@@YAHPEAUHSTRING__@@0@Z @ 0x18006F204 (-CompareAnimationNames@@YAHPEAUHSTRING__@@0@Z.c)
 *     ?IsAnimationNameValid@@YA_NPEAUHSTRING__@@_N@Z @ 0x18006F4E8 (-IsAnimationNameValid@@YA_NPEAUHSTRING__@@_N@Z.c)
 *     ??$AddProperty@UPropertySetColorValue@@U_D3DCOLORVALUE@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3DCOLORVALUE@@@Z @ 0x18006F51C (--$AddProperty@UPropertySetColorValue@@U_D3DCOLORVALUE@@@CompositionPropertySet@Composition@UI@W.c)
 *     ??$CreatePropertySetValue@UPropertySetColorValue@@U_D3DCOLORVALUE@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA?AUPropertySetColorValue@@IPEBU_D3DCOLORVALUE@@@Z @ 0x18006F67C (--$CreatePropertySetValue@UPropertySetColorValue@@U_D3DCOLORVALUE@@@-$PropertySetStorage@VDynArr.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertySetUpdater@UPropertySetColorValue@@U_D3DCOLORVALUE@@@Composition@UI@Windows@@VPropertySetUpdaterInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertySetUpdater@UPropertySetColorValue@@U_D3DCOLORVALUE@@@123@AEBVPropertySetUpdaterInfo@123@@Z @ 0x18006F854 (--$SetAnimatablePropertyWorker@V-$PropertySetUpdater@UPropertySetColorValue@@U_D3DCOLORVALUE@@@C.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x180148F20 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPropertySet::InsertProperty<PropertySetColorValue,_D3DCOLORVALUE>(
        Windows::UI::Composition::CompositionObject *this,
        HSTRING a2,
        __int64 a3,
        bool a4,
        __int64 a5)
{
  __int64 v5; // rbx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  unsigned int v16; // ebx
  _BYTE v17[32]; // [rsp+40h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v5 = 0LL;
  if ( *((_DWORD *)this + 50) )
  {
    while ( CompareAnimationNames(*(HSTRING *)(*((_QWORD *)this + 22) + 8 * v5), a2) )
    {
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= *((_DWORD *)this + 50) )
        goto LABEL_4;
    }
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                             (char *)this + 208,
                             (unsigned int)v5) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( *(_DWORD *)(*((_QWORD *)this + 26) + 8 * v5) != 70 )
    {
      v10 = 1226LL;
      goto LABEL_9;
    }
    PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::CreatePropertySetValue<PropertySetColorValue,_D3DCOLORVALUE>(
      v11,
      v17,
      (unsigned int)v5,
      a5);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                             (char *)this + 208,
                             (unsigned int)v5) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v14, v13) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    WindowsGetStringRawBuffer(a2, 0LL);
    Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertySetUpdater<PropertySetColorValue,_D3DCOLORVALUE>,Windows::UI::Composition::PropertySetUpdaterInfo>(this);
    return 0LL;
  }
LABEL_4:
  if ( !IsAnimationNameValid(a2, a4) )
  {
    v10 = 1252LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionpropertyset.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v15 = Windows::UI::Composition::CompositionPropertySet::AddProperty<PropertySetColorValue,_D3DCOLORVALUE>(
          this,
          a2,
          v9,
          a5);
  v16 = v15;
  if ( v15 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4EA,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionpropertyset.cpp",
    (const char *)(unsigned int)v15);
  return v16;
}
