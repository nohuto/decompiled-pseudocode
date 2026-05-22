/*
 * XREFs of ?DLLMain@wil@@YAXPEAUHINSTANCE__@@KPEAX@Z @ 0x1800834FC
 * Callers:
 *     DllMain @ 0x18009C1A4 (DllMain.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::DLLMain(wil *this, HINSTANCE a2, __int64 a3, void *a4)
{
  if ( !wil::details::g_processShutdownInProgress && !(_DWORD)a2 )
    wil::details::g_processShutdownInProgress = a3 != 0;
}
