/*
 * XREFs of KeSetGroupMaskProcess @ 0x140223B64
 * Callers:
 *     KeInitializeProcess @ 0x1406B66E8 (KeInitializeProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall KeSetGroupMaskProcess(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 636) = a2;
}
