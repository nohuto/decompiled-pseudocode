/*
 * XREFs of ?PrefetchDisplayName@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@AEAAXPEBG@Z @ 0x1800C3F58
 * Callers:
 *     ?RuntimeClassInitialize@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@QEAAJPEBGPEAUIAppDisplayInfo@25@@Z @ 0x1800C43A4 (-RuntimeClassInitialize@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Interna.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002C184 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180045458 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z @ 0x1800991F4 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z.c)
 *     ??0MRTHelperForPackage@ShellMRTHelper@@QEAA@PEBG@Z @ 0x1800C39AC (--0MRTHelperForPackage@ShellMRTHelper@@QEAA@PEBG@Z.c)
 *     ??1MRTHelperBase@ShellMRTHelper@@QEAA@XZ @ 0x1800C3A6C (--1MRTHelperBase@ShellMRTHelper@@QEAA@XZ.c)
 *     ?Resolve@MRTHelperBase@ShellMRTHelper@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z @ 0x1800C405C (-Resolve@MRTHelperBase@ShellMRTHelper@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::PrefetchDisplayName(
        HSTRING *this,
        char *a2)
{
  int v3; // eax
  const wchar_t *v4; // rdx
  unsigned __int64 v5; // rax
  UINT32 v6; // r8d
  HRESULT v7; // eax
  int v8[26]; // [rsp+20h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  const wchar_t *v10; // [rsp+A0h] [rbp+18h] BYREF

  ShellMRTHelper::MRTHelperForPackage::MRTHelperForPackage((ShellMRTHelper::MRTHelperForPackage *)v8, a2);
  v10 = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&v10,
    0LL);
  v3 = ShellMRTHelper::MRTHelperBase::Resolve(v8, 0LL, L"ms-resource:ActionCenterGroupName", &v10);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x43,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificationextension\\lib\\cont"
               "entdeliverymanagerappdisplayinfo.cpp",
      (const char *)(unsigned int)v3,
      v8[0]);
  v4 = v10;
  if ( v10 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( v10[v5] );
    if ( v5 > 0xFFFFFFFF )
    {
      v7 = -2147024362;
      goto LABEL_11;
    }
    v6 = v5;
  }
  else
  {
    v6 = 0;
    v4 = word_180106C64;
  }
  v7 = Microsoft::WRL::Wrappers::HString::Set(this + 10, v4, v6);
LABEL_11:
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x44,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificationextension\\lib\\cont"
               "entdeliverymanagerappdisplayinfo.cpp",
      (const char *)(unsigned int)v7,
      v8[0]);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&v10);
  ShellMRTHelper::MRTHelperBase::~MRTHelperBase((ShellMRTHelper::MRTHelperBase *)v8);
}
