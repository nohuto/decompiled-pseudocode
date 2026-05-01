/*
 * XREFs of ?PromoteVisualProxyWindow@EmulatedFullScreenManager@@UEAAJPEAUHWND__@@@Z @ 0x18061A420
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall EmulatedFullScreenManager::PromoteVisualProxyWindow(EmulatedFullScreenManager *this, HWND a2)
{
  if ( GetPropW(a2, L"__D3DVisualProxyProp__") )
    return (*(__int64 (__fastcall **)(_QWORD, HWND, _QWORD, __int64))(**((_QWORD **)this + 6) + 32LL))(
             *((_QWORD *)this + 6),
             a2,
             0LL,
             8LL);
  else
    return 2147942487LL;
}
