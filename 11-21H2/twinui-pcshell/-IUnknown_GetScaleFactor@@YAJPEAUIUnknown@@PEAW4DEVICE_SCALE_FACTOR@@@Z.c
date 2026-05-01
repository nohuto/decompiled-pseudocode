/*
 * XREFs of ?IUnknown_GetScaleFactor@@YAJPEAUIUnknown@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x1805325DC
 * Callers:
 *     ?SetSite@CDragVisual@@UEAAJPEAUIUnknown@@@Z @ 0x180533C30 (-SetSite@CDragVisual@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?TargetMonitorChanged@CDragVisual@@UEAAXPEAUIImmersiveMonitor@@@Z @ 0x180533F60 (-TargetMonitorChanged@CDragVisual@@UEAAXPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall IUnknown_GetScaleFactor(IUnknown *punk, enum DEVICE_SCALE_FACTOR *a2)
{
  __int64 *v4; // rbx
  HRESULT Service; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0LL;
  *a2 = SCALE_100_PERCENT;
  v4 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v10, &v12);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v4);
  Service = IUnknown_QueryService(
              punk,
              &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
              &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
              (void **)v4);
  v6 = Service;
  if ( Service >= 0 )
  {
    Service = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 40LL))(v10, &v11);
    v6 = Service;
    if ( Service >= 0 )
    {
      Service = GetScaleFactorForMonitor(v11, a2);
      v6 = Service;
      if ( Service >= 0 )
      {
        v6 = 0;
        goto LABEL_9;
      }
      v7 = 46LL;
    }
    else
    {
      v7 = 45LL;
    }
  }
  else
  {
    v7 = 43LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\windowarrangementvisuals\\lib\\dragvisual.cpp",
    (const char *)(unsigned int)Service);
LABEL_9:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  return v6;
}
