/*
 * XREFs of ?SetCallback@CSnapAssistViewHost@@UEAAJPEAUISnapAssistCallback@@@Z @ 0x1804A4970
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UISnapAssistViewController@@@?$ComPtr@UIMultitaskingViewController@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISnapAssistViewController@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804A32B4 (--$As@UISnapAssistViewController@@@-$ComPtr@UIMultitaskingViewController@@@WRL@Microsoft@@QEBAJV.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSnapAssistViewHost::SetCallback(CSnapAssistViewHost *this, struct ISnapAssistCallback *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v3 = Microsoft::WRL::ComPtr<IMultitaskingViewController>::As<ISnapAssistViewController>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 22,
         &v7);
  v4 = v3;
  if ( v3 >= 0 )
  {
    (*(void (__fastcall **)(__int64, struct ISnapAssistCallback *))(*(_QWORD *)v7 + 32LL))(v7, a2);
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x114,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewhost.cpp",
      (const char *)(unsigned int)v3);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v7);
  return v4;
}
