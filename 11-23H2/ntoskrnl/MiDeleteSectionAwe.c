/*
 * XREFs of MiDeleteSectionAwe @ 0x14064993C
 * Callers:
 *     MiCreatePagingFileMap @ 0x140747994 (MiCreatePagingFileMap.c)
 *     MiDeletePageFileSectionNodes @ 0x1407CDAC0 (MiDeletePageFileSectionNodes.c)
 *     MiDereferenceFailedControlArea @ 0x1408633E0 (MiDereferenceFailedControlArea.c)
 * Callees:
 *     MiDeleteAweInfo @ 0x140A41A48 (MiDeleteAweInfo.c)
 *     MiDeleteAweInfoPages @ 0x140A41A90 (MiDeleteAweInfoPages.c)
 */

__int64 __fastcall MiDeleteSectionAwe(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 8);
  MiDeleteAweInfoPages(v1);
  return MiDeleteAweInfo(0LL, v1);
}
