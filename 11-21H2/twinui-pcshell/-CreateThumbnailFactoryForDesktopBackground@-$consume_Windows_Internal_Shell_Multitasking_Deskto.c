/*
 * XREFs of ?CreateThumbnailFactoryForDesktopBackground@?$consume_Windows_Internal_Shell_Multitasking_Desktop_IDesktopThumbnailDevice@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUDesktopBackgroundThumbnailFactory@Desktop@Multitasking@Shell@Internal@Windows@3@AEBURect@Foundation@93@@Z @ 0x180015E18
 * Callers:
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x1800135A8 (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_Shell_Multitasking_Desktop_IDesktopThumbnailDevice<winrt::Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice>::CreateThumbnailFactoryForDesktopBackground(
        __int64 **a1,
        _QWORD *a2,
        __int128 *a3)
{
  __int64 *v3; // rcx
  __int128 v5; // xmm0
  __int64 v6; // rax
  int v7; // eax
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v5 = *a3;
  v10 = 0LL;
  v6 = *v3;
  v9 = v5;
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64 *))(v6 + 56))(v3, &v9, &v10);
  if ( v7 < 0 )
    winrt::throw_hresult((unsigned int)v7);
  *a2 = v10;
  return a2;
}
