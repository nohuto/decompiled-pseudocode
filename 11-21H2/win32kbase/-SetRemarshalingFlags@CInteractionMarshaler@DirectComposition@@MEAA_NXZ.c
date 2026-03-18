/*
 * XREFs of ?SetRemarshalingFlags@CInteractionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C022C340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CInteractionMarshaler::SetRemarshalingFlags(
        DirectComposition::CInteractionMarshaler *this)
{
  unsigned int v1; // eax
  char v2; // dl
  bool result; // al

  v1 = *((_DWORD *)this + 4) & 0xFFFFFEDF;
  *((_DWORD *)this + 4) = v1;
  if ( *((_QWORD *)this + 34) )
  {
    v1 |= 0x40u;
    *((_DWORD *)this + 4) = v1;
  }
  v2 = *((_BYTE *)this + 340);
  if ( (v2 & 0x3F) != 0 || *((_DWORD *)this + 84) != 4 )
  {
    v1 |= 0x200u;
    *((_DWORD *)this + 4) = v1;
  }
  if ( *((_QWORD *)this + 40) )
  {
    v1 |= 0x400u;
    *((_DWORD *)this + 4) = v1;
  }
  if ( *((_QWORD *)this + 41) )
  {
    v1 |= 0x2000u;
    *((_DWORD *)this + 4) = v1;
  }
  if ( (v2 & 0x40) == 0 || v2 >= 0 )
    *((_DWORD *)this + 4) = v1 | 0x800;
  *((_DWORD *)this + 19) |= 0x1Fu;
  result = 1;
  *((_DWORD *)this + 45) |= 0x1Fu;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 56) = 0;
  *((_DWORD *)this + 62) = 0;
  return result;
}
