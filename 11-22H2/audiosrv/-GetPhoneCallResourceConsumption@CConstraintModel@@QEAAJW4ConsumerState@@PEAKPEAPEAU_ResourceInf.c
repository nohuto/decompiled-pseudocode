/*
 * XREFs of ?GetPhoneCallResourceConsumption@CConstraintModel@@QEAAJW4ConsumerState@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x180160058
 * Callers:
 *     ?AcquirePhoneCallResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z @ 0x1800FED20 (-AcquirePhoneCallResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z.c)
 *     ?ReacquirePhoneCallResource@CConstraintModelResourceManager@@UEAAJHPEA_K@Z @ 0x180101820 (-ReacquirePhoneCallResource@CConstraintModelResourceManager@@UEAAJHPEA_K@Z.c)
 * Callees:
 *     ?GetResourceConsumptionFromMap@CConstraintModel@@AEAAJPEAVResourceConsumer@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x18000FF80 (-GetResourceConsumptionFromMap@CConstraintModel@@AEAAJPEAVResourceConsumer@@PEAKPEAPEAU_Resource.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CConstraintModel::GetPhoneCallResourceConsumption(
        CConstraintModel *a1,
        int a2,
        unsigned int *a3,
        struct _ResourceInfo **a4)
{
  void **v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  *a4 = 0LL;
  *a3 = 0;
  v6 = 0;
  v5 = &PhoneCallResourceConsumer::`vftable';
  v7 = a2;
  return CConstraintModel::GetResourceConsumptionFromMap(a1, (struct ResourceConsumer *)&v5, a3, a4);
}
