/*
 * XREFs of ?GetRemoteDesktopInformation@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AURemoteDesktopInformation@3456@XZ @ 0x180712C98
 * Callers:
 *     ?GetRemoteDesktopInformation@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHPEAUstruct_Windows_Internal_Shell_RemoteDesktopInformation@23@@Z @ 0x180721730 (-GetRemoteDesktopInformation@-$produce@URemoteSessionWindowManager@implementation@Shell@Internal.c)
 * Callees:
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x1800DBDB8 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::GetRemoteDesktopInformation(
        __int64 a1,
        __int64 a2)
{
  RTL_SRWLOCK *v4; // rdi
  unsigned int v5; // r8d
  winrt::impl ***v6; // rax
  winrt::impl **v7; // rbx
  unsigned int v8; // r8d

  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 48);
  v4 = (RTL_SRWLOCK *)(a1 + 56);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 56));
  v6 = *(winrt::impl ****)(a1 + 72);
  v7 = *v6;
  if ( *v6 != (winrt::impl **)v6 )
  {
    winrt::hstring::operator=((volatile signed __int32 **)(a2 + 8), v7 + 2, v5);
    winrt::hstring::operator=((volatile signed __int32 **)(a2 + 16), v7 + 3, v8);
  }
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return a2;
}
