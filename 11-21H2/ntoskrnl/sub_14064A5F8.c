/*
 * XREFs of sub_14064A5F8 @ 0x14064A5F8
 * Callers:
 *     sub_140204954 @ 0x140204954 (sub_140204954.c)
 *     sub_14028AC10 @ 0x14028AC10 (sub_14028AC10.c)
 *     sub_14064A300 @ 0x14064A300 (sub_14064A300.c)
 *     sub_14064A67C @ 0x14064A67C (sub_14064A67C.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall sub_14064A5F8(_DWORD *a1, __int64 *a2, char a3)
{
  __int64 *result; // rax
  __int64 v5; // r9
  __int64 **v6; // r8
  __int64 **v7; // r8

  result = (__int64 *)*((unsigned int *)a2 + 8);
  if ( ((unsigned __int8)result & 2) != 0 )
  {
    result = a2 + 2;
    v5 = a2[2];
    if ( *(__int64 **)(v5 + 8) != a2 + 2 )
      goto LABEL_14;
    v6 = (__int64 **)a2[3];
    if ( *v6 != result )
      goto LABEL_14;
    *v6 = (__int64 *)v5;
    *(_QWORD *)(v5 + 8) = v6;
    *((_DWORD *)a2 + 8) &= ~2u;
    if ( a1 )
      --a1[22];
  }
  if ( !a3 )
    return result;
  result = (__int64 *)*((unsigned int *)a2 + 8);
  if ( ((unsigned __int8)result & 1) == 0 )
    return result;
  result = (__int64 *)*a2;
  if ( *(__int64 **)(*a2 + 8) != a2 || (v7 = (__int64 **)a2[1], *v7 != a2) )
LABEL_14:
    __fastfail(3u);
  *v7 = result;
  result[1] = (__int64)v7;
  *((_DWORD *)a2 + 8) &= ~1u;
  if ( a1 )
  {
    --a1[15];
    result = (__int64 *)*((unsigned int *)a2 + 8);
    if ( ((unsigned __int8)result & 4) != 0 )
      --a1[16];
  }
  return result;
}
