/*
 * XREFs of ?ClearVoipCallState@CProcess@@QEAAXXZ @ 0x180026620
 * Callers:
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18002E318 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?VoipCallStateChanged@CApplication@@QEAAXH@Z @ 0x18002AF04 (-VoipCallStateChanged@CApplication@@QEAAXH@Z.c)
 */

void __fastcall CProcess::ClearVoipCallState(CProcess *this)
{
  int v1; // edx

  v1 = *((_DWORD *)this + 128);
  if ( v1 > 0 )
  {
    CApplication::VoipCallStateChanged(*((CApplication **)this + 28), -v1);
    *((_DWORD *)this + 128) = 0;
  }
}
