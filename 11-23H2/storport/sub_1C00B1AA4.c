/*
 * XREFs of sub_1C00B1AA4 @ 0x1C00B1AA4
 * Callers:
 *     sub_1C00791EC @ 0x1C00791EC (sub_1C00791EC.c)
 *     sub_1C00A2F90 @ 0x1C00A2F90 (sub_1C00A2F90.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1C00B1AA4(__int64 a1, __int64 a2, char a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // rcx
  _QWORD *result; // rax

  v5 = 0LL;
  if ( *(_DWORD *)(a1 + 32) )
  {
    v6 = *(_QWORD *)(a1 + 40);
    if ( !a3 )
      v6 += *(_QWORD *)(a2 + 24);
  }
  else
  {
    v6 = 0LL;
  }
  *a4 = v6;
  if ( *(_DWORD *)(a1 + 36) )
  {
    v7 = *(_QWORD *)(a1 + 48);
    if ( a3 )
      v5 = v7;
    else
      v5 = v7 + *(_QWORD *)(a2 + 24);
  }
  result = a5;
  *a5 = v5;
  return result;
}
