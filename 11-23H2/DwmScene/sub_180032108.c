/*
 * XREFs of sub_180032108 @ 0x180032108
 * Callers:
 *     sub_180031D44 @ 0x180031D44 (sub_180031D44.c)
 *     sub_180036F90 @ 0x180036F90 (sub_180036F90.c)
 *     sub_180057344 @ 0x180057344 (sub_180057344.c)
 *     sub_180057870 @ 0x180057870 (sub_180057870.c)
 *     sub_1800E5755 @ 0x1800E5755 (sub_1800E5755.c)
 *     sub_1800E5A58 @ 0x1800E5A58 (sub_1800E5A58.c)
 *     sub_1800E768C @ 0x1800E768C (sub_1800E768C.c)
 *     sub_1800E775A @ 0x1800E775A (sub_1800E775A.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180032108(__int64 a1)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 8) )
  {
    result = o_abort();
    __debugbreak();
  }
  return result;
}
