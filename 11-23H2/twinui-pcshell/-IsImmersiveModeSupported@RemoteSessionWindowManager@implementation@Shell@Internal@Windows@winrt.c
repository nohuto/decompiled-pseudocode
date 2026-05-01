/*
 * XREFs of ?IsImmersiveModeSupported@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x1800684FC
 * Callers:
 *     ?IsAnyRemoteSystemEnabled@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHPEA_N@Z @ 0x1800684B0 (-IsAnyRemoteSystemEnabled@-$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Wi.c)
 *     ?get_IsImmersiveModeSupported@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHPEA_N@Z @ 0x1807247C0 (-get_IsImmersiveModeSupported@-$produce@URemoteSessionWindowManager@implementation@Shell@Interna.c)
 * Callees:
 *     <none>
 */

char __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::IsImmersiveModeSupported(
        RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  char v3; // bl

  v1 = this + 8;
  AcquireSRWLockShared(this + 8);
  v3 = BYTE2(this[31].Ptr);
  if ( v1 )
    ReleaseSRWLockShared(v1);
  return v3;
}
