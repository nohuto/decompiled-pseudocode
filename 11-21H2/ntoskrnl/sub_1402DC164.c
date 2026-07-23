/*
 * XREFs of sub_1402DC164 @ 0x1402DC164
 * Callers:
 *     MmChangeImageProtection @ 0x1406F5800 (MmChangeImageProtection.c)
 *     sub_140757FFC @ 0x140757FFC (sub_140757FFC.c)
 * Callees:
 *     sub_1402DBF3C @ 0x1402DBF3C (sub_1402DBF3C.c)
 */

__int64 __fastcall sub_1402DC164(unsigned __int64 a1)
{
  __int64 result; // rax

  result = (__int64)sub_1402DBF3C(a1);
  if ( result )
  {
    ++*(_DWORD *)(result + 60);
    return 1LL;
  }
  return result;
}
