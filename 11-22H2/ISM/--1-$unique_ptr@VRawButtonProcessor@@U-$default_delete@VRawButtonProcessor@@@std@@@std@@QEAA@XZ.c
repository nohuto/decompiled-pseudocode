/*
 * XREFs of ??1?$unique_ptr@VRawButtonProcessor@@U?$default_delete@VRawButtonProcessor@@@std@@@std@@QEAA@XZ @ 0x1801DFF68
 * Callers:
 *     ?Create@RawButtonProcessor@@SAJPEAPEAV1@@Z @ 0x1801E0244 (-Create@RawButtonProcessor@@SAJPEAPEAV1@@Z.c)
 *     _RawButtonProcessor::Create_::_1_::dtor$0 @ 0x1801E0361 (_RawButtonProcessor--Create_--_1_--dtor$0.c)
 * Callees:
 *     ??R?$default_delete@VRawButtonProcessor@@@std@@QEBAXPEAVRawButtonProcessor@@@Z @ 0x1801E0088 (--R-$default_delete@VRawButtonProcessor@@@std@@QEBAXPEAVRawButtonProcessor@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<RawButtonProcessor>::~unique_ptr<RawButtonProcessor>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<RawButtonProcessor>::operator()();
  return result;
}
