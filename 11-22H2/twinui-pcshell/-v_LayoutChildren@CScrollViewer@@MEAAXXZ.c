/*
 * XREFs of ?v_LayoutChildren@CScrollViewer@@MEAAXXZ @ 0x18058DB60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIMultitaskingViewElement@@@?$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x18056BF80 (--$As@UIMultitaskingViewElement@@@-$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?_UpdateViewport@CScrollViewer@@AEAAXXZ @ 0x18058D82C (-_UpdateViewport@CScrollViewer@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CScrollViewer::v_LayoutChildren(CScrollViewer *this)
{
  __int64 *v2; // r11
  __int64 v3; // rax
  int v4; // edx
  __int64 v5; // rax
  int v6; // r8d
  int v7; // edx
  __int64 *v8; // [rsp+30h] [rbp-20h] BYREF
  int v9; // [rsp+38h] [rbp-18h] BYREF
  int v10; // [rsp+3Ch] [rbp-14h]
  int v11; // [rsp+40h] [rbp-10h]
  int v12; // [rsp+44h] [rbp-Ch]

  v2 = (__int64 *)*((_QWORD *)this + 11);
  v3 = *v2;
  v4 = *((_DWORD *)this + 15);
  v9 = *((_DWORD *)this + 14);
  v10 = v4;
  v11 = v9 + 1;
  v12 = v4 + 1;
  (*(void (__fastcall **)(__int64 *, int *, _QWORD, _QWORD))(v3 + 24))(v2, &v9, 0LL, 0LL);
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IScrollViewer>::As<IMultitaskingViewElement>(
    (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 31,
    (__int64 *)&v8);
  v5 = *v8;
  v6 = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
  v7 = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
  v9 = 0;
  v10 = 0;
  v11 = v7;
  v12 = v6;
  (*(void (__fastcall **)(__int64 *, int *))(v5 + 104))(v8, &v9);
  CScrollViewer::_UpdateViewport(this);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
}
