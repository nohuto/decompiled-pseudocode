/*
 * XREFs of MiDeleteSectionAwe @ 0x140649E8C
 * Callers:
 *     MiCreatePagingFileMap @ 0x140747B84 (MiCreatePagingFileMap.c)
 *     MiDeletePageFileSectionNodes @ 0x1407CDD90 (MiDeletePageFileSectionNodes.c)
 *     MiDereferenceFailedControlArea @ 0x140863620 (MiDereferenceFailedControlArea.c)
 * Callees:
 *     MiDeleteAweInfo @ 0x140A41CF8 (MiDeleteAweInfo.c)
 *     MiDeleteAweInfoPages @ 0x140A41D40 (MiDeleteAweInfoPages.c)
 */

__int64 __fastcall MiDeleteSectionAwe(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 8);
  MiDeleteAweInfoPages(v1);
  return MiDeleteAweInfo(0LL, v1);
}
