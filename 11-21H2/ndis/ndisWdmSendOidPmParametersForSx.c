/*
 * XREFs of ndisWdmSendOidPmParametersForSx @ 0x1C007D858
 * Callers:
 *     ?ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE_POWER_STATE@@E@Z @ 0x1C013AEBC (-ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE.c)
 * Callees:
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C0014380 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     ndisMSendPmParametersOidForSx @ 0x1C0053FF4 (ndisMSendPmParametersOidForSx.c)
 */

__int64 __fastcall ndisWdmSendOidPmParametersForSx(__int64 a1)
{
  __m128i v1; // xmm0
  unsigned int v3; // edi
  char v5[16]; // [rsp+40h] [rbp-28h] BYREF
  int v6; // [rsp+50h] [rbp-18h]

  v1 = *(__m128i *)(a1 + 1120);
  v6 = *(_DWORD *)(a1 + 1136);
  *(__m128i *)v5 = v1;
  *(_DWORD *)&v5[12] = _mm_srli_si128(v1, 8).m128i_i32[1] & 0xFFFFFFFE;
  v3 = ndisMSendPmParametersOidForSx((struct _NDIS_MINIPORT_BLOCK *)a1, v5);
  if ( v3 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x78u,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        a1,
        *(_DWORD *)&v5[4]);
    if ( (byte_1C00EE582 & 0x40) != 0 )
      McTemplateK0jqxd_EtwWriteTransfer();
  }
  else if ( *(_DWORD *)&v5[4] )
  {
    *(_DWORD *)(a1 + 124) |= 0x400u;
  }
  return v3;
}
