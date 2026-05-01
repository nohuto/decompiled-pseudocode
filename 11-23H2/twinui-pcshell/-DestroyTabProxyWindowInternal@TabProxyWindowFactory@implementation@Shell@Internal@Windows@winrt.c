/*
 * XREFs of ?DestroyTabProxyWindowInternal@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUITabProxyWindowInternal@345@@Z @ 0x180639060
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?handle_wait@wil@@YA_NPEAXKH@Z @ 0x180177DC8 (-handle_wait@wil@@YA_NPEAXKH@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_2b80047eb1d5b1713ddd1132d615e18d___ @ 0x180638D24 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_2b80047eb1d5b1713ddd1132d615e18d.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory::DestroyTabProxyWindowInternal(
        wil **this,
        struct Windows::Internal::Shell::ITabProxyWindowInternal *a2)
{
  wil *v3; // rax
  DWORD CurrentThreadId; // eax
  unsigned int v5; // ecx
  int v6; // eax
  unsigned int v7; // ebx
  int v9[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Windows::Internal::Shell::ITabProxyWindowInternal **v11; // [rsp+40h] [rbp+8h] BYREF
  struct Windows::Internal::Shell::ITabProxyWindowInternal *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  wil::handle_wait(this[4], (void *)0xFFFFFFFFLL);
  v3 = this[6];
  v11 = &v12;
  *(_QWORD *)v9 = v3;
  *(_QWORD *)&v9[2] = &v11;
  CurrentThreadId = GetCurrentThreadId();
  v6 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_2b80047eb1d5b1713ddd1132d615e18d___(
         v5,
         CurrentThreadId,
         v9);
  v7 = v6;
  if ( v6 >= 0 )
    return 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5F,
      (int)"onecoreuap\\internal\\shell\\inc\\CreationThreadDispatcher.h",
      (const char *)(unsigned int)v6);
  return v7;
}
