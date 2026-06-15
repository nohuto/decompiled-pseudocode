/*
 * XREFs of ?GetStreamResourceConsumptionFromMap@CConstraintModel@@QEAAJPEBG0KU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x1800287D0
 * Callers:
 *     ?GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x1800286F8 (-GetStreamResourceConsumption@CConstraintModel@@QEAAJPEAUIMMDevice@@U_GUID@@W4__MIDL___MIDL_itf_.c)
 * Callees:
 *     ?GetResourceConsumptionFromMap@CConstraintModel@@AEAAJPEAVResourceConsumer@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x180028880 (-GetResourceConsumptionFromMap@CConstraintModel@@AEAAJPEAVResourceConsumer@@PEAKPEAPEAU_Resource.c)
 *     ??0StreamResourceConsumer@@QEAA@PEBG0KU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180028998 (--0StreamResourceConsumer@@QEAA@PEBG0KU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CConstraintModel::GetStreamResourceConsumptionFromMap(
        CConstraintModel *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        unsigned int a4,
        struct _GUID *a5,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a6,
        unsigned int *a7,
        struct _ResourceInfo **a8)
{
  struct _GUID v10; // [rsp+30h] [rbp-3F8h] BYREF
  _BYTE v11[976]; // [rsp+40h] [rbp-3E8h] BYREF

  *a8 = 0LL;
  *a7 = 0;
  v10 = *a5;
  StreamResourceConsumer::StreamResourceConsumer((StreamResourceConsumer *)v11, a2, a3, a4, &v10, a6);
  return CConstraintModel::GetResourceConsumptionFromMap(this, (struct ResourceConsumer *)v11, a7, a8);
}
