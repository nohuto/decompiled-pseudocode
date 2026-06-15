/*
 * XREFs of ?WinMain@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAHH@Z @ 0x140001A04
 * Callers:
 *     wWinMain @ 0x140001774 (wWinMain.c)
 * Callees:
 *     ?ParseCommandLine@CAudioDGModule@@QEAA_NPEBGPEAJ@Z @ 0x140001890 (-ParseCommandLine@CAudioDGModule@@QEAA_NPEBGPEAJ@Z.c)
 *     ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140001A9C (-RunMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x140001FCC (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     _lambda_d1a8b950306abda3aed68804ea97f7ae_::operator() @ 0x140002364 (_lambda_d1a8b950306abda3aed68804ea97f7ae_--operator().c)
 *     ?PostMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140051130 (-PostMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CAtlExeModuleT<CAudioDGModule>::WinMain(CAudioDGModule *this, int a2)
{
  unsigned int v4; // ebx
  const unsigned __int16 *CommandLineW; // rax
  int *v6; // r8
  void *v7; // rdx
  wil::details *v8; // rcx
  int v9; // eax
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  if ( ATL::CAtlBaseModule::m_bInitFailed )
    return 0xFFFFFFFFLL;
  CommandLineW = GetCommandLineW();
  if ( CAudioDGModule::ParseCommandLine((void **)this, CommandLineW, v6) == 1 )
  {
    v12 = a2;
    v11[0] = this;
    v11[1] = &v12;
    *((_DWORD *)this + 28) = lambda_d1a8b950306abda3aed68804ea97f7ae_::operator()(v11);
    v8 = (wil::details *)*((_QWORD *)this + 16);
    if ( v8 )
      wil::details::SetEvent(v8, v7);
    v9 = *((_DWORD *)this + 28);
    if ( v9 )
    {
      if ( v9 < 0 )
        return (unsigned int)v9;
    }
    else
    {
      CAudioDGModule::RunMessageLoop(this);
    }
    return (unsigned int)CAudioDGModule::PostMessageLoop(this);
  }
  return v4;
}
