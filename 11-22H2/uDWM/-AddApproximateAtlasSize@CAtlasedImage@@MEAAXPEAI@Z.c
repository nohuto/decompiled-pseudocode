/*
 * XREFs of ?AddApproximateAtlasSize@CAtlasedImage@@MEAAXPEAI@Z @ 0x180013030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAtlasedImage::AddApproximateAtlasSize(CAtlasedImage *this, unsigned int *a2)
{
  _DWORD *v2; // r9
  int v3; // r8d

  v2 = (_DWORD *)*((_QWORD *)this + 9);
  v3 = 0;
  if ( v2 )
  {
    LOBYTE(v3) = v2[8] > 0;
    *a2 += (v3 + 1 + (v2[9] > 0)) * ((v2[10] > 0) + 1 + (v2[11] > 0));
  }
}
