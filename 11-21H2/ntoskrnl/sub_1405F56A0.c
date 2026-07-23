/*
 * XREFs of sub_1405F56A0 @ 0x1405F56A0
 * Callers:
 *     sub_140300534 @ 0x140300534 (sub_140300534.c)
 *     SeSetSecurityAttributesTokenEx @ 0x1405F5440 (SeSetSecurityAttributesTokenEx.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1405F55D8 @ 0x1405F55D8 (sub_1405F55D8.c)
 */

__int64 __fastcall sub_1405F56A0(char a1, __int64 a2, _DWORD *a3, _QWORD *a4)
{
  char v4; // si
  unsigned int v8; // edi
  struct _KTHREAD *CurrentThread; // rax

  v4 = 0;
  v8 = -1073741275;
  if ( (dword_140D01448 & 3) == 3 )
  {
    if ( !a1 && KeGetCurrentIrql() < 2u )
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      v4 = 1;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(a2 + 48), 1u);
    }
    v8 = sub_1405F55D8(*(_QWORD *)(a2 + 776), a3, a4);
    if ( v4 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
      KeLeaveCriticalRegion();
    }
  }
  return v8;
}
