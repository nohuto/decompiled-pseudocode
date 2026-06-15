/*
 * XREFs of ?WinMain@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAHH@Z @ 0x1400524E8
 * Callers:
 *     wWinMain @ 0x140052B98 (wWinMain.c)
 * Callees:
 *     ?ParseCommandLine@CAudioDGModule@@QEAA_NPEBGPEAJ@Z @ 0x140051560 (-ParseCommandLine@CAudioDGModule@@QEAA_NPEBGPEAJ@Z.c)
 *     ?Run@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z @ 0x140052054 (-Run@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z.c)
 */

__int64 __fastcall ATL::CAtlExeModuleT<CAudioDGModule>::WinMain(CAudioDGModule *this, int a2)
{
  unsigned int v2; // ebx
  const unsigned __int16 *CommandLineW; // rax
  int *v7; // r8

  v2 = 0;
  if ( ATL::CAtlBaseModule::m_bInitFailed )
    return 0xFFFFFFFFLL;
  CommandLineW = GetCommandLineW();
  if ( CAudioDGModule::ParseCommandLine((wil::details **)this, CommandLineW, v7) == 1 )
    return (unsigned int)ATL::CAtlExeModuleT<CAudioDGModule>::Run(this, a2);
  return v2;
}
