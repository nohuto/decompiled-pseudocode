/*
 * XREFs of sub_14097F8B0 @ 0x14097F8B0
 * Callers:
 *     sub_1402D99BC @ 0x1402D99BC (sub_1402D99BC.c)
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 * Callees:
 *     sub_14097F800 @ 0x14097F800 (sub_14097F800.c)
 */

__int64 __fastcall sub_14097F8B0(PVOID *a1)
{
  __int64 result; // rax

  while ( 1 )
  {
    if ( ((_DWORD)a1[13] & 0x2100) == 0x2000 )
    {
      result = sub_14097F800((__int64)a1);
      if ( (int)result < 0 )
        break;
    }
    a1 = (PVOID *)*a1;
    if ( a1 == &PsLoadedModuleList )
      return 0LL;
  }
  return result;
}
