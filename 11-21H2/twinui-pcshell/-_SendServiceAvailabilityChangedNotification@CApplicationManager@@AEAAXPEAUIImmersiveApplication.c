/*
 * XREFs of ?_SendServiceAvailabilityChangedNotification@CApplicationManager@@AEAAXPEAUIImmersiveApplication@@IQEBU_GUID@@W4IMM_APP_SERVICE_NOTIFY_FLAGS@@@Z @ 0x1802EB978
 * Callers:
 *     _lambda_c784fe341da5436104ad3e4e13eefb9b_::operator() @ 0x1802E0D68 (_lambda_c784fe341da5436104ad3e4e13eefb9b_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18007CB00 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ??0SERVICE_AVAILABILITY_CHANGED_DATA@@QEAA@PEAUIImmersiveApplication@@PEAUIObjectArray@@IPEBU_GUID@@W4IMM_APP_SERVICE_NOTIFY_FLAGS@@@Z @ 0x1800EC840 (--0SERVICE_AVAILABILITY_CHANGED_DATA@@QEAA@PEAUIImmersiveApplication@@PEAUIObjectArray@@IPEBU_GU.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_f4d0df6276ef292ef95f7b637041a733___ @ 0x1802DD928 (Windows--Internal--ComTaskPool--QueueTask__lambda_f4d0df6276ef292ef95f7b637041a733___.c)
 *     ??0SERVICE_AVAILABILITY_CHANGED_DATA@@QEAA@$$QEAU0@@Z @ 0x1802DF380 (--0SERVICE_AVAILABILITY_CHANGED_DATA@@QEAA@$$QEAU0@@Z.c)
 *     ??1SERVICE_AVAILABILITY_CHANGED_DATA@@QEAA@XZ @ 0x1802E0400 (--1SERVICE_AVAILABILITY_CHANGED_DATA@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::_SendServiceAvailabilityChangedNotification(
        RTL_SRWLOCK *a1,
        __int64 a2,
        unsigned int a3,
        void *a4,
        int a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  _BYTE v12[40]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v13[5]; // [rsp+58h] [rbp-30h] BYREF
  struct IObjectArray *v14; // [rsp+90h] [rbp+8h] BYREF

  v14 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
  if ( (int)AgileRegistrationList::GetCallbackArray(a1 + 55, &v14) >= 0 )
  {
    SERVICE_AVAILABILITY_CHANGED_DATA::SERVICE_AVAILABILITY_CHANGED_DATA((__int64)v13, a2, (__int64)v14, a3, a4, a5);
    SERVICE_AVAILABILITY_CHANGED_DATA::SERVICE_AVAILABILITY_CHANGED_DATA((__int64)v12, v13);
    Windows::Internal::ComTaskPool::QueueTask__lambda_f4d0df6276ef292ef95f7b637041a733___(
      v10,
      v9,
      (unsigned int)CApplicationManagerUtility::g_pIAMGlobals[13].Ptr,
      (__int64)v12);
    SERVICE_AVAILABILITY_CHANGED_DATA::~SERVICE_AVAILABILITY_CHANGED_DATA((SERVICE_AVAILABILITY_CHANGED_DATA *)v12);
    SERVICE_AVAILABILITY_CHANGED_DATA::~SERVICE_AVAILABILITY_CHANGED_DATA((SERVICE_AVAILABILITY_CHANGED_DATA *)v13);
  }
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
}
