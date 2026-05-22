/*
 * XREFs of ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@_N@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@_N@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18006FE44
 * Callers:
 *     ?put_IsVisible@Api@Visual@Composition@UI@Windows@@UEAAJE@Z @ 0x18006FDA0 (-put_IsVisible@Api@Visual@Composition@UI@Windows@@UEAAJE@Z.c)
 *     ?put_IsPixelSnappingEnabled@Api@Visual@Composition@UI@Windows@@UEAAJE@Z @ 0x18010D500 (-put_IsPixelSnappingEnabled@Api@Visual@Composition@UI@Windows@@UEAAJE@Z.c)
 *     ?put_SnapToPixels@Api@?$CompositionSurfaceBrushT@VCompositionSurfaceBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJE@Z @ 0x18012C5E0 (-put_SnapToPixels@Api@-$CompositionSurfaceBrushT@VCompositionSurfaceBrush@Composition@UI@Windows.c)
 *     ?put_SuperDownSamplePreview@Internal@?$CompositionSurfaceBrushT@VCompositionSurfaceBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJE@Z @ 0x18012C6E0 (-put_SuperDownSamplePreview@Internal@-$CompositionSurfaceBrushT@VCompositionSurfaceBrush@Composi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ?NotifyPropertyChanged@ProxyObject@Composition@UI@Windows@@QEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@IPEA_N@Z @ 0x18004EA60 (-NotifyPropertyChanged@ProxyObject@Composition@UI@Windows@@QEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005DB98 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?HasImplicitAnimations@CompositionObject@Composition@UI@Windows@@QEBA_NXZ @ 0x18006FF80 (-HasImplicitAnimations@CompositionObject@Composition@UI@Windows@@QEBA_NXZ.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     ?ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z @ 0x1800719B4 (-ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z.c)
 *     ??0AnimationValueData@Composition@UI@Windows@@QEAA@VHStringReference@Wrappers@WRL@Microsoft@@@Z @ 0x18007CDF0 (--0AnimationValueData@Composition@UI@Windows@@QEAA@VHStringReference@Wrappers@WRL@Microsoft@@@Z.c)
 *     ??0HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV0123@@Z @ 0x18007DAF4 (--0HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV0123@@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800F8D28 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<bool>,Windows::UI::Composition::PropertyUpdateInfo>(
        Windows::UI::Composition::CompositionObject *this,
        __int64 a2,
        PVOID **a3)
{
  _BYTE *v3; // rax
  char v7; // r14
  unsigned int v8; // r8d
  PVOID *v9; // rcx
  unsigned int v10; // edx
  int v11; // ebx
  PVOID *v12; // rax
  float *v13; // rdx
  unsigned int v14; // r8d
  char v15; // cl
  bool v16; // zf
  DirectComposition::CDevice *v17; // rcx
  char *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rdx
  char v22; // [rsp+30h] [rbp-99h] BYREF
  _BYTE v23[15]; // [rsp+31h] [rbp-98h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-89h] BYREF
  HSTRING_HEADER v25; // [rsp+60h] [rbp-69h] BYREF
  _DWORD v26[10]; // [rsp+80h] [rbp-49h] BYREF
  char v27; // [rsp+A8h] [rbp-21h]
  char v28; // [rsp+E8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  v3 = *(_BYTE **)(a2 + 8);
  if ( **(_BYTE **)a2 == *v3 )
  {
    v7 = 0;
  }
  else
  {
    **(_BYTE **)a2 = *v3;
    v7 = 1;
  }
  v22 = 0;
  if ( !Windows::UI::Composition::CompositionObject::HasImplicitAnimations(this) )
    goto LABEL_4;
  v19 = *(char **)(a2 + 16);
  hstringHeader.Reserved.Reserved1 = **a3;
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v25, (const WCHAR **)&hstringHeader, v8);
  v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          &hstringHeader,
          (const struct Microsoft::WRL::Wrappers::HStringReference *)&v25);
  Windows::UI::Composition::AnimationValueData::AnimationValueData(v26, v20);
  v28 = v7;
  v26[0] = 17;
  v27 = *v19;
  v11 = (*(__int64 (__fastcall **)(Windows::UI::Composition::CompositionObject *, _DWORD *, char *))(*(_QWORD *)this + 224LL))(
          this,
          v26,
          &v22);
  if ( v11 >= 0 )
  {
LABEL_4:
    if ( !v22 )
    {
      v9 = *a3;
      v10 = *((_DWORD *)*a3 + 3);
      if ( !*(_QWORD *)(a2 + 8) )
      {
        gsl::details::terminate((gsl::details *)v9);
        __debugbreak();
      }
      *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = *(_QWORD *)(a2 + 8);
      hstringHeader.Reserved.Reserved1 = (PVOID)1;
      v11 = Windows::UI::Composition::ProxyObject::NotifyPropertyChanged(
              (__int64)this,
              *((_DWORD *)v9 + 2),
              17,
              &hstringHeader,
              v10,
              (unsigned __int64)v23);
      if ( v11 < 0 )
      {
        v21 = 281LL;
        goto LABEL_22;
      }
      if ( v7 || v23[0] )
      {
        v12 = *a3;
        v13 = *(float **)(a2 + 8);
        if ( *((_BYTE *)*a3 + 21) )
          v14 = *((_DWORD *)v12 + 3);
        else
          v14 = *((_DWORD *)v12 + 2);
        v15 = *((_BYTE *)v12 + 20);
        if ( v15 )
        {
          v16 = v15 == 1;
          v17 = *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL);
          if ( v16 )
            DirectComposition::CDevice::ResourceSetBufferProperty(
              v17,
              *((_DWORD *)this + 32),
              v14,
              *(const void **)(a2 + 8),
              1uLL);
          else
            DirectComposition::CDevice::ResourceSetIntegerProperty(
              v17,
              *((_DWORD *)this + 32),
              v14,
              *(unsigned __int8 *)v13);
        }
        else
        {
          DirectComposition::CDevice::ResourceSetFloatProperty(
            *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
            *((_DWORD *)this + 32),
            v14,
            *v13);
        }
      }
    }
    return 0LL;
  }
  v21 = 261LL;
LABEL_22:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v21,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\WrtProxyObject.inl",
    (const char *)(unsigned int)v11);
  return (unsigned int)v11;
}
