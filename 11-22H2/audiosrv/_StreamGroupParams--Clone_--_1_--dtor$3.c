/*
 * XREFs of _StreamGroupParams::Clone_::_1_::dtor$3 @ 0x1800790B2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall StreamGroupParams::Clone_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return std::unique_ptr<StreamGroupParams>::~unique_ptr<StreamGroupParams>(a2 + 96);
}
