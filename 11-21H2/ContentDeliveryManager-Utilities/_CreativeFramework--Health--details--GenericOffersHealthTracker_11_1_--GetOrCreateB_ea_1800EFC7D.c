/*
 * XREFs of _CreativeFramework::Health::details::GenericOffersHealthTracker_11_1_::GetOrCreateBaseEventForPlacementId_::_1_::dtor$16 @ 0x1800EFC7D
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall CreativeFramework::Health::details::GenericOffersHealthTracker_11_1_::GetOrCreateBaseEventForPlacementId_::_1_::dtor_16(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 52) & 4;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 52) &= ~4u;
    return std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>(a2 + 56);
  }
  return result;
}
