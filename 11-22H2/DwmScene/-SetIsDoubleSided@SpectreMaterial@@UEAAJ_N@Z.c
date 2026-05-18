/*
 * XREFs of ?SetIsDoubleSided@SpectreMaterial@@UEAAJ_N@Z @ 0x1800136A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SpectreMaterial::SetIsDoubleSided(SpectreMaterial *this, char a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 2);
  if ( a2 )
    *(_WORD *)(v2 + 112) &= ~0x40u;
  else
    *(_WORD *)(v2 + 112) |= 0x40u;
  return 0LL;
}
