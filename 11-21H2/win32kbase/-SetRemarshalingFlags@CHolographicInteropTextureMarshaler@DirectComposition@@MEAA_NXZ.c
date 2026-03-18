/*
 * XREFs of ?SetRemarshalingFlags@CHolographicInteropTextureMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C022D1D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CHolographicInteropTextureMarshaler::SetRemarshalingFlags(
        DirectComposition::CHolographicInteropTextureMarshaler *this)
{
  char v1; // dl
  int v2; // eax

  v1 = 0;
  v2 = *((_DWORD *)this + 4) | 0x20;
  *((_DWORD *)this + 4) = v2;
  if ( *((_DWORD *)this + 19) || *((_DWORD *)this + 20) || *((_DWORD *)this + 17) || *((_DWORD *)this + 18) )
  {
    v2 |= 0x40u;
    *((_DWORD *)this + 4) = v2;
  }
  if ( *((_DWORD *)this + 16) )
  {
    v2 |= 0x100u;
    *((_DWORD *)this + 4) = v2;
  }
  if ( *((_QWORD *)this + 12) )
  {
    v2 |= 0x80u;
    *((_DWORD *)this + 4) = v2;
  }
  if ( *((_DWORD *)this + 21) || (v2 & 0xC0) != 0 )
    return 1;
  return v1;
}
