/*
 * XREFs of ?GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ @ 0x1C0084B7C
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006E60C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxSetLayeredWindow @ 0x1C0082DD4 (xxxSetLayeredWindow.c)
 *     SelectWindowRgn @ 0x1C00847C0 (SelectWindowRgn.c)
 *     OffsetWindow @ 0x1C0084A28 (OffsetWindow.c)
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1C0090220 (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C012FB54 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 *     NtUserGetWindowRgnEx @ 0x1C01F7560 (NtUserGetWindowRgnEx.c)
 * Callees:
 *     <none>
 */

HRGN __fastcall tagWND::GetExplicitClipRgn(tagWND *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 5);
  if ( (*(_BYTE *)(v1 + 21) & 8) != 0 )
    return 0LL;
  else
    return *(HRGN *)(v1 + 168);
}
