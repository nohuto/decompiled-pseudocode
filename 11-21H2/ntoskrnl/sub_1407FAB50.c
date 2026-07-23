/*
 * XREFs of sub_1407FAB50 @ 0x1407FAB50
 * Callers:
 *     sub_1407FAA3C @ 0x1407FAA3C (sub_1407FAA3C.c)
 *     sub_14085D380 @ 0x14085D380 (sub_14085D380.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1407FAB50(__int64 a1, unsigned int a2)
{
  __int64 *v2; // r8
  __int64 v3; // rax

  if ( a2 )
  {
    v2 = (__int64 *)(a1 + 296);
    if ( *(_DWORD *)(a1 + 312) > a2 || (v3 = *v2) == 0 )
    {
      v3 = *v2;
      *(_DWORD *)(a1 + 312) = a2;
    }
    if ( *(_DWORD *)(a1 + 308) < a2 )
      *(_DWORD *)(a1 + 308) = a2;
    *v2 = v3 + 1;
    *(_QWORD *)(a1 + 288) += a2;
  }
}
