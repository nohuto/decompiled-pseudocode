/*
 * XREFs of ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C012CA30
 * Callers:
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C00DCDA0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C012C564 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 *     NtGdiStartPage @ 0x1C012C8A0 (NtGdiStartPage.c)
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C012CC5C (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     NtGdiEndPage @ 0x1C027ACD0 (NtGdiEndPage.c)
 * Callees:
 *     <none>
 */

void __fastcall XDCOBJ::RestoreAttributesHelper(XDCOBJ *this)
{
  struct _DC_ATTR *UserAttr; // rax

  if ( !*((_DWORD *)this + 3) )
  {
    UserAttr = XDCOBJ::GetUserAttr(this);
    if ( UserAttr )
      DC::RestoreAttributes(*(DC **)this, UserAttr);
  }
}
