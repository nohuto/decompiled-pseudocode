/*
 * XREFs of ?GrepExtTextOutW@@YAHPEAUHDC__@@HHIPEBUtagRECT@@PEBGIPEBHW4EntryPoint@RFONTOBJ@@@Z @ 0x1C00A1E50
 * Callers:
 *     GreExtTextOutW @ 0x1C00A1DB0 (GreExtTextOutW.c)
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1C00F8AA8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z @ 0x1C00FA9A0 (--0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z.c)
 *     ?GreExtTextOutWInternal@@YAHPEAUHDC__@@HHIPEAUtagRECT@@PEAGHPEAHPEAXKW4EntryPoint@RFONTOBJ@@@Z @ 0x1C0119504 (-GreExtTextOutWInternal@@YAHPEAUHDC__@@HHIPEAUtagRECT@@PEAGHPEAHPEAXKW4EntryPoint@RFONTOBJ@@@Z.c)
 */

__int64 __fastcall GrepExtTextOutW(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  __int64 v11; // rax
  unsigned int v12; // ebx
  _BYTE v14[48]; // [rsp+60h] [rbp-38h] BYREF

  v11 = SGDGetSessionState(a1);
  EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v14, *(struct Gre::Full::SESSION_GLOBALS **)(v11 + 32));
  v12 = GreExtTextOutWInternal(a1, a2, a3, a4, a5, a6, a7, 0LL, 0LL, 0, 1025);
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v14);
  return v12;
}
