/*
 * XREFs of wil::details::lambda_call__lambda_c171d1cfc9bb0199cde32a6699e12b6f___::_lambda_call__lambda_c171d1cfc9bb0199cde32a6699e12b6f___ @ 0x1801108FC
 * Callers:
 *     ?Make@CVolumeHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIVolumeControlHandler@@@Z @ 0x180020F4C (-Make@CVolumeHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIVolum.c)
 *     ?Make@CMuteHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIMuteControlHandler@@@Z @ 0x1800212E0 (-Make@CMuteHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIMuteCon.c)
 *     _CVolumeStrip::RuntimeClassInitialize_::_1_::dtor$6 @ 0x180079BBC (_CVolumeStrip--RuntimeClassInitialize_--_1_--dtor$6.c)
 *     _CVolumeHardware::Make_::_1_::dtor$1 @ 0x180079D77 (_CVolumeHardware--Make_--_1_--dtor$1.c)
 *     ?Make@CMuteSoftware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAPEAVIMuteControlHandler@@@Z @ 0x180110F2C (-Make@CMuteSoftware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAPEAVIMuteControlHandler@@@Z.c)
 *     _CMuteSoftware::Make_::_1_::dtor$1 @ 0x18011107D (_CMuteSoftware--Make_--_1_--dtor$1.c)
 *     ?Make@CVolumeSoftware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAPEAVIVolumeControlHandler@@@Z @ 0x1801282E8 (-Make@CVolumeSoftware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAPEAVIVolumeControlHandler@.c)
 *     _CVolumeSoftware::Make_::_1_::dtor$1 @ 0x180128412 (_CVolumeSoftware--Make_--_1_--dtor$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
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
