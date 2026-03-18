/*
 * XREFs of HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C003649C
 * Callers:
 *     HUBHTX_ValidateAndCacheHubConfigDescriptor @ 0x1C0003234 (HUBHTX_ValidateAndCacheHubConfigDescriptor.c)
 *     HUBPDO_ValidateConfigurationDescriptor @ 0x1C001560C (HUBPDO_ValidateConfigurationDescriptor.c)
 *     HUBDTX_ValidateAndCacheConfigDescriptor @ 0x1C00290AC (HUBDTX_ValidateAndCacheConfigDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0002204 (WPP_RECORDER_SF_DD.c)
 *     HUBDESC_InternalValidateCommonDescriptorHeader @ 0x1C003323C (HUBDESC_InternalValidateCommonDescriptorHeader.c)
 *     HUBDESC_InternalValidateConfigDescriptor @ 0x1C00334D4 (HUBDESC_InternalValidateConfigDescriptor.c)
 *     HUBDESC_InternalValidateLastInterface @ 0x1C00339C4 (HUBDESC_InternalValidateLastInterface.c)
 *     HUBDESC_InternalValidateEndpointDescriptor @ 0x1C0033B10 (HUBDESC_InternalValidateEndpointDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor @ 0x1C0034C78 (HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor @ 0x1C0035714 (HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor.c)
 *     HUBDESC_InternalValidateInterfaceDescriptor @ 0x1C0035AD0 (HUBDESC_InternalValidateInterfaceDescriptor.c)
 *     HUBDESC_InternalValidateIADescriptor @ 0x1C0036058 (HUBDESC_InternalValidateIADescriptor.c)
 *     __security_check_cookie @ 0x1C00435B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0043B00 (memset.c)
 */

char __fastcall HUBDESC_ValidateConfigurationDescriptorSet(
        unsigned __int8 *a1,
        unsigned int a2,
        __int128 *a3,
        __int64 a4,
        _BYTE *a5)
{
  __int64 v5; // rdi
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int64 v12; // rdx
  char v13; // bl
  unsigned __int8 *v14; // rbx
  char v15; // di
  int v17; // [rsp+40h] [rbp-C0h] BYREF
  int v18[3]; // [rsp+44h] [rbp-BCh] BYREF
  _OWORD v19[17]; // [rsp+50h] [rbp-B0h] BYREF

  v5 = a2;
  v17 = 0;
  v18[0] = 0;
  if ( a5 )
    *a5 = 0;
  memset(v19, 0, 0x108uLL);
  *((_QWORD *)&v19[13] + 1) = &v19[14];
  *(_QWORD *)&v19[6] = (char *)&v19[6] + 8;
  LODWORD(v19[13]) = 256;
  DWORD2(v19[5]) = 256;
  DWORD2(v19[8]) = 256;
  *(_QWORD *)&v19[9] = (char *)&v19[9] + 8;
  RtlClearAllBits((PRTL_BITMAP)&v19[13]);
  RtlClearAllBits((PRTL_BITMAP)((char *)&v19[5] + 8));
  RtlClearAllBits((PRTL_BITMAP)((char *)&v19[8] + 8));
  v9 = *a3;
  *((_QWORD *)&v19[3] + 1) = a1;
  v10 = a3[1];
  *(_QWORD *)&v19[4] = &a1[v5];
  v19[0] = v9;
  v11 = a3[2];
  DWORD2(v19[4]) = v5;
  v19[1] = v10;
  *(_QWORD *)&v10 = *((_QWORD *)a3 + 6);
  v19[2] = v11;
  *(_QWORD *)&v19[3] = v10;
  if ( !a1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(a4, 2u, 5u, 0x7Bu, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids);
    v12 = 60LL;
LABEL_7:
    (*((void (__fastcall **)(_QWORD, __int64))a3 + 3))(*((_QWORD *)a3 + 5), v12);
    goto LABEL_8;
  }
  if ( (unsigned int)v5 < 9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DD(a4, 2u, 5u, 0x7Cu, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v5, 9);
    v12 = 56LL;
    goto LABEL_7;
  }
  HUBDESC_InternalValidateConfigDescriptor(a1, (__int64)v19, (unsigned int *)v18, &v17, a4);
  if ( v17 == 1 )
    goto LABEL_8;
  v14 = a1 + 9;
  v15 = v17 != 2;
  while ( (unsigned __int64)v14 < *(_QWORD *)&v19[4] )
  {
    v18[0] = 0;
    v17 = 0;
    HUBDESC_InternalValidateCommonDescriptorHeader(v14, (__int64)v19, (unsigned int *)v18, &v17, a4);
    if ( v17 == 1 )
      goto LABEL_8;
    if ( v17 == 2 )
      v15 = LOBYTE(v19[3]) != 0 ? v15 : 0;
    v17 = 0;
    if ( v14[1] == 4 )
    {
      LODWORD(v19[16]) &= ~4u;
      HUBDESC_InternalValidateInterfaceDescriptor(v14, (__int64)v19, (unsigned int *)v18, &v17, a4);
      if ( v17 == 1 )
        goto LABEL_8;
      if ( v17 == 2 )
        v15 = 0;
    }
    else
    {
      switch ( v14[1] )
      {
        case 5u:
          HUBDESC_InternalValidateEndpointDescriptor(v14, (__int64)v19, (unsigned int *)v18, &v17, a4);
          break;
        case 0xBu:
          LODWORD(v19[16]) &= 0xFFFFFFF3;
          HUBDESC_InternalValidateIADescriptor(v14, (__int64)v19, (unsigned int *)v18, &v17, a4);
          break;
        case 0x30u:
          LODWORD(v19[16]) &= ~8u;
          HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor(v14, (__int64)v19, v18, &v17, a4, a5);
          break;
        case 0x31u:
          HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor(
            v14,
            (__int64)v19,
            (unsigned int *)v18,
            &v17,
            a4);
          break;
        default:
          LODWORD(v19[16]) &= 0xFFFFFFF3;
          goto LABEL_35;
      }
      if ( v17 == 1 )
        goto LABEL_8;
      if ( v17 == 2 )
        v15 = 0;
    }
LABEL_35:
    if ( !*v14 )
      break;
    v14 += (unsigned int)v18[0];
  }
  v17 = 0;
  HUBDESC_InternalValidateLastInterface((__int64)v19, &v17, a4);
  if ( v17 != 1 )
  {
    v13 = v15;
    if ( v17 == 2 )
      v13 = 0;
    if ( WORD5(v19[12]) == a1[4] || LOWORD(v19[0]) <= 0x200u && !WORD6(v19[0]) )
    {
      if ( !v13 )
        goto LABEL_44;
      return v13;
    }
  }
LABEL_8:
  v13 = 0;
LABEL_44:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(a4, 2u, 5u, 0x7Du, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids);
  return v13;
}
