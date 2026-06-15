/*
 * XREFs of ?GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x18000FD84
 * Callers:
 *     ?AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KPEA_K@Z @ 0x180011F60 (-AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAVCEndpointCharacteristics@@U_G.c)
 *     ?ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z @ 0x1800149A0 (-ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z.c)
 *     ?DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x180014D6C (-DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleI.c)
 *     ?QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@K@Z @ 0x180101340 (-QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEAVCEndpointCharacteri.c)
 * Callees:
 *     ?GetEndpointInformationFromId@CConstraintModel@@QEAAJPEAUIMMDevice@@PEAGI1IPEAK@Z @ 0x18000CC44 (-GetEndpointInformationFromId@CConstraintModel@@QEAAJPEAUIMMDevice@@PEAGI1IPEAK@Z.c)
 *     ?GetStreamResourceConsumptionFromMap@CConstraintModel@@QEAAJPEBG0KU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x18000FE5C (-GetStreamResourceConsumptionFromMap@CConstraintModel@@QEAAJPEBG0KU_GUID@@W4__MIDL___MIDL_itf_au.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 */

__int64 __fastcall CConstraintModel::GetStreamResourceConsumption(
        CConstraintModel *this,
        struct IMMDevice *a2,
        struct _GUID *a3,
        __int32 a4,
        unsigned int *a5,
        struct _ResourceInfo **a6)
{
  __int64 result; // rax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v10; // [rsp+28h] [rbp-410h]
  unsigned int v11[4]; // [rsp+40h] [rbp-3F8h] BYREF
  struct _GUID v12; // [rsp+50h] [rbp-3E8h] BYREF
  unsigned __int16 v13[208]; // [rsp+60h] [rbp-3D8h] BYREF
  unsigned __int16 v14[264]; // [rsp+200h] [rbp-238h] BYREF

  *a6 = 0LL;
  *a5 = 0;
  result = CConstraintModel::GetEndpointInformationFromId(this, a2, v13, a4, v14, v10, v11);
  if ( (int)result >= 0 )
  {
    v12 = *a3;
    return CConstraintModel::GetStreamResourceConsumptionFromMap(
             this,
             v13,
             v14,
             v11[0],
             &v12,
             (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a4,
             a5,
             a6);
  }
  return result;
}
