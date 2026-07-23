/*
 * XREFs of MincryptFreePolicyInfo @ 0x140A70FA4
 * Callers:
 *     SecureDump_ValidateAmeCertChain @ 0x14055EE90 (SecureDump_ValidateAmeCertChain.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall MincryptFreePolicyInfo(__int64 a1)
{
  void *v2; // rcx

  if ( a1 && *(_DWORD *)a1 )
  {
    v2 = *(void **)(a1 + 16);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x72634943u);
    *(_OWORD *)a1 = 0LL;
    *(_OWORD *)(a1 + 16) = 0LL;
    *(_OWORD *)(a1 + 32) = 0LL;
  }
}
