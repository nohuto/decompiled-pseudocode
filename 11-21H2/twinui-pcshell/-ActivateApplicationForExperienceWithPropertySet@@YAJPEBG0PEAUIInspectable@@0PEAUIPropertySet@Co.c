/*
 * XREFs of ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG0PEAUIInspectable@@0PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x1800A4818
 * Callers:
 *     _lambda_ccf65d9649214ffd774f2e628ae5cb52_::operator() @ 0x18019C97C (_lambda_ccf65d9649214ffd774f2e628ae5cb52_--operator().c)
 *     _lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_::operator() @ 0x18019CDF8 (_lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_--operator().c)
 *     _lambda_5a859347bbbbbb78c34c3a6938b2a83e_::operator() @ 0x1801A7048 (_lambda_5a859347bbbbbb78c34c3a6938b2a83e_--operator().c)
 * Callees:
 *     ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f___ @ 0x1800A4864 (ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f___.c)
 */

__int64 __fastcall ActivateApplicationForExperienceWithPropertySet(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7)
{
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  v8[1] = L"Windows.Launch";
  v8[0] = a1;
  v8[2] = a3;
  v8[3] = a7;
  return ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f_(a4, a5, a6, v8);
}
