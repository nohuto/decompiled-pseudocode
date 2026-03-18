/*
 * XREFs of _InitPwSB @ 0x1C00C7998
 * Callers:
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C009E2A0 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     xxxSetScrollBar @ 0x1C00C6C68 (xxxSetScrollBar.c)
 *     CalcSBStuff @ 0x1C00C7878 (CalcSBStuff.c)
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 *     xxxShowScrollBar @ 0x1C0231FE0 (xxxShowScrollBar.c)
 * Callees:
 *     DesktopAlloc @ 0x1C0065280 (DesktopAlloc.c)
 *     ??4?$SharedPointerFieldpSBInfo@UtagSBINFO@@@tagWND@@QEAAPEAUtagSBINFO@@PEAU2@@Z @ 0x1C00C405C (--4-$SharedPointerFieldpSBInfo@UtagSBINFO@@@tagWND@@QEAAPEAUtagSBINFO@@PEAU2@@Z.c)
 */

__int64 __fastcall InitPwSB(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax
  PVOID v3; // rax

  v1 = (_QWORD *)(a1 + 152);
  result = *(_QWORD *)(a1 + 152);
  if ( !result )
  {
    v3 = DesktopAlloc(*(_QWORD *)(a1 + 24), 0x24u);
    tagWND::SharedPointerFieldpSBInfo<tagSBINFO>::operator=(v1, (__int64)v3);
    if ( *v1 )
    {
      *(_DWORD *)(*v1 + 24LL) = 100;
      *(_DWORD *)(*v1 + 8LL) = 100;
    }
    return *v1;
  }
  return result;
}
