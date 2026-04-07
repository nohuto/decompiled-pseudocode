/*
 * XREFs of ?NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z @ 0x180108464
 * Callers:
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180107A2C (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 * Callees:
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18001EDE0 (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 */

void __fastcall CWindowData::NotifySWROfMarginOrSizeChange(CWindowData *this, __int64 a2, char a3)
{
  __int64 v3; // rbx
  char i; // bp
  CSecondaryWindowRepresentation *v7; // rcx
  __int128 v8; // [rsp+20h] [rbp-18h]

  v3 = 0LL;
  for ( i = a2; (unsigned int)v3 < *((_DWORD *)this + 130); v3 = (unsigned int)(v3 + 1) )
  {
    v7 = *(CSecondaryWindowRepresentation **)(*((_QWORD *)this + 62) + 8 * v3);
    v8 = *((_OWORD *)v7 + 4);
    if ( (CWindowData *)v8 == this && (i && DWORD2(v8) == 1 || a3 && DWORD2(v8) == 3) )
      CSecondaryWindowRepresentation::OnMarginsOrSizeUpdated(v7, a2);
  }
}
