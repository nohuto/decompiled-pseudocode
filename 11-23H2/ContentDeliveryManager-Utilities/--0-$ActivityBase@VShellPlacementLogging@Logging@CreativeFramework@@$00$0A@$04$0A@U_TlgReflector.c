/*
 * XREFs of ??0?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180050328
 * Callers:
 *     ?ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@W4EventNotificationType@2@@Z @ 0x18005B830 (-ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEA.c)
 * Callees:
 *     memset_0 @ 0x180022C6D (memset_0.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x180051EE0 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 */

struct wil::details::IFailureCallback *__fastcall wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        struct wil::details::IFailureCallback *a1)
{
  *(_QWORD *)a1 = &wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 8),
    a1,
    (struct wil::details::IFailureCallback *)((char *)a1 + 96),
    0);
  *((_QWORD *)a1 + 6) = (char *)a1 + 56;
  *((_DWORD *)a1 + 14) = 0;
  *((_BYTE *)a1 + 60) = 0;
  *((_DWORD *)a1 + 24) = 0;
  *((_QWORD *)a1 + 14) = 0LL;
  *((_BYTE *)a1 + 120) = 0;
  *((_QWORD *)a1 + 13) = "CreativeEventActivity";
  *((_DWORD *)a1 + 33) = 0;
  *((_DWORD *)a1 + 32) = 1;
  *((_QWORD *)a1 + 36) = 0LL;
  *((_QWORD *)a1 + 37) = 0LL;
  memset_0((char *)a1 + 136, 0, 0x98uLL);
  *((_QWORD *)a1 + 38) = 0LL;
  *((_QWORD *)a1 + 39) = 0LL;
  return a1;
}
