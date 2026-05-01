/*
 * XREFs of ??1Payload@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ @ 0x180303070
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::Payload::~Payload(
        __int64 *a1)
{
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(a1 + 1);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(a1);
}
