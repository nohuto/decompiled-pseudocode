/*
 * XREFs of ??1CommandRegistrationToken@TestCommandHost@@QEAA@XZ @ 0x1801248DC
 * Callers:
 *     _DWMCursor::DWMCursor_::_1_::dtor$5 @ 0x1800836D8 (_DWMCursor--DWMCursor_--_1_--dtor$5.c)
 *     ??1DWMCursor@@MEAA@XZ @ 0x1801FB19C (--1DWMCursor@@MEAA@XZ.c)
 * Callees:
 *     ?UnregisterForTestCommandMessage@TestCommandHost@@CAXW4TestCommandMessageType@@PEAXQ6A_N1PEAUTestCommandMessageDataHeader@@@Z@Z @ 0x180124B28 (-UnregisterForTestCommandMessage@TestCommandHost@@CAXW4TestCommandMessageType@@PEAXQ6A_N1PEAUTes.c)
 */

void __fastcall TestCommandHost::CommandRegistrationToken::~CommandRegistrationToken(
        TestCommandHost::CommandRegistrationToken *this)
{
  if ( *((_BYTE *)this + 24) )
    TestCommandHost::UnregisterForTestCommandMessage(
      *(unsigned int *)this,
      *((_QWORD *)this + 1),
      *((_QWORD *)this + 2));
}
