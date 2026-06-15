/*
 * XREFs of ?RuntimeClassInitialize@CExclusiveStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x180109C70
 * Callers:
 *     ??$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Z @ 0x18010368C (--$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUEndpointCharacteris.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIStreamGroup@@@WRL@Microsoft@@QEAAAEAV012@PEAUIStreamGroup@@@Z @ 0x18000D3E8 (--4-$ComPtr@UIStreamGroup@@@WRL@Microsoft@@QEAAAEAV012@PEAUIStreamGroup@@@Z.c)
 *     ?RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUStreamGroupParams@@K@Z @ 0x1800116D8 (-RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUS.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CExclusiveStreamGroupProxy::RuntimeClassInitialize(
        CExclusiveStreamGroupProxy *this,
        CEndpointCharacteristics **a2,
        const struct StreamGroupParams *a3,
        struct STREAM_GROUP_DESCRIPTOR *a4,
        unsigned int a5)
{
  int Instance; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  IUnknown *pProxy[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  pProxy[0] = 0LL;
  Instance = CoCreateInstance(
               &GUID_06b2132b_5b99_42a6_b8b6_a1709e191c70,
               0LL,
               0x17u,
               &GUID_6ceb3ada_8b98_46a8_8352_cac9c0fac849,
               (LPVOID *)pProxy);
  v10 = Instance;
  if ( Instance >= 0 )
  {
    Instance = CoSetProxyBlanket(pProxy[0], 0xFFFFFFFF, 0xFFFFFFFF, 0LL, 6u, 3u, 0LL, 0x40u);
    v10 = Instance;
    if ( Instance >= 0 )
    {
      Instance = ((__int64 (__fastcall *)(IUnknown *, struct STREAM_GROUP_DESCRIPTOR *, unsigned __int64))pProxy[0]->lpVtbl[4].Release)(
                   pProxy[0],
                   a4,
                   ((unsigned __int64)this + 16) & -(__int64)(this != 0LL));
      v10 = Instance;
      if ( Instance >= 0 )
      {
        Microsoft::WRL::ComPtr<IStreamGroup>::operator=((__int64 *)this + 11, (__int64)pProxy[0]);
        Instance = CBaseStreamGroupProxy::RuntimeClassInitialize(
                     (CExclusiveStreamGroupProxy *)((char *)this + 8),
                     a2,
                     a3,
                     a5);
        v10 = Instance;
        if ( Instance >= 0 )
        {
          v10 = 0;
          goto LABEL_11;
        }
        v11 = 2135LL;
      }
      else
      {
        v11 = 2132LL;
      }
    }
    else
    {
      v11 = 2130LL;
    }
  }
  else
  {
    v11 = 2124LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)Instance);
LABEL_11:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)pProxy);
  return v10;
}
