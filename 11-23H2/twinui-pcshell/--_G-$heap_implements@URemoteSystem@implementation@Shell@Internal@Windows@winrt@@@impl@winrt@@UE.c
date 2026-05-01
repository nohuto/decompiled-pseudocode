/*
 * XREFs of ??_G?$heap_implements@URemoteSystem@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x18070F510
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1RemoteSystem@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18070ECF0 (--1RemoteSystem@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

volatile signed __int32 **__fastcall winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::RemoteSystem>::`scalar deleting destructor'(
        volatile signed __int32 **a1,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::RemoteSystem::~RemoteSystem(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
