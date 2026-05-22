/*
 * XREFs of ??$AddProperty@UPropertySetVector2Value@@UD2DVector2@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector2@@@Z @ 0x18000FC08
 * Callers:
 *     ??$InsertProperty@UPropertySetVector2Value@@UD2DVector2@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEBUD2DVector2@@@Z @ 0x18000FA50 (--$InsertProperty@UPropertySetVector2Value@@UD2DVector2@@@CompositionPropertySet@Composition@UI@.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ??$CreatePropertySetValue@UPropertySetVector2Value@@UD2DVector2@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA?AUPropertySetVector2Value@@IPEBUD2DVector2@@@Z @ 0x18000FD68 (--$CreatePropertySetValue@UPropertySetVector2Value@@UD2DVector2@@@-$PropertySetStorage@VDynArray.c)
 *     ??$AddProperty@UD2DVector2@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector2@@PEAI@Z @ 0x18000FE2C (--$AddProperty@UD2DVector2@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ?GetPropertyIdFromName@CompositionPropertySet@Composition@UI@Windows@@AEAA_NPEAUHSTRING__@@PEAI@Z @ 0x18006EDD4 (-GetPropertyIdFromName@CompositionPropertySet@Composition@UI@Windows@@AEAA_NPEAUHSTRING__@@PEAI@.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180073550 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPropertySet::AddProperty<PropertySetVector2Value,D2DVector2>(
        __int64 a1,
        HSTRING a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // rdx
  int v8; // eax
  unsigned int v9; // ebx
  HRESULT v10; // eax
  _QWORD *v11; // rbx
  unsigned int v12; // eax
  unsigned int v13; // r8d
  int v14; // edi
  int v15; // ecx
  unsigned int v17; // edx
  int v18; // [rsp+20h] [rbp-50h]
  unsigned int v19; // [rsp+30h] [rbp-40h] BYREF
  HSTRING newString; // [rsp+38h] [rbp-38h] BYREF
  int v21[2]; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v22[24]; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  newString = 0LL;
  if ( Windows::UI::Composition::CompositionPropertySet::GetPropertyIdFromName(
         (Windows::UI::Composition::CompositionPropertySet *)a1,
         a2,
         &v19) )
  {
    Microsoft::WRL2::FailFast::Unexpected(0LL);
  }
  v8 = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<D2DVector2>(a1 + 208, v7, a4, &v19);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = WindowsDuplicateString(a2, &newString);
    if ( v10 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x56B,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionpropertyset.cpp",
        (const char *)(unsigned int)v10,
        v18);
    v11 = (_QWORD *)(a1 + 176);
    v12 = *(_DWORD *)(a1 + 200);
    v13 = v12 + 1;
    if ( v12 + 1 < v12 )
    {
      v14 = -2147024362;
      v17 = 181;
      v15 = -2147024362;
    }
    else
    {
      if ( v13 <= *(_DWORD *)(a1 + 196) )
      {
        *(_QWORD *)(*v11 + 8LL * *(unsigned int *)(a1 + 200)) = newString;
        *(_DWORD *)(a1 + 200) = v13;
        goto LABEL_8;
      }
      *(_QWORD *)v21 = &newString;
      v14 = DynArrayImpl<0>::Grow((int)a1 + 176, 8, 1, 0, (__int64)v21);
      v15 = v14;
      if ( v14 >= 0 )
      {
        *(_QWORD *)((unsigned int)(8 * (*(_DWORD *)(a1 + 200))++) + *v11) = **(_QWORD **)v21;
LABEL_8:
        PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::CreatePropertySetValue<PropertySetVector2Value,D2DVector2>(
          a1 + 208,
          v22,
          v19,
          a4);
        DirectComposition::CDevice::ResourceSetBufferProperty(
          *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
          *(_DWORD *)(a1 + 128),
          0,
          v22,
          0x14uLL);
        return 0;
      }
      v17 = 192;
    }
    DoStackCaptureDirect(v15, v17);
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x56C,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionpropertyset.cpp",
      (const char *)(unsigned int)v14,
      v18);
  }
  DoStackCaptureDirect(v8, 0x562u);
  if ( newString )
    WindowsDeleteString(newString);
  return v9;
}
