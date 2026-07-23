/*
 * XREFs of sub_140672214 @ 0x140672214
 * Callers:
 *     sub_140300374 @ 0x140300374 (sub_140300374.c)
 * Callees:
 *     sub_140672284 @ 0x140672284 (sub_140672284.c)
 */

__int64 __fastcall sub_140672214(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    v5 = **(_QWORD **)(a1 + 64);
    if ( v5 == v3 + 72 )
      return (unsigned int)-2147483622;
  }
  else
  {
    v4 = sub_140672284(a1 + 16);
    if ( !v4 )
      return (unsigned int)-1073741275;
    v5 = *(_QWORD *)(v4 + 72);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(v4 + 60);
    *(_WORD *)(a1 + 32) = *(_WORD *)(v4 + 48);
    *(_DWORD *)(a1 + 36) = *(_DWORD *)(v4 + 52);
    *(_QWORD *)(a1 + 56) = v4;
  }
  *(_QWORD *)(a1 + 64) = v5;
  *(_QWORD *)(a1 + 48) = v5 + 40;
  return v2;
}
