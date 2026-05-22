/*
 * XREFs of ??$InsertProperty@UPropertySetMatrix3x2Value@@UD2D_MATRIX_3X2_F@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEBUD2D_MATRIX_3X2_F@@@Z @ 0x180076714
 * Callers:
 *     ?InitializePropertySet@CompositionEffectBrush@Composition@UI@Windows@@AEAAJXZ @ 0x18002E2FC (-InitializePropertySet@CompositionEffectBrush@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?InsertMatrix3x2@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UMatrix3x2@Numerics@Foundation@5@@Z @ 0x180080570 (-InsertMatrix3x2@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UMatrix3.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsAnimationNameValid@@YA_NPEBG_N@Z @ 0x18004C550 (-IsAnimationNameValid@@YA_NPEBG_N@Z.c)
 *     ??$AddProperty@UPropertySetMatrix3x2Value@@UD2D_MATRIX_3X2_F@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18007699C (--$AddProperty@UPropertySetMatrix3x2Value@@UD2D_MATRIX_3X2_F@@@CompositionPropertySet@Compositio.c)
 *     ??$CreatePropertySetValue@UPropertySetMatrix3x2Value@@UD2D_MATRIX_3X2_F@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA?AUPropertySetMatrix3x2Value@@IPEBUD2D_MATRIX_3X2_F@@@Z @ 0x180076E04 (--$CreatePropertySetValue@UPropertySetMatrix3x2Value@@UD2D_MATRIX_3X2_F@@@-$PropertySetStorage@V.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertySetUpdater@UPropertySetMatrix3x2Value@@UD2D_MATRIX_3X2_F@@@Composition@UI@Windows@@VPropertySetUpdaterInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertySetUpdater@UPropertySetMatrix3x2Value@@UD2D_MATRIX_3X2_F@@@123@AEBVPropertySetUpdaterInfo@123@@Z @ 0x180076ED4 (--$SetAnimatablePropertyWorker@V-$PropertySetUpdater@UPropertySetMatrix3x2Value@@UD2D_MATRIX_3X2.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x180148F20 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPropertySet::InsertProperty<PropertySetMatrix3x2Value,D2D_MATRIX_3X2_F>(
        __int64 a1,
        HSTRING a2,
        __int64 a3,
        char a4,
        __int64 a5)
{
  unsigned int i; // edi
  HSTRING v9; // rcx
  PCWSTR StringRawBuffer; // rbx
  PCWSTR v11; // rdx
  char v12; // cl
  unsigned __int8 v13; // al
  int v14; // eax
  const unsigned __int16 *v15; // rax
  _QWORD *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // eax
  unsigned int v25; // ebx
  PCWSTR v26; // [rsp+20h] [rbp-88h] BYREF
  unsigned int v27; // [rsp+28h] [rbp-80h]
  _QWORD v28[2]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v29[40]; // [rsp+40h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  for ( i = 0; i < *(_DWORD *)(a1 + 200); ++i )
  {
    v9 = *(HSTRING *)(*(_QWORD *)(a1 + 176) + 8LL * i);
    if ( v9 )
      StringRawBuffer = WindowsGetStringRawBuffer(v9, 0LL);
    else
      StringRawBuffer = 0LL;
    if ( a2 )
      v11 = WindowsGetStringRawBuffer(a2, 0LL);
    else
      v11 = 0LL;
    if ( !StringRawBuffer || (v12 = 0, !*StringRawBuffer) )
      v12 = 1;
    if ( !v11 || (v13 = 0, !*v11) )
      v13 = 1;
    if ( v12 )
    {
      v14 = v13 - 1;
    }
    else
    {
      if ( v13 )
        continue;
      v14 = _wcsicmp_l(StringRawBuffer, v11, 0LL);
      if ( (unsigned int)(v14 + 1) > 2 )
        continue;
    }
    if ( !v14 )
    {
      v16 = (_QWORD *)(a1 + 208);
      if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                               a1 + 208,
                               i) )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      if ( *(_DWORD *)(*v16 + 8LL * i) != 104 )
      {
        v18 = 1226LL;
        goto LABEL_25;
      }
      PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::CreatePropertySetValue<PropertySetMatrix3x2Value,D2D_MATRIX_3X2_F>(
        v17,
        v29,
        i,
        a5);
      if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                               a1 + 208,
                               i) )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                               v21,
                               v20) )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      v22 = *(_DWORD *)(*v16 + 8LL * i + 4) & 0x1FFFFFFF;
      v28[1] = v29;
      v28[0] = *(_QWORD *)(a1 + 240) + v22;
      v27 = i;
      v26 = WindowsGetStringRawBuffer(a2, 0LL);
      Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertySetUpdater<PropertySetMatrix3x2Value,D2D_MATRIX_3X2_F>,Windows::UI::Composition::PropertySetUpdaterInfo>(
        a1,
        v28,
        &v26);
      return 0LL;
    }
  }
  if ( a2 )
    v15 = WindowsGetStringRawBuffer(a2, 0LL);
  else
    v15 = 0LL;
  if ( IsAnimationNameValid(v15, a4) )
  {
    v24 = Windows::UI::Composition::CompositionPropertySet::AddProperty<PropertySetMatrix3x2Value,D2D_MATRIX_3X2_F>(
            a1,
            a2,
            v23,
            a5);
    v25 = v24;
    if ( v24 >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4EA,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionpropertyset.cpp",
      (const char *)(unsigned int)v24);
    return v25;
  }
  else
  {
    v18 = 1252LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionpropertyset.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
