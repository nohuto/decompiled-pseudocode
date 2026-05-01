/*
 * XREFs of ?IsEqualByHostId@CWinRTApplicationView@@UEAAJ_KPEAH@Z @ 0x180055A00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIImmersiveApplication2@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication2@@@WRL@Microsoft@@@Details@12@@Z @ 0x180055BA0 (--$As@UIImmersiveApplication2@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::IsEqualByHostId(CWinRTApplicationView *this, __int64 a2, int *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0LL;
  v5 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication2>((char *)this + 200, &v11);
  v6 = v5;
  if ( v5 < 0 )
  {
    v8 = 673LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v5,
      v9);
    goto LABEL_3;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v11 + 32LL))(v11, a2, a3);
  v6 = v5;
  if ( v5 < 0 )
  {
    v8 = 674LL;
    goto LABEL_6;
  }
LABEL_3:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
  return v6;
}
