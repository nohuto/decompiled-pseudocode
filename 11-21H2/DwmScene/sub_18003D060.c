/*
 * XREFs of sub_18003D060 @ 0x18003D060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003D060(__int64 a1)
{
  unsigned __int16 **v1; // r11
  unsigned __int16 *v3; // r10
  unsigned __int64 *v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int16 *v7; // rax

  v1 = *(unsigned __int16 ***)(a1 + 56);
  v3 = *v1;
  if ( !*v1 )
    return 0xFFFFLL;
  if ( v3 < &v3[**(int **)(a1 + 80)] )
    return *v3;
  v5 = *(unsigned __int64 **)(a1 + 64);
  if ( !*v5 || (*(_BYTE *)(a1 + 112) & 4) != 0 )
    return 0xFFFFLL;
  v6 = *(_QWORD *)(a1 + 104);
  if ( v6 < *v5 )
    v6 = *v5;
  if ( v6 <= (unsigned __int64)v3 )
    return 0xFFFFLL;
  *(_QWORD *)(a1 + 104) = v6;
  v7 = *v1;
  *v1 = *v1;
  **(_DWORD **)(a1 + 80) = (__int64)(v6 - (_QWORD)v7) >> 1;
  return ***(unsigned __int16 ***)(a1 + 56);
}
