/*
 * XREFs of ??1?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@QEAA@XZ @ 0x18002B418
 * Callers:
 *     _TSSession::Create_::_1_::dtor$1 @ 0x180045ED9 (_TSSession--Create_--_1_--dtor$1.c)
 *     _TsSessionCreate_::_1_::dtor$0 @ 0x180045FF0 (_TsSessionCreate_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ??1TSSession@@QEAA@XZ @ 0x18002B530 (--1TSSession@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<TSSession>::~unique_ptr<TSSession>(TSSession **a1)
{
  TSSession *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    TSSession::~TSSession(*a1);
    operator delete(v1);
  }
}
