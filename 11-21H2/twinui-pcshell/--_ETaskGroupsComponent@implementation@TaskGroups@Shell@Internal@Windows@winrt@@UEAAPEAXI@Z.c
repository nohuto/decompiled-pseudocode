/*
 * XREFs of ??_ETaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x180589390
 * Callers:
 *     ??_ETaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@WEI@EAAPEAXI@Z @ 0x18020E9A0 (--_ETaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@WEI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180588FC0 (--1TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent *__fastcall winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent *this,
        char a2)
{
  winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::~TaskGroupsComponent(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
