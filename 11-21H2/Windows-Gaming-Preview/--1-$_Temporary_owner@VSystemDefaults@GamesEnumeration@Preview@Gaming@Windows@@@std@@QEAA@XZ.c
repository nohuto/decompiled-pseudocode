/*
 * XREFs of ??1?$_Temporary_owner@VSystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@QEAA@XZ @ 0x180043BE4
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::PopulateAsync_::_1_::dtor$5 @ 0x18004D162 (_Windows--Gaming--Preview--GamesEnumeration--SystemDefaults--PopulateAsync_--_1_--dtor$5.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Temporary_owner<Windows::Gaming::Preview::GamesEnumeration::SystemDefaults>::~_Temporary_owner<Windows::Gaming::Preview::GamesEnumeration::SystemDefaults>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
