/*
 * XREFs of ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@UMatrix3x2@Numerics@Foundation@Windows@@@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@UMatrix3x2@Numerics@Foundation@Windows@@@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18005C2EC
 * Callers:
 *     ?put_TransformMatrix@Api@?$CompositionSurfaceBrushT@VCompositionSurfaceBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJUMatrix3x2@Numerics@Foundation@5@@Z @ 0x18004AE50 (-put_TransformMatrix@Api@-$CompositionSurfaceBrushT@VCompositionSurfaceBrush@Composition@UI@Wind.c)
 *     ?SetTransformMatrix@CompositionShape@Composition@UI@Windows@@QEAAJAEBUMatrix3x2@Numerics@Foundation@4@@Z @ 0x18005C238 (-SetTransformMatrix@CompositionShape@Composition@UI@Windows@@QEAAJAEBUMatrix3x2@Numerics@Foundat.c)
 *     ?SetTransformMatrix@CompositionGradientBrush@Composition@UI@Windows@@QEAAJAEBUMatrix3x2@Numerics@Foundation@4@@Z @ 0x180071F68 (-SetTransformMatrix@CompositionGradientBrush@Composition@UI@Windows@@QEAAJAEBUMatrix3x2@Numerics.c)
 *     ?SetTransformMatrix@CompositionClip@Composition@UI@Windows@@QEAAJAEBUMatrix3x2@Numerics@Foundation@4@@Z @ 0x180080CC8 (-SetTransformMatrix@CompositionClip@Composition@UI@Windows@@QEAAJAEBUMatrix3x2@Numerics@Foundati.c)
 *     ?SetTransformMatrix@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJAEBUMatrix3x2@Numerics@Foundation@5@@Z @ 0x18018A8C4 (-SetTransformMatrix@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJAEBUMatrix3x2@Nu.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ?NotifyPropertyChanged@ProxyObject@Composition@UI@Windows@@QEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@IPEA_N@Z @ 0x18004EA60 (-NotifyPropertyChanged@ProxyObject@Composition@UI@Windows@@QEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005DB98 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z @ 0x1800719B4 (-ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z.c)
 *     ??0AnimationValueData@Composition@UI@Windows@@QEAA@VHStringReference@Wrappers@WRL@Microsoft@@@Z @ 0x18007CDF0 (--0AnimationValueData@Composition@UI@Windows@@QEAA@VHStringReference@Wrappers@WRL@Microsoft@@@Z.c)
 *     ??0HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV0123@@Z @ 0x18007DAF4 (--0HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV0123@@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800F8D28 (-terminate@details@gsl@@YAXXZ.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<Windows::Foundation::Numerics::Matrix3x2>,Windows::UI::Composition::PropertyUpdateInfo>(
        __int64 a1,
        __int64 a2,
        PVOID **a3)
{
  _QWORD *v5; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rax
  char v9; // r14
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int *v12; // rcx
  int v13; // ebx
  PVOID *v14; // rax
  float *v15; // r9
  unsigned int v16; // r8d
  char v17; // cl
  __int128 *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  char v23; // [rsp+30h] [rbp-99h] BYREF
  _BYTE v24[15]; // [rsp+31h] [rbp-98h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-89h] BYREF
  _BYTE v26[32]; // [rsp+60h] [rbp-69h] BYREF
  _DWORD v27[10]; // [rsp+80h] [rbp-49h] BYREF
  __int128 v28; // [rsp+A8h] [rbp-21h]
  __int64 v29; // [rsp+B8h] [rbp-11h]
  char v30; // [rsp+E8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  v5 = *(_QWORD **)(a2 + 8);
  v7 = *(_QWORD **)a2;
  v8 = **(_QWORD **)a2 - *v5;
  if ( !v8 )
  {
    v8 = v7[1] - v5[1];
    if ( !v8 )
      v8 = v7[2] - v5[2];
  }
  if ( v8 )
  {
    v9 = 1;
    *(_OWORD *)v7 = *(_OWORD *)v5;
    v7[2] = v5[2];
  }
  else
  {
    v9 = 0;
  }
  v10 = *(_QWORD *)a1;
  v23 = 0;
  if ( !(*(__int64 (__fastcall **)(__int64))(v10 + 232))(a1) )
    goto LABEL_7;
  v19 = *(__int128 **)(a2 + 16);
  hstringHeader.Reserved.Reserved1 = **a3;
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(v26, &hstringHeader);
  v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          &hstringHeader,
          (const struct Microsoft::WRL::Wrappers::HStringReference *)v26);
  Windows::UI::Composition::AnimationValueData::AnimationValueData(v27, v20);
  v21 = *(_QWORD *)a1;
  v30 = v9;
  v27[0] = 104;
  v28 = *v19;
  v29 = *((_QWORD *)v19 + 2);
  v13 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(v21 + 224))(a1, v27, &v23);
  if ( v13 >= 0 )
  {
LABEL_7:
    if ( !v23 )
    {
      v11 = *(_QWORD *)(a2 + 8);
      v12 = (unsigned int *)*a3;
      hstringHeader.Reserved.Reserved1 = (PVOID)24;
      *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = v11;
      if ( !v11 )
      {
        gsl::details::terminate((gsl::details *)v12);
        __debugbreak();
      }
      v13 = Windows::UI::Composition::ProxyObject::NotifyPropertyChanged(
              a1,
              v12[2],
              104,
              &hstringHeader,
              v12[3],
              (unsigned __int64)v24);
      if ( v13 < 0 )
      {
        v22 = 281LL;
        goto LABEL_26;
      }
      if ( v9 || v24[0] )
      {
        v14 = *a3;
        v15 = *(float **)(a2 + 8);
        if ( *((_BYTE *)*a3 + 21) )
          v16 = *((_DWORD *)v14 + 3);
        else
          v16 = *((_DWORD *)v14 + 2);
        v17 = *((_BYTE *)v14 + 20);
        if ( v17 )
        {
          if ( v17 != 1 )
            Microsoft::WRL2::FailFast::Unexpected(0LL);
          DirectComposition::CDevice::ResourceSetBufferProperty(
            *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
            *(_DWORD *)(a1 + 128),
            v16,
            v15,
            0x18uLL);
        }
        else
        {
          DirectComposition::CDevice::ResourceSetFloatProperty(
            *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
            *(_DWORD *)(a1 + 128),
            v16,
            *v15);
        }
      }
    }
    return 0LL;
  }
  v22 = 261LL;
LABEL_26:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v22,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\WrtProxyObject.inl",
    (const char *)(unsigned int)v13);
  return (unsigned int)v13;
}
