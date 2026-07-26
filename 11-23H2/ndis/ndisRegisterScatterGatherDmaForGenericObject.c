/*
 * XREFs of ndisRegisterScatterGatherDmaForGenericObject @ 0x1C0140D98
 * Callers:
 *     NdisMRegisterScatterGatherDma @ 0x1C00CE550 (NdisMRegisterScatterGatherDma.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006820 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ??1?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ @ 0x1C005D038 (--1-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ.c)
 *     ??$MakePoolPtrNP@U_NDIS_SG_DMA_BLOCK@@@@YA?AV?$unique_ptr@U_NDIS_SG_DMA_BLOCK@@U?$KFreePoolNP@U_NDIS_SG_DMA_BLOCK@@@@@wistd@@K@Z @ 0x1C00CC210 (--$MakePoolPtrNP@U_NDIS_SG_DMA_BLOCK@@@@YA-AV-$unique_ptr@U_NDIS_SG_DMA_BLOCK@@U-$KFreePoolNP@U_.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_DMA_ADAPTER@@$$A6AXPEAU1@@Z$1?CloseDmaAdapter@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C00CC26C (--1-$unique_storage@U-$resource_policy@PEAU_DMA_ADAPTER@@$$A6AXPEAU1@@Z$1-CloseDmaAdapter@@YAX0@.c)
 */

__int64 __fastcall ndisRegisterScatterGatherDmaForGenericObject(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v6; // edx
  unsigned int v7; // ebx
  _DEVICE_OBJECT *v8; // rcx
  struct _DMA_ADAPTER *v9; // rsi
  _DWORD *v11; // rax
  ULONG NumberOfMapRegisters; // [rsp+30h] [rbp-39h] BYREF
  _DWORD *v13; // [rsp+38h] [rbp-31h] BYREF
  struct _DMA_ADAPTER *v14[2]; // [rsp+40h] [rbp-29h] BYREF
  struct _DEVICE_DESCRIPTION DeviceDescription; // [rsp+50h] [rbp-19h] BYREF

  memset(&DeviceDescription, 0, sizeof(DeviceDescription));
  v6 = *(_DWORD *)(a2 + 4);
  DeviceDescription.InterfaceType = InterfaceTypeUndefined;
  DeviceDescription.Version = 3;
  *(_WORD *)&DeviceDescription.Master = 257;
  DeviceDescription.MaximumLength = *(_DWORD *)(a2 + 8);
  v7 = 0;
  DeviceDescription.DmaAddressWidth = (v6 & 1) != 0 ? 64 : 32;
  if ( (v6 & 4) != 0 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5u,
        1u,
        0x1Au,
        (struct _GUID *)&WPP_9631851058cb35c6ce0e43959fab5e67_Traceguids);
    DeviceDescription.Reserved1 = 1;
    DeviceDescription.InterfaceType = PCIBus;
  }
  v8 = *(_DEVICE_OBJECT **)(a2 + 40);
  NumberOfMapRegisters = 0;
  v14[0] = IoGetDmaAdapter(v8, &DeviceDescription, &NumberOfMapRegisters);
  v9 = v14[0];
  if ( v14[0] )
  {
    MakePoolPtrNP<_NDIS_SG_DMA_BLOCK>(&v13);
    v11 = v13;
    if ( v13 )
    {
      *v13 = 11534607;
      *((_QWORD *)v11 + 2) = a1;
      *((_QWORD *)v11 + 3) = *(_QWORD *)(a2 + 40);
      v11[17] = *(_DWORD *)(a2 + 8);
      v11[16] = *(_DWORD *)(a2 + 4);
      *((_QWORD *)v11 + 5) = v9;
      v14[0] = 0LL;
      _InterlockedIncrement(v11 + 22);
      *a3 = v13;
      *(_DWORD *)(a2 + 32) = 0;
    }
    else
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          (_DWORD)v13 + 1,
          (_WORD)v13 + 28,
          (struct _GUID *)&WPP_9631851058cb35c6ce0e43959fab5e67_Traceguids);
      wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::~unique_ptr<KnobCollection,KFreePool<KnobCollection>>((void **)&v13);
      v7 = -1073741670;
    }
    wil::details::unique_storage<wil::details::resource_policy<_DMA_ADAPTER *,void (_DMA_ADAPTER *),&void CloseDmaAdapter(_DMA_ADAPTER *),wistd::integral_constant<unsigned __int64,0>,_DMA_ADAPTER *,_DMA_ADAPTER *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_DMA_ADAPTER *,void (_DMA_ADAPTER *),&void CloseDmaAdapter(_DMA_ADAPTER *),wistd::integral_constant<unsigned __int64,0>,_DMA_ADAPTER *,_DMA_ADAPTER *,0,std::nullptr_t>>(v14);
    return v7;
  }
  else
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0x1Bu,
        (struct _GUID *)&WPP_9631851058cb35c6ce0e43959fab5e67_Traceguids,
        *(_QWORD *)(a2 + 40));
    wil::details::unique_storage<wil::details::resource_policy<_DMA_ADAPTER *,void (_DMA_ADAPTER *),&void CloseDmaAdapter(_DMA_ADAPTER *),wistd::integral_constant<unsigned __int64,0>,_DMA_ADAPTER *,_DMA_ADAPTER *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_DMA_ADAPTER *,void (_DMA_ADAPTER *),&void CloseDmaAdapter(_DMA_ADAPTER *),wistd::integral_constant<unsigned __int64,0>,_DMA_ADAPTER *,_DMA_ADAPTER *,0,std::nullptr_t>>(v14);
    return 3221225626LL;
  }
}
