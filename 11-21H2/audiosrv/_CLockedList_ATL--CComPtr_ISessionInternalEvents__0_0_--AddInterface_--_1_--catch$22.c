/*
 * XREFs of _CLockedList_ATL::CComPtr_ISessionInternalEvents__0_0_::AddInterface_::_1_::catch$22 @ 0x18006CB20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800C76BC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CLockedList_ATL::CComPtr_ISessionInternalEvents__0_0_::AddInterface_::_1_::catch_22(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x89,
                           (unsigned int)"avcore\\audiocore\\Include\\LockedList.h",
                           a4);
  return 0LL;
}
