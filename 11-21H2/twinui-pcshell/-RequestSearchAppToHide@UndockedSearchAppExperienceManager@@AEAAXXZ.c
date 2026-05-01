/*
 * XREFs of ?RequestSearchAppToHide@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18001FEEC
 * Callers:
 *     ?Hide@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x18001FB30 (-Hide@UndockedSearchAppExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsWeak@VUndockedSearchAppExperienceManager@@@WRL@Microsoft@@YAJPEAVUndockedSearchAppExperienceManager@@PEAVWeakRef@01@@Z @ 0x18006C088 (--$AsWeak@VUndockedSearchAppExperienceManager@@@WRL@Microsoft@@YAJPEAVUndockedSearchAppExperienc.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18006C1F8 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1801492F0 (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_7c45733854a7fd496baaedd8287c2292___ @ 0x180199C24 (Windows--Internal--ComTaskPool--QueueTask__lambda_7c45733854a7fd496baaedd8287c2292___.c)
 *     ??1?$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D5460 (--1-$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UndockedSearchAppExperienceManager::RequestSearchAppToHide(UndockedSearchAppExperienceManager *this)
{
  __int64 v2; // rax
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  _BYTE v7[8]; // [rsp+20h] [rbp-18h] BYREF
  UndockedSearchAppExperienceManager *v8; // [rsp+28h] [rbp-10h]
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF
  __int64 *v10; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0LL;
  v10 = &v9;
  v2 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v10);
  v3 = Microsoft::WRL::AsWeak<UndockedSearchAppExperienceManager>(this, v2);
  if ( v3 < 0 )
    winrt::throw_hresult((unsigned int)v3);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(v7, &v9);
  v8 = this;
  v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_7c45733854a7fd496baaedd8287c2292___(
         v5,
         v4,
         *((unsigned int *)this + 38),
         v7);
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(v7);
  if ( v6 < 0 )
    winrt::throw_hresult((unsigned int)v6);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v9);
}
