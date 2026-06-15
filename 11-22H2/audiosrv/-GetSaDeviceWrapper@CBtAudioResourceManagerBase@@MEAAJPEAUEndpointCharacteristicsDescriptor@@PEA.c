/*
 * XREFs of ?GetSaDeviceWrapper@CBtAudioResourceManagerBase@@MEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEBU_GUID@@4PEAPEAUISaDeviceProxy@@@Z @ 0x1800F95A0
 * Callers:
 *     ?GetSaDeviceWrapper@CBtLeAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEBU_GUID@@4PEAPEAUISaDeviceProxy@@@Z @ 0x1800FB910 (-GetSaDeviceWrapper@CBtLeAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUS.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBtAudioResourceManagerBase::GetSaDeviceWrapper(
        CBtAudioResourceManagerBase *this,
        struct EndpointCharacteristicsDescriptor *a2,
        struct SaDeviceParams *a3,
        unsigned int a4,
        enum _AUDCLNT_SHAREMODE a5,
        struct SaDeviceResourceParams *a6,
        const struct _GUID *a7,
        const struct _GUID *a8,
        struct ISaDeviceProxy **a9)
{
  int v9; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v9 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, struct EndpointCharacteristicsDescriptor *, struct SaDeviceParams *, _QWORD, enum _AUDCLNT_SHAREMODE, struct SaDeviceResourceParams *, const struct _GUID *, const struct _GUID *, struct ISaDeviceProxy **))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
         g_DeviceGraphManager,
         a2,
         a3,
         a4,
         a5,
         a6,
         a7,
         a8,
         a9);
  v10 = v9;
  if ( v9 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x47D,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
    (const char *)(unsigned int)v9);
  return v10;
}
