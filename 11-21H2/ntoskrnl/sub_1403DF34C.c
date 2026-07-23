/*
 * XREFs of sub_1403DF34C @ 0x1403DF34C
 * Callers:
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     <none>
 */

__int64 sub_1403DF34C()
{
  __int64 result; // rax

  result = (unsigned int)dword_140C097C0;
  if ( (unsigned int)dword_140C097C0 >= 0x400000 )
  {
    result = 0x400000LL;
    dword_140C097C0 = 0x400000;
  }
  if ( (unsigned int)result <= 0x1000 )
    dword_140C097C0 = 4096;
  return result;
}
