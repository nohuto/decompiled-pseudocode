/*
 * XREFs of sub_140864060 @ 0x140864060
 * Callers:
 *     <none>
 * Callees:
 *     sub_1407A76C0 @ 0x1407A76C0 (sub_1407A76C0.c)
 */

__int64 __fastcall sub_140864060(HANDLE Handle, unsigned __int64 a2)
{
  __int64 result; // rax

  do
    result = sub_1407A76C0(Handle, 0LL, 0LL, a2, 0LL);
  while ( !(_DWORD)result && (*(_WORD *)(a2 + 4) & 0x7FFF) != 0xA );
  return result;
}
