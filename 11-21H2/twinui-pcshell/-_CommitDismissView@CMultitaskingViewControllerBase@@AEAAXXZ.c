/*
 * XREFs of ?_CommitDismissView@CMultitaskingViewControllerBase@@AEAAXXZ @ 0x1804BCF44
 * Callers:
 *     ??1BatchDismissView@CMultitaskingViewControllerBase@@QEAA@XZ @ 0x1804BC088 (--1BatchDismissView@CMultitaskingViewControllerBase@@QEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CMultitaskingViewControllerBase::_CommitDismissView(CMultitaskingViewControllerBase *this)
{
  char v2; // bl
  __int64 v3; // r14
  __int64 v4; // rsi
  __int64 (__fastcall *v5)(__int64, GUID *, __int64 *); // rbx
  int v6; // eax
  __int64 v7; // rdi
  int (__fastcall *v8)(__int64, GUID *, __int64 *); // rbx
  __int64 v9; // [rsp+28h] [rbp-18h] BYREF
  __int16 v10; // [rsp+30h] [rbp-10h]
  __int64 v11; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v13; // [rsp+60h] [rbp+20h] BYREF
  __int64 v14; // [rsp+68h] [rbp+28h] BYREF

  if ( *((_BYTE *)this + 112) )
  {
    v2 = *((_BYTE *)this + 113);
    v3 = *((_QWORD *)this + 15);
    v9 = v3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
    v10 = 0;
    *((_WORD *)this + 56) = 0;
    v11 = 0LL;
    v13 = *((_QWORD *)this + 15);
    *((_QWORD *)this + 15) = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
    v14 = 0LL;
    if ( v2 )
    {
      v4 = *((_QWORD *)this + 5);
      if ( v4 )
      {
        v5 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v4 + 24LL);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
        v6 = v5(v4, &GUID_334ba746_d848_47e3_beb7_05c9254f34fc, &v14);
        if ( v6 >= 0 )
        {
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 24LL))(v14, v3);
LABEL_10:
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
          return;
        }
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x147,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\baseviewcontroller.cpp",
          (const char *)(unsigned int)v6);
      }
    }
    v13 = 0LL;
    v7 = *((_QWORD *)this + 5);
    if ( v7 )
    {
      v8 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v7 + 24LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
      if ( v8(v7, &GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9, &v13) >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 40LL))(v13);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
    goto LABEL_10;
  }
}
