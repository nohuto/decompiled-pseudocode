/*
 * XREFs of sub_140255CD4 @ 0x140255CD4
 * Callers:
 *     IoCheckRedirectionTrustLevel @ 0x140252BD0 (IoCheckRedirectionTrustLevel.c)
 *     sub_1406DEAEC @ 0x1406DEAEC (sub_1406DEAEC.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 */

bool __fastcall sub_140255CD4(__int64 a1, bool *a2, _BYTE *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // edi
  bool result; // al

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  v7 = *(_DWORD *)(a1 + 200);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  sub_1402F9540(KeGetCurrentThread());
  result = (v7 & 0x800000) != 0;
  *a2 = result;
  *a3 = HIBYTE(v7) & 1;
  return result;
}
