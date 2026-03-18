/*
 * XREFs of ?SetRemarshalingFlags@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C022B730
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C022AD80 (-SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CConditionalExpressionMarshaler::SetRemarshalingFlags(
        DirectComposition::CConditionalExpressionMarshaler *this)
{
  char v1; // bl
  unsigned int v2; // eax

  v1 = 0;
  v2 = *((_DWORD *)this + 4) & 0xFFFFEFFF;
  *((_DWORD *)this + 4) = v2;
  if ( *((_QWORD *)this + 19) )
    *((_DWORD *)this + 4) = v2 & 0xFFFFF7FF;
  *((_DWORD *)this + 37) = 0;
  if ( DirectComposition::CBaseExpressionMarshaler::SetRemarshalingFlags(this)
    || *((_DWORD *)this + 36)
    || *((_QWORD *)this + 19) )
  {
    return 1;
  }
  return v1;
}
