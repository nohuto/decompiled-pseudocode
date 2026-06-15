/*
 * XREFs of ?GetCurrentSessionGain@CAudioSession@@IEAAXPEA_NPEAMPEA_J@Z @ 0x18000B8D0
 * Callers:
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180009CA0 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     _lambda_b08f66900c5e6cc9009fb22e38011b96_::operator() @ 0x180070D9C (_lambda_b08f66900c5e6cc9009fb22e38011b96_--operator().c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioSession::GetCurrentSessionGain(CAudioSession *this, bool *a2, float *a3, __int64 *a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbp

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 736);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  *a4 = 50000LL;
  *a3 = *((float *)this + 194);
  *a2 = *((_DWORD *)this + 195) != 0;
  if ( v4 )
    LeaveCriticalSection(v4);
}
