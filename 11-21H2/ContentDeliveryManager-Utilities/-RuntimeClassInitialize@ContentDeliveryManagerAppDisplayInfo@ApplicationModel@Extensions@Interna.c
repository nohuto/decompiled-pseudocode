/*
 * XREFs of ?RuntimeClassInitialize@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@QEAAJPEBGPEAUIAppDisplayInfo@25@@Z @ 0x1800DA4C4
 * Callers:
 *     ??$MakeAndInitialize@VContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@UIAppDisplayInfo@25@PEBGPEAU625@@Details@WRL@Microsoft@@YAJPEAPEAUIAppDisplayInfo@ApplicationModel@Windows@@$$QEAPEBG$$QEAPEAU345@@Z @ 0x1800D8FCC (--$MakeAndInitialize@VContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800842F0 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ??1MRTHelperBase@ShellMRTHelper@@QEAA@XZ @ 0x1800D9A28 (--1MRTHelperBase@ShellMRTHelper@@QEAA@XZ.c)
 *     ?Resolve@MRTHelperBase@ShellMRTHelper@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z @ 0x1800DA118 (-Resolve@MRTHelperBase@ShellMRTHelper@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::RuntimeClassInitialize(
        Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo *this,
        const unsigned __int16 *a2,
        struct Windows::ApplicationModel::IAppDisplayInfo *a3)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // rsi
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  void *v10; // rbx
  UINT32 v11; // edx
  const WCHAR *v12; // rcx
  HRESULT String; // eax
  wil *v14; // rcx
  unsigned int v15; // r8d
  __int64 result; // rax
  __int64 v17; // [rsp+0h] [rbp-98h] BYREF
  int v18[4]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v19; // [rsp+30h] [rbp-68h]
  __int128 v20; // [rsp+38h] [rbp-60h]
  int v21; // [rsp+48h] [rbp-50h]
  int v22; // [rsp+4Ch] [rbp-4Ch]
  _OWORD v23[3]; // [rsp+50h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  LPVOID pv; // [rsp+A0h] [rbp+8h] BYREF

  try
  {
    v5 = *((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = a3;
    if ( a3 )
      (*(void (__fastcall **)(struct Windows::ApplicationModel::IAppDisplayInfo *))(*(_QWORD *)a3 + 8LL))(a3);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    *(_OWORD *)v18 = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    v21 = 0;
    v22 = 256;
    memset(v23, 0, sizeof(v23));
    v6 = -1LL;
    v7 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
           v23,
           (__int64)a2,
           0xFFFFFFFFFFFFFFFFuLL);
    v8 = v7;
    if ( v7 >= 0 )
      v8 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30,
        (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.h",
        (const char *)(unsigned int)v7);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        514LL,
        (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.h",
        (const char *)(unsigned int)v8,
        v18[0]);
    pv = 0LL;
    v9 = ShellMRTHelper::MRTHelperBase::Resolve(
           (__int64)v18,
           0LL,
           (unsigned int)L"ms-resource:ActionCenterGroupName",
           &pv);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        67LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificationextension\\lib\\co"
                 "ntentdeliverymanagerappdisplayinfo.cpp",
        (const char *)(unsigned int)v9,
        v18[0]);
    v10 = pv;
    if ( pv )
    {
      do
        ++v6;
      while ( *((_WORD *)pv + v6) );
      if ( v6 > 0xFFFFFFFF )
      {
        String = -2147024362;
LABEL_18:
        if ( String < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            68LL,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificationextension\\lib"
                     "\\contentdeliverymanagerappdisplayinfo.cpp",
            (const char *)(unsigned int)String,
            v18[0]);
        if ( v10 )
          CoTaskMemFree(v10);
        ShellMRTHelper::MRTHelperBase::~MRTHelperBase((ShellMRTHelper::MRTHelperBase *)v18);
        return 0LL;
      }
      WindowsDeleteString(*((HSTRING *)this + 10));
      v11 = v6;
      v12 = (const WCHAR *)v10;
    }
    else
    {
      WindowsDeleteString(*((HSTRING *)this + 10));
      v11 = 0;
      v12 = &Src;
    }
    *((_QWORD *)this + 10) = 0LL;
    String = WindowsCreateString(v12, v11, (HSTRING *)this + 10);
    v10 = pv;
    goto LABEL_18;
  }
  catch ( ... )
  {
    LODWORD(pv) = wil::ResultFromCaughtException(v14, &v17, v15);
    return (unsigned int)pv;
  }
  return result;
}
