/*
 * XREFs of sub_140551840 @ 0x140551840
 * Callers:
 *     <none>
 * Callees:
 *     sub_1405517A0 @ 0x1405517A0 (sub_1405517A0.c)
 *     sub_140551AA0 @ 0x140551AA0 (sub_140551AA0.c)
 */

__int64 __fastcall sub_140551840(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax

  if ( byte_140C54D4A )
  {
    if ( !dword_140C54D50 )
    {
      sub_1405517A0();
      VidBitBlt(a1, a2, a3);
      return sub_140551AA0();
    }
  }
  return result;
}
