/*
 * XREFs of ?InitializeDeviceGraphManager@@YAJXZ @ 0x18005AFB0
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x1800594E8 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphManager@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003CCB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphManag.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphManager@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphManager@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18005B03C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphMana.c)
 *     ??0CDeviceGraphManager@@QEAA@XZ @ 0x18005B0D8 (--0CDeviceGraphManager@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VCProcessSubmixManager@@UIProcessSubmixManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIProcessSubmixManager@@@Z @ 0x18005B2DC (--$MakeAndInitialize@VCProcessSubmixManager@@UIProcessSubmixManager@@$$V@Details@WRL@Microsoft@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CF388 (--1-$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 InitializeDeviceGraphManager(void)
{
  CDeviceGraphManager *v0; // rax
  CDeviceGraphManager *v1; // rdi
  int v2; // ebx
  int v3; // eax
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CDeviceGraphManager *v7; // [rsp+30h] [rbp+8h] BYREF

  g_DeviceGraphManager = 0LL;
  v0 = (CDeviceGraphManager *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v0;
  if ( !v0 )
  {
    Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>(&v7);
    v2 = -2147024882;
LABEL_8:
    v5 = 3040LL;
    goto LABEL_10;
  }
  v1 = CDeviceGraphManager::CDeviceGraphManager(v0);
  v2 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphManager>>(
         v1,
         &GUID_fb840e85_3e27_435e_a965_fc86de3bc7f0,
         &g_DeviceGraphManager);
  if ( v1 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphManager>::Release((__int64)v1);
  if ( v2 < 0 )
    goto LABEL_8;
  v3 = Microsoft::WRL::Details::MakeAndInitialize<CProcessSubmixManager,IProcessSubmixManager,>();
  v2 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x78,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
    (const char *)(unsigned int)v3);
  v5 = 3043LL;
LABEL_10:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v2);
  return (unsigned int)v2;
}
