/*
 * XREFs of sub_140230760 @ 0x140230760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140230760(const void *a1, const void *a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rax

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  v3 = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
  if ( v2 < v3 )
    return 0xFFFFFFFFLL;
  else
    return v2 > v3;
}
