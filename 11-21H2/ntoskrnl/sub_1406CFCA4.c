/*
 * XREFs of sub_1406CFCA4 @ 0x1406CFCA4
 * Callers:
 *     sub_1406CF970 @ 0x1406CF970 (sub_1406CF970.c)
 *     sub_140954434 @ 0x140954434 (sub_140954434.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1406CFCA4(__int64 a1)
{
  _DWORD *v1; // rax
  __int64 v2; // rcx
  bool result; // al

  v1 = *(_DWORD **)(a1 + 64);
  result = 0;
  if ( !v1 || (*v1 & 1) == 0 )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
    if ( !v2 || (*(_DWORD *)(v2 + 396) & 0x10000) == 0 )
      return 1;
  }
  return result;
}
