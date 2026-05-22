/*
 * XREFs of _lambda_ebc29ddd5dd0a3c27fbc9fad58cec528_::operator() @ 0x1801B11A0
 * Callers:
 *     ?OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801B1780 (-OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@YAXPEAUTargetingInfo@KeyboardProcessor@@QEAU12@AEAV?$allocator@UTargetingInfo@KeyboardProcessor@@@0@@Z @ 0x1801B0860 (--$_Destroy_range@V-$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@YAXPEAUTargetingInf.c)
 *     ??$_Move_unchecked@PEAUTargetingInfo@KeyboardProcessor@@PEAU12@@std@@YAPEAUTargetingInfo@KeyboardProcessor@@PEAU12@00@Z @ 0x1801B0A54 (--$_Move_unchecked@PEAUTargetingInfo@KeyboardProcessor@@PEAU12@@std@@YAPEAUTargetingInfo@Keyboar.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_KeyboardProcessor::TargetingInfo_______lambda_7e8f1aeb274407a30328aba6a7927ecf___ @ 0x1801B0C8C (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_KeyboardProcessor--Targ.c)
 */

__int64 *__fastcall lambda_ebc29ddd5dd0a3c27fbc9fad58cec528_::operator()(_QWORD *a1)
{
  __int64 v1; // rdi
  const struct KeyboardProcessor::TargetingInfo *v2; // rbx
  __int64 *result; // rax
  __int64 *v4; // rbx
  const struct KeyboardProcessor::TargetingInfo *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1[1];
  v2 = *(const struct KeyboardProcessor::TargetingInfo **)(v1 + 72);
  result = (__int64 *)std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_KeyboardProcessor::TargetingInfo_______lambda_7e8f1aeb274407a30328aba6a7927ecf___(
                        &v5,
                        *(const struct KeyboardProcessor::TargetingInfo **)(v1 + 64),
                        v2,
                        *a1);
  if ( (const struct KeyboardProcessor::TargetingInfo *)*result != v2 )
  {
    v4 = (__int64 *)std::_Move_unchecked<KeyboardProcessor::TargetingInfo *,KeyboardProcessor::TargetingInfo *>(
                      (__int64)v2,
                      *(_QWORD *)(v1 + 72),
                      *result);
    result = std::_Destroy_range<std::allocator<KeyboardProcessor::TargetingInfo>>(v4, *(__int64 **)(v1 + 72));
    *(_QWORD *)(v1 + 72) = v4;
  }
  return result;
}
