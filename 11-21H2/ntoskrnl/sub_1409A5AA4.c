/*
 * XREFs of sub_1409A5AA4 @ 0x1409A5AA4
 * Callers:
 *     sub_1409A50EC @ 0x1409A50EC (sub_1409A50EC.c)
 * Callees:
 *     sub_1409A61C4 @ 0x1409A61C4 (sub_1409A61C4.c)
 */

unsigned __int64 __fastcall sub_1409A5AA4(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rdi
  unsigned __int64 v4; // rbx
  unsigned __int64 *v6; // rcx
  unsigned __int64 result; // rax

  v2 = *(unsigned __int64 **)(a1 + 280);
  v4 = (unsigned __int64)v2;
  while ( 1 )
  {
    v6 = (unsigned __int64 *)v4;
    if ( !v4 )
      break;
    v4 = *(_QWORD *)v4;
    result = v4 & 0x8000000000000002uLL;
    if ( (v4 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    {
      result = MEMORY[0];
      v4 = *v6;
    }
    if ( (v4 & 1) != 0 )
      break;
LABEL_11:
    if ( !v4 )
      return result;
    if ( *(_DWORD *)(v4 + 40) )
      sub_1409A61C4(a1, a2, v4);
  }
  ++v2;
  result = *(_QWORD *)(a1 + 280);
  while ( (unsigned __int64)v2 < result + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 276) >> 5) )
  {
    v4 = *v2;
    if ( (*v2 & 1) == 0 )
      goto LABEL_11;
    ++v2;
  }
  return result;
}
