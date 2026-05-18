/*
 * XREFs of sub_180022100 @ 0x180022100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180022100(__int64 a1)
{
  unsigned __int8 **v1; // r9
  unsigned __int8 *v2; // r8
  unsigned __int64 *v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int8 *v6; // rax

  v1 = *(unsigned __int8 ***)(a1 + 56);
  v2 = *v1;
  if ( !*v1 )
    return 0xFFFFFFFFLL;
  if ( v2 < &v2[**(int **)(a1 + 80)] )
    return *v2;
  v4 = *(unsigned __int64 **)(a1 + 64);
  if ( !*v4 || (*(_BYTE *)(a1 + 112) & 4) != 0 )
    return 0xFFFFFFFFLL;
  v5 = *(_QWORD *)(a1 + 104);
  if ( v5 < *v4 )
    v5 = *v4;
  if ( v5 <= (unsigned __int64)v2 )
    return 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 104) = v5;
  v6 = *v1;
  *v1 = *v1;
  **(_DWORD **)(a1 + 80) = v5 - (_DWORD)v6;
  return ***(unsigned __int8 ***)(a1 + 56);
}
