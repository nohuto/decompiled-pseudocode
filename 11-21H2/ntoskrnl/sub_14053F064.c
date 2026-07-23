/*
 * XREFs of sub_14053F064 @ 0x14053F064
 * Callers:
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14053F064(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 296);
  if ( result )
    _InterlockedOr64((volatile signed __int64 *)(a1 + 296), 1uLL);
  return result;
}
