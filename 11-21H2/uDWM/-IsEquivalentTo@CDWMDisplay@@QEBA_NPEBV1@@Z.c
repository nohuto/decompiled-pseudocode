/*
 * XREFs of ?IsEquivalentTo@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x1800BBC64
 * Callers:
 *     ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x18003E6AC (-IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z.c)
 * Callees:
 *     memcmp_0 @ 0x1800636EF (memcmp_0.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800BBB94 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800BBBFC (-IsEquivalentTo@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 */

bool __fastcall CDWMDisplay::IsEquivalentTo(CDWMDisplay *this, const struct CDWMDisplay *a2)
{
  unsigned __int16 *v4; // rax
  int v5; // r8d
  int v6; // ecx

  if ( *((_DWORD *)this + 42) != *((_DWORD *)a2 + 42)
    || *((_DWORD *)this + 43) != *((_DWORD *)a2 + 43)
    || *((_QWORD *)this + 2) != *((_QWORD *)a2 + 2)
    || !TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo((_DWORD *)this + 14, (_DWORD *)a2 + 14)
    || !TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEquivalentTo(
          (_DWORD *)this + 10,
          (_DWORD *)a2 + 10) )
  {
    return 0;
  }
  v4 = (unsigned __int16 *)((char *)this + 96);
  do
  {
    v5 = *(unsigned __int16 *)((char *)v4 + a2 - this);
    v6 = *v4 - v5;
    if ( v6 )
      break;
    ++v4;
  }
  while ( v5 );
  return !v6
      && *((_DWORD *)this + 40) == *((_DWORD *)a2 + 40)
      && !memcmp_0((char *)this + 188, (char *)a2 + 188, 0x1CuLL)
      && *((_DWORD *)this + 54) == *((_DWORD *)a2 + 54)
      && *((_DWORD *)this + 51) == *((_DWORD *)a2 + 51)
      && *((_DWORD *)this + 55) == *((_DWORD *)a2 + 55)
      && *((_BYTE *)this + 255) == *((_BYTE *)a2 + 255);
}
