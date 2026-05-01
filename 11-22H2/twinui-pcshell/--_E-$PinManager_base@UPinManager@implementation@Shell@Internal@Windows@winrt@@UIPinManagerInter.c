/*
 * XREFs of ??_E?$PinManager_base@UPinManager@implementation@Shell@Internal@Windows@winrt@@UIPinManagerInterop3@@Uimmersive_shell_component@6@@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x18025059C
 * Callers:
 *     ??_E?$PinManager_base@UPinManager@implementation@Shell@Internal@Windows@winrt@@UIPinManagerInterop3@@Uimmersive_shell_component@6@@implementation@Shell@Internal@Windows@winrt@@WDA@EAAPEAXI@Z @ 0x1802AC190 (--_E-$PinManager_base@UPinManager@implementation@Shell@Internal@Windows@winrt@@UIPi_ea_1802AC190.c)
 * Callees:
 *     ??1immersive_shell_component@winrt@@UEAA@XZ @ 0x1800DA4A8 (--1immersive_shell_component@winrt@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1801C7278 (--3@YAXPEAX@Z.c)
 */

char *__fastcall winrt::Windows::Internal::Shell::implementation::PinManager_base<winrt::Windows::Internal::Shell::implementation::PinManager,IPinManagerInterop3,winrt::immersive_shell_component>::`vector deleting destructor'(
        char *Block,
        char a2)
{
  winrt::immersive_shell_component::~immersive_shell_component((winrt::immersive_shell_component *)(Block + 16));
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
