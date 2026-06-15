/*
 * XREFs of ??8type_info@@QEBA_NAEBV0@@Z @ 0x14006BE48
 * Callers:
 *     std::_Ref_count_resource_APO_NOTIFICATION____lambda_25192a365a0d14fa66303e23120acf2e___::_Get_deleter @ 0x14002D960 (std--_Ref_count_resource_APO_NOTIFICATION____lambda_25192a365a0d14fa66303e23120acf2e___--_Get_de.c)
 *     std::_Ref_count_resource_APO_NOTIFICATION____lambda_531c70a8ef5ac134501f7f709c27d1ce___::_Get_deleter @ 0x14006E3E0 (std--_Ref_count_resource_APO_NOTIFICATION____lambda_531c70a8ef5ac134501f7f709c27d1ce___--_Get_de.c)
 *     std::_Ref_count_resource_APO_NOTIFICATION____lambda_6c61604b52c911789ec2c1502700d362___::_Get_deleter @ 0x14006E420 (std--_Ref_count_resource_APO_NOTIFICATION____lambda_6c61604b52c911789ec2c1502700d362___--_Get_de.c)
 *     std::_Ref_count_resource_APO_NOTIFICATION____lambda_cbc33f75babf0fb77a3b9cd8ef24f49c___::_Get_deleter @ 0x14006E460 (std--_Ref_count_resource_APO_NOTIFICATION____lambda_cbc33f75babf0fb77a3b9cd8ef24f49c___--_Get_de.c)
 *     std::_Ref_count_resource_APO_NOTIFICATION____lambda_0621df38ea350b0899e45f7555d3c59e___::_Get_deleter @ 0x140072890 (std--_Ref_count_resource_APO_NOTIFICATION____lambda_0621df38ea350b0899e45f7555d3c59e___--_Get_de.c)
 *     std::_Ref_count_resource_APO_NOTIFICATION____lambda_c067a264cd14c0d82b611b89f99b0d23___::_Get_deleter @ 0x1400728D0 (std--_Ref_count_resource_APO_NOTIFICATION____lambda_c067a264cd14c0d82b611b89f99b0d23___--_Get_de.c)
 *     std::_Ref_count_resource_APO_NOTIFICATION____lambda_d416c8336d3055417b20082a58f2fcdf___::_Get_deleter @ 0x140072910 (std--_Ref_count_resource_APO_NOTIFICATION____lambda_d416c8336d3055417b20082a58f2fcdf___--_Get_de.c)
 *     std::_Ref_count_resource_APO_NOTIFICATION____lambda_30ed0489615414490dd79750621aadb3___::_Get_deleter @ 0x140073610 (std--_Ref_count_resource_APO_NOTIFICATION____lambda_30ed0489615414490dd79750621aadb3___--_Get_de.c)
 *     std::_Ref_count_resource_APO_NOTIFICATION____lambda_4249ce5a2e8c53f13907d976739718e9___::_Get_deleter @ 0x1400772D0 (std--_Ref_count_resource_APO_NOTIFICATION____lambda_4249ce5a2e8c53f13907d976739718e9___--_Get_de.c)
 *     std::_Ref_count_resource_APO_NOTIFICATION____lambda_fb374d45151f083911fef4d31606bded___::_Get_deleter @ 0x140078D00 (std--_Ref_count_resource_APO_NOTIFICATION____lambda_fb374d45151f083911fef4d31606bded___--_Get_de.c)
 * Callees:
 *     <none>
 */

bool __fastcall type_info::operator==(__int64 a1, __int64 a2)
{
  return (unsigned int)__std_type_info_compare(a1 + 8, a2 + 8) == 0;
}
