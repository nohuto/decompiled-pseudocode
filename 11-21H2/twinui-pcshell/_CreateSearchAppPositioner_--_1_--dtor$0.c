/*
 * XREFs of _CreateSearchAppPositioner_::_1_::dtor$0 @ 0x180216C7D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CreateSearchAppPositioner_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<IMiniSearchAppPositioner,wistd::default_delete<IMiniSearchAppPositioner>>::~unique_ptr<IMiniSearchAppPositioner,wistd::default_delete<IMiniSearchAppPositioner>>(a2 + 48);
}
