/*
 * XREFs of ?RuntimeClassInitialize@CompositionEffectFactory@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAUIGraphicsEffect@Effects@Graphics@4@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@@Z @ 0x180019CDC
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionEffectFactory@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAPEAUIGraphicsEffect@Effects@Graphics@4@AEAPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionEffectFactory@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAPEAUIGraphicsEffect@Effects@Graphics@6@AEAPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@6@@Z @ 0x180019F38 (--$MakeAndInitialize2@VCompositionEffectFactory@Composition@UI@Windows@@V1234@PEAVCompositor@234.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize2@VCompositionEffectFactory@Composition@UI@Windows@@V1234@PEAV1234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionEffectFactory@Composition@UI@Windows@@$$QEAPEAV3456@@Z @ 0x180019FF8 (--$MakeAndInitialize2@VCompositionEffectFactory@Composition@UI@Windows@@V1234@PEAV1234@@Details@.c)
 *     ?ResourceSetHandleProperty@CDevice@DirectComposition@@QEAAJIIPEAX@Z @ 0x18001A2D4 (-ResourceSetHandleProperty@CDevice@DirectComposition@@QEAAJIIPEAX@Z.c)
 *     ?AddGraphStrings@CTelemetryHelper@@QEAAJPEAUIWrappedString@Composition@UI@Windows@@@Z @ 0x18001A400 (-AddGraphStrings@CTelemetryHelper@@QEAAJPEAUIWrappedString@Composition@UI@Windows@@@Z.c)
 *     ?MarshalEffectDescription@CompositionEffectFactory@Composition@UI@Windows@@AEAAJXZ @ 0x18001A5B4 (-MarshalEffectDescription@CompositionEffectFactory@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?GetBatchController@CompositorCommon@Composition@UI@Windows@@QEAAXW4CompositionBatchTypes@234@PEAPEAVBatchController@234@@Z @ 0x18001A958 (-GetBatchController@CompositorCommon@Composition@UI@Windows@@QEAAXW4CompositionBatchTypes@234@PE.c)
 *     ?StoreBatchSetOnObject@BatchController@Composition@UI@Windows@@AEAAXPEAUBatchMember@234@@Z @ 0x18001A98C (-StoreBatchSetOnObject@BatchController@Composition@UI@Windows@@AEAAXPEAUBatchMember@234@@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18008C2AC (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCDelegatedInkTrailCookieTracker@DirectComposition@@@WRL@Microsoft@@QEAA@XZ @ 0x1800E591C (--1-$ComPtr@VCDelegatedInkTrailCookieTracker@DirectComposition@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Do@FailFast@WRL2@Microsoft@@SAXXZ @ 0x180108A5C (-Do@FailFast@WRL2@Microsoft@@SAXXZ.c)
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18017696C (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionEffectFactory::RuntimeClassInitialize(
        Windows::UI::Composition::CompositionEffectFactory *this,
        struct Windows::UI::Composition::Compositor *a2,
        __int64 a3,
        __int64 a4)
{
  int EffectDescription; // ebx
  __int64 *v8; // rbx
  DWORD CurrentThreadId; // eax
  DWORD v10; // edx
  Windows::UI::Composition::BatchController *v11; // r8
  __int64 i; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  void *v15; // rdx
  HANDLE Event; // rbp
  unsigned int v17; // r8d
  const char *v18; // r9
  wil::details *v19; // rsi
  Microsoft::WRL2::ContextSession *v20; // rsi
  Microsoft::WRL2::NestableRuntimeClass *v21; // rcx
  int v22; // eax
  struct Windows::UI::Composition::IWrappedString *v23; // rcx
  __int64 v25; // rdx
  unsigned __int64 v26; // r9
  __int64 v27; // rdx
  DWORD LastError; // ebx
  void *v29; // rdx
  struct Windows::UI::Composition::IWrappedString *v30; // [rsp+20h] [rbp-18h] BYREF
  Windows::UI::Composition::BatchController *v31[2]; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  EffectDescription = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(this, a2, 0x1Cu, 0);
  if ( EffectDescription < 0 )
  {
    v25 = 52LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioneffectfactory.cpp",
      (const char *)(unsigned int)EffectDescription);
    return (unsigned int)EffectDescription;
  }
  v8 = (__int64 *)((char *)this + 200);
  Windows::UI::Composition::CompositorCommon::GetBatchController(*((_QWORD *)this + 3), 2LL, v31);
  CurrentThreadId = GetCurrentThreadId();
  v10 = CurrentThreadId;
  if ( *((_QWORD *)this + 25) || *((_QWORD *)this + 26) )
    Microsoft::WRL2::FailFast::Do();
  v11 = v31[0];
  if ( CurrentThreadId == *((_DWORD *)v31[0] + 16) )
  {
    *v8 = *((_QWORD *)v31[0] + 2) | 1LL;
    *((_QWORD *)v11 + 2) = v8;
  }
  for ( i = *((_QWORD *)v11 + 4); i; i = *(_QWORD *)(i + 192) )
  {
    if ( *(_DWORD *)(i + 136) == v10 )
      ++*(_DWORD *)(i + 140);
  }
  Windows::UI::Composition::BatchController::StoreBatchSetOnObject(
    v11,
    (Windows::UI::Composition::CompositionEffectFactory *)((char *)this + 200));
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 45) = 0;
  *((_DWORD *)this + 48) = 2;
  EffectDescription = CreateEffectDescription(a3, a4, (char *)this + 152);
  if ( EffectDescription < 0 )
  {
    v25 = 63LL;
    goto LABEL_25;
  }
  EffectDescription = Windows::UI::Composition::CompositionEffectFactory::MarshalEffectDescription(this);
  if ( EffectDescription < 0 )
  {
    v25 = 65LL;
    goto LABEL_25;
  }
  v13 = *((_QWORD *)this + 19);
  v14 = *(_QWORD *)(*((_QWORD *)this + 3) + 456LL);
  v30 = 0LL;
  if ( (*(int (__fastcall **)(__int64, struct Windows::UI::Composition::IWrappedString **))(*(_QWORD *)v13 + 88LL))(
         v13,
         &v30) >= 0 )
    CTelemetryHelper::AddGraphStrings((CTelemetryHelper *)(v14 + 736), v30);
  Event = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( !Event )
    wil::details::in1diag3::FailFast_GetLastError(retaddr, v15, v17, v18);
  GetLastError();
  v19 = (wil::details *)*((_QWORD *)this + 27);
  if ( v19 )
  {
    LastError = GetLastError();
    wil::details::CloseHandle(v19, v29);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 27) = Event;
  v20 = *(Microsoft::WRL2::ContextSession **)(*((_QWORD *)this + 3) + 528LL);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v20);
  v31[0] = this;
  v21 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 28);
  if ( v21 )
  {
    *((_QWORD *)this + 28) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v21);
  }
  EffectDescription = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionEffectFactory,Windows::UI::Composition::CompositionEffectFactory,Windows::UI::Composition::CompositionEffectFactory *>(
                        (char *)this + 224,
                        v31);
  Microsoft::WRL2::ContextSession::EndApiEntry(v20);
  if ( EffectDescription < 0 )
  {
    v26 = (unsigned int)EffectDescription;
    v27 = 86LL;
    goto LABEL_27;
  }
  v22 = DirectComposition::CDevice::ResourceSetHandleProperty(
          *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
          *((_DWORD *)this + 32),
          4u,
          *((void **)this + 27));
  EffectDescription = v22;
  if ( v22 < 0 )
  {
    v26 = (unsigned int)v22;
    v27 = 93LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v27,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioneffectfactory.cpp",
      (const char *)v26);
    Microsoft::WRL::ComPtr<DirectComposition::CDelegatedInkTrailCookieTracker>::~ComPtr<DirectComposition::CDelegatedInkTrailCookieTracker>(&v30);
    return (unsigned int)EffectDescription;
  }
  v23 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(struct Windows::UI::Composition::IWrappedString *))(*(_QWORD *)v23 + 8LL))(v23);
  }
  return 0LL;
}
