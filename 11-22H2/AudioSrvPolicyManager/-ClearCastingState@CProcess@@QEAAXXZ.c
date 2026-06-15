/*
 * XREFs of ?ClearCastingState@CProcess@@QEAAXXZ @ 0x180026590
 * Callers:
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18002E318 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?CastingStateChanged@CApplication@@QEAAXH@Z @ 0x180026084 (-CastingStateChanged@CApplication@@QEAAXH@Z.c)
 */

void __fastcall CProcess::ClearCastingState(CProcess *this)
{
  int v1; // edx

  v1 = *((_DWORD *)this + 127);
  if ( v1 > 0 )
  {
    CApplication::CastingStateChanged(*((CApplication **)this + 28), -v1);
    *((_DWORD *)this + 127) = 0;
  }
}
