/*
 * XREFs of ??1?$unique_ptr@VRawButtonProcessor@@U?$default_delete@VRawButtonProcessor@@@std@@@std@@QEAA@XZ @ 0x1801B41D8
 * Callers:
 *     _RawButtonProcessor::Create_::_1_::dtor$0 @ 0x1801B4642 (_RawButtonProcessor--Create_--_1_--dtor$0.c)
 * Callees:
 *     ??R?$default_delete@VRawButtonProcessor@@@std@@QEBAXPEAVRawButtonProcessor@@@Z @ 0x1801B42F8 (--R-$default_delete@VRawButtonProcessor@@@std@@QEBAXPEAVRawButtonProcessor@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<RawButtonProcessor>::~unique_ptr<RawButtonProcessor>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<RawButtonProcessor>::operator()();
  return result;
}
