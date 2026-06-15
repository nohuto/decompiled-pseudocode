/*
 * XREFs of ??8type_info@@QEBA_NAEBV0@@Z @ 0x140064F60
 * Callers:
 *     std::_Ref_count_resource_APO_NOTIFICATION____lambda_6c61604b52c911789ec2c1502700d362___::_Get_deleter @ 0x140066A30 (std--_Ref_count_resource_APO_NOTIFICATION____lambda_6c61604b52c911789ec2c1502700d362___--_Get_de.c)
 *     std::_Ref_count_resource_APO_NOTIFICATION____lambda_b867930fc3d1b2394d98ea6847392b82___::_Get_deleter @ 0x140066A70 (std--_Ref_count_resource_APO_NOTIFICATION____lambda_b867930fc3d1b2394d98ea6847392b82___--_Get_de.c)
 *     std::_Ref_count_resource_APO_NOTIFICATION____lambda_0621df38ea350b0899e45f7555d3c59e___::_Get_deleter @ 0x14006A280 (std--_Ref_count_resource_APO_NOTIFICATION____lambda_0621df38ea350b0899e45f7555d3c59e___--_Get_de.c)
 *     std::_Ref_count_resource_APO_NOTIFICATION____lambda_13b7348c3c30ab25c586bc89b5f46700___::_Get_deleter @ 0x14006A2C0 (std--_Ref_count_resource_APO_NOTIFICATION____lambda_13b7348c3c30ab25c586bc89b5f46700___--_Get_de.c)
 *     std::_Ref_count_resource_APO_NOTIFICATION____lambda_30ed0489615414490dd79750621aadb3___::_Get_deleter @ 0x14006AFF0 (std--_Ref_count_resource_APO_NOTIFICATION____lambda_30ed0489615414490dd79750621aadb3___--_Get_de.c)
 * Callees:
 *     <none>
 */

bool __fastcall type_info::operator==(__int64 a1, __int64 a2)
{
  return (unsigned int)__std_type_info_compare(a1 + 8, a2 + 8) == 0;
}
