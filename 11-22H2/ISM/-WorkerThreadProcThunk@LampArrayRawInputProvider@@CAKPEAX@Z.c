/*
 * XREFs of ?WorkerThreadProcThunk@LampArrayRawInputProvider@@CAKPEAX@Z @ 0x18004C630
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@LampArrayRawInputProvider@@UEAAKXZ @ 0x180019E50 (-Release@LampArrayRawInputProvider@@UEAAKXZ.c)
 *     ?WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ @ 0x18004C684 (-WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ.c)
 */

__int64 __fastcall LampArrayRawInputProvider::WorkerThreadProcThunk(LampArrayRawInputProvider *Parameter)
{
  DWORD v2; // edi
  HMODULE v3; // rbx

  if ( Parameter )
  {
    v2 = LampArrayRawInputProvider::WorkerThreadProc(Parameter);
    v3 = (HMODULE)*((_QWORD *)Parameter + 21);
    *((_QWORD *)Parameter + 21) = 0LL;
    LampArrayRawInputProvider::Release(Parameter);
    FreeLibraryAndExitThread(v3, v2);
  }
  return 87LL;
}
