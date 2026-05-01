/*
 * XREFs of ?_CreateTempAppVisuals@CDragVisual@@AEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x180534218
 * Callers:
 *     ?GetSimpleTempAppVisualArray@CDragVisual@@UEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x180532090 (-GetSimpleTempAppVisualArray@CDragVisual@@UEAAJPEAPEAUITemporaryAppVisualArray@@@Z.c)
 *     ?PrepareForExitAnimation@CDragVisual@@UEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x180532C60 (-PrepareForExitAnimation@CDragVisual@@UEAAJPEAPEAUITemporaryAppVisualArray@@@Z.c)
 * Callees:
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18003FC5C (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetSingleViewFromLayout@AppLayoutHelpers@@YAJPEAUIAppLayout@@PEAPEAUIApplicationView@@@Z @ 0x180532230 (-GetSingleViewFromLayout@AppLayoutHelpers@@YAJPEAUIAppLayout@@PEAPEAUIApplicationView@@@Z.c)
 *     ?MapRelativeRect@@YA?AUCRect@Geometry@@AEBU12@00@Z @ 0x180532790 (-MapRelativeRect@@YA-AUCRect@Geometry@@AEBU12@00@Z.c)
 *     ?CreateInstance@CTempAppVisualArray@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x1805370FC (-CreateInstance@CTempAppVisualArray@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CSimpleTempAppVisual_CreateAndAddToArray@@YAJPEAUITemporaryAppVisual@@PEAUITemporaryAppVisualArray@@@Z @ 0x18053A228 (-CSimpleTempAppVisual_CreateAndAddToArray@@YAJPEAUITemporaryAppVisual@@PEAUITemporaryAppVisualAr.c)
 *     ?CSimpleTempAppVisual_CreateInstance@@YAJAEBUtagRECT@@0AEBW4TEMPORARY_APP_VISUAL_TYPE@@AEBQEAUHWND__@@2PEAUIApplicationView@@PEAPEAUITemporaryAppVisual@@@Z @ 0x18053A2E0 (-CSimpleTempAppVisual_CreateInstance@@YAJAEBUtagRECT@@0AEBW4TEMPORARY_APP_VISUAL_TYPE@@AEBQEAUHW.c)
 */

__int64 __fastcall CDragVisual::_CreateTempAppVisuals(CDragVisual *this, struct ITemporaryAppVisualArray **a2)
{
  int Instance; // eax
  struct ITemporaryAppVisualArray *v5; // rbx
  int SingleViewFromLayout; // edi
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // r14
  __int64 (__fastcall *v12)(_QWORD, GUID *, __int64 *); // rdi
  int v13; // eax
  HWND v14; // rcx
  __int64 **v15; // rax
  __int64 *AddressOf; // rax
  struct IApplicationView **v17; // r8
  struct IApplicationView *v18; // rdi
  const struct tagRECT *v19; // rax
  int v21; // [rsp+40h] [rbp-19h] BYREF
  struct ITemporaryAppVisual *v22; // [rsp+48h] [rbp-11h] BYREF
  __int64 v23; // [rsp+50h] [rbp-9h] BYREF
  struct IApplicationView *v24; // [rsp+58h] [rbp-1h] BYREF
  struct ITemporaryAppVisualArray *v25; // [rsp+60h] [rbp+7h] BYREF
  struct tagPOINT Points[2]; // [rsp+68h] [rbp+Fh] BYREF
  int v27[4]; // [rsp+78h] [rbp+1Fh] BYREF

  *a2 = 0LL;
  v25 = 0LL;
  Instance = CTempAppVisualArray::CreateInstance((const struct _GUID *)this, (void **)&v25);
  v5 = v25;
  SingleViewFromLayout = Instance;
  if ( Instance < 0 )
    goto LABEL_23;
  v7 = *((_DWORD *)this + 37);
  if ( !v7 )
  {
LABEL_10:
    v21 = 2;
    goto LABEL_11;
  }
  v8 = v7 - 2;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 != 2 )
        {
LABEL_12:
          SingleViewFromLayout = -2147467259;
          goto LABEL_23;
        }
        v21 = 8;
      }
      else
      {
        v21 = 6;
      }
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  v21 = 4;
LABEL_11:
  v11 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 13);
  if ( !v11 )
    goto LABEL_12;
  v23 = 0LL;
  v12 = **v11;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v23);
  v13 = v12(v11, &GUID_158961e1_3ff3_405f_a4f9_b7777b784533, &v23);
  v14 = (HWND)*((_QWORD *)this + 19);
  LODWORD(v12) = v13;
  *(_OWORD *)&Points[0].x = *((_OWORD *)this + 15);
  MapWindowPoints(v14, 0LL, Points, 2u);
  if ( (int)v12 < 0 )
  {
    v24 = 0LL;
    v15 = (__int64 **)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v24, &v22);
    AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(*v15);
    SingleViewFromLayout = AppLayoutHelpers::GetSingleViewFromLayout(
                             *((AppLayoutHelpers **)this + 11),
                             (struct IAppLayout *)AddressOf,
                             v17);
    if ( SingleViewFromLayout >= 0 )
    {
      v22 = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v22);
      v18 = v24;
      v19 = (const struct tagRECT *)MapRelativeRect(v27, (int *)this + 56, (_OWORD *)this + 14, (int *)Points);
      SingleViewFromLayout = CSimpleTempAppVisual_CreateInstance(
                               v19,
                               (const struct tagRECT *)Points,
                               (const enum TEMPORARY_APP_VISUAL_TYPE *)&v21,
                               (HWND *)this + 20,
                               (HWND *)this + 19,
                               v18,
                               &v22);
      if ( SingleViewFromLayout >= 0 )
        SingleViewFromLayout = (*(__int64 (__fastcall **)(struct ITemporaryAppVisualArray *, struct ITemporaryAppVisual *))(*(_QWORD *)v5 + 40LL))(
                                 v5,
                                 v22);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v22);
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v24);
  }
  else
  {
    SingleViewFromLayout = (*(__int64 (__fastcall **)(__int64, int *, char *, struct tagPOINT *, struct ITemporaryAppVisualArray *))(*(_QWORD *)v23 + 24LL))(
                             v23,
                             &v21,
                             (char *)this + 152,
                             Points,
                             v5);
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v23);
  if ( SingleViewFromLayout >= 0 )
  {
    SingleViewFromLayout = CSimpleTempAppVisual_CreateAndAddToArray(
                             (struct ITemporaryAppVisual *)(((unsigned __int64)this + 32) & -(__int64)(this != 0LL)),
                             v5);
    if ( SingleViewFromLayout >= 0 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v25);
      SingleViewFromLayout = 0;
      *a2 = v5;
    }
  }
LABEL_23:
  if ( v5 )
    (*(void (__fastcall **)(struct ITemporaryAppVisualArray *))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)SingleViewFromLayout;
}
