/*
 * XREFs of sub_140683ED4 @ 0x140683ED4
 * Callers:
 *     sub_1406822EC @ 0x1406822EC (sub_1406822EC.c)
 *     sub_140684158 @ 0x140684158 (sub_140684158.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140683ED4(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r8
  _QWORD *i; // rcx
  __int64 result; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx

  v2 = (_QWORD *)(a1 + 1280);
  for ( i = *(_QWORD **)(a1 + 1280); i != v2; i = (_QWORD *)*i )
  {
    if ( i[2] == a2 + 1480 )
      i[2] = *(_QWORD *)(a2 + 1488);
  }
  result = a2 + 1480;
  v5 = *(_QWORD *)(a2 + 1480);
  if ( *(_QWORD *)(v5 + 8) != result || (v6 = *(_QWORD **)(result + 8), *v6 != result) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  return result;
}
