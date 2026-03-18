/*
 * XREFs of SmKmFileInfoInit @ 0x1409D5AC0
 * Callers:
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x140261CF8 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall SmKmFileInfoInit(void *a1)
{
  return memset(a1, 0, 0x40uLL);
}
