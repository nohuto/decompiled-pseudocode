/*
 * XREFs of ??R?$default_delete@VTSSession@@@std@@QEBAXPEAVTSSession@@@Z @ 0x180034A30
 * Callers:
 *     ??1?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@QEAA@XZ @ 0x180033F9C (--1-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@std@@QEAA@XZ.c)
 *     ?Create@TSSession@@SAJKAEAV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@Z @ 0x180034C90 (-Create@TSSession@@SAJKAEAV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@std@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016C28 (--3@YAXPEAX_K@Z.c)
 *     ??1TSSession@@QEAA@XZ @ 0x1800340EC (--1TSSession@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<TSSession>::operator()(__int64 a1, TSSession *a2)
{
  if ( a2 )
  {
    TSSession::~TSSession(a2);
    operator delete(a2);
  }
}
