/*
 * XREFs of sub_140417010 @ 0x140417010
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403B41A0 @ 0x1403B41A0 (sub_1403B41A0.c)
 *     sub_14050AABC @ 0x14050AABC (sub_14050AABC.c)
 *     InbvCheckDisplayOwnership @ 0x140550BA0 (InbvCheckDisplayOwnership.c)
 */

void sub_140417010()
{
  __int16 v0; // bx
  __int16 v1; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( ((_DWORD)KiBugCheckData || (unsigned __int8)InbvCheckDisplayOwnership()) && dword_140C4D0E4 && byte_140C4A4A0[0] )
  {
    sub_1403B41A0(0, 0, (__int64)&v1, 2u, 0LL);
    v0 = v1;
    if ( byte_140C4A530 )
    {
      sub_1403B41A0(3, 0, (__int64)&v1, 2u, 0LL);
      v0 |= v1;
    }
    if ( (v0 & 0x8100) == 0x100 )
      sub_14050AABC();
  }
}
