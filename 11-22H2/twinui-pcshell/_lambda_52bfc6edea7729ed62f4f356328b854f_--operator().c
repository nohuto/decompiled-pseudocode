/*
 * XREFs of _lambda_52bfc6edea7729ed62f4f356328b854f_::operator() @ 0x1802173FC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_52bfc6edea7729ed62f4f356328b854f___::Run @ 0x1802180D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_52bfc6edea7729ed62f4f356328b854f___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     CreationThreadDispatcher::RunSync__lambda_57ccf274084369bdcaf7e64bf986fb01___ @ 0x180216968 (CreationThreadDispatcher--RunSync__lambda_57ccf274084369bdcaf7e64bf986fb01___.c)
 *     _lambda_57ccf274084369bdcaf7e64bf986fb01_::_lambda_57ccf274084369bdcaf7e64bf986fb01__0 @ 0x180216D44 (_lambda_57ccf274084369bdcaf7e64bf986fb01_--_lambda_57ccf274084369bdcaf7e64bf986fb01__0.c)
 *     _lambda_57ccf274084369bdcaf7e64bf986fb01_::__lambda_57ccf274084369bdcaf7e64bf986fb01_ @ 0x180217040 (_lambda_57ccf274084369bdcaf7e64bf986fb01_--__lambda_57ccf274084369bdcaf7e64bf986fb01_.c)
 *     ??1CDCompVisualImageLoader@ImageLoaders@@QEAA@XZ @ 0x18060AC38 (--1CDCompVisualImageLoader@ImageLoaders@@QEAA@XZ.c)
 *     ?Initialize@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEAUID2D1DeviceContext@@PEAUIDCompositionDevice@@@Z @ 0x18073E16C (-Initialize@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEAUID2D1DeviceContext@@PEAUIDComposition.c)
 *     ?LoadImageByPath@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEBGPEAUtagSIZE@@PEAPEAUIDCompositionVisual@@@Z @ 0x18073E528 (-LoadImageByPath@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEBGPEAUtagSIZE@@PEAPEAUIDCompositio.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_52bfc6edea7729ed62f4f356328b854f_::operator()(__int64 a1)
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
    v5 = 1020LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
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
    v5 = 1021LL;
    goto LABEL_8;
  }
  lambda_57ccf274084369bdcaf7e64bf986fb01_::_lambda_57ccf274084369bdcaf7e64bf986fb01__0(
    (__int64)v16,
    (_QWORD *)a1,
    &v13,
    (_OWORD *)(a1 + 8),
    (_OWORD *)(a1 + 24),
    (__int64 *)&v11,
    v2,
    (_QWORD *)(a1 + 64),
    (_QWORD *)(a1 + 72),
    *(_DWORD *)(a1 + 96),
    (_QWORD *)(a1 + 104));
  v9 = CreationThreadDispatcher::RunSync__lambda_57ccf274084369bdcaf7e64bf986fb01___(*(_QWORD *)(a1 + 40), (__int64)v16);
  v4 = v9;
  if ( v9 >= 0 )
    v4 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x437,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v9);
  lambda_57ccf274084369bdcaf7e64bf986fb01_::__lambda_57ccf274084369bdcaf7e64bf986fb01_(v16);
LABEL_13:
  ImageLoaders::CDCompVisualImageLoader::~CDCompVisualImageLoader((ImageLoaders::CDCompVisualImageLoader *)&v14);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v11);
  return v4;
}
