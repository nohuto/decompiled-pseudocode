/*
 * XREFs of ??1CommandRegistrationToken@TestCommandHost@@QEAA@XZ @ 0x18011686C
 * Callers:
 *     _DWMCursor::DWMCursor_::_1_::dtor$5 @ 0x18006FBD1 (_DWMCursor--DWMCursor_--_1_--dtor$5.c)
 *     ??1DWMCursor@@MEAA@XZ @ 0x1801EE46C (--1DWMCursor@@MEAA@XZ.c)
 * Callees:
 *     ?UnregisterForTestCommandMessage@TestCommandHost@@CAXW4TestCommandMessageType@@PEAXQ6A_N1PEAUTestCommandMessageDataHeader@@@Z@Z @ 0x180116AB8 (-UnregisterForTestCommandMessage@TestCommandHost@@CAXW4TestCommandMessageType@@PEAXQ6A_N1PEAUTes.c)
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
