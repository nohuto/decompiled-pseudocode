/*
 * XREFs of sub_1409B0F90 @ 0x1409B0F90
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1409B0F90(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_QWORD *)(a2 + 8) )
    return sub_14042A5E0(a1, *(_QWORD *)(a2 + 16));
  return result;
}
