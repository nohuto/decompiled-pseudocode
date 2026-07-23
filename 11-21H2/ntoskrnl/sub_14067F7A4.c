/*
 * XREFs of sub_14067F7A4 @ 0x14067F7A4
 * Callers:
 *     sub_14067F34C @ 0x14067F34C (sub_14067F34C.c)
 *     sub_14067F520 @ 0x14067F520 (sub_14067F520.c)
 *     sub_14072E210 @ 0x14072E210 (sub_14072E210.c)
 *     sub_140741B7C @ 0x140741B7C (sub_140741B7C.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 */

__int64 __fastcall sub_14067F7A4(__int64 a1)
{
  _DWORD *v1; // rbx
  bool v2; // zf
  void *v3; // rcx
  unsigned int v4; // edi

  v1 = (_DWORD *)(a1 & 0xFFFFFFFFFFFFFFFEuLL);
  v2 = (a1 & 1) == 0;
  v3 = (void *)(a1 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( v2 )
  {
    v4 = 0;
    ObfReferenceObject(v3);
    if ( !TmIsTransactionActive_0((PKTRANSACTION)v1) )
    {
      ObfDereferenceObject(v1);
      return (unsigned int)-1072103421;
    }
  }
  else
  {
    ObfReferenceObject(v3);
    return *v1 != 0 ? 0xC0190003 : 0;
  }
  return v4;
}
