/*
 * XREFs of ?GetResourceConsumptionFromMap@CConstraintModel@@AEAAJPEAVResourceConsumer@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x18000FF80
 * Callers:
 *     ?GetStreamResourceConsumptionFromMap@CConstraintModel@@QEAAJPEBG0KU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x18000FE5C (-GetStreamResourceConsumptionFromMap@CConstraintModel@@QEAAJPEBG0KU_GUID@@W4__MIDL___MIDL_itf_au.c)
 *     ?GetPhoneCallResourceConsumption@CConstraintModel@@QEAAJW4ConsumerState@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x180160058 (-GetPhoneCallResourceConsumption@CConstraintModel@@QEAAJW4ConsumerState@@PEAKPEAPEAU_ResourceInf.c)
 * Callees:
 *     ?Lookup@?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@QEBA_NAEBQEAVResourceConsumer@@AEAPEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@2@@Z @ 0x18000CB88 (-Lookup@-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL.c)
 *     ?GetResourceInfoArrayFromResourceList@CConstraintModel@@AEAAJPEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@W4RmResourceType@@KPEAKPEAPEAU_ResourceInfo@@@Z @ 0x18016009C (-GetResourceInfoArrayFromResourceList@CConstraintModel@@AEAAJPEAV-$CAtlList@U_ResourceInfo@@VRes.c)
 */

__int64 __fastcall CConstraintModel::GetResourceConsumptionFromMap(
        CConstraintModel *this,
        struct ResourceConsumer *a2,
        unsigned int *a3,
        struct _ResourceInfo **a4)
{
  unsigned int v4; // ebx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  struct ResourceConsumer *v11; // [rsp+48h] [rbp+10h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v11 = a2;
  v4 = 0;
  *a4 = 0LL;
  *a3 = 0;
  if ( ATL::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>::Lookup(
         (_DWORD)this + 128,
         (int)&v11,
         &v12) )
  {
    return (unsigned int)CConstraintModel::GetResourceInfoArrayFromResourceList(
                           v7,
                           v12,
                           v8,
                           v9,
                           (__int64)a3,
                           (__int64)a4);
  }
  else
  {
    *a3 = 0;
    *a4 = 0LL;
  }
  return v4;
}
