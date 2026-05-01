/*
 * XREFs of ?DestroyTabProxyWindow@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@6@@Z @ 0x1800358A4
 * Callers:
 *     ?RemoveTabProxyWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z @ 0x180034818 (-RemoveTabProxyWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_d01e05628e7c62b77a3bad017b515331___ @ 0x180035918 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_d01e05628e7c62b77a3bad017b515331.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?handle_wait@wil@@YA_NPEAXKH@Z @ 0x180177DC8 (-handle_wait@wil@@YA_NPEAXKH@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory::DestroyTabProxyWindow(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        int a4)
{
  __int64 v6; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v8; // rcx
  int v9; // eax
  int v10[2]; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v11; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  _QWORD *v13; // [rsp+40h] [rbp+8h] BYREF

  v6 = *(_QWORD *)(a1 + 80);
  if ( v6 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 56LL))(v6, *a2);
  wil::handle_wait(*(wil **)(a1 + 32), (void *)0xFFFFFFFFLL, a3, a4);
  v13 = a2;
  *(_QWORD *)v10 = *(_QWORD *)(a1 + 48);
  v11 = &v13;
  CurrentThreadId = GetCurrentThreadId();
  v9 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_d01e05628e7c62b77a3bad017b515331___(
         v8,
         CurrentThreadId,
         v10);
  if ( v9 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5F,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\CreationThreadDispatcher.h",
      (const char *)(unsigned int)v9,
      v10[0]);
}
