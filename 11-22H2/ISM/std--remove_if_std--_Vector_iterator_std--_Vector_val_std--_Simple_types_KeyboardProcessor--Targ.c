/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_KeyboardProcessor::TargetingInfo_______lambda_7e8f1aeb274407a30328aba6a7927ecf___ @ 0x1801BEC6C
 * Callers:
 *     _lambda_ebc29ddd5dd0a3c27fbc9fad58cec528_::operator() @ 0x1801BF180 (_lambda_ebc29ddd5dd0a3c27fbc9fad58cec528_--operator().c)
 * Callees:
 *     ??0TargetingInfo@KeyboardProcessor@@QEAA@AEBU01@@Z @ 0x1801BEE20 (--0TargetingInfo@KeyboardProcessor@@QEAA@AEBU01@@Z.c)
 *     ??4TargetingInfo@KeyboardProcessor@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801BF02C (--4TargetingInfo@KeyboardProcessor@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     _lambda_7e8f1aeb274407a30328aba6a7927ecf_::operator() @ 0x1801BF138 (_lambda_7e8f1aeb274407a30328aba6a7927ecf_--operator().c)
 */

const struct KeyboardProcessor::TargetingInfo **std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_KeyboardProcessor::TargetingInfo_______lambda_7e8f1aeb274407a30328aba6a7927ecf___(
        const struct KeyboardProcessor::TargetingInfo **a1,
        const struct KeyboardProcessor::TargetingInfo *a2,
        const struct KeyboardProcessor::TargetingInfo *a3,
        ...)
{
  const struct KeyboardProcessor::TargetingInfo *i; // rdi
  __int64 v6; // rax
  const struct KeyboardProcessor::TargetingInfo *j; // rsi
  __int64 v8; // rax
  _BYTE v10[384]; // [rsp+20h] [rbp-198h] BYREF
  __int64 v11; // [rsp+1C0h] [rbp+8h] BYREF
  __int64 v12; // [rsp+1D8h] [rbp+20h] BYREF
  va_list va; // [rsp+1D8h] [rbp+20h]
  va_list va1; // [rsp+1E0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v12 = va_arg(va1, _QWORD);
  v11 = v12;
  for ( i = a2; i != a3; i = (const struct KeyboardProcessor::TargetingInfo *)((char *)i + 384) )
  {
    v6 = KeyboardProcessor::TargetingInfo::TargetingInfo((KeyboardProcessor::TargetingInfo *)v10, i);
    if ( (unsigned __int8)lambda_7e8f1aeb274407a30328aba6a7927ecf_::operator()(&v11, v6) )
      break;
  }
  if ( i != a3 )
  {
    for ( j = (const struct KeyboardProcessor::TargetingInfo *)((char *)i + 384);
          j != a3;
          j = (const struct KeyboardProcessor::TargetingInfo *)((char *)j + 384) )
    {
      v8 = KeyboardProcessor::TargetingInfo::TargetingInfo((KeyboardProcessor::TargetingInfo *)v10, j);
      if ( !(unsigned __int8)lambda_7e8f1aeb274407a30328aba6a7927ecf_::operator()((__int64 *)va, v8) )
      {
        KeyboardProcessor::TargetingInfo::operator=(i, j);
        i = (const struct KeyboardProcessor::TargetingInfo *)((char *)i + 384);
      }
    }
  }
  *a1 = i;
  return a1;
}
