/*
 * XREFs of sub_180013E60 @ 0x180013E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180013E60(__int64 a1, char a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( a2 )
    *(_WORD *)(v2 + 112) &= ~0x40u;
  else
    *(_WORD *)(v2 + 112) |= 0x40u;
  return 0LL;
}
