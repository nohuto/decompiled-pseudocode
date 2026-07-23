/*
 * XREFs of sub_140514A20 @ 0x140514A20
 * Callers:
 *     <none>
 * Callees:
 *     sub_14051541C @ 0x14051541C (sub_14051541C.c)
 */

__int64 __fastcall sub_140514A20(__int64 a1)
{
  __int64 v2; // rax

  if ( !a1 )
    return 3221225485LL;
  v2 = *(_QWORD *)(a1 + 504);
  if ( !v2 )
    return 3221225473LL;
  if ( *(_BYTE *)(v2 + 33) )
    return 3221225488LL;
  if ( *(_BYTE *)(a1 + 516) && *(_QWORD *)(v2 + 56) )
    return 3221225473LL;
  else
    return sub_14051541C(a1);
}
