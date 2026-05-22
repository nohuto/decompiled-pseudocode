/*
 * XREFs of ?_Delete_this@?$_Ref_count@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@EEAAXXZ @ 0x18008E800
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Ref_count<Windows::UI::Composition::CompositionCapabilitiesEvent>::_Delete_this(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 16LL))(a1, 1LL);
  return result;
}
