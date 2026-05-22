/*
 * XREFs of ??_E?$CTrie@W4TOKEN_TYPE@Composition@UI@Windows@@$00$0A@@@UEAAPEAXI@Z @ 0x1801974A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Flush@?$CTrie@W4TOKEN_TYPE@Composition@UI@Windows@@$00$0A@@@UEAAXXZ @ 0x18003CD70 (-Flush@-$CTrie@W4TOKEN_TYPE@Composition@UI@Windows@@$00$0A@@@UEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall CTrie<enum Windows::UI::Composition::TOKEN_TYPE,1,0>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &CTrie<enum Windows::UI::Composition::TOKEN_TYPE,1,0>::`vftable';
  CTrie<enum Windows::UI::Composition::TOKEN_TYPE,1,0>::Flush((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
