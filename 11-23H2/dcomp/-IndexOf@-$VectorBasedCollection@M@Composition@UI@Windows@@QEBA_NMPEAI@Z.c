/*
 * XREFs of ?IndexOf@?$VectorBasedCollection@M@Composition@UI@Windows@@QEBA_NMPEAI@Z @ 0x180171004
 * Callers:
 *     ?IndexOf@?$ImplementsIVectorWinRt@VCompositionStrokeDashArray@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJMPEAIPEAE@Z @ 0x180170F00 (-IndexOf@-$ImplementsIVectorWinRt@VCompositionStrokeDashArray@Composition@UI@Windows@@$$V@Compos.c)
 * Callees:
 *     <none>
 */

bool __fastcall Windows::UI::Composition::VectorBasedCollection<float>::IndexOf(__int64 a1, float a2, _DWORD *a3)
{
  float *i; // rax
  __int64 v5; // rcx

  for ( i = *(float **)(a1 + 8); ; ++i )
  {
    if ( i == *(float **)(a1 + 16) )
    {
      LODWORD(v5) = 0;
      goto LABEL_6;
    }
    if ( *i == a2 )
      break;
  }
  v5 = ((__int64)i - *(_QWORD *)(a1 + 8)) >> 2;
LABEL_6:
  *a3 = v5;
  return i != *(float **)(a1 + 16);
}
