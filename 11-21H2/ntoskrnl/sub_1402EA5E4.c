/*
 * XREFs of sub_1402EA5E4 @ 0x1402EA5E4
 * Callers:
 *     sub_140230F28 @ 0x140230F28 (sub_140230F28.c)
 *     DnsPrint_RpcZoneInfo @ 0x1402E97D4 (DnsPrint_RpcZoneInfo.c)
 *     sub_1402EACBC @ 0x1402EACBC (sub_1402EACBC.c)
 * Callees:
 *     sub_140231240 @ 0x140231240 (sub_140231240.c)
 *     sub_140241980 @ 0x140241980 (sub_140241980.c)
 *     sub_14027A168 @ 0x14027A168 (sub_14027A168.c)
 *     sub_14027D8DC @ 0x14027D8DC (sub_14027D8DC.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall sub_1402EA5E4(__int64 a1)
{
  LONG_PTR result; // rax
  void *v3; // rdi

  result = sub_14027A168(a1);
  if ( *(_QWORD *)(a1 + 64) )
  {
    sub_140241980((_OWORD *)(a1 + 72), 0);
    return sub_14027D8DC(*(_QWORD *)(a1 + 64));
  }
  else
  {
    v3 = *(void **)(a1 + 56);
    if ( v3 )
    {
      sub_140231240(*(_QWORD *)(a1 + 56), a1 + 72);
      return ObfDereferenceObject(v3);
    }
  }
  return result;
}
