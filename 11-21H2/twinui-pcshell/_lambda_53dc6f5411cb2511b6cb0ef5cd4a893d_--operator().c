/*
 * XREFs of _lambda_53dc6f5411cb2511b6cb0ef5cd4a893d_::operator() @ 0x1801B6B30
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_53dc6f5411cb2511b6cb0ef5cd4a893d___::Run @ 0x1801B7260 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_53dc6f5411cb2511b6cb0ef5cd4a893d___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     CreationThreadDispatcher::RunSync__lambda_0ccf2911bb3556e965c79eb60c053427___ @ 0x1801B6334 (CreationThreadDispatcher--RunSync__lambda_0ccf2911bb3556e965c79eb60c053427___.c)
 *     _lambda_0ccf2911bb3556e965c79eb60c053427_::_lambda_0ccf2911bb3556e965c79eb60c053427__0 @ 0x1801B6564 (_lambda_0ccf2911bb3556e965c79eb60c053427_--_lambda_0ccf2911bb3556e965c79eb60c053427__0.c)
 *     _lambda_0ccf2911bb3556e965c79eb60c053427_::__lambda_0ccf2911bb3556e965c79eb60c053427_ @ 0x1801B6774 (_lambda_0ccf2911bb3556e965c79eb60c053427_--__lambda_0ccf2911bb3556e965c79eb60c053427_.c)
 *     ??1CDCompVisualImageLoader@ImageLoaders@@QEAA@XZ @ 0x18054F49C (--1CDCompVisualImageLoader@ImageLoaders@@QEAA@XZ.c)
 *     ?Initialize@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEAUID2D1DeviceContext@@PEAUIDCompositionDevice@@@Z @ 0x1805E9AC4 (-Initialize@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEAUID2D1DeviceContext@@PEAUIDComposition.c)
 *     ?LoadImageByPath@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEBGPEAUtagSIZE@@PEAPEAUIDCompositionVisual@@@Z @ 0x1805E9E80 (-LoadImageByPath@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEBGPEAUtagSIZE@@PEAPEAUIDCompositio.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_53dc6f5411cb2511b6cb0ef5cd4a893d_::operator()(__int64 a1)
{
  __int64 *v2; // rsi
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  HSTRING *v6; // rax
  HSTRING v7; // rcx
  const unsigned __int16 *StringRawBuffer; // rax
  int v9; // eax
  struct IDCompositionVisual *v11; // [rsp+68h] [rbp-49h] BYREF
  UINT32 length; // [rsp+70h] [rbp-41h] BYREF
  struct tagSIZE v13; // [rsp+78h] [rbp-39h] BYREF
  __int128 v14; // [rsp+80h] [rbp-31h] BYREF
  __int64 v15; // [rsp+90h] [rbp-21h]
  __int64 v16[12]; // [rsp+98h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v11 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v2 = (__int64 *)(a1 + 56);
  v3 = ImageLoaders::CDCompVisualImageLoader::Initialize(
         (ImageLoaders::CDCompVisualImageLoader *)&v14,
         *(struct ID2D1DeviceContext **)(a1 + 48),
         *(struct IDCompositionDevice **)(a1 + 56));
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 998LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_13;
  }
  v6 = *(HSTRING **)(a1 + 80);
  if ( v6 )
    v7 = *v6;
  else
    v7 = 0LL;
  StringRawBuffer = WindowsGetStringRawBuffer(v7, &length);
  v3 = ImageLoaders::CDCompVisualImageLoader::LoadImageByPath(
         (ImageLoaders::CDCompVisualImageLoader *)&v14,
         StringRawBuffer,
         &v13,
         &v11);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 999LL;
    goto LABEL_8;
  }
  lambda_0ccf2911bb3556e965c79eb60c053427_::_lambda_0ccf2911bb3556e965c79eb60c053427__0(
    (__int64)v16,
    a1,
    (__int64)&v13,
    a1 + 8,
    (_OWORD *)(a1 + 24),
    (__int64 *)&v11,
    v2,
    (_QWORD *)(a1 + 64),
    (_QWORD *)(a1 + 72),
    *(_DWORD *)(a1 + 96),
    (_QWORD *)(a1 + 104));
  v9 = CreationThreadDispatcher::RunSync__lambda_0ccf2911bb3556e965c79eb60c053427___(*(_QWORD *)(a1 + 40), (__int64)v16);
  v4 = v9;
  if ( v9 >= 0 )
    v4 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x412,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v9);
  lambda_0ccf2911bb3556e965c79eb60c053427_::__lambda_0ccf2911bb3556e965c79eb60c053427_(v16);
LABEL_13:
  ImageLoaders::CDCompVisualImageLoader::~CDCompVisualImageLoader((ImageLoaders::CDCompVisualImageLoader *)&v14);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v11);
  return v4;
}
