/*
 * XREFs of _anonymous_namespace_::GetLogoFileFromContent @ 0x1806AD240
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$1 @ 0x180253800 (RequestNotificationPinConsentAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x18038CA80 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     _anonymous_namespace_::CreateTemporaryLogoFile @ 0x1806ACB64 (_anonymous_namespace_--CreateTemporaryLogoFile.c)
 *     _anonymous_namespace_::GetWicBitmapFromHBitmap @ 0x1806AD79C (_anonymous_namespace_--GetWicBitmapFromHBitmap.c)
 *     _anonymous_namespace_::GetWicBitmapFromStreamReference @ 0x1806AD8F8 (_anonymous_namespace_--GetWicBitmapFromStreamReference.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall anonymous_namespace_::GetLogoFileFromContent(__int64 a1, __int64 *a2)
{
  __int64 *WicBitmapFromHBitmap; // rax
  __int64 *v4; // rcx
  __int64 *WicBitmapFromStreamReference; // rax
  unsigned int v7; // eax
  int v8; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF
  char v11; // [rsp+50h] [rbp+18h] BYREF

  if ( !a2 )
    goto LABEL_7;
  if ( *((_BYTE *)a2 + 8) )
  {
    if ( *((_BYTE *)a2 + 8) == 1 )
    {
      v10 = *a2;
      winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v10);
      WicBitmapFromStreamReference = (__int64 *)anonymous_namespace_::GetWicBitmapFromStreamReference(&v11, &v10);
      anonymous_namespace_::CreateTemporaryLogoFile(a1, *WicBitmapFromStreamReference);
      v4 = (__int64 *)&v11;
      goto LABEL_4;
    }
LABEL_7:
    v7 = wil::verify_hresult<long>(0x80070057);
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x87,
      (int)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)v7,
      v8);
  }
  WicBitmapFromHBitmap = (__int64 *)anonymous_namespace_::GetWicBitmapFromHBitmap(&v10, *a2);
  anonymous_namespace_::CreateTemporaryLogoFile(a1, *WicBitmapFromHBitmap);
  v4 = &v10;
LABEL_4:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v4);
  return a1;
}
