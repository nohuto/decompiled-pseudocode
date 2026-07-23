/*
 * XREFs of KeSetGroupMaskProcess @ 0x140223B44
 * Callers:
 *     KeInitializeProcess @ 0x1406B6898 (KeInitializeProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall KeSetGroupMaskProcess(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 636) = a2;
}
