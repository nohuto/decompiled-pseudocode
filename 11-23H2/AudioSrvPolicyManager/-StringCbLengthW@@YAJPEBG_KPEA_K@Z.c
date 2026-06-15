/*
 * XREFs of ?StringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x180037178
 * Callers:
 *     ?GetNotificationDataSize@@YAJAEBV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@PEA_K@Z @ 0x180035544 (-GetNotificationDataSize@@YAJAEBV-$vector@PEAVCApplication@@V-$allocator@PEAVCApplication@@@std@.c)
 *     ?SetNotificationData@@YAJAEBV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@PEAE_K@Z @ 0x180036F1C (-SetNotificationData@@YAJAEBV-$vector@PEAVCApplication@@V-$allocator@PEAVCApplication@@@std@@@st.c)
 *     _lambda_27a4ba88670a0d404d45da27056d59bf_::operator() @ 0x18003BBA4 (_lambda_27a4ba88670a0d404d45da27056d59bf_--operator().c)
 *     ?LoadPropertyStore@CAudioSessionPropertyStore@@AEAAJXZ @ 0x18003D30C (-LoadPropertyStore@CAudioSessionPropertyStore@@AEAAJXZ.c)
 *     ?GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z @ 0x180041750 (-GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z.c)
 *     ?WritePersistedEndpoint@ApplicationSpecificEndpointInfo@@AEAAJPEAUHKEY__@@PEBG1@Z @ 0x180042B5C (-WritePersistedEndpoint@ApplicationSpecificEndpointInfo@@AEAAJPEAUHKEY__@@PEBG1@Z.c)
 * Callees:
 *     StringLengthWorkerW @ 0x1800371D8 (StringLengthWorkerW.c)
 */

__int64 __fastcall StringCbLengthW(const unsigned __int16 *a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  size_t v3; // rax
  size_t v4; // rdx
  unsigned __int64 *v5; // r11
  HRESULT v6; // r8d
  size_t pcchLength; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = a2 >> 1;
  pcchLength = 0LL;
  v5 = a3;
  if ( a1 && v4 <= 0x7FFFFFFF )
  {
    v6 = StringLengthWorkerW(a1, v4, &pcchLength);
    v3 = pcchLength;
  }
  else
  {
    v6 = -2147024809;
  }
  if ( v5 )
  {
    if ( v6 < 0 )
      *v5 = 0LL;
    else
      *v5 = 2 * v3;
  }
  return (unsigned int)v6;
}
