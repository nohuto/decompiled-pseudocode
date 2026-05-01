/*
 * XREFs of ??_G?$heap_implements@UEdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x180128E00
 * Callers:
 *     <none>
 * Callees:
 *     ??1EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18012B430 (--1EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@UEAA.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager *__fastcall winrt::impl::heap_implements<winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager>::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager *a1,
        char a2)
{
  winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager::~EdgeAnimationRelationshipManager(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0xB8uLL);
  return a1;
}
