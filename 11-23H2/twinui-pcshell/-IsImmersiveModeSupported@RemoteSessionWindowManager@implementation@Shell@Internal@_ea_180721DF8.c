/*
 * XREFs of ?IsImmersiveModeSupported@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x180721DF8
 * Callers:
 *     ?put_IsImmersiveModeSupported@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAH_N@Z @ 0x180724B10 (-put_IsImmersiveModeSupported@-$produce@URemoteSessionWindowManager@implementation@Shell@Interna.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x1801AAC38 (-_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z.c)
 *     ?DisconnectAllRemoteSessions@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180721540 (-DisconnectAllRemoteSessions@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@wi.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::IsImmersiveModeSupported(
        RTL_SRWLOCK *this,
        unsigned __int8 a2)
{
  int v2; // esi
  RTL_SRWLOCK *v4; // rdi
  int v5; // eax
  int v6; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v8; // [rsp+68h] [rbp+10h] BYREF

  v2 = a2;
  v4 = this + 8;
  AcquireSRWLockExclusive(this + 8);
  v8 = v2;
  v5 = _RegSetKeyValueWithSDDL(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\RemoteSystemIntegration",
         L"SwitcherIntegrationEnabled",
         4u,
         (BYTE *)&v8,
         4u);
  if ( v5 > 0 )
    v5 = (unsigned __int16)v5 | 0x80070000;
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x152,
      (int)"pcshell\\twinui\\cloudpc\\lib\\remotesessionwindowmanager.cpp",
      (const char *)(unsigned int)v5,
      v6);
  BYTE2(this[31].Ptr) = v2;
  if ( !(_BYTE)v2 )
    winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::DisconnectAllRemoteSessions(this);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
