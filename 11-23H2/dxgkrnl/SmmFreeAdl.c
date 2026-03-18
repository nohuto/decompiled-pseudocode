/*
 * XREFs of SmmFreeAdl @ 0x1C0070320
 * Callers:
 *     ?SysMmFreeAdl@@YAXPEAUSYSMM_ADAPTER_OBJECT@@PEAU_DXGK_ADL@@@Z @ 0x1C0070800 (-SysMmFreeAdl@@YAXPEAUSYSMM_ADAPTER_OBJECT@@PEAU_DXGK_ADL@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SmmFreeAdl(void **P)
{
  void *v2; // rcx

  v2 = *P;
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0);
}
