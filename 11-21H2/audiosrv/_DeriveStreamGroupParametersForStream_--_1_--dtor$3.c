/*
 * XREFs of _DeriveStreamGroupParametersForStream_::_1_::dtor$3 @ 0x18006FC80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DeriveStreamGroupParametersForStream_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return std::unique_ptr<StreamGroupParams>::~unique_ptr<StreamGroupParams>(a2 + 48);
}
