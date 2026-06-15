/*
 * XREFs of ?RelocateElements@?$CElementTraitsBase@PEAUAPO_CONNECTION_DESCRIPTOR@@@ATL@@SAXPEAPEAUAPO_CONNECTION_DESCRIPTOR@@0_K@Z @ 0x14008F624
 * Callers:
 *     _ATL::CAtlArray_APO_CONNECTION_DESCRIPTOR___ATL::CElementTraits_APO_CONNECTION_DESCRIPTOR_____::InsertAt_::_1_::catch$0 @ 0x140035187 (_ATL--CAtlArray_APO_CONNECTION_DESCRIPTOR___ATL--CElementTraits_APO_CONNECTION_DESCRIPTOR_____--.c)
 * Callees:
 *     memmove_s @ 0x140021438 (memmove_s.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B9DC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

errno_t __fastcall ATL::CElementTraitsBase<APO_CONNECTION_DESCRIPTOR *>::RelocateElements(
        void *a1,
        const void *a2,
        __int64 a3)
{
  errno_t result; // eax

  result = memmove_s(a1, 8 * a3, a2, 8 * a3);
  if ( result )
  {
    if ( result == 12 )
      ATL::AtlThrowImpl(-2147024882);
    if ( result == 22 || result == 34 )
      ATL::AtlThrowImpl(-2147024809);
    if ( result != 80 )
      ATL::AtlThrowImpl(-2147467259);
  }
  return result;
}
