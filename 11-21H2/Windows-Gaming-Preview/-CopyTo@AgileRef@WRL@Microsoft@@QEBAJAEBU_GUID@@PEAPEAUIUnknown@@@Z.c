/*
 * XREFs of ?CopyTo@AgileRef@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180029410
 * Callers:
 *     ?Query@CFTMCrossProcClientImpl@@UEAAJPEAUIUnknown@@W4tagRPCOPT_PROPERTIES@@PEA_K@Z @ 0x180049E10 (-Query@CFTMCrossProcClientImpl@@UEAAJPEAUIUnknown@@W4tagRPCOPT_PROPERTIES@@PEA_K@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::AgileRef::CopyTo(
        Microsoft::WRL::AgileRef *this,
        const struct _GUID *a2,
        struct IUnknown **a3)
{
  __int64 result; // rax
  __int64 v4; // rcx

  result = 0LL;
  *a3 = 0LL;
  v4 = *(_QWORD *)this;
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64, const struct _GUID *))(*(_QWORD *)v4 + 24LL))(v4, a2);
  return result;
}
