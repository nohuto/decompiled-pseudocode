/*
 * XREFs of ndisRegisterScatterGatherDmaForGenericObject @ 0x1C0134FD0
 * Callers:
 *     NdisMRegisterScatterGatherDma @ 0x1C00C9880 (NdisMRegisterScatterGatherDma.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ??$MakePoolPtrNP@U_NDIS_SG_DMA_BLOCK@@@@YA?AV?$unique_ptr@U_NDIS_SG_DMA_BLOCK@@U?$KFreePoolNP@U_NDIS_SG_DMA_BLOCK@@@@@wistd@@K@Z @ 0x1C00C7494 (--$MakePoolPtrNP@U_NDIS_SG_DMA_BLOCK@@@@YA-AV-$unique_ptr@U_NDIS_SG_DMA_BLOCK@@U-$KFreePoolNP@U_.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_DMA_ADAPTER@@$$A6AXPEAU1@@Z$1?CloseDmaAdapter@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C00C74F0 (--1-$unique_storage@U-$resource_policy@PEAU_DMA_ADAPTER@@$$A6AXPEAU1@@Z$1-CloseDmaAdapter@@YAX0@.c)
 */

__int64 __fastcall ndisRegisterScatterGatherDmaForGenericObject(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v6; // edx
  unsigned int v7; // ebx
  _DEVICE_OBJECT *v8; // rcx
  struct _DMA_ADAPTER *v9; // rsi
  _DWORD *v10; // rax
  ULONG NumberOfMapRegisters; // [rsp+30h] [rbp-39h] BYREF
  _DWORD *v13; // [rsp+38h] [rbp-31h] BYREF
  struct _DMA_ADAPTER *DmaAdapter; // [rsp+40h] [rbp-29h] BYREF
  _BYTE DeviceDescription[64]; // [rsp+50h] [rbp-19h] BYREF

  memset(DeviceDescription, 0, sizeof(DeviceDescription));
  v6 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)&DeviceDescription[20] = -1;
  *(_DWORD *)DeviceDescription = 3;
  *(_WORD *)&DeviceDescription[4] = 257;
  *(_DWORD *)&DeviceDescription[32] = *(_DWORD *)(a2 + 8);
  v7 = 0;
  *(_DWORD *)&DeviceDescription[40] = (v6 & 1) != 0 ? 64 : 32;
  if ( (v6 & 4) != 0 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5u,
        1u,
        0x15u,
        (struct _GUID *)&WPP_0ce672c581b5354e1037f225da7b2621_Traceguids);
    DeviceDescription[10] = 1;
    *(_DWORD *)&DeviceDescription[20] = 5;
  }
  v8 = *(_DEVICE_OBJECT **)(a2 + 40);
  NumberOfMapRegisters = 0;
  DmaAdapter = IoGetDmaAdapter(v8, (struct _DEVICE_DESCRIPTION *)DeviceDescription, &NumberOfMapRegisters);
  v9 = DmaAdapter;
  if ( DmaAdapter )
  {
    MakePoolPtrNP<_NDIS_SG_DMA_BLOCK>(&v13);
    v10 = v13;
    if ( v13 )
    {
      *v13 = 11534607;
      *((_QWORD *)v10 + 2) = a1;
      *((_QWORD *)v10 + 3) = *(_QWORD *)(a2 + 40);
      v10[17] = *(_DWORD *)(a2 + 8);
      v10[16] = *(_DWORD *)(a2 + 4);
      *((_QWORD *)v10 + 5) = v9;
      DmaAdapter = 0LL;
      _InterlockedIncrement(v10 + 22);
      *a3 = v13;
      *(_DWORD *)(a2 + 32) = 0;
      goto LABEL_14;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        (_DWORD)v13 + 1,
        (_WORD)v13 + 23,
        (struct _GUID *)&WPP_0ce672c581b5354e1037f225da7b2621_Traceguids);
  }
  else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      1u,
      0x16u,
      (struct _GUID *)&WPP_0ce672c581b5354e1037f225da7b2621_Traceguids,
      *(_QWORD *)(a2 + 40));
  }
  v7 = -1073741670;
LABEL_14:
  wil::details::unique_storage<wil::details::resource_policy<_DMA_ADAPTER *,void (_DMA_ADAPTER *),&void CloseDmaAdapter(_DMA_ADAPTER *),wistd::integral_constant<unsigned __int64,0>,_DMA_ADAPTER *,_DMA_ADAPTER *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_DMA_ADAPTER *,void (_DMA_ADAPTER *),&void CloseDmaAdapter(_DMA_ADAPTER *),wistd::integral_constant<unsigned __int64,0>,_DMA_ADAPTER *,_DMA_ADAPTER *,0,std::nullptr_t>>(&DmaAdapter);
  return v7;
}
