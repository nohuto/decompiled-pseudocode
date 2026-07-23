/*
 * XREFs of sub_140A8B620 @ 0x140A8B620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A8B620(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 56);
  if ( !v2 || *(_QWORD *)(v2 + 8) != a2 )
    return 1LL;
  *(_QWORD *)(v2 + 8) = 0LL;
  ++dword_140D58A0C;
  return 0LL;
}
