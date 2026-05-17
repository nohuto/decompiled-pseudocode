/*
 * XREFs of LdrFindResourceDirectory_U @ 0x1800EC120
 * Callers:
 *     <none>
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x180040060 (LdrpSearchResourceSection_U.c)
 */

__int64 __fastcall LdrFindResourceDirectory_U(unsigned __int64 a1, unsigned __int64 *a2, __int64 a3, _QWORD *a4)
{
  return LdrpSearchResourceSection_U(a1, a2, a3, 2u, a4);
}
