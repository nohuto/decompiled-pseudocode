/*
 * XREFs of CTSimpleFixedArray_ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification_CSimpleArrayStandardCompareHelper_ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification___::FindEx_CLambdaCompareHelper__lambda_ca95877a0acb9673608c45b7c9bea6a2_____ @ 0x1801922AC
 * Callers:
 *     ?OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800C7B30 (-OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@.c)
 * Callees:
 *     ??0ApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAA@AEBU01@@Z @ 0x18006D468 (--0ApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAA@AEBU01@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CTSimpleFixedArray_ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification_CSimpleArrayStandardCompareHelper_ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification___::FindEx_CLambdaCompareHelper__lambda_ca95877a0acb9673608c45b7c9bea6a2_____(
        _QWORD *a1,
        struct IUnknown ***a2,
        const struct ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *a3,
        unsigned __int64 *a4)
{
  const struct ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *v5; // rax
  unsigned __int64 v8; // rbx
  __int64 i; // rdi
  __int64 *v11; // r13
  ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *v12; // rax
  __int64 *v13; // r15
  bool v14; // bp
  _BYTE v15[32]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v16[88]; // [rsp+40h] [rbp-58h] BYREF

  v5 = a3;
  *a4 = 0LL;
  v8 = 0LL;
  if ( !a1[1] )
    return 2147647531LL;
  for ( i = 0LL; ; i += 32LL )
  {
    v11 = (__int64 *)ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification::ApplicationViewManagerNotification(
                       (ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)v15,
                       v5);
    v12 = ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification::ApplicationViewManagerNotification(
            (ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)v16,
            (const struct ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)(i + *a1));
    v13 = (__int64 *)v12;
    v14 = *((_DWORD *)v12 + 2) == 1 && (unsigned int)SHIsSameObject(*(struct IUnknown **)v12, **a2);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v13 + 2);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v13);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v11 + 2);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v11);
    if ( v14 )
      break;
    ++v8;
    v5 = a3;
    if ( v8 >= a1[1] )
      return 2147647531LL;
  }
  *a4 = v8;
  return 0LL;
}
