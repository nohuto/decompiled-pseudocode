/*
 * XREFs of ?_CreateTempAppVisuals@CDragVisual@@AEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x1805EEF98
 * Callers:
 *     ?GetSimpleTempAppVisualArray@CDragVisual@@UEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x1805ECDF0 (-GetSimpleTempAppVisualArray@CDragVisual@@UEAAJPEAPEAUITemporaryAppVisualArray@@@Z.c)
 *     ?PrepareForExitAnimation@CDragVisual@@UEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x1805ED9C0 (-PrepareForExitAnimation@CDragVisual@@UEAAJPEAPEAUITemporaryAppVisualArray@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ @ 0x18006E0D0 (-InternalAddRef@-$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetSingleViewFromLayout@AppLayoutHelpers@@YAJPEAUIAppLayout@@PEAPEAUIApplicationView@@@Z @ 0x1805ECF90 (-GetSingleViewFromLayout@AppLayoutHelpers@@YAJPEAUIAppLayout@@PEAPEAUIApplicationView@@@Z.c)
 *     ?MapRelativeRect@@YA?AUCRect@Geometry@@AEBU12@00@Z @ 0x1805ED4F0 (-MapRelativeRect@@YA-AUCRect@Geometry@@AEBU12@00@Z.c)
 *     ?CreateInstance@CTempAppVisualArray@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x1805F1EAC (-CreateInstance@CTempAppVisualArray@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CSimpleTempAppVisual_CreateAndAddToArray@@YAJPEAUITemporaryAppVisual@@PEAUITemporaryAppVisualArray@@@Z @ 0x1805F4FC8 (-CSimpleTempAppVisual_CreateAndAddToArray@@YAJPEAUITemporaryAppVisual@@PEAUITemporaryAppVisualAr.c)
 *     ?CSimpleTempAppVisual_CreateInstance@@YAJAEBUtagRECT@@0AEBW4TEMPORARY_APP_VISUAL_TYPE@@AEBQEAUHWND__@@2PEAUIApplicationView@@PEAPEAUITemporaryAppVisual@@@Z @ 0x1805F5080 (-CSimpleTempAppVisual_CreateInstance@@YAJAEBUtagRECT@@0AEBW4TEMPORARY_APP_VISUAL_TYPE@@AEBQEAUHW.c)
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
  __int64 *v15; // rdi
  struct IApplicationView **v16; // r8
  struct IApplicationView *v17; // rdi
  const struct tagRECT *v18; // rax
  int v20; // [rsp+40h] [rbp-19h] BYREF
  struct ITemporaryAppVisual *v21; // [rsp+48h] [rbp-11h] BYREF
  __int64 v22; // [rsp+50h] [rbp-9h] BYREF
  struct IApplicationView *v23; // [rsp+58h] [rbp-1h] BYREF
  struct ITemporaryAppVisualArray *v24; // [rsp+60h] [rbp+7h] BYREF
  struct tagPOINT Points[2]; // [rsp+68h] [rbp+Fh] BYREF
  int v26[4]; // [rsp+78h] [rbp+1Fh] BYREF

  *a2 = 0LL;
  v24 = 0LL;
  Instance = CTempAppVisualArray::CreateInstance((const struct _GUID *)this, (void **)&v24);
  v5 = v24;
  SingleViewFromLayout = Instance;
  if ( Instance < 0 )
    goto LABEL_23;
  v20 = 0;
  v7 = *((_DWORD *)this + 37);
  if ( !v7 )
  {
LABEL_10:
    v20 = 2;
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
        v20 = 8;
      }
      else
      {
        v20 = 6;
      }
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  v20 = 4;
LABEL_11:
  v11 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 13);
  if ( !v11 )
    goto LABEL_12;
  v22 = 0LL;
  v12 = **v11;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v22);
  v13 = v12(v11, &GUID_158961e1_3ff3_405f_a4f9_b7777b784533, &v22);
  v14 = (HWND)*((_QWORD *)this + 19);
  LODWORD(v12) = v13;
  *(_OWORD *)&Points[0].x = *((_OWORD *)this + 15);
  MapWindowPoints(v14, 0LL, Points, 2u);
  if ( (int)v12 < 0 )
  {
    v23 = 0LL;
    v15 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v23, &v21);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v15);
    SingleViewFromLayout = AppLayoutHelpers::GetSingleViewFromLayout(
                             *((AppLayoutHelpers **)this + 11),
                             (struct IAppLayout *)v15,
                             v16);
    if ( SingleViewFromLayout >= 0 )
    {
      v21 = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v21);
      v17 = v23;
      v18 = (const struct tagRECT *)MapRelativeRect(v26, (int *)this + 56, (_OWORD *)this + 14, (int *)Points);
      SingleViewFromLayout = CSimpleTempAppVisual_CreateInstance(
                               v18,
                               (const struct tagRECT *)Points,
                               (const enum TEMPORARY_APP_VISUAL_TYPE *)&v20,
                               (HWND *)this + 20,
                               (HWND *)this + 19,
                               v17,
                               &v21);
      if ( SingleViewFromLayout >= 0 )
        SingleViewFromLayout = (*(__int64 (__fastcall **)(struct ITemporaryAppVisualArray *, struct ITemporaryAppVisual *))(*(_QWORD *)v5 + 40LL))(
                                 v5,
                                 v21);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v21);
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v23);
  }
  else
  {
    SingleViewFromLayout = (*(__int64 (__fastcall **)(__int64, int *, char *, struct tagPOINT *, struct ITemporaryAppVisualArray *))(*(_QWORD *)v22 + 24LL))(
                             v22,
                             &v20,
                             (char *)this + 152,
                             Points,
                             v5);
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v22);
  if ( SingleViewFromLayout >= 0 )
  {
    SingleViewFromLayout = CSimpleTempAppVisual_CreateAndAddToArray(
                             (struct ITemporaryAppVisual *)(((unsigned __int64)this + 32) & -(__int64)(this != 0LL)),
                             v5);
    if ( SingleViewFromLayout >= 0 )
    {
      Microsoft::WRL::ComPtr<IGlobalInterfaceTable>::InternalAddRef((__int64 *)&v24);
      SingleViewFromLayout = 0;
      *a2 = v5;
    }
  }
LABEL_23:
  if ( v5 )
    (*(void (__fastcall **)(struct ITemporaryAppVisualArray *))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)SingleViewFromLayout;
}
