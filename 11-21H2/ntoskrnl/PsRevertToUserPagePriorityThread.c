/*
 * XREFs of PsRevertToUserPagePriorityThread @ 0x14029C790
 * Callers:
 *     SmSetThreadSystemPagePriority @ 0x140392084 (SmSetThreadSystemPagePriority.c)
 *     MiValidateSectionCreate @ 0x1406B79C8 (MiValidateSectionCreate.c)
 *     MiRelocateImage @ 0x1407074F0 (MiRelocateImage.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 */

int __fastcall PsRevertToUserPagePriorityThread(__int64 a1, int a2)
{
  _QWORD *v2; // rax

  --*(_WORD *)(a1 + 486);
  if ( a2 == -1 )
    LODWORD(v2) = *(_DWORD *)(a1 + 1384) & 0xFFFFF0FF;
  else
    LODWORD(v2) = (a2 << 9) | *(_DWORD *)(a1 + 1384) & 0xFFFFF1FF;
  *(_DWORD *)(a1 + 1384) = (_DWORD)v2;
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    v2 = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*v2 != v2 )
      LODWORD(v2) = KiCheckForKernelApcDelivery();
  }
  return (int)v2;
}
