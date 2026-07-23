/*
 * XREFs of sub_140300374 @ 0x140300374
 * Callers:
 *     sub_140218EAC @ 0x140218EAC (sub_140218EAC.c)
 *     sub_140219130 @ 0x140219130 (sub_140219130.c)
 *     sub_14021A494 @ 0x14021A494 (sub_14021A494.c)
 *     sub_1402FDEE8 @ 0x1402FDEE8 (sub_1402FDEE8.c)
 *     sub_1405F55D8 @ 0x1405F55D8 (sub_1405F55D8.c)
 * Callees:
 *     sub_1403008B0 @ 0x1403008B0 (sub_1403008B0.c)
 *     sub_14064A4B8 @ 0x14064A4B8 (sub_14064A4B8.c)
 *     sub_140672214 @ 0x140672214 (sub_140672214.c)
 */

__int64 __fastcall sub_140300374(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v8; // rdx

  if ( *(_DWORD *)a1 == 6 )
    return (unsigned int)sub_14064A4B8();
  if ( *(_DWORD *)a1 == 7 )
    return (unsigned int)sub_140672214();
  v2 = *(_QWORD *)(a1 + 56);
  v3 = 0;
  if ( v2 )
  {
    v8 = **(_QWORD **)(a1 + 64);
    if ( v8 == v2 + 72 )
      return (unsigned int)-2147483622;
    goto LABEL_11;
  }
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
  {
    v5 = sub_1403008B0(v4, a1 + 16);
    if ( v5 )
    {
      v8 = *(_QWORD *)(v5 + 72);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(v5 + 60);
      *(_WORD *)(a1 + 32) = *(_WORD *)(v5 + 48);
      *(_DWORD *)(a1 + 36) = *(_DWORD *)(v5 + 52);
      *(_QWORD *)(a1 + 56) = v5;
LABEL_11:
      *(_QWORD *)(a1 + 64) = v8;
      *(_QWORD *)(a1 + 48) = v8 + 40;
      return v3;
    }
  }
  return (unsigned int)-1073741275;
}
