/*
 * XREFs of ?SetIterable@CopyToViewValueSetBase@@QEAAXPEAUIUnknown@@@Z @ 0x1804E8AC4
 * Callers:
 *     ??0DelayedTileActivationCallSite@@QEAA@PEAUIUnknown@@PEAUHWND__@@W4IAM_DESKTOP_SWITCH_OPTION@@V?$optional@_N@std@@V?$optional@H@5@_N@Z @ 0x1804E6ED8 (--0DelayedTileActivationCallSite@@QEAA@PEAUIUnknown@@PEAUHWND__@@W4IAM_DESKTOP_SWITCH_OPTION@@V-.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802DB634 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CopyToViewValueSetBase::SetIterable(CopyToViewValueSetBase *this, struct IUnknown *a2)
{
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rsi
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  int v6; // eax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    QueryInterface = a2->lpVtbl->QueryInterface;
    v4 = (_QWORD *)((char *)this + 72);
    v5 = *((_QWORD *)this + 9);
    *v4 = 0LL;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    v6 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, _QWORD *))QueryInterface)(
           a2,
           &GUID_fe2f3d47_5d47_5499_8374_430c7cda0204,
           v4);
    if ( v6 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        94LL,
        (__int64)"internal\\shellcommoncomposable\\inc\\tabbedprojecthelpers.h",
        (const char *)(unsigned int)v6,
        v7);
  }
}
