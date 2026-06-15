/*
 * XREFs of ?Run@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z @ 0x140052094
 * Callers:
 *     ?WinMain@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAHH@Z @ 0x140052528 (-WinMain@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAHH@Z.c)
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1400260A0 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     _lambda_10c7ce318882e0e942d95a651b89d589_::operator() @ 0x140050520 (_lambda_10c7ce318882e0e942d95a651b89d589_--operator().c)
 *     ?PostMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x1400516E0 (-PostMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x1400520F8 (-RunMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CAtlExeModuleT<CAudioDGModule>::Run(CAudioDGModule *this, int a2)
{
  void *v3; // rdx
  wil::details *v4; // rcx
  __int64 result; // rax
  __int64 v6[3]; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v6[0] = (__int64)this;
  v6[1] = (__int64)&v7;
  *((_DWORD *)this + 28) = lambda_10c7ce318882e0e942d95a651b89d589_::operator()(v6);
  v4 = (wil::details *)*((_QWORD *)this + 16);
  if ( v4 )
    wil::details::SetEvent(v4, v3);
  result = *((unsigned int *)this + 28);
  if ( (_DWORD)result )
  {
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    CAudioDGModule::RunMessageLoop(this);
  }
  return CAudioDGModule::PostMessageLoop(this);
}
