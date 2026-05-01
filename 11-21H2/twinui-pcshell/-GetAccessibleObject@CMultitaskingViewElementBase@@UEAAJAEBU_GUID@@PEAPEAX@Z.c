/*
 * XREFs of ?GetAccessibleObject@CMultitaskingViewElementBase@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804B9890
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@V?$CWeakReference@VCMultitaskingViewElementBase@@@WeakReference@@V12@AEAPEAVCMultitaskingViewElementBase@@@Details@WRL@Microsoft@@YAJPEAPEAV?$CWeakReference@VCMultitaskingViewElementBase@@@WeakReference@@AEAPEAVCMultitaskingViewElementBase@@@Z @ 0x1804B8F1C (--$MakeAndInitialize@V-$CWeakReference@VCMultitaskingViewElementBase@@@WeakReference@@V12@AEAPEA.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMultitaskingViewElementBase::GetAccessibleObject(
        CMultitaskingViewElementBase *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 *v6; // r15
  __int64 (__fastcall ***v7)(_QWORD, const struct _GUID *, void **); // rcx
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rdx
  __int64 (__fastcall *v11)(CMultitaskingViewElementBase *, CMultitaskingViewElementBase *, GUID *, __int64 *); // rdi
  CMultitaskingViewElementBase *v12; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  CMultitaskingViewElementBase *v15; // [rsp+60h] [rbp+8h] BYREF

  *a3 = 0LL;
  v6 = (__int64 *)((char *)this + 192);
  v7 = (__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **))*((_QWORD *)this + 24);
  if ( !v7 )
  {
    if ( !*((_QWORD *)this + 23) )
    {
      v15 = this;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 23);
      v8 = Microsoft::WRL::Details::MakeAndInitialize<WeakReference::CWeakReference<CMultitaskingViewElementBase>,WeakReference::CWeakReference<CMultitaskingViewElementBase>,CMultitaskingViewElementBase * &>(
             (_QWORD *)this + 23,
             &v15);
      v9 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x31,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\CustomWeakReference.h",
          (const char *)(unsigned int)v8);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x38,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\CustomWeakReference.h",
          (const char *)(unsigned int)v9);
      }
      if ( v9 < 0 )
      {
        v10 = 651LL;
LABEL_12:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
          (const char *)(unsigned int)v9);
        return (unsigned int)v9;
      }
    }
    v11 = *(__int64 (__fastcall **)(CMultitaskingViewElementBase *, CMultitaskingViewElementBase *, GUID *, __int64 *))(*(_QWORD *)this + 584LL);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v6);
    v15 = (CMultitaskingViewElementBase *)*((_QWORD *)this + 23);
    v12 = v15;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
    v9 = v11(this, v12, &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c, v6);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v15);
    if ( v9 < 0 )
    {
      v10 = 653LL;
      goto LABEL_12;
    }
    v7 = (__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **))*v6;
  }
  v9 = (**v7)(v7, a2, a3);
  if ( v9 < 0 )
  {
    v10 = 656LL;
    goto LABEL_12;
  }
  return (unsigned int)v9;
}
