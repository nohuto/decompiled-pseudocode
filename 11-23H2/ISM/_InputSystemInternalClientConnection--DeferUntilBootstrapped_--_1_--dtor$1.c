/*
 * XREFs of _InputSystemInternalClientConnection::DeferUntilBootstrapped_::_1_::dtor$1 @ 0x18013C266
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall InputSystemInternalClientConnection::DeferUntilBootstrapped_::_1_::dtor_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)(a2 + 32), a2, a3, a4);
}
