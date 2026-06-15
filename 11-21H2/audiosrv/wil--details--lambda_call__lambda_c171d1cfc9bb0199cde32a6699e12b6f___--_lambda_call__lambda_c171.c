/*
 * XREFs of wil::details::lambda_call__lambda_c171d1cfc9bb0199cde32a6699e12b6f___::_lambda_call__lambda_c171d1cfc9bb0199cde32a6699e12b6f___ @ 0x1800C9E7C
 * Callers:
 *     _CVolumeStrip::RuntimeClassInitialize_::_1_::dtor$6 @ 0x18006EDFC (_CVolumeStrip--RuntimeClassInitialize_--_1_--dtor$6.c)
 *     _CVolumeHardware::Make_::_1_::dtor$1 @ 0x18006EE0E (_CVolumeHardware--Make_--_1_--dtor$1.c)
 *     _CMuteSoftware::Make_::_1_::dtor$1 @ 0x1800CA701 (_CMuteSoftware--Make_--_1_--dtor$1.c)
 *     _CVolumeSoftware::Make_::_1_::dtor$1 @ 0x1800CD3B6 (_CVolumeSoftware--Make_--_1_--dtor$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__lambda_c171d1cfc9bb0199cde32a6699e12b6f___::_lambda_call__lambda_c171d1cfc9bb0199cde32a6699e12b6f___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    return (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)a1 + 16LL))(**(_QWORD **)a1);
  }
  return result;
}
