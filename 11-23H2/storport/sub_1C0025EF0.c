/*
 * XREFs of sub_1C0025EF0 @ 0x1C0025EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C0025EF0(__int64 a1)
{
  __int64 v1; // rax

  if ( *(_BYTE *)(a1 + 2) == 40 )
    v1 = *(_QWORD *)(a1 + 96);
  else
    v1 = *(_QWORD *)(a1 + 48);
  return *(_QWORD *)(v1 + 104);
}
