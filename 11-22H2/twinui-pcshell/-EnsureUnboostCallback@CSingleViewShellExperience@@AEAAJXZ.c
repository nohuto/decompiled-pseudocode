/*
 * XREFs of ?EnsureUnboostCallback@CSingleViewShellExperience@@AEAAJXZ @ 0x1800EAA48
 * Callers:
 *     ?BoostPriority@CSingleViewShellExperience@@QEAAXW4PriorityBoostReason@1@@Z @ 0x18002BB00 (-BoostPriority@CSingleViewShellExperience@@QEAAXW4PriorityBoostReason@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3438 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800B382C (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x1800EACB8 (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::IEventHandler_IInspectable_____lambda_01e36ce14ec0819db01b791ce79c1b63___ @ 0x1802856BC (Microsoft--WRL--Callback_Windows--Foundation--IEventHandler_IInspectable_____lambda_01e36ce14ec0.c)
 */

__int64 __fastcall CSingleViewShellExperience::EnsureUnboostCallback(CSingleViewShellExperience *this)
{
  char *v1; // rdi
  __int64 v4; // rbx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 *v8; // rdi
  int AgileReference; // eax
  __int64 v10[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  char *v13; // [rsp+48h] [rbp+10h] BYREF

  v1 = (char *)this + 152;
  if ( *((_QWORD *)this + 19) )
    return 0LL;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(
    v10,
    (__int64 *)this + 12);
  v10[1] = (__int64)this;
  Microsoft::WRL::Callback_Windows::Foundation::IEventHandler_IInspectable_____lambda_01e36ce14ec0819db01b791ce79c1b63___(
    &v12,
    v10);
  Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(v10);
  v4 = v12;
  if ( v12 )
  {
    v13 = v1;
    v8 = (__int64 *)Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::AgileRef>::operator Microsoft::WRL::AgileRef *(&v13);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v8);
    AgileReference = RoGetAgileReference(0LL, &GUID_c50898f6_c536_5f47_8583_8b2c2438a13b, v4, v8);
    v5 = AgileReference;
    if ( AgileReference >= 0 )
    {
      v5 = 0;
      goto LABEL_9;
    }
    v7 = (unsigned int)AgileReference;
    v6 = 1127LL;
  }
  else
  {
    v5 = -2147024882;
    v6 = 1126LL;
    v7 = 2147942414LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)v7,
    v10[0]);
LABEL_9:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
  return v5;
}
