/*
 * XREFs of ?RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@W4_AUDCLNT_SHAREMODE@@KAEAUSaDeviceResourceParams@@PEBU_GUID@@5@Z @ 0x18001184C
 * Callers:
 *     ??$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@AEAW4_AUDCLNT_SHAREMODE@@AEAKAEAUSaDeviceResourceParams@@AEAPEBU_GUID@@AEAPEBU8@@Details@WRL@Microsoft@@YAJPEAPEAUISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAUEndpointCharacteristicsDescriptor@@$$QEAPEAUIDeviceGraphObjectsStore@@AEAW4_AUDCLNT_SHAREMODE@@AEAKAEAUSaDeviceResourceParams@@AEAPEBU_GUID@@7@Z @ 0x180010748 (--$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAUEndpointCha.c)
 * Callees:
 *     ?CloneSaDeviceParams@@YAJPEBUSaDeviceParams@@PEAPEAU1@@Z @ 0x18000E9CC (-CloneSaDeviceParams@@YAJPEBUSaDeviceParams@@PEAPEAU1@@Z.c)
 *     ?TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800102C0 (-TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??0CResourcePriorityTracker@@QEAA@K@Z @ 0x180011A64 (--0CResourcePriorityTracker@@QEAA@K@Z.c)
 *     ?CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x1800154C4 (-CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180047D88 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067088 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSaDeviceProxy::RuntimeClassInitialize(
        CSaDeviceProxy *this,
        const struct SaDeviceParams *a2,
        CEndpointCharacteristics **a3,
        struct IDeviceGraphObjectsStore *a4,
        enum _AUDCLNT_SHAREMODE a5,
        unsigned int a6,
        struct SaDeviceResourceParams *a7,
        const struct _GUID *a8,
        const struct _GUID *a9)
{
  __int64 v13; // rcx
  CEndpointCharacteristics *v14; // r14
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // edi
  __int64 v18; // rax
  const struct tWAVEFORMATEX *v19; // rcx
  const struct tWAVEFORMATEX *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r10
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v23; // r9d
  int v24; // eax
  struct IAudioDeviceGraph *v25; // rdi
  CResourcePriorityTracker *v26; // rax
  struct SaDeviceResourceParams *v27; // rdi
  __int64 v29; // r9
  __int64 v30; // rdx
  int v31; // [rsp+20h] [rbp-71h]
  int v32; // [rsp+20h] [rbp-71h]
  struct _GUID v33; // [rsp+70h] [rbp-21h] BYREF
  struct _GUID v34; // [rsp+80h] [rbp-11h] BYREF
  struct _GUID v35; // [rsp+90h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+37h]
  struct IAudioDeviceGraph *v37; // [rsp+D0h] [rbp+3Fh] BYREF
  struct IAudioDeviceGraph *v38; // [rsp+E0h] [rbp+4Fh] BYREF

  *((_DWORD *)this + 32) = (*(__int64 (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)*a3 + 56LL))(*a3);
  if ( *((struct IDeviceGraphObjectsStore **)this + 14) != a4 )
  {
    if ( a4 )
      (*(void (__fastcall **)(struct IDeviceGraphObjectsStore *))(*(_QWORD *)a4 + 8LL))(a4);
    v13 = *((_QWORD *)this + 14);
    *((_QWORD *)this + 14) = a4;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = *a3;
  v15 = *((_QWORD *)this + 15);
  *((_QWORD *)this + 15) = 0LL;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  CEndpointCharacteristics::TryGetCustomResourceManagerService(
    v14,
    &GUID_39a3af14_c4e0_431e_84af_4d4c1087da45,
    (void **)this + 15);
  v16 = CloneSaDeviceParams(a2, (void ***)this + 6);
  v17 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xADC,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v16,
      v31);
    return v17;
  }
  v37 = 0LL;
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v37);
  v18 = *((_QWORD *)this + 6);
  v19 = *(const struct tWAVEFORMATEX **)(v18 + 24);
  v20 = *(const struct tWAVEFORMATEX **)(v18 + 16);
  v21 = *(_QWORD *)(v18 + 40);
  v22 = *(_QWORD *)(v18 + 32);
  v23 = *(_DWORD *)(v18 + 8);
  v33 = *(struct _GUID *)(v18 + 80);
  v34 = *(struct _GUID *)(v18 + 64);
  v35 = *(struct _GUID *)(v18 + 48);
  v24 = CreateSaDevice(
          (struct EndpointCharacteristicsDescriptor *)a3,
          a5,
          a6,
          v23,
          &v35,
          &v34,
          v22,
          v21,
          v20,
          v19,
          &v33,
          a8,
          a9,
          &v37);
  v17 = v24;
  if ( v24 < 0 )
  {
    v29 = (unsigned int)v24;
    v30 = 2785LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v30,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)v29,
      v32);
    goto LABEL_16;
  }
  v25 = v37;
  if ( *((struct IAudioDeviceGraph **)this + 10) != v37 )
  {
    v38 = v37;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v38);
    v38 = (struct IAudioDeviceGraph *)*((_QWORD *)this + 10);
    *((_QWORD *)this + 10) = v25;
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v38);
  }
  v26 = (CResourcePriorityTracker *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v38 = v26;
  v27 = a7;
  if ( v26 )
    v26 = CResourcePriorityTracker::CResourcePriorityTracker(v26, *((_DWORD *)a7 + 2));
  *((_QWORD *)this + 7) = v26;
  if ( !v26 )
  {
    v17 = -2147024882;
    v29 = 2147942414LL;
    v30 = 2790LL;
    goto LABEL_21;
  }
  *((_BYTE *)this + 72) = a5 == AUDCLNT_SHAREMODE_EXCLUSIVE;
  *((_QWORD *)this + 8) = *(_QWORD *)v27;
  *(_QWORD *)v27 = 0LL;
  v17 = 0;
LABEL_16:
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v37);
  return v17;
}
