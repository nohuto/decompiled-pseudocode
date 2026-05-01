/*
 * XREFs of ??0ApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAA@AEBU01@@Z @ 0x18006D468
 * Callers:
 *     CTSimpleFixedArray_ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification_CSimpleArrayStandardCompareHelper_ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification___::FindEx_CLambdaCompareHelper__lambda_ca95877a0acb9673608c45b7c9bea6a2_____ @ 0x1801922AC (CTSimpleFixedArray_ApplicationViewManagerVisibilityDebouncer--ApplicationViewManagerNotification.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *__fastcall ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification::ApplicationViewManagerNotification(
        ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *this,
        const struct ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *a2)
{
  *(_QWORD *)this = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *((_QWORD *)this + 2) = *((_QWORD *)a2 + 2);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 2);
  *((_QWORD *)this + 3) = *((_QWORD *)a2 + 3);
  return this;
}
