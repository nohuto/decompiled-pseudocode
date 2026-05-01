/*
 * XREFs of ??1?$_Temporary_owner@VKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@QEAA@XZ @ 0x180043034
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::KglDefaults::LoadKglAsync_::_1_::dtor$5 @ 0x18004D0E4 (_Windows--Gaming--Preview--GamesEnumeration--KglDefaults--LoadKglAsync_--_1_--dtor$5.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Temporary_owner<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>::~_Temporary_owner<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
