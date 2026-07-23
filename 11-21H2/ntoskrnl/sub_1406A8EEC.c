/*
 * XREFs of sub_1406A8EEC @ 0x1406A8EEC
 * Callers:
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 * Callees:
 *     sub_1402312E0 @ 0x1402312E0 (sub_1402312E0.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402DF880 @ 0x1402DF880 (sub_1402DF880.c)
 */

__int64 __fastcall sub_1406A8EEC(unsigned int a1, __int64 a2, ULONG_PTR *a3)
{
  ULONG_PTR v4; // rax
  void *v5; // rbx
  int v6; // edi

  v4 = sub_1402DF880(a1);
  v5 = (void *)v4;
  if ( !v4 )
    return 3221225738LL;
  *a3 = v4;
  v6 = sub_1402312E0(v4);
  if ( v6 < 0 )
    ObfDereferenceObject(v5);
  return (unsigned int)v6;
}
