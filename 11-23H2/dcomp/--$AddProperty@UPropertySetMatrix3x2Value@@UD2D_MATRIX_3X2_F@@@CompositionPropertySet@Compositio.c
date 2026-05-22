/*
 * XREFs of ??$AddProperty@UPropertySetMatrix3x2Value@@UD2D_MATRIX_3X2_F@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18007699C
 * Callers:
 *     ??$InsertProperty@UPropertySetMatrix3x2Value@@UD2D_MATRIX_3X2_F@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEBUD2D_MATRIX_3X2_F@@@Z @ 0x180076714 (--$InsertProperty@UPropertySetMatrix3x2Value@@UD2D_MATRIX_3X2_F@@@CompositionPropertySet@Composi.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180073550 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ??$AddProperty@UD2D_MATRIX_3X2_F@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2D_MATRIX_3X2_F@@PEAI@Z @ 0x180076CE4 (--$AddProperty@UD2D_MATRIX_3X2_F@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAll.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x180148F20 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPropertySet::AddProperty<PropertySetMatrix3x2Value,D2D_MATRIX_3X2_F>(
        __int64 a1,
        PCWSTR a2,
        __int64 a3,
        __int128 *a4)
{
  __int64 v4; // rbx
  HSTRING v6; // r14
  unsigned int v8; // esi
  HSTRING v9; // rcx
  PCWSTR StringRawBuffer; // rdi
  char v11; // cl
  unsigned __int8 v12; // al
  int v13; // eax
  int v14; // eax
  unsigned int v15; // esi
  HRESULT v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // r8d
  int v19; // esi
  unsigned int v20; // edx
  int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int128 *v34; // r8
  __int64 v35; // rcx
  __int64 v36; // xmm1_8
  int v37; // edx
  DirectComposition::CDevice *v38; // rcx
  int v40; // [rsp+20h] [rbp-60h]
  HSTRING newString; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v42; // [rsp+38h] [rbp-48h] BYREF
  int v43[2]; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v44[3]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v45; // [rsp+54h] [rbp-2Ch]
  __int64 v46; // [rsp+64h] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v4 = a1 + 176;
  v6 = (HSTRING)a2;
  newString = 0LL;
  v8 = 0;
  if ( *(_DWORD *)(a1 + 200) )
  {
    while ( 1 )
    {
      v9 = *(HSTRING *)(*(_QWORD *)v4 + 8LL * v8);
      if ( v9 )
        StringRawBuffer = WindowsGetStringRawBuffer(v9, 0LL);
      else
        StringRawBuffer = 0LL;
      if ( v6 )
        a2 = WindowsGetStringRawBuffer(v6, 0LL);
      else
        a2 = 0LL;
      if ( !StringRawBuffer || (v11 = 0, !*StringRawBuffer) )
        v11 = 1;
      if ( !a2 || (v12 = 0, !*a2) )
        v12 = 1;
      if ( v11 )
        break;
      if ( !v12 )
      {
        v13 = _wcsicmp_l(StringRawBuffer, a2, 0LL);
        if ( (unsigned int)(v13 + 1) <= 2 )
          goto LABEL_18;
      }
LABEL_19:
      if ( ++v8 >= *(_DWORD *)(a1 + 200) )
        goto LABEL_20;
    }
    v13 = v12 - 1;
LABEL_18:
    if ( !v13 )
      Microsoft::WRL2::FailFast::Unexpected(0LL);
    goto LABEL_19;
  }
LABEL_20:
  v14 = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<D2D_MATRIX_3X2_F>(
          a1 + 208,
          a2,
          a4,
          &v42);
  v15 = v14;
  if ( v14 < 0 )
  {
    DoStackCaptureDirect(v14, 0x562u);
  }
  else
  {
    v16 = WindowsDuplicateString(v6, &newString);
    if ( v16 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x56B,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionpropertyset.cpp",
        (const char *)(unsigned int)v16,
        v40);
    v17 = *(_DWORD *)(v4 + 24);
    v18 = v17 + 1;
    if ( v17 + 1 < v17 )
    {
      v19 = -2147024362;
      v20 = 181;
      v21 = -2147024362;
      goto LABEL_44;
    }
    if ( v18 > *(_DWORD *)(v4 + 20) )
    {
      *(_QWORD *)v43 = &newString;
      v19 = DynArrayImpl<0>::Grow(v4, 8u, 1, 0, (unsigned __int64 *)v43);
      v21 = v19;
      if ( v19 < 0 )
      {
        v20 = 192;
LABEL_44:
        DoStackCaptureDirect(v21, v20);
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x56C,
          (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionpropertyset.cpp",
          (const char *)(unsigned int)v19,
          v40);
      }
      *(_QWORD *)((unsigned int)(8 * (*(_DWORD *)(v4 + 24))++) + *(_QWORD *)v4) = **(_QWORD **)v43;
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)v4 + 8LL * *(unsigned int *)(v4 + 24)) = newString;
      *(_DWORD *)(v4 + 24) = v18;
    }
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                             a1 + 208,
                             v42) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v44[0] = v22;
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v23, v22) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v44[2] = *(_DWORD *)(*(_QWORD *)(a1 + 208) + 8 * v25);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v26, v25) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v44[1] = *(_DWORD *)(v29 + 8 * v27 + 4) & 0x1FFFFFFF;
    if ( a4 )
    {
      v34 = a4;
    }
    else
    {
      if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                               v28,
                               v27) )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                               v31,
                               v30) )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      v34 = (__int128 *)(*(_QWORD *)(a1 + 240) + (v33 & v32));
    }
    v35 = *(_QWORD *)(a1 + 24);
    v36 = *((_QWORD *)v34 + 2);
    v37 = *(_DWORD *)(a1 + 128);
    v45 = *v34;
    v38 = *(DirectComposition::CDevice **)(v35 + 456);
    v46 = v36;
    DirectComposition::CDevice::ResourceSetBufferProperty(v38, v37, 0, v44, 0x24uLL);
    return 0;
  }
  return v15;
}
