/*
 * XREFs of ??1?$unique_ptr@VDockProcessor@@U?$default_delete@VDockProcessor@@@std@@@std@@QEAA@XZ @ 0x1801E6370
 * Callers:
 *     ?Create@DockProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1801E6450 (-Create@DockProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 *     _DockProcessor::Create_::_1_::dtor$0 @ 0x1801E6541 (_DockProcessor--Create_--_1_--dtor$0.c)
 * Callees:
 *     ??R?$default_delete@VDockProcessor@@@std@@QEBAXPEAVDockProcessor@@@Z @ 0x1801E6390 (--R-$default_delete@VDockProcessor@@@std@@QEBAXPEAVDockProcessor@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<DockProcessor>::~unique_ptr<DockProcessor>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<DockProcessor>::operator()();
  return result;
}
