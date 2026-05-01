/*
 * XREFs of wil::details::functor_wrapper_void__lambda_dbebf8a6907a4eaadf6dd88500e2eb04__&_::Run @ 0x1800301A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall wil::details::functor_wrapper_void__lambda_dbebf8a6907a4eaadf6dd88500e2eb04____::Run(__int64 a1)
{
  int v1; // eax

  v1 = (*(__int64 (__fastcall **)(_QWORD, bool))(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 392LL) + 80LL))(
         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 392LL),
         **(_BYTE **)(a1 + 8) == 0);
  if ( v1 < 0 )
    winrt::throw_hresult((unsigned int)v1);
  return 0LL;
}
