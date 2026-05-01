/*
 * XREFs of ??1last_error_context@wil@@QEAA@XZ @ 0x180003790
 * Callers:
 *     _wil::details_abi::heap_buffer::reserve_::_1_::dtor$0 @ 0x18004D224 (_wil--details_abi--heap_buffer--reserve_--_1_--dtor$0.c)
 *     _wil::details::StagingFailureInformation::StagingFailureInformation_::_1_::dtor$0 @ 0x18004D680 (_wil--details--StagingFailureInformation--StagingFailureInformation_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::last_error_context::~last_error_context(wil::last_error_context *this)
{
  if ( !*(_BYTE *)this )
    SetLastError(*((_DWORD *)this + 1));
}
