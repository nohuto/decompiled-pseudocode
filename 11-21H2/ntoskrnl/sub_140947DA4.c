/*
 * XREFs of sub_140947DA4 @ 0x140947DA4
 * Callers:
 *     sub_1407F4BB0 @ 0x1407F4BB0 (sub_1407F4BB0.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402DF880 @ 0x1402DF880 (sub_1402DF880.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 */

NTSTATUS __fastcall sub_140947DA4(unsigned int a1, const void *a2)
{
  NTSTATUS result; // eax
  void *v4; // rdi
  unsigned int ExplicitScope; // [rsp+50h] [rbp+8h] BYREF

  ExplicitScope = a1;
  if ( a1 == -1 )
    return ZwUpdateWnfStateData(&stru_1400376F8, a2, 0x10u, 0LL, 0LL, 0, 0);
  v4 = (void *)sub_1402DF880(a1);
  result = 0;
  if ( v4 )
  {
    ZwUpdateWnfStateData(&stru_140037868, a2, 0x10u, 0LL, &ExplicitScope, 0, 0);
    return ObfDereferenceObject(v4);
  }
  return result;
}
