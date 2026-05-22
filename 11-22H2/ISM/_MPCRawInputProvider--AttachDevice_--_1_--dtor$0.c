/*
 * XREFs of _MPCRawInputProvider::AttachDevice_::_1_::dtor$0 @ 0x1800DE2F4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MPCRawInputProvider::AttachDevice_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  std::shared_ptr<SystemCursors::SharedTargetWithHandle>::~shared_ptr<SystemCursors::SharedTargetWithHandle>(a2 + 32);
}
