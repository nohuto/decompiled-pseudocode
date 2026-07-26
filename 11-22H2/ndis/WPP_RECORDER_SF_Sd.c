/*
 * XREFs of WPP_RECORDER_SF_Sd @ 0x1C002BA00
 * Callers:
 *     ?ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z @ 0x1C002B688 (-ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z.c)
 *     ndisBindReadFilterDriverFromV3Registry @ 0x1C011C7F8 (ndisBindReadFilterDriverFromV3Registry.c)
 *     _lambda_3ed15a572a362cb111cc1d3010d8268d_::operator() @ 0x1C011CF24 (_lambda_3ed15a572a362cb111cc1d3010d8268d_--operator().c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x1C011D598 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 *     ?ReadKnobFromKey@RegistryKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x1C01200A0 (-ReadKnobFromKey@RegistryKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z.c)
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C013A518 (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00B214C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_Sd(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        const wchar_t *a6,
        ...)
{
  const wchar_t *v6; // rbx
  __int64 v7; // rdi
  unsigned __int64 v10; // rsi
  unsigned int v11; // r14d
  int v13; // eax
  bool v14; // zf
  __int64 v16; // rax
  __int64 v17; // r9
  const wchar_t *v18; // r8
  int v19; // [rsp+20h] [rbp-58h]
  va_list va; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = a6;
  v7 = -1LL;
  v10 = (unsigned __int64)a3 >> 16;
  v11 = a2;
  v13 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v10 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v13, (a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v10 + 41) >= a2 )
  {
    if ( a6 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a6[v16] );
      v17 = 2 * v16 + 2;
    }
    else
    {
      v17 = 10LL;
    }
    v18 = a6;
    if ( !a6 )
      v18 = L"NULL";
    ndisWppFastTraceMessage(a5, a4, v18, v17, va, 4LL, 0LL);
  }
  v14 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v14 = a6 == 0LL;
  }
  if ( v14 )
    v6 = L"NULL";
  LOWORD(v19) = a4;
  return WppAutoLogTrace(a1, v11, a3, a5, v19, v6);
}
