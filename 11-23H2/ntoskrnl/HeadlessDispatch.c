/*
 * XREFs of HeadlessDispatch @ 0x1403773F0
 * Callers:
 *     BgkDisplayStringEx @ 0x14054F464 (BgkDisplayStringEx.c)
 *     BvgaDisplayString @ 0x14054F910 (BvgaDisplayString.c)
 *     BvgaSetTextColor @ 0x14054FBD0 (BvgaSetTextColor.c)
 *     BvgaSolidColorFill @ 0x14054FC30 (BvgaSolidColorFill.c)
 *     KiBugCheckDebugBreak @ 0x140569E20 (KiBugCheckDebugBreak.c)
 *     KiDisplayBlueScreen @ 0x14056A7F4 (KiDisplayBlueScreen.c)
 *     KiHeadlessDisplayString @ 0x14056AD60 (KiHeadlessDisplayString.c)
 *     EtwpInitializeActivityIdSeed @ 0x14081DBFC (EtwpInitializeActivityIdSeed.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     HdlspDispatch @ 0x140AE9EB0 (HdlspDispatch.c)
 */

__int64 __fastcall HeadlessDispatch(__int64 a1, __int64 a2, __int64 a3, void *a4, size_t *a5)
{
  int v6; // eax

  if ( !HeadlessGlobals || !HeadlessGlobals[1] )
  {
    if ( (_DWORD)a1 == 21 || (_DWORD)a1 == 1 )
      return 3221225473LL;
    if ( (unsigned int)a1 <= 0x10 )
    {
      v6 = 79876;
      if ( _bittest(&v6, a1) )
      {
        if ( !a4 || !a5 )
          return 3221225485LL;
        memset(a4, 0, *a5);
      }
    }
    return 0LL;
  }
  return HdlspDispatch(a1);
}
