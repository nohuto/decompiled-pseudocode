/*
 * XREFs of ?UpdateViewport@CScrollViewer@@UEAAXXZ @ 0x1804D56E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIScrollButtonContainerHost@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIScrollButtonContainerHost@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804D4420 (--$As@UIScrollButtonContainerHost@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$.c)
 *     ??$SendUiaPropertyEvent@_N@ElementHelpers@@YAJPEAUIMultitaskingViewElement@@H_N1@Z @ 0x1804D4750 (--$SendUiaPropertyEvent@_N@ElementHelpers@@YAJPEAUIMultitaskingViewElement@@H_N1@Z.c)
 *     ?_UpdateViewport@CScrollViewer@@AEAAXXZ @ 0x1804D5DF8 (-_UpdateViewport@CScrollViewer@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CScrollViewer::UpdateViewport(CScrollViewer *this)
{
  CScrollViewer *v2; // r14
  char v3; // bl
  __int64 (__fastcall ****v4)(_QWORD, GUID *, __int64 *); // rax
  int v5; // eax
  char v6; // si
  char v7; // al
  __int64 v8; // rdx
  char v9; // bl
  char v10; // r8
  __int64 *v11; // rcx
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  v14 = 0LL;
  v2 = (CScrollViewer *)((char *)this - 208);
  v3 = 1;
  if ( !*(_QWORD *)(*(__int64 (__fastcall **)(char *, __int64 *))(*((_QWORD *)this - 26) + 24LL))(
                     (char *)this - 208,
                     &v16) )
    goto LABEL_4;
  v4 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(__int64 (__fastcall **)(CScrollViewer *, __int64 *))(*(_QWORD *)v2 + 24LL))(
                                                               v2,
                                                               &v15);
  v3 = 3;
  v5 = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IScrollButtonContainerHost>(v4, &v14);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xE9,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\scrollviewerelement.cpp",
      (const char *)(unsigned int)v5);
LABEL_4:
    v6 = 0;
    goto LABEL_5;
  }
  v6 = 1;
LABEL_5:
  if ( (v3 & 2) != 0 )
  {
    v3 &= ~2u;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
  }
  if ( (v3 & 1) != 0 )
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 32LL))(v14);
  v7 = (*(__int64 (__fastcall **)(CScrollViewer *))(*(_QWORD *)this + 64LL))(this);
  v9 = v7;
  v10 = *((_BYTE *)this + 52);
  if ( v7 != v10 )
  {
    ElementHelpers::SendUiaPropertyEvent<bool>((__int64)v2, v8, v10, v7);
    *((_BYTE *)this + 52) = v9;
    v11 = (__int64 *)*((_QWORD *)this + 5);
    v12 = *v11;
    LOBYTE(v12) = v9;
    (*(void (__fastcall **)(__int64 *, __int64))(*v11 + 64))(v11, v12);
  }
  CScrollViewer::_UpdateViewport(v2);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
}
