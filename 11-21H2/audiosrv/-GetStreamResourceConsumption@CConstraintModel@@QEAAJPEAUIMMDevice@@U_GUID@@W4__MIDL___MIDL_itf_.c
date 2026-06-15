/*
 * XREFs of ?GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x1800286F8
 * Callers:
 *     ?AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KPEA_K@Z @ 0x180065D10 (-AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAVCEndpointCharacteristics@@U_G.c)
 *     ?DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x18010AD60 (-DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleI.c)
 *     ?QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@K@Z @ 0x18010CAD0 (-QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEAVCEndpointCharacteri.c)
 *     ?ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z @ 0x18010D4D0 (-ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z.c)
 * Callees:
 *     ?GetStreamResourceConsumptionFromMap@CConstraintModel@@QEAAJPEBG0KU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x1800287D0 (-GetStreamResourceConsumptionFromMap@CConstraintModel@@QEAAJPEBG0KU_GUID@@W4__MIDL___MIDL_itf_au.c)
 *     ?GetEndpointInformationFromId@CConstraintModel@@QEAAJPEAUIMMDevice@@PEAGI1IPEAK@Z @ 0x180028A10 (-GetEndpointInformationFromId@CConstraintModel@@QEAAJPEAUIMMDevice@@PEAGI1IPEAK@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 */

__int64 __fastcall CConstraintModel::GetStreamResourceConsumption(
        CConstraintModel *this,
        struct IMMDevice *a2,
        struct _GUID *a3,
        unsigned __int32 a4,
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
