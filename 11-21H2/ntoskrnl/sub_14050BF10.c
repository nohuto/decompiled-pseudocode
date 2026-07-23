/*
 * XREFs of sub_14050BF10 @ 0x14050BF10
 * Callers:
 *     sub_14050BE98 @ 0x14050BE98 (sub_14050BE98.c)
 * Callees:
 *     sub_14022D9F0 @ 0x14022D9F0 (sub_14022D9F0.c)
 */

__int64 __fastcall sub_14050BF10(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // bl
  __int64 result; // rax

  v3 = a2;
  if ( (a1 & 1) != 0 )
  {
    sub_14022D9F0(a1, a2, a3);
    __outbyte(0x70u, byte_140D01718);
    __outbyte(0x71u, v3);
    result = (unsigned int)_InterlockedExchange(&dword_140C0B460, -1);
    if ( byte_140C4C1F0 )
      _enable();
  }
  else
  {
    byte_140D01718 = a2;
  }
  return result;
}
