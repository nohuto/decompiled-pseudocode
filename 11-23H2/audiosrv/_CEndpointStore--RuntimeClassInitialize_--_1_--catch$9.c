/*
 * XREFs of _CEndpointStore::RuntimeClassInitialize_::_1_::catch$9 @ 0x18007A7CA
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800D2C74 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CEndpointStore::RuntimeClassInitialize_::_1_::catch_9(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 104) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 88),
                            (void *)0x78,
                            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointstore.cpp",
                            a4);
  return 0LL;
}
