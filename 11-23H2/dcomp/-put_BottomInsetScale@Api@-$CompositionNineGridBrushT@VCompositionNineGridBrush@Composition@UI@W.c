/*
 * XREFs of ?put_BottomInsetScale@Api@?$CompositionNineGridBrushT@VCompositionNineGridBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJM@Z @ 0x18004A420
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAnimationLoggingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationLoggingManager@234@_N@Z @ 0x180022008 (-GetAnimationLoggingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationLoggingMan.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ?AnimationEnded@AnimationLoggingManager@Composition@UI@Windows@@QEAAXIIW4AnimationEndedReasonType@@W4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18004D000 (-AnimationEnded@AnimationLoggingManager@Composition@UI@Windows@@QEAAXIIW4AnimationEndedReasonTyp.c)
 *     ?NotifyPropertyChanged@AnimationBindingManager@Composition@UI@Windows@@QEAAJIIPEA_N@Z @ 0x180050AC0 (-NotifyPropertyChanged@AnimationBindingManager@Composition@UI@Windows@@QEAAJIIPEA_N@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005DB98 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??0AnimationBindingManager@Composition@UI@Windows@@QEAA@XZ @ 0x180072B5C (--0AnimationBindingManager@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?IsPropertyDebugged@AnimationLoggingManager@Composition@UI@Windows@@QEAA_NIIPEAPEAVCompObjectDiagnosticsPrincipal@@@Z @ 0x180077510 (-IsPropertyDebugged@AnimationLoggingManager@Composition@UI@Windows@@QEAA_NIIPEAPEAVCompObjectDia.c)
 *     ??0AnimationValueData@Composition@UI@Windows@@QEAA@VHStringReference@Wrappers@WRL@Microsoft@@@Z @ 0x18007CDF0 (--0AnimationValueData@Composition@UI@Windows@@QEAA@VHStringReference@Wrappers@WRL@Microsoft@@@Z.c)
 *     ??0HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV0123@@Z @ 0x18007DAF4 (--0HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV0123@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z @ 0x180108EB4 (-OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z.c)
 *     ??$UpdateAnimatedPropertyWorker@V?$PropertyUpdater@M@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAXAEAV?$PropertyUpdater@M@123@AEBVPropertyUpdateInfo@123@_N2G@Z @ 0x18013EED0 (--$UpdateAnimatedPropertyWorker@V-$PropertyUpdater@M@Composition@UI@Windows@@VPropertyUpdateInfo.c)
 *     ?OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z @ 0x180149ADC (-OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionNineGridBrushT<Windows::UI::Composition::CompositionNineGridBrush,Windows::UI::Composition::CompositionBrush>::Api::put_BottomInsetScale(
        __int64 a1,
        float a2)
{
  __int64 *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  float v4; // xmm0_4
  char v5; // r12
  __int64 v6; // rax
  unsigned int v7; // r13d
  unsigned int v8; // r15d
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned int v11; // r14d
  __int64 v12; // rsi
  Windows::UI::Composition::AnimationBindingManager *v13; // r14
  int v14; // eax
  int v15; // r9d
  unsigned int v16; // esi
  char v17; // si
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  unsigned int v24; // edx
  Windows::UI::Composition::AnimationBindingManager *v25; // rax
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  Windows::UI::Composition::CompositorCommon *v29; // rcx
  struct Windows::UI::Composition::AnimationLoggingManager *AnimationLoggingManager; // rax
  unsigned __int64 v31; // [rsp+20h] [rbp-E0h]
  __int64 v32; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+38h] [rbp-C8h] BYREF
  struct CompObjectDiagnosticsPrincipal *v34[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v35[2]; // [rsp+50h] [rbp-B0h] BYREF
  void *v36; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v37[3]; // [rsp+68h] [rbp-98h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v39[24]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v40; // [rsp+B8h] [rbp-48h]
  _DWORD v41[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v42; // [rsp+E0h] [rbp-20h]
  int v43; // [rsp+E8h] [rbp-18h]
  char v44; // [rsp+128h] [rbp+28h]
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  v2 = (__int64 *)(a1 - 152);
  v3 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 152 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (v2[4] & 2) != 0 )
  {
    *(float *)&v33 = a2;
    if ( a2 < 0.0 )
    {
      Windows::UI::Composition::OriginateInvalidArgument(14LL, L"InsetScale");
      v19 = 177LL;
      v16 = -2147024809;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionninegridbrush.cpp",
        (const char *)v16);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D79,
        (int)"onecoreuap\\private\\Windows\\inc\\private\\compgen\\DCompABIAutoGen_Windows.UI.Composition.g.h",
        (const char *)v16);
      Microsoft::WRL2::ContextSession::EndApiEntry(v3);
      return v16;
    }
    v37[1] = &v33;
    v4 = *((float *)v2 + 51);
    v37[2] = &v33;
    v36 = &Windows::UI::Composition::CompositionNineGridBrush::sc_BottomInsetScale;
    v37[0] = (char *)v2 + 204;
    if ( v4 == a2 )
    {
      v5 = 0;
    }
    else
    {
      *((float *)v2 + 51) = a2;
      v5 = 1;
    }
    v6 = *v2;
    BYTE1(v32) = 0;
    if ( (*(__int64 (__fastcall **)(__int64 *))(v6 + 232))(v2) )
    {
      v34[0] = (struct CompObjectDiagnosticsPrincipal *)Windows::UI::Composition::CompositionNineGridBrush::sc_BottomInsetScale;
      Microsoft::WRL::Wrappers::HStringReference::HStringReference(v39, v34);
      v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
              &hstringHeader,
              (const struct Microsoft::WRL::Wrappers::HStringReference *)v39);
      Windows::UI::Composition::AnimationValueData::AnimationValueData(v41, v20);
      v21 = *v2;
      v43 = v33;
      v44 = v5;
      v41[0] = 18;
      v22 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *, char *))(v21 + 224))(v2, v41, (char *)&v32 + 1);
      v16 = v22;
      if ( v22 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x105,
          (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\WrtProxyObject.inl",
          (const char *)(unsigned int)v22);
        v42 = 0LL;
        v40 = 0LL;
LABEL_34:
        v19 = 180LL;
        goto LABEL_19;
      }
      v42 = 0LL;
      v40 = 0LL;
    }
    if ( BYTE1(v32) )
    {
LABEL_17:
      Microsoft::WRL2::ContextSession::EndApiEntry(v3);
      return 0LL;
    }
    v7 = dword_180217C9C;
    v8 = dword_180217C98;
    v35[1] = &v33;
    v9 = v2[3];
    v35[0] = 4LL;
    LOBYTE(v32) = 0;
    v10 = *(_QWORD *)(v9 + 840);
    if ( v10 )
    {
      v11 = *((_DWORD *)v2 + 32);
      if ( Windows::UI::Composition::AnimationLoggingManager::IsPropertyDebugged(
             *(Windows::UI::Composition::AnimationLoggingManager **)(v9 + 840),
             v11,
             dword_180217C98,
             v34) )
      {
        v23 = *(_QWORD *)(v10 + 24);
        v24 = *(_DWORD *)(v10 + 128);
        v34[0] = (struct CompObjectDiagnosticsPrincipal *)__PAIR64__(v8, v11);
        DirectComposition::CDevice::ResourceSetBufferProperty(
          *(DirectComposition::CDevice **)(v23 + 456),
          v24,
          0,
          v34,
          8uLL);
      }
    }
    v12 = v2[3];
    v13 = *(Windows::UI::Composition::AnimationBindingManager **)(v12 + 832);
    if ( v13 )
    {
LABEL_11:
      v14 = Windows::UI::Composition::AnimationBindingManager::NotifyPropertyChanged(
              v13,
              *((_DWORD *)v2 + 32),
              v8,
              (bool *)&v32);
      v16 = v14;
      if ( v14 < 0 )
      {
        v28 = 1557LL;
      }
      else
      {
        if ( v7 == -1 )
        {
          v17 = v32;
          goto LABEL_14;
        }
        v14 = Windows::UI::Composition::AnimationBindingManager::NotifyPropertyChanged(
                v13,
                *((_DWORD *)v2 + 32),
                v7,
                (bool *)&v32 + 2);
        v16 = v14;
        if ( v14 >= 0 )
        {
          v17 = BYTE2(v32) | v32;
LABEL_14:
          if ( v17 )
          {
            v29 = (Windows::UI::Composition::CompositorCommon *)v2[3];
            if ( *((_QWORD *)v29 + 105) )
            {
              AnimationLoggingManager = Windows::UI::Composition::CompositorCommon::GetAnimationLoggingManager(v29, 0);
              Windows::UI::Composition::AnimationLoggingManager::AnimationEnded(
                AnimationLoggingManager,
                *((unsigned int *)v2 + 32),
                v8,
                1LL,
                18,
                v35,
                v32,
                v33,
                v34[0],
                v34[1]);
            }
          }
          if ( v5 || v17 )
            Windows::UI::Composition::ProxyObject::UpdateAnimatedPropertyWorker<Windows::UI::Composition::PropertyUpdater<float>,Windows::UI::Composition::PropertyUpdateInfo>(
              (_DWORD)v2,
              (unsigned int)v37,
              (unsigned int)&v36,
              v15,
              v31);
          goto LABEL_17;
        }
        v28 = 1570LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v28,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtproxyobject.cpp",
        (const char *)(unsigned int)v14);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x119,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\WrtProxyObject.inl",
        (const char *)v16);
      goto LABEL_34;
    }
    v25 = (Windows::UI::Composition::AnimationBindingManager *)DefaultHeap::AllocClear(0x130uLL);
    if ( v25 )
    {
      v27 = Windows::UI::Composition::AnimationBindingManager::AnimationBindingManager(v25);
      *(_QWORD *)(v12 + 832) = v27;
      v13 = (Windows::UI::Composition::AnimationBindingManager *)v27;
      if ( v27 )
        goto LABEL_11;
    }
    else
    {
      *(_QWORD *)(v12 + 832) = 0LL;
    }
    Microsoft::WRL2::FailFast::OutOfMemory(v26);
  }
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D76,
    (int)"onecoreuap\\private\\Windows\\inc\\private\\compgen\\DCompABIAutoGen_Windows.UI.Composition.g.h",
    (const char *)0x80000013LL);
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return 2147483667LL;
}
