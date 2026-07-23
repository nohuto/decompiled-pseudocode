/*
 * XREFs of sub_140574244 @ 0x140574244
 * Callers:
 *     sub_140573B50 @ 0x140573B50 (sub_140573B50.c)
 *     sub_140574294 @ 0x140574294 (sub_140574294.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_140574244(__int64 a1, unsigned __int8 a2, __int64 a3, unsigned __int8 a4)
{
  return a2 != a4
      && *(unsigned __int16 *)(a3 + 2LL * a2 + 33212)
       + *(unsigned __int16 *)(a1 + 2LL * a4 + 33212)
       - *(unsigned __int16 *)(a3 + 2LL * a4 + 33212)
       - *(unsigned __int16 *)(a1 + 2LL * a2 + 33212) >= dword_140D05388;
}
