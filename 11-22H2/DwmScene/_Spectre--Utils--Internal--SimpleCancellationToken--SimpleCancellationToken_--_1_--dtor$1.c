/*
 * XREFs of _Spectre::Utils::Internal::SimpleCancellationToken::SimpleCancellationToken_::_1_::dtor$1 @ 0x1800F20D2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Utils::Internal::SimpleCancellationToken::SimpleCancellationToken_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  std::mutex::~mutex((_Mtx_t)(*(_QWORD *)(a2 + 48) + 8LL));
}
