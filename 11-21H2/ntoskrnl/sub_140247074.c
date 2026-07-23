/*
 * XREFs of sub_140247074 @ 0x140247074
 * Callers:
 *     sub_1402BA130 @ 0x1402BA130 (sub_1402BA130.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_140247074(__int64 a1, int a2)
{
  BOOL v2; // r8d
  __int64 v3; // rdx
  bool result; // al

  result = 0;
  if ( !*(_DWORD *)(a1 + 400) )
  {
    v2 = a2 == 1;
    if ( *(_DWORD *)(a1 + 384) < (unsigned int)(v2 + *(_DWORD *)(a1 + 380)) )
    {
      v3 = *(_QWORD *)(a1 + 16);
      if ( *(_DWORD *)(v3 + 28) <= (unsigned int)v2 && (*(_DWORD *)(*(_QWORD *)(v3 + 8) + 4LL) || *(_DWORD *)(v3 + 24)) )
        return 1;
    }
  }
  return result;
}
