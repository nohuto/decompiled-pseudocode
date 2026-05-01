/*
 * XREFs of wil::details::ScopeExitFn__lambda_fe85f9a8ca3f44c8f5225652b74ad995___::_ScopeExitFn__lambda_fe85f9a8ca3f44c8f5225652b74ad995___ @ 0x1805FE3F4
 * Callers:
 *     _TaskViewHost::ViewLoaded_::_1_::dtor$1 @ 0x180213BEA (_TaskViewHost--ViewLoaded_--_1_--dtor$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_fe85f9a8ca3f44c8f5225652b74ad995___::_ScopeExitFn__lambda_fe85f9a8ca3f44c8f5225652b74ad995___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a1 + 40LL))(*(_QWORD *)a1);
  }
  return result;
}
