/*
 * XREFs of ?SetSwitchItems@CMultitaskingViewFrame@@UEAAJPEAUIObservableObjectArray@@@Z @ 0x18056EE00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIObservableObjectArray@@@WRL@Microsoft@@QEAAAEAV012@PEAUIObservableObjectArray@@@Z @ 0x1805671A4 (--4-$ComPtr@UIObservableObjectArray@@@WRL@Microsoft@@QEAAAEAV012@PEAUIObservableObjectArray@@@Z.c)
 */

__int64 __fastcall CMultitaskingViewFrame::SetSwitchItems(
        CMultitaskingViewFrame *this,
        struct IObservableObjectArray *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Microsoft::WRL::ComPtr<IObservableObjectArray>::operator=((__int64 *)this + 305, (__int64)a2);
  Microsoft::WRL::ComPtr<IObservableObjectArray>::operator=((__int64 *)this + 304, (__int64)a2);
  v4 = *((_QWORD *)this + 317);
  if ( !v4 )
    return 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, struct IObservableObjectArray *))(*(_QWORD *)v4 + 32LL))(v4, a2);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D0,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
