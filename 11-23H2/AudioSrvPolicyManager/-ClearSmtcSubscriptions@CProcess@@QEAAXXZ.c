/*
 * XREFs of ?ClearSmtcSubscriptions@CProcess@@QEAAXXZ @ 0x180026410
 * Callers:
 *     ?RuntimeClassInitialize@CProcess@@QEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z @ 0x18002975C (-RuntimeClassInitialize@CProcess@@QEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18002E128 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CProcess::ClearSmtcSubscriptions(CProcess *this)
{
  unsigned int v1; // eax
  _DWORD *v2; // rcx

  v1 = 0;
  v2 = (_DWORD *)((char *)this + 496);
  do
  {
    *v2 = 0;
    ++v1;
    ++v2;
  }
  while ( v1 < 2 );
}
