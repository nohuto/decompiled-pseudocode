/*
 * XREFs of ?ndisReferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C0022744
 * Callers:
 *     ndisPktMonFilterRegister @ 0x1C0111CA4 (ndisPktMonFilterRegister.c)
 * Callees:
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x1C0022764 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 */

unsigned __int8 __fastcall ndisReferenceRef(struct _REFERENCE_EX *a1, unsigned __int8 a2)
{
  int v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  return ndisReferenceRefEx(&a1->SpinLock, a2, (enum _NDIS_REFERENCE_STATUS *)&v3);
}
