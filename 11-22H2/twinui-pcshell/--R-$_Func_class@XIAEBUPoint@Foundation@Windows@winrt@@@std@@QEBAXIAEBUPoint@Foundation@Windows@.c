/*
 * XREFs of ??R?$_Func_class@XIAEBUPoint@Foundation@Windows@winrt@@@std@@QEBAXIAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x180656808
 * Callers:
 *     TouchEdgeGripperHost::NotifyGripperPressedAsync$_ResumeCoro$1 @ 0x18021FD70 (TouchEdgeGripperHost--NotifyGripperPressedAsync$_ResumeCoro$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Func_class<void,unsigned int,winrt::Windows::Foundation::Point const &>::operator()(
        __int64 a1,
        int a2)
{
  __int64 v2; // rcx
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v2 = *(_QWORD *)(a1 + 56);
  if ( !v2 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  return (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v2 + 16LL))(v2, &v4);
}
