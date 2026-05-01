/*
 * XREFs of ?GetItemForObject@CTempAppVisualArray@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1805372E0
 * Callers:
 *     ?AddItem@CTempAppVisualArray@@UEAAJPEAUITemporaryAppVisual@@@Z @ 0x180536C50 (-AddItem@CTempAppVisualArray@@UEAAJPEAUITemporaryAppVisual@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$FindEx@VCTempAppVisualFinderByView@@@?$CTSimpleFixedArray@V?$ComPtr@UITemporaryAppVisual@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITemporaryAppVisual@@@WRL@Microsoft@@@@@@QEBAJAEBVCTempAppVisualFinderByView@@AEBV?$ComPtr@UITemporaryAppVisual@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180536A40 (--$FindEx@VCTempAppVisualFinderByView@@@-$CTSimpleFixedArray@V-$ComPtr@UITemporaryAppVisual@@@WR.c)
 */

__int64 __fastcall CTempAppVisualArray::GetItemForObject(
        CTempAppVisualArray *this,
        struct IUnknown *a2,
        const struct _GUID *a3,
        void **a4)
{
  struct IUnknownVtbl *lpVtbl; // rax
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  __int64 *v10; // rbx
  int v11; // eax
  int v12; // ebx
  __int64 v13; // rdx
  __int64 (__fastcall ***v14)(_QWORD, const struct _GUID *, void **); // rcx
  __int64 v16; // [rsp+30h] [rbp-10h] BYREF
  __int64 v17; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v19; // [rsp+78h] [rbp+38h] BYREF
  __int64 v20; // [rsp+88h] [rbp+48h] BYREF

  *a4 = 0LL;
  lpVtbl = a2->lpVtbl;
  v20 = 0LL;
  QueryInterface = lpVtbl->QueryInterface;
  v10 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v20, &v19);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v10);
  v11 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))QueryInterface)(
          a2,
          &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
          v10);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 177LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\windowarrangementvisuals\\lib\\tempappvisual.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_8;
  }
  v16 = 0LL;
  v19 = v20;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v19);
  v12 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<ITemporaryAppVisual>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITemporaryAppVisual>>>::FindEx<CTempAppVisualFinderByView>(
          (_QWORD *)this + 2,
          (__int64)&v19,
          &v16,
          &v17);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v19);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v16);
  if ( v12 >= 0 )
  {
    v14 = *(__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))(*((_QWORD *)this + 2) + 8 * v17);
    v11 = (**v14)(v14, a3, a4);
    v12 = v11;
    if ( v11 >= 0 )
    {
      v12 = 0;
      goto LABEL_8;
    }
    v13 = 181LL;
    goto LABEL_6;
  }
LABEL_8:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v20);
  return (unsigned int)v12;
}
