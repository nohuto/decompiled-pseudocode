/*
 * XREFs of ?RegisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180060644
 * Callers:
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x1800B7C8C (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180097490 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?HasRegisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAA_NXZ @ 0x180098584 (-HasRegisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAA_NXZ.c)
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3438 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800B382C (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??$AsWeak@VUndockedSearchAppExperienceManager@@@WRL@Microsoft@@YAJPEAVUndockedSearchAppExperienceManager@@PEAVWeakRef@01@@Z @ 0x1800B52B4 (--$AsWeak@VUndockedSearchAppExperienceManager@@@WRL@Microsoft@@YAJPEAVUndockedSearchAppExperienc.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_d1ff7bb2acfe3360b50ca45b6d833a46___ @ 0x1801E6948 (Windows--Internal--ComTaskPool--QueueTask__lambda_d1ff7bb2acfe3360b50ca45b6d833a46___.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UndockedSearchAppExperienceManager::RegisterViewCoordinatorEvents(
        UndockedSearchAppExperienceManager *this)
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

  if ( !UndockedSearchAppExperienceManager::HasRegisterViewCoordinatorEvents(this) )
  {
    v9 = 0LL;
    v10 = &v9;
    v2 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v10);
    v3 = Microsoft::WRL::AsWeak<UndockedSearchAppExperienceManager>(this, v2);
    if ( v3 < 0 )
      winrt::throw_hresult((unsigned int)v3);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(v7, &v9);
    v8 = this;
    v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_d1ff7bb2acfe3360b50ca45b6d833a46___(
           v5,
           v4,
           *((unsigned int *)this + 40),
           v7);
    Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(v7);
    if ( v6 < 0 )
      winrt::throw_hresult((unsigned int)v6);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
  }
}
