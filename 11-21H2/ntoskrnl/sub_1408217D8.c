/*
 * XREFs of sub_1408217D8 @ 0x1408217D8
 * Callers:
 *     IoTranslateBusAddress @ 0x1405604A0 (IoTranslateBusAddress.c)
 *     sub_14081F788 @ 0x14081F788 (sub_14081F788.c)
 *     sub_14082052C @ 0x14082052C (sub_14082052C.c)
 *     sub_140820B7C @ 0x140820B7C (sub_140820B7C.c)
 *     sub_140821364 @ 0x140821364 (sub_140821364.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1408217D8(unsigned int a1, unsigned int a2)
{
  PVOID v2; // r8
  int v4; // eax
  _QWORD **v5; // r10
  _QWORD *i; // rax

  v2 = qword_140C46278;
  if ( a1 != 15 && a1 <= 0x11 )
  {
    v4 = 1;
    if ( a1 != 2 )
      v4 = a1;
    v5 = (_QWORD **)((char *)&unk_140C45E20 + 16 * v4);
    for ( i = *v5; i != v5; i = (_QWORD *)*i )
    {
      if ( *((_DWORD *)i - 43) == a2 )
        return i - 78;
      if ( *((_DWORD *)i - 43) > a2 )
        return v2;
    }
  }
  return v2;
}
