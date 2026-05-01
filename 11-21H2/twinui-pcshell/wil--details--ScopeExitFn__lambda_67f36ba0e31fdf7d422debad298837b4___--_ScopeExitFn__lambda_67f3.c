/*
 * XREFs of wil::details::ScopeExitFn__lambda_67f36ba0e31fdf7d422debad298837b4___::_ScopeExitFn__lambda_67f36ba0e31fdf7d422debad298837b4___ @ 0x18030A2F0
 * Callers:
 *     _FrameFactory::CreateFrameWithWrapper_::_1_::dtor$1 @ 0x18030A512 (_FrameFactory--CreateFrameWithWrapper_--_1_--dtor$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::ScopeExitFn__lambda_67f36ba0e31fdf7d422debad298837b4___::_ScopeExitFn__lambda_67f36ba0e31fdf7d422debad298837b4___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[16] )
  {
    a1[16] = 0;
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 56LL) + 32LL))(
             *(_QWORD *)(*(_QWORD *)a1 + 56LL),
             **((_QWORD **)a1 + 1));
  }
  return result;
}
