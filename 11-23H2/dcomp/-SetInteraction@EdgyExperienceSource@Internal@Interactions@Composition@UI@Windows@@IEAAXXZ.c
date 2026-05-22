/*
 * XREFs of ?SetInteraction@EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@IEAAXXZ @ 0x180131724
 * Callers:
 *     ?RuntimeClassInitialize@EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAVVisual@456@@Z @ 0x18013150C (-RuntimeClassInitialize@EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@QEAAJ.c)
 * Callees:
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

void __fastcall Windows::UI::Composition::Interactions::Internal::EdgyExperienceSource::SetInteraction(
        Windows::UI::Composition::Interactions::Internal::EdgyExperienceSource *this)
{
  int v1; // r9d

  v1 = *(_DWORD *)(*((_QWORD *)this + 30) + 128LL);
  if ( !v1 )
    Microsoft::WRL2::FailFast::Unexpected(0LL);
  DirectComposition::CDevice::ResourceSetReferenceProperty(
    *(DirectComposition::CDevice **)(*(_QWORD *)(*((_QWORD *)this + 31) + 24LL) + 456LL),
    *(_DWORD *)(*((_QWORD *)this + 31) + 128LL),
    8,
    v1);
}
