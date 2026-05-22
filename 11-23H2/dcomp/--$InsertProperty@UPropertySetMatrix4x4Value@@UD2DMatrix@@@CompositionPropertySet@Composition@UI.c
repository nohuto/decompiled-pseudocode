/*
 * XREFs of ??$InsertProperty@UPropertySetMatrix4x4Value@@UD2DMatrix@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEBUD2DMatrix@@@Z @ 0x18006EE54
 * Callers:
 *     ?InitializePropertySet@CompositionEffectBrush@Composition@UI@Windows@@AEAAJXZ @ 0x18002E2FC (-InitializePropertySet@CompositionEffectBrush@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?InsertMatrix4x4@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UMatrix4x4@Numerics@Foundation@5@@Z @ 0x180082F10 (-InsertMatrix4x4@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UMatrix4.c)
 * Callees:
 *     ??$SetAnimatablePropertyWorker@V?$PropertySetUpdater@UPropertySetMatrix4x4Value@@UD2DMatrix@@@Composition@UI@Windows@@VPropertySetUpdaterInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertySetUpdater@UPropertySetMatrix4x4Value@@UD2DMatrix@@@123@AEBVPropertySetUpdaterInfo@123@@Z @ 0x18000633C (--$SetAnimatablePropertyWorker@V-$PropertySetUpdater@UPropertySetMatrix4x4Value@@UD2DMatrix@@@Co.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AddProperty@UPropertySetMatrix4x4Value@@UD2DMatrix@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@@Z @ 0x18006EC6C (--$AddProperty@UPropertySetMatrix4x4Value@@UD2DMatrix@@@CompositionPropertySet@Composition@UI@Wi.c)
 *     ?CompareAnimationNames@@YAHPEAUHSTRING__@@0@Z @ 0x18006F204 (-CompareAnimationNames@@YAHPEAUHSTRING__@@0@Z.c)
 *     ??$CreatePropertySetValue@UPropertySetMatrix4x4Value@@UD2DMatrix@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA?AUPropertySetMatrix4x4Value@@IPEBUD2DMatrix@@@Z @ 0x18006F2C8 (--$CreatePropertySetValue@UPropertySetMatrix4x4Value@@UD2DMatrix@@@-$PropertySetStorage@VDynArra.c)
 *     ?IsAnimationNameValid@@YA_NPEAUHSTRING__@@_N@Z @ 0x18006F4E8 (-IsAnimationNameValid@@YA_NPEAUHSTRING__@@_N@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x180148F20 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPropertySet::InsertProperty<PropertySetMatrix4x4Value,D2DMatrix>(
        Windows::UI::Composition::CompositionObject *this,
        HSTRING a2,
        __int64 a3,
        bool a4,
        __int64 a5)
{
  __int64 v5; // rbx
  __int64 v9; // r8
  __int64 v10; // rdx
  _QWORD *v11; // rdi
  __int64 v12; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // eax
  unsigned int v18; // ebx
  PCWSTR StringRawBuffer; // [rsp+20h] [rbp-A8h] BYREF
  int v20; // [rsp+28h] [rbp-A0h]
  const void *v21[2]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v22[80]; // [rsp+40h] [rbp-88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v5 = 0LL;
  if ( *((_DWORD *)this + 50) )
  {
    while ( CompareAnimationNames(*(HSTRING *)(*((_QWORD *)this + 22) + 8 * v5), a2) )
    {
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= *((_DWORD *)this + 50) )
        goto LABEL_4;
    }
    v11 = (_QWORD *)((char *)this + 208);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                             (char *)this + 208,
                             (unsigned int)v5) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( *(_DWORD *)(*v11 + 8 * v5) != 265 )
    {
      v10 = 1226LL;
      goto LABEL_9;
    }
    PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::CreatePropertySetValue<PropertySetMatrix4x4Value,D2DMatrix>(
      v12,
      v22,
      (unsigned int)v5,
      a5);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                             (char *)this + 208,
                             (unsigned int)v5) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v15, v14) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v16 = *(_DWORD *)(*v11 + 8 * v5 + 4) & 0x1FFFFFFF;
    v21[1] = v22;
    v21[0] = (const void *)(*((_QWORD *)this + 30) + v16);
    v20 = v5;
    StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
    Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertySetUpdater<PropertySetMatrix4x4Value,D2DMatrix>,Windows::UI::Composition::PropertySetUpdaterInfo>(
      this,
      v21,
      (__int64)&StringRawBuffer);
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
  v17 = Windows::UI::Composition::CompositionPropertySet::AddProperty<PropertySetMatrix4x4Value,D2DMatrix>(
          (__int64)this,
          a2,
          v9,
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
