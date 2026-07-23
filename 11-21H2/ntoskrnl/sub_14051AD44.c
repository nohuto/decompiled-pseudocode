/*
 * XREFs of sub_14051AD44 @ 0x14051AD44
 * Callers:
 *     sub_1403BB820 @ 0x1403BB820 (sub_1403BB820.c)
 *     sub_1405283C0 @ 0x1405283C0 (sub_1405283C0.c)
 *     sub_140528E60 @ 0x140528E60 (sub_140528E60.c)
 *     sub_140528F50 @ 0x140528F50 (sub_140528F50.c)
 *     sub_140528FC0 @ 0x140528FC0 (sub_140528FC0.c)
 * Callees:
 *     sub_14051AEFC @ 0x14051AEFC (sub_14051AEFC.c)
 *     sub_140527584 @ 0x140527584 (sub_140527584.c)
 *     sub_140527A68 @ 0x140527A68 (sub_140527A68.c)
 *     sub_140527C44 @ 0x140527C44 (sub_140527C44.c)
 *     sub_14052A328 @ 0x14052A328 (sub_14052A328.c)
 */

__int64 __fastcall sub_14051AD44(ULONG_PTR a1, ULONG_PTR a2, _QWORD *a3, char a4)
{
  int v7; // eax
  __int64 v8; // rdx
  int v9; // edi
  unsigned int v10; // eax

  if ( !byte_140C4BCBC )
  {
    v9 = sub_14052A328(*(_QWORD *)(a1 + 40), a3, a2);
    v10 = sub_14051AEFC(a1, a2, *a3);
LABEL_9:
    if ( v9 >= 0 )
      return v10;
    return (unsigned int)v9;
  }
  if ( *(_BYTE *)(a1 + 52) )
  {
    v7 = sub_14052A328(*(_QWORD *)(a1 + 40), a3, a2);
    LOBYTE(v8) = 1;
    v9 = v7;
    v10 = sub_140527584(*(unsigned int *)(a1 + 48), v8);
    goto LABEL_9;
  }
  if ( a4 )
    return (unsigned int)sub_140527A68(a1, a2);
  else
    return (unsigned int)sub_140527C44(a1, a2);
}
