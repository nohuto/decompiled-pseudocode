/*
 * XREFs of ?OnKeyEvent@CPTPProcessor@@SAXE_N@Z @ 0x1C01DE9BC
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C00CABA0 (xxxProcessKeyEvent.c)
 * Callees:
 *     ?IsOurKey@CPTPProcessor@@CA_NE_N@Z @ 0x1C00E8904 (-IsOurKey@CPTPProcessor@@CA_NE_N@Z.c)
 *     ?OnKeyPress@CPTPProcessor@@CAX_N@Z @ 0x1C00E8AB2 (-OnKeyPress@CPTPProcessor@@CAX_N@Z.c)
 */

void __fastcall CPTPProcessor::OnKeyEvent(char a1, char a2)
{
  unsigned __int64 v4; // rcx
  int v5; // ebx

  _InterlockedExchange64(&qword_1C029AC90, KeQueryPerformanceCounter(0LL).QuadPart);
  v5 = 1;
  if ( (BYTE4(gafAsyncKeyState) & 4) != 0
    || (BYTE4(gafAsyncKeyState) & 0x10) != 0
    || (BYTE6(xmmword_1C0294E60) & 0x40) != 0
    || (BYTE7(xmmword_1C0294E60) & 1) != 0 )
  {
    if ( !dword_1C029AC9C )
    {
      _InterlockedExchange64(&qword_1C029AC80, 0LL);
      _InterlockedExchange64(&qword_1C029AC88, 0LL);
      _InterlockedExchange64(&qword_1C029D9E0, 0LL);
      _InterlockedExchange64(&qword_1C029D9E8, 0LL);
    }
  }
  else
  {
    LOBYTE(v4) = a1;
    v5 = 0;
    if ( CPTPProcessor::IsOurKey(v4, a2) )
      CPTPProcessor::OnKeyPress(a2);
  }
  dword_1C029AC9C = v5;
}
