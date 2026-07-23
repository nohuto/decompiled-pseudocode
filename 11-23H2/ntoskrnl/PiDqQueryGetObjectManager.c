/*
 * XREFs of PiDqQueryGetObjectManager @ 0x1407FA1F4
 * Callers:
 *     PiDqDispatch @ 0x1407F9130 (PiDqDispatch.c)
 *     PiDqQuerySerializeActionQueue @ 0x1407F97A0 (PiDqQuerySerializeActionQueue.c)
 * Callees:
 *     <none>
 */

struct _ERESOURCE *__fastcall PiDqQueryGetObjectManager(__int64 a1)
{
  __int64 v1; // r8

  v1 = 0LL;
  switch ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL) )
  {
    case 1:
      return &PiDqDeviceInterfaceManager;
    case 2:
      return &PiDqDeviceContainerManager;
    case 3:
      return &PiDqDeviceManager;
    case 4:
      return &PiDqDeviceInterfaceClassManager;
    case 7:
      return &PiDqDeviceInstallerClassManager;
    case 0xB:
      return &PiDqDevicePanelManager;
  }
  return (struct _ERESOURCE *)v1;
}
